/*
Jason Huang
Date: 11/20/23
File Name: Palindromes.cpp
File Description: Uses recursion in order to read a text file and find palindromes
*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool palindrome(string phrase){
    //base case if phrase only has one character or less 
    if(phrase.size() <= 1){
        return true;
    }
    //base case if the characters in the first and last place dont match up (aka NOT a palindrome)
    if(phrase[0] != phrase[phrase.size()-1]){
        return false;
    }
    //general case that checks for a palindrome
    return palindrome(phrase.substr(1,phrase.size()-2));
}

void read(istream & in, vector<string> & v){
    string input; //initializes string
    //read from the file
    while(in >> input){
        //input has the string from the file
        v.push_back(input); // adds the value to vector
    }
}

int main(){
    vector <string> daBible; //empty vector of strings
    ifstream weReading; //file input
    //asks user for file name
    string filename;
    cout << "Aye drop a name for your file: ";
    cin >> filename;
    //we opening the file
    weReading.open(filename.c_str());
    //STOP we gotta see if it worked or not
    if(weReading.fail()){
        cout << "Wrong file dummy. It's not real\n";
        return 1;
    }
    else{
        //congrats you opened the file
        read(weReading,daBible); //we reading da bible haha
        //closing da bible after we done reading! 
        weReading.close();
        //time to start palindroming
        for (int i = 0; i < daBible.size(); i++){
            if (palindrome(daBible[i])){
                cout << daBible[i] << " is a palindrome\n";
            }
            else{
                cout << daBible[i] << " isnt a palindrome\n";
            }
        }
    }
    

    return 0;
}