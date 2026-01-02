class Solution {
    
  public:
    vector<int> leaders(vector<int>& v) {
        int n = v.size();
        
        vector<int> result;
        int max_from_right = INT_MIN;
        //starting from the right.
        for(int i=n-1 ; i>=0 ; i--){
            if(v[i] >= max_from_right){
                result.push_back(v[i]);
                max_from_right = v[i];
            }
        }
        reverse(result.begin(),result.end());
    return result;
    }
};