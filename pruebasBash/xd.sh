#!/bin/bash

i=1
while [ $i -le 10 ]
do
    read palabra
    echo $palabra
    let i=i+1
done

for z in `seq 1 10`
do
    echo $z
    
done
