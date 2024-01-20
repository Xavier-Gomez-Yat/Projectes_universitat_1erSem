#!/bin/bash

echo Taules de multiplicar:

for taula in `seq 1 10`
do
    echo "generando tabla del $taula" > taula_del_$taula
    for fila in `seq 1 10`
    do
        multiplicasion = $taula * $fila
        echo "$taula X $fila es $multiplicasion" >> taula_del_$taula
    done
done
