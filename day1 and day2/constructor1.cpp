#include <iostream>
using namespace std;

class Customer
{
public:
    string firstname, lastname;
    int age, rating;
    // intialised the constructor
    Customer()
    {
        firstname = "john";
        lastname = "doe";
        age = 25;
        rating = 5;
    }
    void showDetails()
    {
        cout << "customer name:" << firstname << " " << lastname << endl;
        cout << "customer age:" << age << endl;
    }
    void giveRating(int rate);
    void showRating()
    {
        cout << "you're given" << rating << " star rating,thanku!" << endl;
    }
};
// scope resultion operator
void Customer::giveRating(int rate) //define the  member function
{
    rating = rate;
}
int main()
{
    Customer c1; // invoked the constructor to assign the default values
    c1.showDetails();
    c1.showRating();
    Customer c2;
    c2.firstname = " thamarai";
    c2.lastname = "kannan";
    c2.age = 17;
    int starRating;
    cout << "give your rating(0 to 5)";
    cin >> starRating;
    c2.showDetails();
    c2.giveRating(starRating);
    c2.showRating();
}