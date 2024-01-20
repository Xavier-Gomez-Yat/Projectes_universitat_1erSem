#!/bin/bash
suma=0
funcio2(){
local suma=$(($1+$2))
echo Dins: $suma
}
funcio2 2 2
echo Fora: $suma
funcio2 10 5
echo Fora: $suma
