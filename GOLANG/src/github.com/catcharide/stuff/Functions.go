package main

import (
    "fmt"
)

func add(a int,b int) (int) {
    return a+b
}

func addadd(a int,b int,c int) (int) {
    return a+b+c
}

// Variadic Functions ??

func sum(nums ...int) (int){
    fmt.Println("nums",nums)
    total := 0
    for _,num := range nums {
        total += num
    }
    fmt.Println(total)

    return total
}

func main(){

    tot := sum(2)

    c := add(2,3)

    d := c + addadd(c,c,-c)

    fmt.Println(c,d,tot)

    sli := []int{1,2,3}

    tot = sum(sli...)

    fmt.Println(tot)

}