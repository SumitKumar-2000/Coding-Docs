#include <bits/stdc++.h>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
class node {
public:
	int data;
	node* left, *right;

	node(int d): data(d), left(NULL), right(NULL) {

	}
};
node* InsertBST(node* root, int d){
    //base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    //recursive case 
    if(d <= root->data){
        root->left = InsertBST(root->left,d);
    }
    else{
        root->right = InsertBST = InsertBST(root->right, d);
    }
    return root;
}
node* createBST(){
    node* root = NULL;
    int data;
    cin>>data;

    while(data != -1){
        root = InsertBST(root, data);
        cin>>data;
    }
    return root;
}

void preorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
node* searchBST(node* root,int key){
    //base case
    if(root == NULL){
        return NULL;
    }
    //recursive case
    if(key == root->data){
        return root;
    }
    else if(root ->data > key){
        return searchBST(root->left, key);
    }
    else{
        return searchBST(root->right, key);
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
bool isbalanced(node* root){
    //base case
    if(!root){  //if(root != null)
        return true;
    }
    // recursive case
    int left_heignt = height(root->left);
    int right_right = height(root->right);

    int curr_diff = abs(left_height - right_height);

    if(curr_diff <= 1 and isbalanced(root->left) and isbalanced(root->right)){
        return true;
    } 
    else return false;
}

bool isBST(node* root,int mi = INT_MIN, int mx = INT_MAX){
    //base case
    if(!root){
        return true;
    }
    //recursive case
    if(root->data >= mi and root->data <= mx and isBST(root->left,mi,root->data) and isBST(root->right, root->data, mx)){
        return true;
    }
    else {
        return false;
    }
}
node* maketree(int s,int e){
    if(s>e){
        return NULL;
    }
    int mid = (s+e) / 2;
    node* root = new node(a[mid]);
    root->left = maketree(s,mid-1);
    root->right = maketree(mid+1,e)

    return root;
}
class linklist{
    node* head;
    node* tail;
};
linklist bsttoll(node* root){
    linklist l;
    // base case
    if(root == NULL){
        l.head = l.tail = NULL;
        return l;
    }
    //recursive case
    //1. both left and right is null
        if(root->left == NULL && root->right == NULL){
            l.head = l.tail = root;
        }
    //2. left is not null and right is null
        else if(root->left != NULL && root->right == NULL){
            linklist left = bsttoll(root->left);
            left.tail->right = root;
            l.head = left->head;
            l.tail = right.tail;
        }
    //3. right is null and left is null
        else if(root->left == NULL && root->right != NULL){
            linklist left = bsttoll(root->right);
            root->right = right.head;
            l.head = root;
            l.tail = right.tail;
            return l;
        }
    // 4. both are not null
        else{
            linklist left = bsttoll(root->left);
            linklist right = bsttoll(root->right);
            left.tail->right = root;
            root->right = right.head;
            l.head = left.head;
            l.tail = right.tail;
            return l;
        }
}
node* LCA(node* root){
    //base case
    if(!root){
        return NULL;
    }
    //recursive case
    if(root->data == x || root->data == y){
        return root;
    }
    node* left =LCA(root->left,x,y);
    node* right = LCA(root->right,x,y);

    if(left != NULL and right != NULL){
        return root;
    }
    if(left != NULL){
        return left;
    }
    return right;
}

int main() {

	node* root = NULL;
    root = createBST();
	// cout << "PRE: ";
	preorder(root);
	cout << endl;
	cout << "In: ";
	inorder(root);
	cout << endl;
	cout << "Post: ";
	postorder(root);
	cout << endl;

    // node* ans = searchBST(root, 14);
    // if(ans) {
    //     cout<<"found: "<<ans->data <<endl;
    // }
    // else {
    //     cout<<" not found"<<endl;
    // }

    // if(isbalanced)
    // while(l.head){
    //     cout<< l.head->data<<"-->";
    //     l.head = l.head->right;
    // }
    // cout<<endl;
    node* ans = LCA(root,11,12);
    if(ans != NULL){
        cout<<and->data<<endl;
    }
    else{
        cout<<"no lca"<<endl;
    }
	return 0;
}