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
int main(){
    string empName,empID;
    int empExp;
    float empSalary;
    cout<<" enter your name, employee-ID,years of experience and salary: ";
    cin>> empName >> empID >> empExp >> empSalary;
    Employee emp1; // object created
    Employee *empPtr = &emp1; // POINTER IS POINTING /REFERENCING THE OBJECT emp1
    (*empPtr).addDetails(empID, empName, empExp, empSalary); //  using the pointer we are assign the value to the object
    (*empPtr).showDetails(); // using the pointer we are calling the function of the object
     
    // using the pointer we are assigning the value to the object using arrow operator
    empPtr->addDetails(empID, empName, empExp, empSalary); // using the pointer we are calling the function of the object   
    empPtr->showDetails(); // using the pointer we are calling the function of the object
     Employee *ptrEmp = new Employee; // dynamically allocating memory for an object (no object refered)


//syntax: className *pointerName = new className;



     ptrEmp->addDetails(" we123", " kannan", 3, 233445566);
     ptrEmp->showDetails();

    //emp1.addDetails==(*empPtr).addDetails()== empPtr->addDetails // using the pointer we are calling the function of the object
}

