#include<iostream>
using namespace std;
class Car{
    public:
         string brand,model,variant,fuel_type;
         int year;
        int price;
         void start(){
         cout<<model<<" started!"<<endl;

    }
         void park(){
            cout<<model<<" parked!"<<endl;
        
    }
         void stop(){
            cout<<model<<" stoped!"<<endl;
        
    }
        void display(){
            cout<<"brand"<<brand<<endl;
            cout<<"model"<<variant<<endl;
            cout<<"variant"<<variant<<endl;
            cout<<"fuel type"<<fuel_type<<endl;
            cout<<"launc year"<<year<<endl;
            cout<<"price"<<price<<endl;
        }   
         
};
int main(){
    Car c1;
    c1.brand="supra";
    c1.model="s22";
    c1.variant=" 2 seater";
    c1.fuel_type="diesel";
    c1.year=2022;
    c1.price=112222334;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}