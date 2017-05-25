<?php
// run it with: 
//    php index.php
//    php index.php --port=9091
//    php index.php --port=9091

$shortopts  = "";
//$shortopts .= "p:";  // Required value
//$shortopts .= "v::"; // Optional value
//$shortopts .= "abc"; // These options do not accept values

$longopts  = array(
    "port:",     // Required value
    //"optional::",    // Optional value
    //"option",        // No value
    //"opt",           // No value
);

$options = getopt($shortopts, $longopts);
printf("port=%d\n", isset($options['port']) ? $options['port'] : 9090);
