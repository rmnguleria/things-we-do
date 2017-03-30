package main

import "fmt"

func main(){

    messages := make(chan string)

    go func(){
        messages <- "ping"
    }()

    receivedMsg :=  <-messages

    fmt.Println(receivedMsg)

    moreMessages := <-messages

    fmt.Println(moreMessages)

}