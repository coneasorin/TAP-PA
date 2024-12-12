<?php

Class MergeSort{
    public $vect = [];
    
    function __construct($vect){
        $this->vect = $vect;
    }

    function mainMerge(){
        $this->mergeSort(0,count($this->vect)-1);
        return $this->vect;
    }

    //merge sort function 
    private function mergeSort($left,$right){
        if($left < $right){
        $midle = intdiv($left+$right,2);

        $this->mergeSort($left,$midle);
        $this->mergeSort($midle+1,$right);

        $this->position($left,$midle,$right);
        }
    }

    private function position($left,$midle,$right){
        $size_1 = $midle - $left+1;
        $size_2 = $right - $midle;

        $arr_left = [];
        $arr_right = [];

        for($i=0;$i<$size_1;$i++){
            $arr_left[$i] = $this->vect[$left+$i];
        }
        for($i=0;$i<$size_2;$i++){
            $arr_right[$i] = $this->vect[$midle+1+$i];
        }

        $i=$j=0;
        $k = $left;
        //sort 
        while($i < $size_1 && $j < $size_2){
            if($arr_left[$i] <= $arr_right[$j]){
                $this->vect[$k] = $arr_left[$i];
                $i++;
            }else{
                $this->vect[$k] = $arr_right[$j];
                $j++;
            }
            $k++;
        }

        while($i < $size_1){
            $this->vect[$k++] = $arr_left[$i++];
        }
        while($j < $size_2){
            $this->vect[$k++] = $arr_right[$j++];
        }
    }

}

$obj = new MergeSort([38,27,43,3,9,82,10]);
$sortArr = $obj->mainMerge();

foreach($sortArr as $num){
    echo $num.",";
}








// class MergeSort {
//     public $vec = [];
    
//     function __construct(array $vec) {
//         $this->vec = $vec;
//     }

//     function mainFun() {
//         $this->mergeSort(0, count($this->vec) - 1);
//         foreach ($this->vec as $num) {
//             echo $num . "\n";
//         }
//     }

//     function mergeSort($left, $right) {
//         if ($left < $right) {
//             $midle = intval($left + ($right - $left) / 2);
            
//             $this->mergeSort($left, $midle);
//             $this->mergeSort($midle + 1, $right);

//             $this->imbination($left, $midle, $right);
//         }
//     }

//     function imbination($left, $midle, $right) {
//         $sizes_1 = $midle - $left + 1;
//         $sizes_2 = $right - $midle;
        
//         $left_list = [];
//         $right_list = [];
        
//         for ($i = 0; $i < $sizes_1; $i++) {
//             $left_list[$i] = $this->vec[$left + $i];
//         }
//         for ($i = 0; $i < $sizes_2; $i++) {
//             $right_list[$i] = $this->vec[$midle + 1 + $i];
//         }

//         $i = $j = 0;
//         $k = $left;
        
//         while ($i < $sizes_1 && $j < $sizes_2) {
//             if ($left_list[$i] <= $right_list[$j]) {
//                 $this->vec[$k] = $left_list[$i];
//                 $i++;
//             } else {
//                 $this->vec[$k] = $right_list[$j];
//                 $j++;
//             }
//             $k++;
//         }

//         while ($i < $sizes_1) {
//             $this->vec[$k] = $left_list[$i];
//             $i++;
//             $k++;
//         }

//         while ($j < $sizes_2) {  // corrected condition here
//             $this->vec[$k] = $right_list[$j];
//             $j++;
//             $k++;
//         }
//     }
// }

// $obj = new MergeSort([4, 9, 3, 5, 1, 10]);
// $obj->mainFun();






// class MergeSort {
//     private $vec = [];

//     // Constructor to initialize the array to be sorted
//     public function __construct(array $vec) {
//         $this->vec = $vec;
//     }

//     // Public method to initiate the sorting process
//     public function sort() {
//         $this->mergeSort(0, count($this->vec) - 1);
//         return $this->vec;
//     }

//     // Recursive merge sort function
//     private function mergeSort($left, $right) {
//         if ($left < $right) {
//             $middle = intdiv($left + $right, 2);
//             echo $middle."<br>";
//             // Recursively sort the left and right halves
//             $this->mergeSort($left, $middle);
//             $this->mergeSort($middle + 1, $right);

//             // Merge the sorted halves
//             $this->merge($left, $middle, $right);
//         }
//     }

//     // Function to merge two halves
//     private function merge($left, $middle, $right) {
//         $leftSize = $middle - $left + 1;
//         $rightSize = $right - $middle;

//         $leftArray = array_slice($this->vec, $left, $leftSize);
//         $rightArray = array_slice($this->vec, $middle + 1, $rightSize);

//         $i = $j = 0;
//         $k = $left;

//         // Merge the two halves into the original array
//         while ($i < $leftSize && $j < $rightSize) {
//             if ($leftArray[$i] <= $rightArray[$j]) {
//                 $this->vec[$k] = $leftArray[$i];
//                 $i++;
//             } else {
//                 $this->vec[$k] = $rightArray[$j];
//                 $j++;
//             }
//             $k++;
//         }

//         // Copy any remaining elements from the left half
//         while ($i < $leftSize) {
//             $this->vec[$k] = $leftArray[$i];
//             $i++;
//             $k++;
//         }

//         // Copy any remaining elements from the right half
//         while ($j < $rightSize) {
//             $this->vec[$k] = $rightArray[$j];
//             $j++;
//             $k++;
//         }
//     }
// }

// // Usage
// $inputArray = [38, 27, 43, 3, 9, 82, 10];
// $mergeSort = new MergeSort($inputArray);
// $sortedArray = $mergeSort->sort();

// foreach ($sortedArray as $num) {
//     echo $num . "\n";
// }