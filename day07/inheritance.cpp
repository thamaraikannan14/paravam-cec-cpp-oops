#include<iostream>
using namespace std;
class Parent{
    private:
    int net_worth=0;;
    public:
    string family_name,family_head;
    int number_of_members;
    void setData(int worth,string familyName,string familyHead,int member_count)
    {
        net_worth = worth;
        family_name = familyName;
        family_head = familyHead;
        number_of_members = member_count;

    }
    int  showNetWorth(){ //getters
        return net_worth;
    }
    int  getFamilyInfo(){ //getter
        cout<<"i'm from:"<<family_name
        <<" family,my family head is "<<family_head<<",our family's net worth is "
        << showNetWorth() << endl;
    }
};
     // syntax for derving a  dervied class:
     //class derived-class-name: accessibility-mode base-class-name

     //1]by default : dervide class uses private accessbility mode;

     // 2) if dervided class uses private accessibilty mode then public data &
        // member function of the base class  will be private;
    
     // 3) if dervided class uses public accessibilty mode then public data &
     // member function of the base class  will be public;
     // 4) dervided class cannot inherit the data & member functions of private members of base class;


//class Child : Parent{ // dervied class ( by default private accessibilty mode)
//class Child : private Parent{ // dervied class (private accessibilty mode)
class Child : public Parent
{ // dervied class (public accessibilty mode)
    public: 
    string member_name;
    int age;
    void addDetails(string name, int person_age)
    {
        member_name = name;
        age = person_age;
    }
    void getFamilyDetails(){ //member function
       cout<<"my name is"<<member_name<<"and i'm"<<age<<"years old."<<endl;
       getFamilyInfo(); //inherting the properties of Parent class
    }
};
int main(){
    string fname,fHead,cName;
    int childAge,fWorth,fMembers;
    cout<<"Enter your family name,family gead and number of members & net worth: ";
    cin>>fname>>fHead>>fMembers>>fWorth;
    Parent p1;

    p1.setData(fWorth, fname, fHead, fMembers);
    p1.getFamilyInfo();
    cout<<"Enter your name and age: ";
    cin>>cName>>childAge;
    Child c1;
    // c1.family_head; (as child class is dervied with public- accessibility mode)
    // we can directly access the public data of the base class)
    c1.setData(fWorth, fname, fHead, fMembers);
    c1.addDetails(cName, childAge);
    c1.getFamilyDetails();
    return 0;
}
