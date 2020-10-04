package main

import "fmt"

func fibonacci(number int) int {
	if number > 1 {
		return fibonacci(number-1) + fibonacci(number-2)
	}

	return number
}

func main() {
	fmt.Println(fibonacci(5))
}
