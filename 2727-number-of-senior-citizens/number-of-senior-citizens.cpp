class Solution {
private:
    int stringtoiint(string s) {
        int ret = 0;
        for (char& ch : s)
            ret = ret * 10 + ch - '0';
        return ret;
    }
public:
    int countSeniors(vector<string>& details) {
        int counter = 0, sz = details.size();
        for (int i = 0; i < sz; i++)
            if (stringtoiint(details[i].substr(11, 2)) > 60) counter++;
        return counter;
    }
};