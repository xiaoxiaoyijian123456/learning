// run it with:
//    go run main.go
package main

import (
	"encoding/csv"
	"fmt"
	"io"
	"os"
	"strings"
)

func main() {
	csvFile := "../test.csv"
	file, err := os.Open(csvFile)
	if err != nil {
		println(err.Error())
		return
	}
	defer file.Close()

	reader := csv.NewReader(file)
	for {
		fields, err := reader.Read()
		if err == io.EOF {
			break
		} else if err != nil {
			println(err.Error())
			return
		}
		fmt.Printf("%s\n", strings.Join(fields, ","))
	}
	println("end.")
}
