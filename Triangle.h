#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
#include "Figure.h"

#ifndef PROYECTO1_TRIANGLE_H
#define PROYECTO1_TRIANGLE_H

using namespace std;

class Triangle: public Figure{
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

        cout << "\n";
        for ( x = 0; x < size; x++)
        {
            for (y = 0; y <= x; y++)
            {
                cout <<"*";
            }
            cout << "\n";
        }

    }
};


#endif //PROYECTO1_TRIANGLE_H
