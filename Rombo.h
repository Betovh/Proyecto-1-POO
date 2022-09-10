#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
#include "Figure.h"
#ifndef PROYECTO1_ROMBO_H
#define PROYECTO1_ROMBO_H
using namespace std;

class Rombo: public Figure{
private:
    int size, x, y;
public:

    //Getters y Setters
    void setSize(int size) {
        this->size = size;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    int getSize() {
        if (size < 1)
            size = 2;
        return size;
    }
    int getX() {
        if (x < 1)
            x = 2;
        return x;
    }
    int getY() {
        if (y < 1)
            y = 2;
        return y;
    }

//--------------
    void draw(int,int,int) override{

        for ( x = 0; x <= size ; x++) {
            for (y = size -x; y > 0; y--) {
                cout << " ";
            }
            for ( y = 0; y < x; y++) {
                cout << " *";
            }
            cout << endl ;
        }

        for ( x=0; x<=size; x++) {
            for (y=0; y<=x; y++){
                cout << " " ;
            }

            for (y=size-x-1; y>0; y--) {
                cout << " *";
            }
            cout << endl ;
        }
    }
};

#endif //PROYECTO1_ROMBO_H
