package main

import (
    "fmt"
)

func zeroval(n int) {
    n = 0
}

func zeroptr(n *int){
    *n = 0
}

func main(){

    i := 2

    fmt.Println("value",i)

    zeroval(i)

    fmt.Println("Zeroval",i)

    zeroptr(&i)

    fmt.Println("zeroptr",i)

    fmt.Println("pointer",&i)

}