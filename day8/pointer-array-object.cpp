#include<iostream>
using namespace std;
class Employee{
    private:
    string employeeID, employeeName;
    int experience;
    float salary;
    public:
    void addDetails(string id,string name, int exp, float salary){
          employeeID = id;
          employeeName = name;
          experience = exp;
          this->salary = salary;

    }
    void showDetails(){
        cout << " the Employee with name "<<employeeName<<"  bearing "<<employeeID<<"  haveing   "
                <<experience<<" years of experience and recieves a salary of Rs " <<salary<<"/-"<< endl;
    }
};
class Skill: public Employee { // derived class Skill inheriting from Employee single inheritance
    private:
    int  skillCount;
    string skills[10]; // normal array and static array of size 10 
    public:
    void setSkill( int count) {
        skillCount = count;
        cout<< " enter the "<< count << " technologies you're familiar with: "<< endl;
        for(int i = 0; i < count; i++) { //array intialization
            cout << "Skill " << (i + 1) << ": ";
            cin >> skills[i];
        }
        }
    void showSkills() {
        cout << "Skills known : "<<endl;
        for(int i = 0; i < skillCount; i++) { // display the skills array
            cout <<  i+1 <<" . "<< skills[i] << endl;
           
        }
    }

       
    };
int main(){
    string emp_name,emp_id;
    int emp_exp, skill_count;
    float emp_salary;
    cout<<" enter the following details of the employee:"<<endl;
    cout<<"  employee-ID,name,years of experience and salary: ";
    cin>> emp_id >> emp_name >> emp_exp >> emp_salary;
     // pointer refering the object s1 of skill class which can also inherit the properties of Employee class
    Skill s1;
    Skill *emp1 = &s1; // pointer object- *emp1
    emp1->addDetails(emp_id, emp_name, emp_exp, emp_salary); // using the pointer we are assign the value to the object
   // using the pointer we are calling the function of the object
    cout<<"enter the numbers of techonologies you know: ";
    cin >> skill_count;
    emp1->setSkill(skill_count); 
    emp1->showSkills(); 
}
   
