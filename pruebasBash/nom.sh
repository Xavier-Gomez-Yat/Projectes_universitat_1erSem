#!/bin/bash

echo "Introdueix el nom"

read nomComp

lineas=`wc -l < esportistes.txt`

for i in `seq 1 $lineas`
do
    nom=$(head -$i esportistes.txt | tail -1 | cut -d: -f1)
    
    if [ $nom == $nomComp ]
    then
        head -$i esportistes.txt | tail -1
    fi
done
