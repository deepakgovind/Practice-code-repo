package main

import "fmt"

func getAbsoluteNumber(number int) int {
	if number < 0 {
		return number * -1
	}

	return number
}

func main() {
	fmt.Println(getAbsoluteNumber(6))
	fmt.Println(getAbsoluteNumber(-10))
}
