package main

import (
    "fmt"
)

func main(){

    a := [5]int{1,2,3,4,5}

    kvs := map[string]int{"a1":1,"a2":2}

    s:= "String"

    var sum int

    for _,num := range a {
        sum += num
    }

    fmt.Println("sum",sum)

    for k , v := range kvs {
        fmt.Printf("%s -> %d\n",k,v)
    }

    for i, c := range s {
        fmt.Printf("%c is on position %d\n",c,i)
    }

    

}