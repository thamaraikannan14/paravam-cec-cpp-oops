#include<iostream>
using namespace std;
class Area{
    private:
    int length,breadth,height;
    float radius;
    public:
    int res;
    Area(){  //default constructor
        length=0;
        breadth=0;
        radius=0;
        res=0;
        height=0;
        cout<<" area:"<<res<<endl;
    
    }
    Area(int a){   // parameterised constructor with one parameter
        length=a;
        res=length*length;
        cout<<" area of square is "<<res<<endl;
    }
    Area( int c, int d){ // parameterised constructor with two parameters
        length=c;
        breadth=d;
        res=length*breadth;
        cout<<" area of rectangle is "<<res<<endl;
    }
    Area(float r){ // parametrised constructor with one  different parameter
        radius=r;
        res=2*3.142*radius;
        cout<<" area of circle is "<<res<<endl;
    }
    Area( int c, int d,int h){    // parametrised constructor with three parameters
        length=c;
        breadth=d;
        height=h;
        res=length*breadth*height;
        cout<<" area of cube is "<<res<<endl;
    }

};
int main(){
    Area a1;
    int len,wid,hgt;
    float rad;
    cout<<" enter the length of square: ";
    cin>>len;
    Area a2(len);  // 
    cout<<" enter the length and breadth of rectangle: ";
    cin>>len>>wid;
    Area a3(len,wid);
    cout<<" enter the radius of circle: ";
    cin>>rad;
    Area a4(rad);
      cout<<" enter the length and breadth and height of cube: ";
      cin>>len>>wid>>hgt;
      Area a5(len,wid,hgt);
        


}