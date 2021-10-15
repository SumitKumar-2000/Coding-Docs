// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

    node(int d) : data(d), left(NULL), right(NULL){};
};
node* create_tree(){
    node* root = NULL;
    int data;
    cin>>data;
    if(data == -1){ 
        return root;
    }
    else {
        root = new node(data);
        root->left = create_tree();
        root->right = create_tree();
    }
    return root;
}
void preorder(node* root){  // recursion is implementing
    //base case
    if(root == NULL){
        return ;
    }
    //recursive case
    cout<<root->data<<", ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    //recursive case
    inorder(root->left);
    cout<<root->data<<", ";
    inorder(root->right);
}

void postorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    //recursive case
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<", ";
}

int count_nodes(node* root){
    //base case
    if(root == NULL){
        return 0;
    }
    //recursive case
    return count_nodes(root->left) + count_nodes(root->right) + 1;
}

int height(node* root){
    //base case
    if(root == NULL){
        return 0;
    }
    //recursive case
    return max(height(root->left),height(root->right)) + 1;
}
int diameter(node* root){  
    //base case
    if(root == NULL){
        return 0;
    }
        //dia via root
        int option1 = height(root->left) + height(root->right);

        //dia via lst
        int option2 = diameter(root->left);

        //dia via rst
        int option3 = diameter(root->right);

        return max(option1,max(option2,option3));
}

// class Pair{
//     public:
//     int diameter;
//     int height;

// };
// Pair fastdia(node* root){
//         if(root == NULL){
//             Pair p;
//             p.diameter = p.height = 0;
//             return p;
//         }

//         Pair left = fastdia(root->left);
//         Pair right = fastdia(root->right);

//         Pair p;
//         p.height = max(left.height + right.height) + 1;

//         int op1 = left.height + right.height;
//         int op2 = left.diameter;
//         int op3 = right.diameter;

//         p.diameter = max(op1,max(op2,op3));
//         return p;
// }
bool searchnode(node* root,int key){
    //base case
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    //recursive case
    searchnode(root->left,key);
    searchnode(root->right,key);
}
void mirror(node* root){
    if(root == NULL){
        return ;
    }

    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* x = q.front();
        q.pop();

        if(x != NULL){
            cout<<x->data<<" ";
            if(x->left != NULL){
                q.push(x->left);
            }
            if(x->right != NULL){
                q.push(x->right);
            }
        }
        else {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL); 
            }
        }
    }
}
int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
int n = sizeof(pre)/sizeof(int);
int i = 0;
node* buildtree(int s,int e){
    //base case
    if(s>e){
        return NULL;
    }
    //recursive case
    node* root = new node(pre[i++]);
    int k = -1;
    for(int j = s;j<=e;j++){
        if(in[j] == root->data){
            k = j;
            break;
        }
    }
    root->left = buildtree(s,k-1);
    root->right = buildtree(k+1,e);

    return root;
}
int main(){
    node* root = NULL;
    // root = create_tree();
    root = buildtree(0,n-1);
    // mirror(root);
    cout<<"Pre-Order: ";
    preorder(root);
    cout<<endl;
    cout<<"In-Order: ";
    inorder(root);
    cout<<endl;
    cout<<"Post-Order: ";
    postorder(root);
    cout<<endl;

    // cout<<"total node count: "<<count_nodes(root);
    // cout<<endl;
    // cout<<"height of the node: "<<height(root);
    // cout<<endl;
    // cout<<"diameter of BT: "<<diameter(root);
    // cout<<endl;

    // Pair ans = fastdia(root);
    // cout<<"fast height: "<<ans.height<<endl;    
    // cout<<"fast diameter: "<<ans.diameter<<endl;    

    // if(searchnode(root,13)){
    //     cout<<"found the node"<<endl;;
    // }
    // else cout<<"node found";

    levelorder(root);
return 0;
}