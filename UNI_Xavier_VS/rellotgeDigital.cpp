#include <iostream>
#include <stdio.h>
#include <unistd.h>
using namespace std;
  


int main()
{
    int h,m,s,i = 0;
        char c;
    
    cout<<"introdueix l'hora en format 00:00:00 --->";
        cin>>h>>c>>m>>c>>s;
    
    do{
        s++;

        if((h==23) && (m==59) && (s==60)){
                m=0; s=0; h=0;
        }

        if(s==60){
            s=0;
            m+=1;
        } 
        if(m==60){
            m=0;
            h+=1;
        }
        if(h==23 && m==60){
            h=0;
        }


        if (h<10){
                cout<<0<<h<<c;
        }
        if(h>=10){
            cout<<h<<c;
        }


        
        if (m<10){
                cout<<0<<m<<c;
        }
        if(m>=10){
            cout<<m<<c;
        }

        
        
        if (s<10){
                cout<<0<<s;
        }
        if(s>=10){
            cout<<s;
        }
        sleep(1);
        cout<<endl;
        i++;
    }while(i<5);

    return 0;
}