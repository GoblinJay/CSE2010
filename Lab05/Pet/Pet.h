/*
Pet class definition
File Name: Pet.h
*/

#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

class Pet{
    private:
        string species; // species of the pet
        string name; // name of the pet
        char sex; //sex of the pet
        double weight; // weight of the pet
        string DOB; // date of birth of the pet
    public:
    Pet (string s, string n, char se, double w, string d); // constructor
    ~Pet(); // destructor
    void setWeight (double w); // set weight
    void print() const; // print pet information
    bool isCat() const; // check if the pet is a cat
};
#endif