class SpecialStack {
public:
    stack<int> st;
    stack<int> minst;

    void push(int x) {
        st.push(x);
        if (minst.empty() || x <= minst.top()) {
            minst.push(x);
        }
    }

    void pop() {
        if (st.empty()) return;
        int topVal = st.top();
        st.pop();
        if (!minst.empty() && topVal == minst.top()) {
            minst.pop();
        }
    }

    int peek() {
        if (st.empty()) return -1;   
        return st.top();
    }

    bool isEmpty() {
        return st.empty();
    }

    int getMin() {
        if (minst.empty()) return -1; 
        return minst.top();
    }
};
