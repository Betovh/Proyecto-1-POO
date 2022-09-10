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
private:
    int size, x, y;

public:

	//Getters y Setters
	void setSize(int size) {
		this->size = size;
	}
	int getSize() {
		if (size < 1)
			size = 2;
		return size;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		if (x < 1)
			x = 2;
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		if (y < 1)
			y = 2;
		return y;
	}

//--------------
    void draw(int,int,int) override {
        cout << "\n";
        for (  x = 0; x < size; x++) {
            for (y = 0; y < size; y++) {
                cout<<"*";
            }
            cout<<"\n";
        }
    }

    void drawHueco(int,int,int){
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
