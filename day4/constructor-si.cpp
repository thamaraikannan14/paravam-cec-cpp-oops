#include<iostream>
using namespace std;

class Simple {
    private:
        int principal, term, rate, totalInterest;
        float rateInPercent;
    
    public:
        int simpleInterest = 0;
        
        // Default Constructor
        Simple() {
            term = 0;
            totalInterest = 0;
            principal = 0;
            rate = 0;
            rateInPercent = 0;
            cout << "Total interest earned: " << totalInterest << endl;
        }  
        
        void setValues(int a, int y) {  // setter function
            principal = a;
            term = y;
        }
        
        void setRateValueInteger(int rateInInteger) {  // setter function
            rate = rateInInteger;
        }
        
        void setRateValueFloat(float rateInFloat) {  // setter function
            rateInPercent = rateInFloat;
        }

        // Constructor for integer rate
        Simple(int p, int t, int r) {
            setValues(p, t);
            setRateValueInteger(r);                                                             
            simpleInterest = (principal * term * rate) / 100;
            
            cout << "Simple interest for the following details:" << endl;
            cout << "Principal amount: " << principal << endl;
            cout << "Number of terms or years: " << term << endl;
            cout << "Rate of interest (in integer): " << rate << endl;
            
            totalInterest = principal + simpleInterest;
            cout << "Total interest earned: " << totalInterest << endl;
        }

        // Constructor for float rate
        Simple(int p, int t, float rateInDecimal) {
            setValues(p, t);
            setRateValueFloat(rateInDecimal);
            simpleInterest = (principal * term * rateInPercent);
            
            cout << "Simple interest for the following details:" << endl;
            cout << "Principal amount: " << principal << endl;
            cout << "Number of terms or years: " << term << endl;
            cout << "Rate of interest (in decimal): " << rateInPercent << endl;
            
            totalInterest = principal + simpleInterest;
            cout << "Total interest earned: " << totalInterest << endl;
        }
        ~Simple(){
            cout << "This is a default constructor." << endl;
        }
};
int main() {
    int amount, year, rateOfInterest;
    float interestRate;

    Simple s1; // default constructor
    
    cout << "Enter the principal amount, number of years, and rate of interest (integer):" << endl; 
    cin >> amount >> year >> rateOfInterest;
    Simple s2(amount, year, rateOfInterest);  // constructor with two paramettters rate
    
    cout << "Enter the principal amount, number of years, and rate of interest (decimal):" << endl;
    cin >> amount >> year >> interestRate;
    Simple s3(amount, year, interestRate); // constructor with two parameters rate in float

    return 0;
}