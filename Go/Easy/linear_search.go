package main

import "fmt"

func linearSearch(array []int, x int) bool {
	for i := 0; i < len(array); i++ {
		if array[i] == x {
			return true
		}
	}

	return false
}

func main() {
	array1 := []int{12, 4, 2, 5, 124, 3}
	array2 := []int{27, 34, 75, 5, 1, 45}
	x := 2

	fmt.Println(linearSearch(array1, x))
	fmt.Println(linearSearch(array2, x))
}
