class Solution {
  public:
    vector<int> nextGreater(vector<int> &v) {
        int n = v.size();
        
        vector<int> nge(n);
        stack<int> st;
        
        for(int i=2*n-1 ; i>=0 ; i--){
            while(!st.empty() && v[i%n] >= st.top()){
                st.pop();
            }
            
            if(st.empty()){
               nge[i%n] = -1; 
            }
            else{
                nge[i%n] = st.top();
            }
            st.push(v[i%n]);
        }
        return nge;
    }
};