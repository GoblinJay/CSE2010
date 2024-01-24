#include <iostream>
using namespace std;

bool is_odd(int n){
    if (n % 2 == 0){
        return false;
    }
    else {
        return true;
    }
}

int main(){
    int start = 0, end = 0;

    cout << "Please enter a starting number: ";
    cin >> start;
    cout << "Please enter a ending number: ";
    cin >> end;
    if (start >= end){
        cout << "Error starting number is higher than ending. Try again.\n";
        return 1;
    }

    int sum = 0;

    cout << "Odd numbers between " << start << " and " << end << " are: ";
    for (int i = start + 1; i < end; i++){
        if (is_odd(i)){
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum of odds are: " << sum << endl;
    
    return 0;
}