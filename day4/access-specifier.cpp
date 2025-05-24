#include<iostream>
using namespace std;

class Bank {
    private:
        int balance = 0;
    public:
        string custName, custemail;
        int acnumber;

        void createAccount(string cName, string cEmail, int accountNum) {
            custName = cName;
            custemail = cEmail;
            acnumber = accountNum;
        }

        void displayInfo() {
            cout << "Customer Name: " << custName << endl;
            cout << "Customer Email: " << custemail << endl;
            cout << "Account Number: " << acnumber << endl;
        }

        // Setter
        void addBalance(int amount) {
            balance += amount;
            cout << "The amount is added to your account.\n";
        }

        // Setter
        void withdrawAmount(int amount) {
            if (amount <= balance) {
                balance -= amount;
                cout << "The amount has been withdrawn from your account.\n";
            } else {
                cout << "Insufficient balance!\n";
            }
        }

        // Getter
        void checkBalance() {
            cout << "Bank balance: " << balance << endl;
        }
};

int main() {
    Bank cust1;
    string name, email;
    int acNum, amount;

    cout << "--------- WELCOME TO BAHUBALI BANK ------------\n";
    
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your email ID: ";
    cin >> email;

    cout << "Enter the account number: ";
    cin >> acNum;

    cout << "Enter the amount to deposit: ";
    cin >> amount;

    // Creating account
    cust1.createAccount(name, email, acNum);
    cust1.displayInfo();
    cust1.addBalance(amount);
    cust1.checkBalance();

    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;
    cust1.withdrawAmount(amount);
    cust1.checkBalance();

    cout << "--------- THANK YOU FOR BANKING WITH US ------------\n";

    return 0;
}