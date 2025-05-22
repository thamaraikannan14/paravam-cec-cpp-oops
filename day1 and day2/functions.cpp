#include<iostream>
using namespace std;
void sayHello(){   //function declaration
    cout<<"hello, "<<endl;
}
int  sayHi(string name){
    cout<<"hii..."<<name<<endl;

}
int greed(string fname,string lname,int age){
    cout<<"hi,"<<fname<<" "<<lname<<"age "<<age<<endl;
}
int main(){
    string firstname,lastname,friendname;
    int age;
    cout<<" enter the first name";
    cin>>firstname;
    cout<<" enter the last  name";
    cin>>lastname;
    cout<<" enter the age";
    cin>>age;
    cout<<" enter the friend name";
    cin>>friendname;
    sayHello();
    sayHi(firstname);
    sayHi(friendname);
   
    greed(firstname,lastname,age);


}