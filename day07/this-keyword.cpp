#include<iostream>
using namespace std;
class Name{
private:
  string name;
  public:
   void setName(string n){
        this->name = n;
   }
   void showName(){
        cout << "Name: " << name << endl;
   }
};
int main(){
    string studentName;
    cout<<"Enter your name: ";
    cin >> studentName;
     
    Name name1;
    name1.setName(studentName);
    name1.showName();
    return 0;
}