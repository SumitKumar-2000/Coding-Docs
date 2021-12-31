#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node * left;
    node * right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* InsertinBST(int d, node * root){    
    // base case
    if(root == NULL){
        root = new node(d);
        return root;
    }

    // recursive case
    if(d <= root->data){
        root->left = InsertinBST(d,root->left);
    }
    else{
        root->right = InsertinBST(d,root->right);
    }

    return root;
}

node * createBST(){
    node * root = NULL;
    int data;
    cin>>data;

    while(data != -1){
        root = InsertinBST(data,root);
        cin>>data;
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

    node *Search_in_BST(node *root, int key){
        // base case
        if(root == NULL){
            return root;
        }
        // recursive case
        if(root->data == key){
            return root;
        }
        else if(root->data > key){
            return Search_in_BST(root->left, key);
        }
        else{
            return Search_in_BST(root->right,key);
        }
    }

    int heightoftree(node *root){
        // base case
        if(root == NULL){
            return 0;
        }
        // recursive case
        return 1 + max(heightoftree(root->left),heightoftree(root->right));
    }

    bool isBalanced(node *root){
        // base case
        if(root == NULL){
            return true;         // if root is not there or root == null , then tree is balanced
        }

        // recursive case
        int left_height = heightoftree(root->left);   // left height 
        int right_height = heightoftree(root->right); // right height   
 
        int curr_diff = abs(left_height - right_height);   // relation for checking balanced = |leftheight - rightheight| <= 1
        if(curr_diff <= 1 and isBalanced(root->left) and isBalanced(root->right)){
            return true;
        }
        else{
            return false;
        }
     }
    
int main(){
    node * root = NULL;
    root = createBST();

    cout<<"preorder"<<endl;
    Preorder(root);
    cout<<endl;

    cout<<"inorder"<<endl;
    Inorder(root);
    cout<<endl;
    
    cout<<"postorder"<<endl;
    Postorder(root);
    cout<<endl;

    cout<<"Levelorder"<<endl;
    LevelOrder(root);
    cout<<endl;

    // node *ans = Search_in_BST(root,14);
    // if(ans){
    //     cout<<"found : "<<ans->data<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }

    if(isBalanced(root)){
        cout<<"balanced -->"<<endl;
    }
    else{
        cout<<"notbalanced -->"<<endl;
    }


    return 0;
}