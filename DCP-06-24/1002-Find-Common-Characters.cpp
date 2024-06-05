/*
URL: https://leetcode.com/problems/find-common-characters/description/?envType=daily-question&envId=2024-06-05

1002. Find Common Characters

AmazonGiven a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 
Example 1:
Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:
Input: words = ["cool","lock","cook"]
Output: ["c","o"]

 
Constraints:

	1 <= words.length <= 100
	1 <= words[i].length <= 100
	words[i] consists of lowercase English letters.
*/

class Solution
{
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>freq(26, INT_MAX);
        for (const string& word : words) {
            vector<int>current_freq(26, 0);
            for (const char& ch : word)
                current_freq[ch - 'a']++;
            for (char ch = 'a';ch <= 'z';ch++) {
                freq[ch-'a'] = min(freq[ch-'a'], current_freq[ch-'a']);
            }
        }
        
        vector<string> ans;
        for (char ch = 'a';ch <= 'z';ch++) {
            while(freq[ch-'a']--)
                ans.push_back(string(1,ch));
        }
        return ans;
    }
};