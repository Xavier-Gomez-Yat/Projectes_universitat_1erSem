#!/bin/bash

echo "introdueix 2 nombres: \c"
read a
read b
echo introdueix la operacio:
read operand
resultat = 0

case $operand in 
+)
    let resultat = a + b
    ;;
-)
    let resultat = a - b
    ;;
"*")
    bc $resultat = $a * $b
    ;;
/)
    bc $resultat = $a / $b
    ;;
