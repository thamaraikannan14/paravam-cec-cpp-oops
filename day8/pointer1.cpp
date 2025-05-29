#include<iostream>
using namespace std;
int main()
{
    int age;
    int *ptrage=&age; // address of age( pointer refernecing) 
    string name;
    string *namePtr=&name; // address of name( pointer refernecing)
    cout<<"Enter your  name & age: ";
    cin>>name>>age;
    //*ptrAge & *namePtr are dereferencing pointers
    cout<<"Your name is: "<< (*namePtr) << " you're "<<(*ptrage) << " years old"<<endl;// dereferencing pointer
    cout<<" the address of name is stored in pointer(namePtr) :"<< namePtr<<endl;
    cout<<" the address of age is stored in pointer( ptrage) :"<< ptrage <<endl;
    int *num1=new int(5); // dynamically allocating memory for an integer
    // the refernce variable is not needed to assign the address to the pointer we can use new keywordm
    cout<<"The value of num1 is: "<< (*num1) <<endl; // dereferencing pointer to get value
    int size;
    int *arr = new int[size]; // dynamically allocating memory for an array
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the "<<size<<" elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i]; // using pointer to access array elements
    }
    cout<<"The array contains: "<< size << " elements they are: "<< endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl; // using pointer to access array elements
    }
}