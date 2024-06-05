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
    vector<multiset<char>> charSets;
    for (string word : words) {
        multiset<char> charSet(word.begin(), word.end());
        charSets.push_back(charSet);
    }
    
    multiset<char> result = charSets[0];
    for (int i = 1; i < charSets.size(); i++) {
        multiset<char> temp;
        set_intersection(result.begin(), result.end(), charSets[i].begin(), charSets[i].end(),
                         inserter(temp, temp.begin()));
        result = temp;
    }
    
    vector<string> commonCharacters;
    for (char c : result) {
        commonCharacters.push_back(string(1, c));
    }
    
    return commonCharacters;
}
};