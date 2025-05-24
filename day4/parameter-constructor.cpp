#include<iostream>
using namespace std;
class Area{
    private:
    int length,breadth;

    public:
    int l,b,res;
    Area(){ //default constructor (no parameters)
        length=0;
        breadth=0;

    }
    Area(int a,int b){ //parameterized constructor
        length=a;
        breadth=b;
        }
         void calculateArea(){
            res = length * breadth;
            cout<<"the area of rectangle is   "<<length<<" and breadth   "<<breadth<<"is equal to result   "<<res<<endl;

         }
};
int main(){
    int len,wid;
    Area rect1;
    rect1.calculateArea();
    cout<<" enter the length and breadth of rectangle";
    cin>>len>>wid; 
    Area rect2(len,wid);
    rect2.calculateArea();
    

}

