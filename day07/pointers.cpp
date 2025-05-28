#include<iostream>
using namespace std;
int main(){
    int a;
    // syntax for declaring a pointer
    // data_type *pointer_name;
    // data type of pointer should be same as reference variable
    // assigning address of variable to pointer:&variable_name
    //       * refers  to the pointer variable
    //       & refers to the address of the variable
    //    ptr refers to aDDRESS OF THE POINTER VARIABLE
    //*ptr refers to the value of the pointer 
    int *ptr=&a;
    float decimal;
     float *f=&decimal; // pointer to a float variable
    cout<<"Enter a number: ";
    cin>>a; // input value
    cout<<"Enter a decimal number: ";
    cin>>decimal; // input value
    cout<<"The value of a is: "<<a<<endl; 
    cout<<"The address of a is: "<<&a<<endl; 
    cout<<"The value of p is: "<<ptr<<endl;
    cout<<"The address of p is: "<<&ptr<<endl;
     cout<<"The value at address p is: "<<*ptr<<endl;

    cout<<"The value of decimal is: "<<decimal<<endl; 
    cout<<"The address of decimal is: "<<&decimal<<endl; 
    cout<<"The value of pointer is: "<<f<<endl;
    cout<<"The address of decimal is: "<<&f<<endl;
     cout<<"The value at address p is: "<<*f<<endl;
}