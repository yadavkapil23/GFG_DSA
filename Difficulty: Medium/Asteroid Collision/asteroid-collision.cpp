class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &v) {
        stack<int> st;
        
        vector<int> result;
        
        for(int i=0 ; i<N ; i++){
            if(v[i] > 0){
                st.push(v[i]);
            }
            else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(v[i])){
                    st.pop();
                }
                
                if(!st.empty() && st.top() == abs(v[i])){
                    st.pop();
                }
                else if(st.empty() || st.top() < 0){
                    st.push(v[i]);
                }
            }
        }
        
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        
        reverse(result.begin(),result.end());
        return result;
    }
};