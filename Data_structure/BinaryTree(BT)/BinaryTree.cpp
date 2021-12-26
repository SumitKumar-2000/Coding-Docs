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

    // int diameteroftree(node *root){
    //     // base case
    //     if(root == NULL){
    //         return 0;
    //     }
    //     // recursive case
    //     return 
    // }

int main(){
    node* root = NULL;
    root = createTree();

    cout<<"preorder"<<endl;
    Preorder(root);
    cout<<endl;

    cout<<"inorder"<<endl;
    Inorder(root);
    cout<<endl;
    
    cout<<"postorder"<<endl;
    Postorder(root);
    cout<<endl;

    cout<<"No. of nodes : "<<countnode(root)<<endl;
    cout<<"height of tree : "<<heightoftree(root)<<endl;
    return 0;
}