/*
Jason Huang
File Name: Pet_main.cpp
Date 10/9/23
File Description: Main file of Pet class, defines two pet objects.
*/

#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

int main(){
    //Pet cat
    Pet cat("Cat", "Virgo", 'M', 35, "09/17/23");
    cat.print();
    if (cat.isCat() == true){
        cout << "This pet is a cat\n\n";
    }
    else {
        cout << "This pet isnt a cat\n\n";
    }

    //Pet Armadillo
    Pet armadillo("armadillo", "Chonk", 'F', 90, "10/09/23");
    cat.print();
    if (armadillo.isCat() == true){
        cout << "This pet is a cat\n";
    }
    else {
        cout << "This pet isnt a cat\n";
    }
}