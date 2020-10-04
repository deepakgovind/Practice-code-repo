package main

import "fmt"

func bubbleSort(array []int) []int {
	returnArray := array
	for i := 0; i < len(returnArray)-1; i++ {
		if returnArray[i] > returnArray[i+1] {
			temp := returnArray[i]
			returnArray[i] = returnArray[i+1]
			returnArray[i+1] = temp
		}
	}

	return returnArray
}

func main() {
	array := []int{12, 3, 5, 7, 11, 33}
	fmt.Println(bubbleSort(array))
}
