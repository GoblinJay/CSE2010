/*
Jason Huang
File Name: Car.h
Date: 10/23/23
File Description: Main.cpp file for Car class
*/

#include <iostream>
#include "Car.h"
#include <string>
using namespace std;

int main(){
    //Car classes
    Car toyota("Toyota","Corolla",2023,41);
    Car porsche("Porsche","718 Caymen", 2024, 27);

    //Car Info
    toyota.print();
    porsche.print();

    //Compares MPG
    if (toyota.better_MPG(porsche)){
        cout << "Toyota has better milage\n";
    }
    else {
        cout << "Porsche has better milage\n";
    }

    return 0;
}