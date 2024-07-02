    class Solution
    {

        /**
        * @param Integer[] $nums1
        * @param Integer[] $nums2
        * @return Integer[]
        */
        function intersect($nums1, $nums2)
        {
            $intersection = [];
            $sz1 = count($nums1);
            $sz2 = count($nums2);
            for ($i = 0; $i < $sz1; $i++) {
                $intersection[$nums1[$i]]++;
            }
            $ret = [];
            for ($i = 0; $i < $sz2; $i++) {
                if($intersection[$nums2[$i]]!=0){
                    $intersection[$nums2[$i]]--;
                    $ret[] = $nums2[$i];
                }
            }
            return $ret;
        }
    }