package main

import (
    "fmt"
)

type person struct {
    name string
    age int
}

func isYoung(human *person) bool {
    return human.age < 20
}

func main(){
    fmt.Println(person{"Bob",20})
    
    fmt.Println(person{name:"Bob",age:20})

    fmt.Println(person{age:20}) 

    fmt.Println(&person{"Bob",20})

    bob := person{"Bob",20}

    fmt.Println(bob.name,bob.age)

    bobby := &bob

    bobby.age=21

    fmt.Println(bobby)

    fmt.Println("Is Bob Young ? ",isYoung(&bob))
}