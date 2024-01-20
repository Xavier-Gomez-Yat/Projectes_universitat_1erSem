#!/bin/bash

function filtrarClub(){

    lineas=` wc -l < esportistes.txt`

    for i in `seq 1 $lineas`
    do
        nomClub=$(head -$i esportistes.txt | tail -1 | cut -d: -f6)

        if [ "$nomClub" == "$1" ]
        then
            echo `head -$i esportistes.txt | tail -1` >> club
        fi
    done
}

filtrarClub "$1"
