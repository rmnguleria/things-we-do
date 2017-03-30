package main

import "fmt"

func main(){

    a := make([]string , 3)

    fmt.Println("a: " ,a)

    a[0] = "YOu "
    a[1] = "are "
    a[2] = "___" 

    fmt.Println("a: " ,a)

    a = append(a,"but ")
    a = append(a,"you ")

    // create a copy of a slice , No brainer use copy

    copied := make([]string,len(a))

    copy(copied,a)

    // now lets slice a slice ??

    l := a[1:4]

    fmt.Println(l)

    // Use slices to make multi dimensional data structure , different than matrices.
    
    md := make([][]int,3)

    for i:=0 ;i<3 ;i++ {
        innerLen := i+1
        md[i] = make([]int,innerLen)
        for j:=0 ;j<innerLen ; j++ {
            md[i][j] = j
        }
    }

    fmt.Println("md: ",md)

}