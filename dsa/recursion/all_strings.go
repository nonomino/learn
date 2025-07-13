package main

import "fmt"

func generateStrings(n int) []string {
	if n == 0 {
		return []string{""}
	}

	// Generate all strings of length n-1
	shorterStrings := generateStrings(n - 1)
	
	// Append 'a' and 'b' to each of the shorter strings
	var result []string
	for _, s := range shorterStrings {
		result = append(result, s + "a")
		result = append(result, s + "b")
	}
	
	return result
}

func main() {
	n := 2
	strings := generateStrings(n)
	for _, s := range strings {
		fmt.Println(s)
	}
}
