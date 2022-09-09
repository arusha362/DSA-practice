/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        
        queue<Node*> q;
        if(!root){
            return 0;
        }
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* temp=q.front();
                //cout<<temp->data<<" ";
                //q.pop();
                if(temp->left){
                    q.push(temp->left);
                
                }
                if(temp->right){
                    q.push(temp->right);
                
                }
                q.pop();
            }
            level++;
        }
        return level-1;
        // Write your code here.
    }
    
