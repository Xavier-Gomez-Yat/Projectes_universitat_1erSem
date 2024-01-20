#!/bin/bash

lineas=`wc -l < esportistes.txt`

for i in `seq 1 $lineas`
do

    echo -n "Campos de la linea: $i = "
campos=$(head -$i esportistes.txt | tail -1 | grep -o ":" | wc -w)
    let campos=$campos+1
    echo $campos
    
done
