#include <iostream>
using namespace std;
class add
{
public:
    int num1, num2;
    float res;
    add()
    {
        num1 = 5;
        num2 = 10;
    }
    void showOutput()
    {
        cout << "addition: " << num1 + num2 << endl;
        cout << "subtraction: " << num1 - num2 << endl;
        cout << "multiplication: " << num1 * num2 << endl;
        cout << "quoient: " << num2 / num1 << endl;
        cout << "remainder: " << num2 % num1 << endl;
    }
};
int main()
{
    add c1;
    add c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    c2.showOutput();
}
