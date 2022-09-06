#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
#include "Figure.h"

#ifndef PROYECTO1_SQUARE_H
#define PROYECTO1_SQUARE_H

using namespace std;

class Square: public Figure {
public:
    void draw(int, int, int) override {
        cout << "\n";
        for (  x = 0; x < size; x++) {
            for (y = 0; y < size; y++) {
                cout<<"*";
            }
            cout<<"\n";
        }
    }

    void drawHueco(int, int, int){
        cout << "\n";
        for( x=0;x<size;x++){
            for( y=0;y<size;y++){
                if(x==0||y==0||(x==size-1)||(y==size-1)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }

};
#endif //PROYECTO1_SQUARE_H
