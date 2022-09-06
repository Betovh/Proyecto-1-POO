#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#ifndef PROYECTO1_FIGURE_H
#define PROYECTO1_FIGURE_H


class Figure{
public:
    int size, x, y;
    virtual void draw(int,int,int) = 0;
};


#endif //PROYECTO1_FIGURE_H
