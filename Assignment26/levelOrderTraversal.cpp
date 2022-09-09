/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node*> Q;
        if(!root) return ;
        Q.push(root);
        while(!Q.empty()){
            Node* temp=Q.front();
            cout<<temp->data<<" ";
            if(temp->left){
                Q.push(temp->left);
            }
            if(temp->right){
                Q.push(temp->right);
            }
            Q.pop();
        }


    }
