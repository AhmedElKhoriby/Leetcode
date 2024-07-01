class Solution
{

    /**
     * @param String $s
     * @param String $t
     * @return String
     */
    function findTheDifference($s, $t)
    {
        if (!strlen($s)) return $t;

        $str = $s;
        $chars = str_split($str); // Convert string to array of characters
        sort($chars); // Sort the array of characters in ascending order
        $sortedStr1 = implode('', $chars); // Convert array back to string

        $str = $t;
        $chars = str_split($str); // Convert string to array of characters
        sort($chars); // Sort the array of characters in ascending order
        $sortedStr2 = implode('', $chars); // Convert array back to string

        for ($i = 0; $i < strlen($s); $i++) {
            if($sortedStr1[$i]!=$sortedStr2[$i]) return $sortedStr2[$i];
        }

        return $sortedStr2[strlen($sortedStr2)-1];
    }
}