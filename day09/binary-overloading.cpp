#include<iostream>
using namespace std;
class Complex{
    int real,imaginary; //private data members
    public:
    Complex(){
        real = 0;
        imaginary = 0;















    }
    Complex(int r, int i){ //parameterized constructor{
        real = r;
        imaginary = i;
    }   
    // binary operator overloading
    Complex operator+( const Complex &c){
        Complex temp; // temporary object to hold the result
        temp.real = real + c.real; // adding real parts
        temp.imaginary = imaginary + c.imaginary; // adding imaginary parts
        cout<<" first number: "<<real<<" + "<<imaginary<<"i"<<endl;
        cout<<" second number: "<<c.real<<" + "<<c.imaginary<<"i"<<endl;
        return temp; // returning the result
    }
    Complex operator-( const Complex &c){
        Complex temp; // temporary object to hold the result
        temp.real = real - c.real; // adding real parts
        temp.imaginary = imaginary - c.imaginary; // adding imaginary parts
        cout<<" first number: "<<real<<" + "<<imaginary<<"i"<<endl;
        cout<<" second number: "<<c.real<<" + "<<c.imaginary<<"i"<<endl;
        return temp; // returning the result
    }
   

    void showSum(){
        cout<<"Sum of 2 complex numbers: "<<real<<" + "<<imaginary<<"i"<<endl; // displaying the result

    }
    void
     showDifference(){
        cout<<"Difference of 2 complex numbers: "<<real<<" - "<<imaginary<<"i"<<endl; // displaying the result
    }
};
int main(){
    int r1, i1, r2, i2;cout<<" Enter real and imaginary parts of first complex number: EG.5+3i "<<endl;
    cin>>r1>>i1; 
    cout<<" Enter real and imaginary parts of second complex number: EG.10+6i "<<endl;
    cin>>r2>>i2;
    Complex comp1(r1, i1);  
    Complex comp2(r2, i2);
    Complex sum = comp1 + comp2;
    Complex diff = comp1 - comp2;
    cout<<"First complex number: "<<r1<<" + "<<i1<<"i"<<endl;
    cout<<"Second complex number: "<<r2<<" + "<<i2<<"i"<<endl;
    sum.showSum();
    diff.showDifference();
    return 0;
}
