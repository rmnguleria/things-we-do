package main 

import (
    "fmt"
    "math"
)

type geometry interface {
    area() float64
    perimeter() float64
}

type rect struct {
    width float64
    height float64
}

func (r rect)area() float64 {
    return r.height*r.width
}

func (r rect)perimeter() float64 {
    return 2*(r.height + r.width)
}

type circle struct {
    radius float64
}

func (c circle)area() float64{
    return math.Pi*c.radius*c.radius
}

func (c circle)perimeter() float64 {
    return 2*math.Pi*c.radius
}

func measure(g geometry) {
    fmt.Println(g)
    fmt.Println("Area of g",g.area())
    fmt.Println("Perimeter : ",g.perimeter())
}

func main(){
    c := circle{2}
    r := rect{20,30}
    measure(c)
    measure(r)
}