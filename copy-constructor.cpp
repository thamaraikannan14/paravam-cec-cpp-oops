#include<iostream>
using namespace std;
 class Teacher{ 
    string branch; // by default, members are private
    public:
    string name,qualification;
    int experience;
    Teacher(){ // default constructor
        name = "PUSHPA RAJ";
        qualification = " PHD in AGRICULTURE";
        experience = 10;
        branch = "AIML";
        cout<< " welcome PUSHPA RAJ!"<<endl;
    }
     void setDta(string Tnmae,string Tbranch,string Tqual,int exp)
     { // setter
        name=Tnmae;
        branch=Tbranch;
        qualification=Tqual;
        experience=exp;
    }
    Teacher(string Teachername, string Teacherbranch, string Teacherqual, int Teacherexp) {
        setDta(Teachername, Teacherbranch, Teacherqual, Teacherexp);
        cout<< " welcome "<< name <<"to"<< branch<<" :"<<endl;
        cout <<" youre graduated in :" << qualification<<"degree.and you've:"<< experience <<"year of experience:"<<endl;
        
    }
    Teacher(Teacher &t)  // syntax for copy constructor:(REference-constructor address of object)
    {
        name = t.name;
        branch = t.branch;
        qualification = t.qualification;
        experience = t.experience;
        cout << "Copy constructor called for " << name << endl;
    }
    void getData() { //getter
       cout<< " welcome "<< name <<"to"<< branch<<" :"<<endl;
        cout <<" youre graduated in :" << qualification<<"degree.and you've:"<< experience <<"year of experience:"<<endl;
    }
    ~Teacher() { // destructor
        cout << "Destructor called for " << name << endl;
    }
    
 };
 int main() {
   string n,q, b;
   int e;
    Teacher t1; // object created
    cout<<"enter your name,quaclification,branch and experience"<<endl;
    cin>> n >> q>> b>> e;
    Teacher teacher2(n,b,q,e); // object created with parameterized constructor
    Teacher t3 = teacher2; 
    t3.getData();// object created with copy constructor
    cout<<"thank you for joining us!"<<endl;


 }