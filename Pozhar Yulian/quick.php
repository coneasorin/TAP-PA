<?php

Class QuickSort{
    public $arr= [];

    function __construct($array){
        $this->arr = $array;
        $n = count($this->arr);
        $this->quickSort(0, $n - 1);
    }
    
    function swap(&$a, &$b) {
        $temp = $a;
        $a = $b;
        $b = $temp;
    }

    function partition($low, $high) {
        
        // Choose the pivot
        $pivot = $this->arr[$high];

        $i = $low - 1;

        for ($j = $low; $j <= $high - 1; $j++) {
            if ($this->arr[$j] < $pivot) {
                $i++;
                $this->swap($this->arr[$i], $this->arr[$j]);
            }
        }
        
        // Move pivot after smaller elements and
        $this->swap($this->arr[$i + 1], $this->arr[$high]);  
        return $i + 1;
    }

    // The QuickSort function implementation
    function quickSort( $low, $high) {
        if ($low < $high) {
            
            // pi is the partition return index of pivot
            $pi = $this->partition( $low, $high);

            // Recursion calls for smaller elements
            // and greater or equals elements
            $this->quickSort( $low, $pi - 1);
            $this->quickSort( $pi + 1, $high);
        }
    }
}

$arr = array(10, 7, 8, 9, 1, 5);

$sort = new QuickSort($arr);

for ($i = 0; $i < count($sort->arr); $i++) {
    echo $sort->arr[$i] . " ";  
}
?>