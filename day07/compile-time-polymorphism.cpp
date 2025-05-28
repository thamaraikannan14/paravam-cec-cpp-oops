#include<iostream>
using  namespace std;
class Calculate{
    public:
      int result;
      float res; 
      // function overloading - compile time polymorphism
      int sum(int num){     // sum function expecting 1 parameter(int)
        result= num+num;
        return result;
      }
      int sum(int num1, int num2){   //sum function expecting 2 parameter(int)
        result= num1+num2;
        return result;
      }
      float sum(float n1, float n2){ // sum function expecting 3 parameters(float)
        res=n1+n2;
        return res;
      }

};
int main(){
    int number1,number2;
    float decimal1,decimal2;
    cout<<" enter any two integers: ";
    cin>> number1 >> number2;
    cout<< " enter any two decimal number ";
    cin>> decimal1>> decimal2;
    Calculate call;
    cout<< " adding the numbers itself: "<< call.sum(number1)<< endl;
    cout<< " addition of 2 integers: "<< call.sum(number1,number2)<< endl;
    cout<< " addition of 2 decimals: "<< call.sum(decimal1,decimal2)<< endl;
}