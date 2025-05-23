#include<iostream>
using namespace std;

//syntax
//class class_name
class Student{
    public:
    string name,college,branch;
    int sem;                     //data
    
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"college:"<<college<<endl;
        cout<<"branch:"<<branch<<endl;
        cout<<"semester:"<<sem<<endl;
    }
};
int main(){
    Student student1; //object creation
    student1.name=" kannan";//assigning the values to the the calss using object
    student1.college=" cec";//assigning the values to the the calss using object
    student1.branch=" AIML";
    student1.sem= 2;//assigning the values to the the calss using object
    student1.show();

    Student student2; //object creation
    student2.name=" krishna";//assigning the values to the the calss using object
    student2.college=" cec";//assigning the values to the the calss using object
    student2.branch=" AIML";
    student2.sem= 2;
    student2.show();




}