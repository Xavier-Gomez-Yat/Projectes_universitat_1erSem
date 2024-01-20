#!/bin/bash

opcio=1
while [ $opcio -ne 4 ]
do
    clear
    echo "Introdueix un numero del 1 al 4"
    read opcio
    case $opcio in
    1)
        echo "Opcio 1"
        #./script o algo
        read algo
        ;;
    2)
        echo "opcio 2"
        read algo
        ;;
    3)
        echo "opcio 3"
        read algo
        ;;
    4)
        echo "opcio 4: sortir"
        ;;
    *)echo "opcio no valida"
        read algo
        ;;
    esac
done
