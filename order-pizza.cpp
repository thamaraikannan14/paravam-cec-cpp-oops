#include<iostream>
using namespace std;
class Pizza{
    private:
    string secretIngredients;
    public:
    string pizzaType,size;
    int price;
    bool isPaymentDone;
    void orderPizza(){
        cout<<"order pizza by selecting your favorite pizza"<<endl;
    }
    void bookPizza(){
        cout<<"book to Pizza Hut!"<<endl;
    }
    void bakePizza(string type,string pizzaSize){
        pizzaType=type;
        size=pizzaSize;
        cout<< "pizza Type:" << pizzaType<<",size"<<size << endl;

    }
    void addIngrident(string secret){
        secretIngredients = secret; // internal data hidden from user
    }
    void confirmOrder(){
        cout<<" Order confirmed!"<<endl;
    }
    bool checkPayement( int money,bool payement){
        price=money;
        isPaymentDone=payement;
        if(isPaymentDone==true){
            cout<<"amount paid :RS."<< price<<",payement successfull!" << endl;
            confirmOrder();
            bookPizza();
            return true;
        }
            else{
                cout<<"amount DUE :RS."<< price<<",payement pending!" << endl;
                return false;
            }

    }
    void serverPizza(int amount,bool paid,string typeOfPizza,string sizeOfPizza,string secretItem){
       if(!checkPayement(amount,paid))
       {
        cout<<"order cancelled due to the pending payment"<<endl;
        return;
       }
       else{
        
       }
        bakePizza(typeOfPizza,sizeOfPizza);
        addIngrident(secretItem);
        
    }

};
int main ()
{
    string pizType,size,secretIng;
    int pizzaAmount;
    bool amountPaid;
    Pizza customer1;
    customer1.orderPizza();
    cout<<" enter the pizza type(veg/non-veg),size(regular/medium/large):";
    cin>>pizType>>size;
    pizzaAmount = 499; // example amount
    cout<<" did the pay the amount(type '1' if paid/type '0' if not paid):";
    cin>>amountPaid;
    customer1.serverPizza(pizzaAmount, amountPaid, pizType, size,secretIng); // example secret ingredient
    cout<<"thank you for ordering pizza!"<<endl;
    return 0;
}