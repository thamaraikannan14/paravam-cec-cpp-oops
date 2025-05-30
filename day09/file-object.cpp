#include<iostream>
#include<fstream>
using namespace std;
class Car{
    private:
    string brand, model,variant,feature[10];
    int year, price,featureCount;
    
       public:
     void addCarDetails(string carBrand, string carBModel, string carVariant, int year, int price) {
        brand = carBrand;
        model = carBModel;
        variant = carVariant;
        this->year = year;
        this->price = price;
     }
        void addCarFeatures(int count) {
            featureCount = count;
            cin.ignore(); 
            cout << "Enter the " << count <<"features of the car: " << endl;
            for (int i = 0; i < count; i++) {

                cout<<"features -"<<i+1 << ":";            // to ignore any newline character left in the input buffer
                 getline(cin,feature[i]);

        }
        cout<<" click enter the button for next input"<<endl;
    }
        void storeCarDetails() {
            ofstream store("car_details.txt",ios::app); // open file in append mode

            store << "Car Details: " << endl;
            store << " carBrand: " << brand << endl;
            store << " carModel: " << model << endl;
            store << " carVariant: " << variant << endl;
            store << " launchYear: " << year << endl;
            store << "Price: Rs." << price << endl;
            store << "Features: " << endl;
            for (int i = 0; i < featureCount; i++) {
                    store <<"\t" << i + 1 << ". " << feature[i] << endl;
                }
                store << "<--------------------------------------------------------------------------->"<<endl;
            }
};
int main() {
    string car_brand, car_model, car_variant,car_feature[10];
    int feature_count, launch_year, launch_price;
    cout<< " enter the car details:";
    cout<<"Ex: Toyota, Corolla, Hybrid, 2023, 2500000"<< endl;
    cout<<" brand, variant, variant,launchyear,launchprice: "<< endl;
    cin>> car_brand >> car_model >> car_variant >> launch_year >> launch_price;
    cout << "Enter the number of features: "; 
    cin >> feature_count; 
    // to ignore any newline character left in the input buffer 
    Car car1;
    car1.addCarDetails(car_brand, car_model, car_variant, launch_year, launch_price);
    car1.addCarFeatures(feature_count);
    car1.storeCarDetails();
    Car car2;
    car2.addCarDetails("Honda", "Civic", " petrol", 2022, 3000000);
    car2.addCarFeatures(3);
    car2.storeCarDetails();
    cout << "Car details stored successfully!" << endl;
}