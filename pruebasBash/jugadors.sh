#!/bin/bash

jugadors=` wc -l esportistes `
let jugadors=jugadors-1
i=2

while [ $i -le $jugadors ]
do
    edad= `head -$i esportistes.txt | tail -1|cut -d: -f4`
    nombre= `head -$i esportistes.txt | tail -1 | cut -d: -f1
    apellido= `head -$i esportistes.txt | tail -1 | cut -d: -f2
    segundoApellido= `head -$i esportistes.txt | tail -1 | cut -d: -f3
    if [ $edad -lt 18 ];
        echo "$nombre $apellido $segundoApellido tiene $edad y es menor de edad"
    fi
    
    else [ $edad -ge 18 ];
        echo "$nombre $apellido $segundoApellido tiene $edad y es mayor de edad"
    fi
    
let i=i+1
done
