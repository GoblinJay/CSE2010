/*
Jason Huang
File Name: Quick Sort & Binary Search.cpp
Date: 11/25/23
File Description: Reads input from a .txt file and sorts/searches it
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void swap(int& x, int& y){
    //swap values using a temp variable
    int temp = x;
    x = y;
    y = temp;
}

int partition(vector<int> & v, int start, int end){
    //initialize pivot value to the end of vector
    int pivot = v[end];
    //temp value used as the pivor placeholder
    int temp = start;
    //index to move through the vector
    int i = start;
    //loop 
    while (i < end){
        //checks if i <= pivot, if true we swap element with temp pivot and move temp over 1
        if(v[i] <= pivot){
            swap(v[i], v[temp]);
            temp++;
        }
        i++; //prevents infinite loops
    }
    //final swap to put pivot in right location
    swap(v[temp], v[end]);
    //returns final position
    return temp;
}

void quicksort(vector<int> & v, int beg, int end){
    if(beg >= end || beg < 0){ // checks if the element is within the parameters 0 > beg > end
        return;
    }
    //general case partition and gets index
    int pivot = partition(v, beg, end);
    //divides into left and right sub-vectors
    quicksort(v, beg, pivot - 1); //left sub
    quicksort(v, pivot + 1, end); //right sub
}

void read(istream & in, vector<int> & v){
    int input; //initializes string
    //read from the file
    while(in >> input){
        //input has the string from the file
        v.push_back(input); // adds the value to vector
    }
}

void write(ostream & out, const vector<int> & v){
    for(int num : v){
        out << num << endl;
    }
}

int binarySearch(const vector<int> & v, int lo, int hi, int value){
    //base class if we dont have a search interval and we didnt find the value
    if(lo > hi){
        return -1;
    }
    //base class for if we find the value
    int mid = (lo + hi) / 2;
    if(v[mid] == value){
        return mid;
    }
    //general case that searches each side of the vector
    if(v[mid] < value){
        return(binarySearch(v, mid + 1, hi, value)); //right sub vector
    }
    else{
        return(binarySearch(v, lo, mid - 1, value)); //left sub vector
    }
}

int main(){
    vector <int> beepboop; //empty vector of strings
    ifstream weReading; //file input
    ofstream weSpeakin; //file output
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
        read(weReading,beepboop); //we reading beepboop
        //closing beepboop after we done reading! 
        weReading.close();
    }
    quicksort(beepboop, 0, beepboop.size() - 1); // sorts beepboop

    //OUTPUT file
    weSpeakin.open("sorted.txt");
    if(weSpeakin.fail()){ //gotta see if its broken
        cout << "Something went wrong :("; 
        return 1;
    }
    else{
        write(weSpeakin, beepboop); //we wrote it down!
        weSpeakin.close(); //gotta finish talking at some point
    }
    //its binary search timeee
    int weSearching[] = {12589, 24646, 7451, 20324};
    for (int value : weSearching){
        int result = (binarySearch(beepboop, 0, beepboop.size() - 1, value));
        if (result != -1){ // we found the value hooray
            cout << "Value " << value << " found at index " << result << endl;
        }
        else{ // we didnt find the value hooray
            cout << "Value " << value << " not found" << endl;
        }
    }
    return 0;
}