// run it with:
//    go run main.go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := " xx "
	ret := strings.TrimSpace(s)
	fmt.Printf("s=%s, ret=%s\n", s, ret)
}
