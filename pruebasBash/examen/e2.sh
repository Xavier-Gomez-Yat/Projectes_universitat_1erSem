#!/bin/bash

lineas=` wc -l < esportistes.txt`

for i in `seq 1 $lineas`
do
    cognom=$(head -$i esportistes.txt | tail -1 | cut -d: -f2 | grep -iE "^[A-M]")
    
    if [ -z $cognom ]
    then
        echo `head -$i esportistes.txt | tail -1` >> esportistesNZ
    else
        echo `head -$i esportistes.txt | tail -1` >> esportistesAM
    fi
done
