#!/bin/bash

function funcio(){

    echo "Xavier Gomez Yat"

    cp /etc/passwd input.txt

    lineas=`wc -l < input.txt`
    cadena="$1:$2:$3:"
    
    for  i in `seq 1 $lineas` 
    do
        if [ `expr $i % 2` == 0 ]
        then
            echo -n $cadena>>output.txt
            echo `head -$i input.txt | tail -1 | cut -d: -f4-`>>output.txt
        else 
            echo `head -$i input.txt | tail -1`>>output.txt
        fi
    
    done
}

funcio $1 $2 $3
