#include<iostream>
using namespace std;
class Bike{
    public:
    string brand,model,engine_type;
    int year,price;
    void injectFuel() // internal data hideen from user
    {
        cout<<" injected the fuel -petrol"<<endl;

    }
    void igniteFuel()  // internal data hideen from user
    {
        cout<<" ignited the fuel"<<endl;
    }
    void start(string model){
        injectFuel(); // abstracted methods
        igniteFuel(); // abstracted methods
        cout<<model<<"started,HAPPY JOURNEY!"<<endl;
    }
    void stopAcceleration()  // internal data hideen from user
    {
        cout<<" acceleration stopped!"<<endl;
    }
    void stopFuelFlow() // internal data hideen from user
    {
        cout<<" fuel flow stopped!"<<endl;
    }
    void stop(){
        stopAcceleration(); //abstracted methods
        stopFuelFlow(); //abstracted methods
        cout<<model<<" STOPPED,LOCK THE vechile! "<<endl;
    }
};
int main(){
    Bike bike1;
    bike1.brand = "YAMAHA";
    bike1.model = "FZ-X";
    bike1.engine_type = "petrol";
    bike1.year = 2022;
    bike1.price = 150000;
  bike1.start( bike1.model);
    bike1.stop();
}
