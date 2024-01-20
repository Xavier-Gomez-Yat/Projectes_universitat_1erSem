 #!/bin/bash

#agarrar el 4to campo separado por ,

tasca1-2(){
    
    lineas=`wc -l `< tail +2 $1 | sort -u``
    
    echo $lineas
    
    i=1
    
    echo "*************** HBBQO: El Nostre catàleg alfabètic es: ********************"
    echo "*****************************************************************************"
    
    for i in `seq 1 $lineas`
    do
    echo `tail +2 $1 | sort -u| sort -k4 -t, -n -r | head -$i | tail -1` >> output.txt
    done
    

    
}

tasca1-2 $1
