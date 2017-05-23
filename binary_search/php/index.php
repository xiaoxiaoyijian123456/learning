<?php 
// run it with: 
//    php -f index.php

function binary_search(Array $data, $val, $low, $high) {
	$mid = floor(($low + $high) / 2);
	$midVal = $data[$mid];
	if ($midVal == $val) {
		return $mid;
	}
	if ($mid == $low || $mid == $high) {
		return -1;
	}
	
	if ($midVal > $val) {
		return binary_search($data, $val, $low, $mid);
	} else {
		return binary_search($data, $val, $mid, $high);
	}
}

// main script
$data = array(1, 3, 7, 8, 9, 19, 21, 49, 56);

$val = 8;
$i = binary_search($data, $val, 0, count($data)-1);
printf("val=$val, i=$i\n");

$val = 18;
$i = binary_search($data, $val, 0, count($data)-1);
printf("val=$val, i=$i\n");