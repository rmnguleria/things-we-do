package main

import "fmt"
import "time"

func worker(ch chan bool){
    fmt.Println("working...",time.Second)
    time.Sleep(time.Second)
    fmt.Println("done")

    ch <- true
}

func main(){
    ch := make(chan bool)

    go worker(ch)

    <-ch
}