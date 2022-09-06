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
public:
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
