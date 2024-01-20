#include <iostream>

using namespace std;

int main(){

        int h,m,s;
        char c;


        //05:08:28 + 1s
        //A tener en cuenta: 
        /*s=59? i si si-->
        m=59? i si si -->
        h=23?

        h,m,[s]<10*/


        cout<<"introdueix l'hora en format 00:00:00 --->";
        cin>>h>>c>>m>>c>>s;

        if((h==23) && (m==59) && (s==59)){
                cout<<"00:00:00";
                return 0;
        }

        s+=1;

        

        if(s==60){
            s=0;
            m+=1;
        } 
        if(m==60){
            m=0;
            h+=1;
        }
        if(h==24){
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
        
        
        
        return 0;
}