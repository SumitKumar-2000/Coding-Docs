#include<bits/stdc++.h>
using namespace std;
// ip = 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1  
class node{
public:
    int data;
    node *left;     
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
    node* createTree(){
        node *root = NULL;
        int data;
        cin>>data;

        if(data == -1){
            return root;
        }
        else{
            root = new node(data);
            root->left = createTree();
            root->right = createTree();
        }
        return root;
    }

    void Preorder(node *root){
        // base case
        if(root == NULL){
            return;
        }
        //recursive case
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }

    void Inorder(node *root){
        // base case
        if(root == NULL){
            return;
        }
        //recursive case
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }

    void Postorder(node *root){
        // base case
        if(root == NULL){
            return;
        }
        //recursive case
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<" ";
    }

    int countnode (node * root){
        //base case
        if(root == NULL){
            return 0;
        }
        // recursive case
        return 1 + countnode(root->left) + countnode(root->right);
    }

    int heightoftree(node *root){
        // base case
        if(root == NULL){
            return 0;
        }
        // recursive case
        return 1 + max(heightoftree(root->left),heightoftree(root->right));
    }

    int diameteroftree(node *root){
        // base case
        if(root == NULL){
            return 0;
        }
        // recursive case

        // case 1. diameter via root node 
        int opt1 = heightoftree(root->left) + heightoftree(root->right);

        // case 2. diameter exists in lst
        int opt2 = diameteroftree(root->left); 

        // case 3. diameter exists in rst
        int opt3 = diameteroftree(root->right);

        return max(opt1,max(opt2,opt3));
    }

    // calculating diameter with o(n) time complexity
    class Pair{
    public:
        int height ;
        int diameter;
    };
    Pair fastdia(node * root){
        // base case
        if (root ==  NULL){
            Pair p;
            p.height = p.diameter = 0;
            return p;
        }
        // recursive case
        Pair left = fastdia(root->left);
        Pair right = fastdia(root->right);

        Pair p;
        p.height = max(left.height,right.height) + 1;

        // diameter
        int op1 = left.height + right.height;
        int op2 = left.height;
        int op3 = right.height;

        p.diameter = max(op1,max(op2,op3));

        return p;
    }

    node* searchinbt(node * root,int key){
        // base case
        if(root == NULL){
            return NULL;
        }
        // recursive case
        if(root->data == key){
            return root;
        }
        node *left= searchinbt(root->left,key);
        if(left != NULL){
            return left;
        }

        node *right= searchinbt(root->right,key);
        return right;
    }

    void mirror(node * root){
        // base case
        if(root == NULL){
            return ;
        }

        // recursive case
        swap(root->left,root->right);
        mirror(root->left);
        mirror(root->right);
    }

    void LevelOrder(node * root){
            queue<node*> q;
            q.push(root);
            q.push(NULL);
            while(!q.empty()){
                node *x = q.front();
                q.pop();
                if(x != NULL){
                    cout<<x->data<<" ";
                    if(x->left != NULL) q.push(x->left);
                    if(x->right != NULL) q.push(x->right);
                }
                else{
                    cout<<endl;
                    if(!q.empty()) q.push(NULL);
                }
            }
    }

    int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
    int In[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
    int i=0;
    int n = sizeof(pre)  / sizeof(int);
    node* buildTree(int s, int e){
        // base case
        if(s>e){
            return NULL;
        }
        // recursive case
        node * root = new node (pre[i++]);
        int k=-1;
        for(int j=s;j<=e;j++){
            if(In[j] == root->data){
                k = j;
                break;
            }
        }

        root->left = buildTree(s,k-1);
        root->right = buildTree(k+1,e);

        return root;
    }

int main(){
    node* root = NULL;
    root = createTree();                                        // creating BT using general method 
    // root = buildTree(0,n-1);                                    // creating BT using given inorder, preorder in form of array

    cout<<"preorder"<<endl;
    Preorder(root);
    cout<<endl;

    cout<<"inorder"<<endl;
    Inorder(root);
    cout<<endl;
    
    cout<<"postorder"<<endl;
    Postorder(root);
    cout<<endl;

    // cout<<"No. of nodes : "<<countnode(root)<<endl;
    // cout<<"height of tree : "<<heightoftree(root)<<endl;
    // cout<<"Diameter of tree : "<<diameteroftree(root)<<endl;

    // Pair ans = fastdia(root);                                  // finding diameter using better approach
    // cout<<"Fast Height : "<<ans.height<<endl;
    // cout<<"Fast Dia : "<<ans.diameter<<endl;
    
    // node *x = searchinbt(root,13);
    // if(x != NULL){
    //     cout<<"key found : "<<x->data<<endl;
    // }
    // else cout<<"key not found"<<endl;

    // LevelOrder(root);
    

    return 0;
}