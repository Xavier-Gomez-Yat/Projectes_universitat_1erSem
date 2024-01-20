#!/bin/bash
#Fare servir la linia 10 en comptes de la linia 47

echo "Xavier Gomez Yat"

cp /etc/passwd input.txt

echo 'Introdueix 3 cadenes de caracters '
read a
read b
read c

cadena="$a:$b:$c"

echo `head -9 input.txt` >> output.txt
echo $cadena >> output.txt
echo `head -10 input.txt | tail -1 | cut -d: -f4-` >> output.txt
echo `tail +11 input.txt` >> output.txt
