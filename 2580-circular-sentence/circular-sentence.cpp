class Solution {
public:
    bool isCircularSentence(string sentence) {
        int sz = sentence.size();
        if (sentence[0] != sentence[sz - 1]) return 0;
        for (int i = 1; i < sz - 1; i++) 
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1])  return 0;            
        return 1;
    }
};