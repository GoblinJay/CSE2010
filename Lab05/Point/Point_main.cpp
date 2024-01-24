#include "Point.h"
#include <iostream>

using namespace std;

int main(){
    //Points
    Point p1(5,-3);
    Point p2(10,23); 

    //Point 1 info
    cout << "Point 1\n";
    p1.print();
    p1.quadrant();

    //Point 2 info
    cout << "Point 2\n";
    p2.print();
    p2.quadrant();

    //Distance
    p1.distance(p2);

    //Moving Point 2
    p2.move(3,12);

    //Distance
    p1.distance(p2);

    return 0;
}