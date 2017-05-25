// run it with:
//    go run main.go
//    go run main.go --port=9091
//    go run main.go -port=9091
package main

import (
	"flag"
	"fmt"
)

var (
	portFlag = flag.Int("port", 9090, "set port")
)

func main() {
	flag.Parse()
	fmt.Printf("port=%d", *portFlag)
}
