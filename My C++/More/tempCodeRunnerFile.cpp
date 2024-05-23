#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* Right;

    Node* Node(int val){
        data = val;
        left = NULL;
        Right = NULL;
    }
};

printLevelOrder(Node *root){    
    if(root==NULL) return;
    
    queue < Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *node =q.front();
        q.pop;
        if(node! = NULL){
            cout<<node->data<<" ";
            if(node->left)
            q.push(node->left);

            if(node ->right)
            q.push(noede->right)
        }
        
        else if(!q.empty())
        q.push(NULL);
    }
}


int main(){

/*               1
                / \
               2   3
              /\   
             4  5
*/

   struct Node root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);

   root->left->left = new Node(4);
   root ->left->right = new Node(5);

printOrderLevel();

    return 0;
}