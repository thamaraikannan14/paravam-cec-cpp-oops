#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream read("a.txt");
    string file_content;
    //syntax for using the get line():
   // getline(object,string)
    getline(read, file_content); // reading the first line of the file
    cout <<" the file line contains:"<< endl; // displaying the content of the file
    cout<< file_content << endl; 
     //read.close();
    // to print  all the lines we need contains using loop
    ifstream show("a.txt");
    string all_lines; // variable to store the content of the file
    cout<< " THE FILE CONTAINS" << endl;
    while(getline(show, all_lines)) { // reading the rest of the file line by line
        cout << all_lines << endl; // displaying the content of the file
    }
    read.close(); // closing the file after reading
 // to print the first character of the file
    ifstream fin("a.txt");
    char letter;
    fin.get (letter); // reading the first character of the file
    cout << "The first letter of the file is: " << letter << endl; // displaying the first character
    fin.close(); // closing the file after reading
    
}