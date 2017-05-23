package main

// run it with: go run main.go

import (
	"fmt"
	"strings"
)

func main() {
	s := " xx "
	ret := strings.TrimSpace(s)
	fmt.Printf("s=%s, ret=%s\n", s, ret)
}
