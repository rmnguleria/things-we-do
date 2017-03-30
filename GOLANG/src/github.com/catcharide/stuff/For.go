package main

import "fmt"
import "math"

func vals(s string) (int,int) {
    fmt.Println("Lets find lat,long for location ",s)

    return 0,0
}

func main(){

    // Three types of For Loops in Go

    var i float64 = 1

    // 1.

    for i <=3 {
        fmt.Println(math.Sqrt(i))
        i = i+1
    }

    //2 .
    
    for j:=1; j<=10 ;j=+2 {
        fmt.Println(math.Log(float64(j)))
    }

    // 3.
    
    for {
        fmt.Println("loop")
        break
    }

    // multiple return values

    lat,lng := vals("Alaska")

    fmt.Println("lat",lat,"lng",lng)

    

}