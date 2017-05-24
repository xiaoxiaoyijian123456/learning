<?php
// run it with: 
//    php -f index.php

$file = fopen('../test.csv', 'r');
while ($fields = fgetcsv($file)) {
    printf("%s\n", join($fields, ","));
}
fclose($file);

print("end.\n");