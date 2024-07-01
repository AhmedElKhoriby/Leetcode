function sortString($str)
{
    // Convert string to array of characters
    $chars = str_split($str);

    // Sort the array of characters
    sort($chars);

    // Convert array back to string
    $sortedStr = implode('', $chars);

    return $sortedStr;
}

class Solution {

    /**
     * @param String $s
     * @param String $t
     * @return Boolean
     */
    function isAnagram($s, $t) {
        return sortString($s) === sortString($t);
    }
}