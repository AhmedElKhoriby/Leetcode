class Solution {
public:
    string makeFancyString(string s) {

        queue<char> q;
        string output = "";

        int sz = s.size();
        for (int i = 0; i < sz; i++) {

            if (q.empty() || s[i] == q.back() && q.size() < 2) 
                q.push((s[i]));
            
            else if (s[i] != q.back() && q.size() <= 2) {
                while (!q.empty()) {
                    output += q.front(), q.pop();
                }
                q.push(s[i]);
            }
        }

        while (!q.empty()){
            output += q.front(), q.pop();
        }
            
        return output;
    }
};