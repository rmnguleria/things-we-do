package main

import "fmt"
import "time"

func main(){

    if 2==2 {
        fmt.Println("Stuff works")
    }

    if "bla"=="bla" {
        fmt.Println("Won't work")
    } else {
        fmt.Println("haa u kidding me")
    }

    // switch Statements

    switch time.Now().Weekday() {
    case time.Saturday,time.Sunday:
        fmt.Println("Fuckin Weekend Dude")
    default:
        fmt.Println("Damn u Work")
    }

    // Arrays

    // Weird Notation

    var a [5]int
    a[0] = 1
    b := [5]int{1,2,3,4,5}

    var _2darray [2][2]int

    for i:=0 ; i<2; i++ {
        for j:=0 ; j<2 ; j++ {
            _2darray[i][j] = i*j
        }
    }

}