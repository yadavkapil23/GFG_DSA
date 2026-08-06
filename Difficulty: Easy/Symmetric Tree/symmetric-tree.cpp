class Solution {
  public:
    bool isSymmetric(Node* root) {
        if(root == nullptr){
            return true;
        }
        
        return isokay(root->left,root->right);
    }
    
    bool isokay(Node* left,Node* right){
        if(left == nullptr && right  == nullptr){
            return true;
        }
        
        if(left == nullptr || right == nullptr){
            return false;
        }
        
        if(left->data != right->data){
            return false;
        }
        
       return isokay(left->left,right->right) && isokay(left->right,right->left);
    }
};