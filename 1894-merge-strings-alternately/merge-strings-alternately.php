class Solution {

    /**
     * @param String $word1
     * @param String $word2
     * @return String
     */
    function mergeAlternately($word1, $word2) {
        $i = 0;
        $j = 0;
        $combined = '';
        $min = min(strlen($word1), strlen($word2));

        while ($i < $min) {
            $combined .= $word1[$i];
            $combined .= $word2[$j];
            $i++;
            $j++;
        }

        if (strlen($word1) > $min) {
            $combined .= substr($word1, $i);
        } else {
            $combined .= substr($word2, $j);
        }

        return $combined;
    }
}