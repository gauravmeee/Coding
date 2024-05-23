//Count Nodes

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool compare(Node* root1, Node* root2){
    if (root1->data == root2->data){ return true;}
    else return false;
    compare(root1->left ,root2 ->left);
    compare(root1->right, root2->right);
}

int main(){

/*               1
                / \
               2   3
              /\   /\
             4  5 6  7
*/

   struct Node *root1 = new Node(1);

   root1->right = new Node(3);
   root1->right->left = new Node(2);
   root1->right->right = new Node(5);

   struct Node *root2 = new Node(1);

   root2->right = new Node(3);
   root2->right->left = new Node(2);
   root2->right->right = new Node(4);

cout<<compare(root1, root2);

    return 0;
}