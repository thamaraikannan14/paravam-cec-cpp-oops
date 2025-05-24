#include<iostream>
using namespace std;
class Wish{
    private:
    string name;
     int age;
     public:
     Wish(){
        name=" unkown ";
        age=0;
     }
     Wish(string n,int a);
     void birthdayWishes();                                       //defining the rules of parameterized constructor ouide the class using scope resolution operator
    
};
Wish :: Wish(string n,int a){                                       //defining the rules of parameterized constructor ouide the class using scope resolution operator

    name=n;
    age=a;
}  
        void Wish ::  birthdayWishes(){
            cout<<" Happy Birthday "<< name <<"! now you're "<<age<<"year old"<<endl;
        }
int main(){
    string personName;
    int personAge;
    Wish person1;
    person1.birthdayWishes();
    
    cout<<" Enter your name: ";
    cin>>personName;
    cout<<" enter your age: ";
    cin>>personAge;

    Wish person2(personName,personAge);
    person2.birthdayWishes();
}