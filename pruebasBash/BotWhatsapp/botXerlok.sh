#!/bin/bash

numPalabras(){

    lineas=`wc -l < $1`
    
    num=0
    sumadorxd=1
    
    for i in `seq 1 $lineas`
    do
        nombre=`head -$i $1 | tail -1 | cut -d: -f2 | cut -d- -f2` 
        
        if [ " $2" == "$nombre" ] 
        then
            let num=num+sumadorxd
        fi
    done
    
    echo -n $2
    echo -n " Ha escrito "
    echo -n $num
    echo -n " mensajes"

}

numPalabras $1 "$2"
