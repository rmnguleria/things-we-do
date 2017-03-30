package main
import "fmt"

func printString(str string) {
    for i:=0 ; i<3; i++ {
        fmt.Println(str,":",i)
    }
}

func main(){
    fmt.Println("GoRoutines Example")
    printString("sync")

    go printString("async")

    go func(msg string){
        fmt.Println(msg)
    }("going")

    var input string
    fmt.Scanln(&input)

    fmt.Println("done")
}