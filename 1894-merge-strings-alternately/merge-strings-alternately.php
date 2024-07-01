class Solution {

    /**
     * @param String $word1
     * @param String $word2
     * @return String
     */
    function mergeAlternately($word1, $word2) {
        $answer = ""; $i = 0 ; $j = 0;
        $sz1 = strlen($word1);
        $sz2 = strlen($word2);
        while ($i < $sz1 && $j < $sz2){
            $answer .= $word1[$i++];
            $answer .= $word2[$j++];
        }
        while ($i < $sz1){
            $answer .= $word1[$i++];
        }
        while ($j < $sz2){
            $answer .= $word2[$j++];
        }
        return $answer;
    }
}