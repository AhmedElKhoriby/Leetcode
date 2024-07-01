class Solution {

    /**
     * @param String $haystack
     * @param String $needle
     * @return Integer
     */
    function strStr($haystack, $needle) {
        $position = strpos($haystack,$needle);
        return (($position === false) ? -1 : $position);
    }
}