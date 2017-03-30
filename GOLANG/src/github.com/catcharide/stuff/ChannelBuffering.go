package main

import "fmt"

func main(){

    messages := make(chan string,2)

    messages <- "Msg1"

    messages <- "Msg2"

    fmt.Println(<-messages)

    fmt.Println(<-messages)
}