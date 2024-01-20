#!/bin/bash

function xd(){

grep "$2.*,.*,.*,$3" $1 | sort -u -t, -k1 > pruebasAxl.txt

}

xd $1 "$2" $3
