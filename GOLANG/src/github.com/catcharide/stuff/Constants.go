package main

import "fmt"
import "math"

const  a = "Constant"

func main(){

    const n = 30000

    const d = 3e20/n

    fmt.Println(d)

    fmt.Println(int64(d))

    fmt.Println(math.Sin(n))

}