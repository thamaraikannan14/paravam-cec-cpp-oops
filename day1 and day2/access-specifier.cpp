#include<iostream>
using namespace std;
class Bank{
    private:
    int balance=0;
    public:
    string custName,custemail;
    int acnumber;
    void createAccount(string cName,string cEmail){
        custName=cName;
        custemail=cEmail;
    }
    void displayInfo(){
        cout<<"customer name:"<<custName<<endl;
        cout<<" customer email"<<custemail<<endl;
    }
    //setter 
    void addBalance(int account ,int amount){
        balance+=amount;
        cout<<"the amount is added to your account"<<endl;
    }
    //setter
    void withdrawAmount(int account,int amount){
        balance-=amount;
        cout<<"the amount is withdrawn from your account"<<endl;
    }
    //getter
    void checkBalance(){
        cout<<"bank balance!"<<balance<<endl;
    }
};
int main(){
    Bank cust1;
    string name,email;
    int acNum,amount;
    // we can assign the to the public member
    //cust1.custname="akakj"
    cout<<"--------- WELCOME TO BAHUBALI BANK------------"<<endl;
    cout<<"enter your name";
    cin>>name;
    cout<<" enter your email id";
    cin>>email;
    cout<<" enter the account number";
    cin>>acNum;
    cout<<" enter the amount to deposited";
    cin>>amount;
    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNum,amount);
    cust1.checkBalance();
    cout<<" enter the amount to be withdrawn";
    cin>>amount;
    cust1.withdrawAmount(acNum,amount);
    cust1.checkBalance();
    cout<<" --------- THANK YOU FOR BANKING WITH US------------";

}
