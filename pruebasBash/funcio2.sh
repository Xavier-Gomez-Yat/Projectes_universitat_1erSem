#!/bin/bash
var1=“fora”
var2=“fora”
var_funcio(){
var1=“dins”
local var2=“dins”
var3=“dins”
echo $var1 $var2 $var3
}
echo $var1 $var2
var_funcio
echo $var1 $var2 $var3
