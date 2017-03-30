package main

import (
    "errors"
    "fmt"
)

func f1(arg int) (int,error){
    if arg == 42 {
        return -1, errors.New("Can't work with 42 :( . System Broken . Dying !!. Help ! . ")
    }
    return arg+3,nil
}

type argError struct {
    arg int
    prob string
}

func (e *argError) Error() string {
    return fmt.Sprintf("%d - %s",e.arg,e.prob)
}

func div(a1 int,a2 int) (int,error) {
    if a2==0 {
        return -1, &argError{a2,"Can't divide by 0 . Noob Retarded Assface Human"}
    }
    return a1/a2,nil
}

func main(){
    fmt.Println(f1(42))
    fmt.Println(div(5,3))
    fmt.Println(div(3,0))
}