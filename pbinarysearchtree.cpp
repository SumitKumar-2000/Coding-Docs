
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
node* insertinBST(node* root,int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    //recursive case
    if(d <= root->data){
        root->left = insertinBST(root->left,d);
    }
    else {
        root->right = insertinBST(root->right,d);
    }
    return root;
}
node* createBST(node* root){
    // node* root = NULL;
    int data;
    cin>>data;

    while(data != -1){
        root = insertinBST(root,data);
        cin>>data;
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
int height(node *root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height, right_height) + 1;
}
node* searchnode(node* root,int key){
    //base case
    if(root == NULL){
        return root;
    }
    //recursive case
    if(root->data == key){
        return root;
    }
    else if(key < root->data){
        return searchnode(root->left,key);
    }
    else{
        return searchnode(root->right,key);
    }
}
void bstrange(node* root,int k1,int k2){
    //base case
    if(root->data > k2 || root->data < k1 || root == NULL){
        return ;
    }
    //recurive case
    if(root->data>=k1 || root->data<=k2) {
        cout<<root->data;
        bstrange(root->left,k1,k2);
        bstrange(root->right,k1,k2);
    }
}
bool isbalanced(node* root){
    //base case
    if(!root){  //if(root != null)
        return true;
    }
    // recursive case
    int left_height = height(root->left);
    int right_height = height(root->right);

    int curr_diff = abs(left_height - right_height);

    if(curr_diff <= 1 and isbalanced(root->left) and isbalanced(root->right)){
        return true;
    } 
    else return false;
}

// bool isBST(node* root,int mi = INT_MIN, int mx = INT_MAX){
//     //base case
//     if(!root){
//         return true;
//     }
//     //recursive case
//     if(root->data >= mi && root->data <= mx && isBST(root->left,mi,root->data) && isBST(root->right, root->data, mx)){
//         return true;
//     }
//     else {
//         return false;
//     }
// }
int main(){
    node* root = NULL;
    root = createBST(root);

    cout<<"Pre-Order: ";
    preorder(root);
    cout<<endl;
    cout<<"In-Order: ";
    inorder(root);
    cout<<endl;
    cout<<"Post-Order: ";
    postorder(root);
    cout<<endl;
    cout<<"level order: "<<endl;
    levelorder(root);
    cout<<endl;

    // node* ans = searchnode(root,14);
    // if(ans){
    //     cout<<"data-found: "<<ans->data;
    // }
    // else cout<<"not-found: "<<endl; 

    // bstrange(root,3,6);

    if(isbalanced(root)){
        cout<<"isbalanced"<<endl;
    }
    else{
        cout<<"notbalanced"<<endl;
    }

    // if(isBST(root,mi,mx)){
    //     cout<<"it is a bst: "<<endl;
    // }
    // else {
    //     cout<<"it is not a bst: "<<endl;
    // }

return 0;
}