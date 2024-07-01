
function srtposition($haystack, $needle)
{
    $sz1 = strlen($haystack);
    $sz2 = strlen($needle);
    for ($i = 0; $i <= $sz1 - $sz2; $i++) {
        $match = true;
        for($j = 0;$j < $sz2;$j++){
            if($haystack[$j + $i]!==$needle[$j]){
                $match = false;
                break;
            }
        }
        if($match) return $i;
    }
    return false;
}
class Solution
{

    /**
     * @param String $haystack
     * @param String $needle
     * @return Integer
     */
    function strStr($haystack, $needle)
    {
        $position = srtposition($haystack, $needle);
        return (($position === false) ? -1 : $position);
    }
}