#include<iostream>
#include<fstream>
using namespace std;
 int main(){
    // we have definied the write object from the ofstream class
    ofstream write("a.txt"); // opening the file $ write the object 
    write<<" Good Morning!"<<endl; // writing to the file
    write<<" we shall work on file handling in C++."<<endl; // writing to the file
    write.close(); // closing the file after writing


    ofstream fout("b.txt"); // opening the file $ write the object
    fout<<"written in the file using another user-deginied object. fout"<<endl; // writing to the file
    fout.close(); // closing the file after writing
    //  we can use word to make an object ,Ex: write,out, fout, fwrite, etc.


    ofstream out ("a.txt"); // opening the file $ write the object
    out.put('G');
    out<<"ood Morning!"<<endl; // writing to the file
    out.close(); // closing the file after writing

 }