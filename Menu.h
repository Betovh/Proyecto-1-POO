#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
#include "Figure.h"
#include "Square.h"
#include "Triangle.h"
#include "Rombo.h"
#ifndef PROYECTO1_MENU_H
#define PROYECTO1_MENU_H

using namespace std;
class Menu{

public:
    Square cuadrado;
    Triangle triangulo;
    Rombo rombo;
    int option;
    int size;
    void InputManager();

    void menuSquare() {


        Square cuadrado;

        cout << "\nIngrese la dimension del cuadrado: ";
        cin >> cuadrado.size;

        cout << "\nTipos de cuadrado";
        cout << "\n1.Cuadrado relleno";
        cout << "\n2.Cuadrado hueco";
        cout << "\nDigite una opcion:  ";
        cin >> option;

        if (option == 1) {
            cuadrado.draw(size,0,0);
        }
        if (option == 2) {
            cuadrado.drawHueco(size,0,0);
        }
    }

    void menuTriangle(){
        Triangle triangulo{};
        cout<<"\nIngrese  la dimension del triangulo: ";
        cin >> triangulo.size;
        triangulo.draw(size,0,0);
    }

    void menuRombo(){
        Rombo rombo;
        cout<<"\nIngresa la dimension del rombo: ";
        cin>>rombo.size;
        cout<<"  ";
        rombo.draw(size,0,0);
    }

};

//-----------------------------------------------

void Menu::InputManager(){
    int option_figure;
    cout<<"\nIngrese que figura quiere realizar";
    cout << "\n1. Cuadrado ";
    cout << "\n2. Triangulo ";
    cout << "\n3. Rombo ";
    cout << "\nDigite una opcion:  ";
    cin>>option_figure;


    switch (option_figure) {
        case 1:
            menuSquare();
            break;
        case 2:
            menuTriangle();
            break;
        case 3:
            menuRombo();
            break;
    }

};


#endif //PROYECTO1_MENU_H
