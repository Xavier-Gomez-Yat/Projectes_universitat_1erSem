#include <iostream>

using namespace std;

int main (){

        int any;
        bool a,b;
        cin>>any;
        
        a=(any%4);
        b=(any%100);
        bool c=(any%400);
        

        if (a==0 && b==1){
            cout<<"A l'any "<<any<<" febrer te 29 dies";
            return 0;
        } if (c==0){
            cout<<"A l'any "<<any<<" febrer te 29 dies";
            return 0;
        } else {
            cout<<"A l'any "<<any<<" febrer te 28 dies";
            return 0;
        }

        

    return 0;
}