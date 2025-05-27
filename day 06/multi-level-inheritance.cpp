#include<iostream>
using namespace std;
class Animal{ //base class
    public:
    string name;
    void setName(string animalName){   //setter
        name = animalName;
    }
    string showAnimal(){      //getter
        cout<<"Animal Name: "<<name<<endl; 
    }

};
// animal-> caenivor (symbolic representation)
// animalclass is derving the carnivors class
// carnivore class is derived from animal class
class Carnivore: public Animal
{                                   //dervied class /base class - level-01
    string vegetarian;              
    public:
    void setFood(string food){
        vegetarian=food;

    }
    string showFood(){
        cout<<" food type of animal: "<< vegetarian <<endl;
    }
      
};
// mammal-> carnivore(symbolic representation)
class Mammal: public Carnivore{ // derived class /base class - level-02
    string habitat;
    public:
    void setHabitat( string place){
        habitat = place;
    }
    void showHabitat(){
        cout<<"living space: "<< habitat <<endl;
    }
};
 int main(){
    string animal_name,food_type,place_of_living;
    cout<<"Enter animal name, food type and place of living: ";
    cin>>animal_name>>food_type>>place_of_living;
    Animal a1;
    a1.setName(animal_name);

    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
 }