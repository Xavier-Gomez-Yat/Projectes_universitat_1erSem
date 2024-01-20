#include <iostream>

using namespace std;

void coordenades(int Xmin, int Xmax, int Ymin, int Ymax, int &posX, int &posY, int direccio){

    bool dins = 1;
    int posX0, posY0;
    posX0 = posX;
    posY0 = posY;

    switch(direccio){
        case 1:
            posX--;
        break;
        case 2:
            posX++;
        break;
        case 3:
            posY--;
        break;
        case 4:
            posY++;
        break;
        default:
        break;
    }

    if(posX > Xmax || posX < Xmin){
        dins = 0;
    } 
    if(posY > Ymax || posY < Ymin){
        dins = 0;
    }

    if (dins == 0){
        posX = posX0;
        posY = posY0;
    }

}

int main(){

    int Xmin,Xmax,Ymin,Ymax,X,Y,direccio = 0;

        cin>>Xmin>>Xmax>>Ymin>>Ymax;

        while(Xmax < Xmin || Ymax < Ymin){
          cin>>Xmin>>Xmax>>Ymin>>Ymax;
        }

        cin>>X>>Y;

        while((Xmax < X) || (Xmin > X) || (Ymax < Y) || (Ymin > Y)){
            cin>>X>>Y;
        }
    while (direccio != 5){
        cin>>direccio;

        if (direccio == 1 || direccio == 2 || direccio == 3 || direccio == 4){
            coordenades(Xmin,Xmax,Ymin,Ymax,X,Y,direccio);
            cout<<"("<<X<<","<<Y<<")"<<endl;
        }


    }

    return 0;
}