// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int data;
//     node* left , *right;

//     node(int d) : data(d), left(NULL), right(NULL){}
// };
// node* createTree(){
//     node* root = NULL;
//     int data;
//     cin>>data;
//     if(data == -1){
//         return root;
//     }
//     else {
//         node* root = new node(data);
//         root->left = createTree();
//         root->right = createTree();
//     }
//     return root;
// }
// void preorder(node* root){
//     //base case
//     if(root == NULL){
//         return ;
//     }
//     //recursive case
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     //base case
//     if(root == NULL){
//         return ;
//     }
//     //recursive case
//     preorder(root->left);
//     cout<<root->data<<" ";
//     preorder(root->right);
// }
// void postorder(node* root){
//     //base case
//     if(root == NULL){
//         return ;
//     }
//     //recursive case
//     preorder(root->left);
//     preorder(root->right);
//     cout<<root->data<<" ";
// }

// int countnodes(node* root){
//     //base case
//     if(root == NULL){
//         return 0;
//     }
//     //recursive case
//     return countnodes(root->left) + countnodes(root->right) + 1;
// }
// int height(node* root){
//     //base case
//     if(root == NULL){
//         return 0;
//     }
//     //recursive case
//     int left_height = height(root->left);
//     int right_height = height(root->right);

//     return max(left_height,right_height) + 1;

// }
// int diameter(node* root){
// //base case
// if(root == NULL){
//     return 0;
// }
// //recursive case
// //1. diameter via root node
// int op1 = height(root->left) + height(root->right);
// // 2. diameter exist in lst
// int op2 = diameter(root->left);
// // 3. diameter exist in rst
// int op3 = diameter(root->right);

// return max(op1, max(op2,op3));
// }

// // class Pair{
// // public:
// //     int height;
// //     int diameter;
// // };
// // Pair fastdia(node* root){
// //     //base case
// //     if(root == NULL){
// //         Pair p;
// //         P.height = P.diameter = 0;
// //         return p;
// //     }
// //     //recursive case
// //     Pair left = fastdia(root->left);
// //     Pair right = fastdia(root->right);

// //     Pair P;
// //     P.height = max(left.height,right.height) + 1;


// //     //diameter
// //     int op1 = left.height + right.height;
// //     int op2 = left.diameter;
// //     int op3 = right.diameter;

// //     p.diameter = max(op1,max(op2,op3));
// //     return p;
// // }

// node* seachBT(node* root, int key){
//     //base case
//     if(root == NULL){
//         return NULL;
//     }
//     //recursive case
//     if(root->data == key){
//         return root;
//     }
//     node* left = seachBT(root->left,key);
//     if(left != NULL){
//         return left;
//     }

//     node* right = seachBT(root->right,key);
//     //right: valid , null
//     return right;
// }
// void mirror(node* root){
//     //base class
//     if(root == NULL){
//         return;
//     }
//     //recurive case
//     swap(root->left,root->right);
//     mirror(root->left);
//     mirror(root->right);
// }
// int main(){
//     node* root = NULL;
//     root = createTree();

//     cout<<"PRE: ";
//     preorder(root);
//     cout<<endl;
//     cout<<"IN: ";
//     inorder(root);
//     cout<<endl;
//     cout<<"POST: ";
//     postorder(root);
//     cout<<endl;

//     cout<<"total nodes: "<<countnodes(root)<< endl;
//     cout<<"height of tree: "<<height(root)<<endl;
//     cout<<"diameter: "<<diameter(root)<<endl;
//     // Pair ans = fastdia(root);

//     // cout<<"fast height: "<<ans.height <<endl;
//     // cout<<"fast diameter: "<<ans.diameter <<endl;
//     node* x = seachBT(root,13);

// return 0;
// }

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

node* createTree() {
	node* root = NULL;
	int data;
	cin >> data;

	if (data == -1) {
		return root;
	}
	else {
		root = new node(data);
		root->left = createTree();
		root->right = createTree();
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

int countNodes(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	return countNodes(root->left) + countNodes(root->right) + 1;
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

int diameter(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	// 1. Dia meter via root node
	int op1 = height(root->left) + height(root->right);
	// 2. Dia meeter exists in LST
	int op2 = diameter(root->left);
	// 3. Dia meter exists in RST
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDia(node* root) {
	// base case
	if (root == NULL) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}
	// recursive case
	Pair left = fastDia(root->left);
	Pair right = fastDia(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	// Diameter
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	p.diameter = max(op1, max(op2, op3));
	return p;
}

node* searchBT(node* root, int key) {
	// base case
	if (root == NULL) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}

	node* left = searchBT(root->left, key);
	if (left != NULL) {
		return left;
	}

	node* right = searchBT(root->right, key);
	// right: Valid, NULL
	return right;
}

void mirror(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
            auto x = q.front();
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
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }    
}
int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 12};
int n = sizeof(pre) / sizeof(int);

node* buildtree(int s,int e){
    // base case
    if(s > e){
        
    }
    //recursive case
}
int main() {

	node* root = NULL;
	root = createTree();
	// mirror(root);
	// cout << "PRE: ";
	preorder(root);
	cout << endl;
	cout << "In: ";
	inorder(root);
	cout << endl;
	cout << "Post: ";
	postorder(root);
	cout << endl;

	// cout << "Total Nodes: " << countNodes(root) << endl;
	// cout << "Height: " << height(root) << endl;
	// cout << "Diameter: " << diameter(root) << endl;
	// Pair ans = fastDia(root);

	// cout << "Fast Height: " << ans.height << endl;
	// cout << "Fast Diameter: " << ans.diameter << endl;

	// node* x = searchBT(root, 113);
	// if (x != NULL) {
	// 	cout << "Found key: " << x->data << endl;
	// }
	// else {
	// 	cout << "Key not found" << endl;
	// }

    levelorder(root);

	return 0;
}