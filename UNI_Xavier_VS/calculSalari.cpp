#include <iostream>

using namespace std;
/*
<3--->  +1%
3-5-->  +2%
>5-->   +3,5%
El salari final es: XX
*/
int main(){

    float salari;
    int anys;

    cin>>salari;
    cin>>anys;

    if(anys<3){
        salari = salari + (salari * 0.01);
        cout<<"\nEl salari final es: "<<salari;

        return 0;
    } else if (anys<5){
        salari = salari + (salari * 0.02);
        cout<<"\nEl salari final es: "<<salari;

        return 0;
    } else {
        salari = salari + (salari * 0.035);
        cout<<"\nEl salari final es: "<<salari;

        return 0;
    }


    
    return 0;
}