#!/bin/bash

function iguals(){
camp1=`cut $1 -d: -f1`
camp2=`cut $1 -d: -f2`
camp3=`cut $1 -d: -f3`

    if [ $camp1 = $camp2] && [$camp2 = $camp3 ]
    then 
        echo "IGUALS!!!"
        echo $camp1
        echo $camp2
    else 
        echo "DIFERENTS!!!"
    fi

}

read file
iguals $file
