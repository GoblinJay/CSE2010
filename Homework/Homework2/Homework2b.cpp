/*
Jason Huang
File Name: Homework2b.cpp
Date: 10/23/23
File Description: Prompts the user for a word, the # of letters and uses a function to display the permutation of the word with the # of letters
*/

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

//Function to calculate the permutation
int permutation(int n, int k){
    return factorial(n) / factorial(n-k);
}

int main(){
    //Variables
    string word;
    int letters = 0;

    //Prompt user
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter number of letters: ";
    cin >> letters;

    //Calculates permutation
    if (letters <= word.length()){
        cout << "Permutation of " << word << " and " << letters << " is " << permutation(word.length(), letters) << endl;
    }
    //Invalid
    else {
        cout << "Invalid input\n";
    }

    return 0;
}