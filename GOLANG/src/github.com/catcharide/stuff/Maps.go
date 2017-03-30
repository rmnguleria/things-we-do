package main

import (
    "fmt"
)

func main(){

    _map := make(map[string]int)

    _map["a1"] = 1
    _map["a2"] = 2

    fmt.Println(_map)

    fmt.Println("Map Size",len(_map))

    _, prs := _map["b1"]

    fmt.Println(prs)

    _,prs = _map["a1"]

    fmt.Println(prs)

    inMap := map[string]int{"a1":1,"a2":2}

    fmt.Println("in_map",inMap)
}