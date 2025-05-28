#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
     void setPersonDetails( string n,int a){
        name=n;
        age=a;
    }
    void showPersonDetails(){
        cout<<"my name is "<<name<<", and I'm  "<< age <<"years old!"<<endl;
    }

};
class Employee: public Person{ //person is deriving the employeee
    private:
    string company_name,emp_id;
    public:
    void setEmployeeDetails(string compName, string empId){
        company_name = compName;
        emp_id = empId;
    }
    void showEmployeeDetails(){
        cout<<"Im working in : "<< company_name <<", my employee ID is :"<< emp_id <<endl;

    }
    
};
class Developer: public Employee{  //person-> empolyee-> developer

    private:
    string deptName;
    int experience;
    public:
    void setDeveloperDetails(string dept, int exp){
        deptName = dept;
        experience = exp;
    }
    void showDeveloperDetails(){
        cout<<" I'm working in department " << deptName<< " department.I've " << experience
        <<"years of experience."<<endl;

    }
    
};
int main(){
    string personName,companyName,dept_Name,empolyee_id;
    int personAge,devExperience;
    cout<<" enter your name $ age:";
    cin>> personName>>personAge;
    cout<<" enter your company name $ employee id:";
    cin>> companyName>>empolyee_id;
    cout<<" enter your department name $ years of exeperience:";
    cin>>dept_Name>>devExperience;
    Developer dev1;   // object of developer class
     // dev1.name - cannot access private member out of class (person)
     // dev1.company-name - cannot access private member out of class (employee)
     // dev1.deptName - cannot access private member out of class (Developer)

     
    dev1.setPersonDetails(personName,personAge);
    dev1.setEmployeeDetails( companyName,empolyee_id);
    dev1.setDeveloperDetails(dept_Name,devExperience);

    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
    
}