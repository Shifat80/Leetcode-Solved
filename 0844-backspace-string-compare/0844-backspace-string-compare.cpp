class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> p;
        stack<char> q;
        
        // Process string s
        for (char ch : s) {
            if (ch == '#') {
                if (!p.empty()) {
                    p.pop();
                }
            } else {
                p.push(ch);
            }
        }
        
        // Process string t
        for (char ch : t) {
            if (ch == '#') {
                if (!q.empty()) {
                    q.pop();
                }
            } else {
                q.push(ch);
            }
        }
        
        // Compare the two stacks
        if (p.size() != q.size()) {
            return false;
        }
        
        while (!p.empty()) {
            if (p.top() != q.top()) {
                return false;
            }
            p.pop();
            q.pop();
        }
        
        return true;
    }
};