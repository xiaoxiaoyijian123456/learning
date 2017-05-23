// run it with:
//    go run main.go
package main

import (
	"fmt"
)

func binary_search(data []int, val int, low, high int) int {
	mid := (low + high) / 2
	midVal := data[mid]
	if midVal == val {
		return mid
	}
	if mid == low || mid == high {
		return -1
	}

	if midVal > val {
		return binary_search(data, val, low, mid)
	} else {
		return binary_search(data, val, mid, high)
	}
}

func main() {
	data := []int{1, 3, 7, 8, 9, 19, 21, 49, 56}

	var val, i int

	val = 8
	i = binary_search(data, val, 0, len(data)-1)
	fmt.Printf("val=%d, i=%d\n", val, i)

	val = 18
	i = binary_search(data, val, 0, len(data)-1)
	fmt.Printf("val=%d, i=%d\n", val, i)
}
