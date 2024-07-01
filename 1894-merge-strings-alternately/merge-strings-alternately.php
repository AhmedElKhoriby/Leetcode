class Solution {

    /**
     * @param String $word1
     * @param String $word2
     * @return String
     */
    function mergeAlternately(string $word1, $word2) {
        $answer = ""; $i = 0 ; $j = 0;
        $sz = max(strlen($word1) , strlen($word2));
        for ($i = 0; $i < $sz; $i++){
            $answer .= ($word1[$i] ?? '').($word2[$i] ?? '');
        }
        return $answer;
    }
}