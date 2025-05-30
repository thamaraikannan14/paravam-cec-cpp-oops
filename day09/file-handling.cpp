#include<iostream>
#include<fstream> //header file for handling the files (read/write)
using namespace std;

int main(){
    //fstream header file consist of 3 class
    //fstreambase
    //ifstream (it is dervied from fstreambase) - read from the file
    //ofstream(it is dervied from fstreambase)  - write to the file 
    // writing the file
    
    ofstream out ("sample.txt");
    string name;
    int age;

    cout<<"Enter your name and age: ";
    cin>>name>>age;
    out << "Hello " << name << "!" << endl;
    out << "You're " << age << " years old." << endl;
    out.close();

    ifstream read("abd.txt");
    string line;
    getline(read, line);
    cout<< "File Contains: " << line << endl;
    
    read.close();
}