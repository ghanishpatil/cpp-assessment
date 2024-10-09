#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle(){
    cout<<"I am a vehicle"<<endl;
  }
};

//Derived class twoWheeler(inherits from vehicle)
class TwoWheeler : public Vehicle{
  public:
  void twoWheeler(){
    cout<<"I have two wheels"<<endl;
  }
};

//Derived class bike(inherits form twoWheeler)
class Scooty : public TwoWheeler{
  public:
  void scooty(){
    cout<<"I am a scooty"<<endl;
  }
};

int main(){
  Scooty myscooty;
  
  //call methods of scooty, twoWheeler and vehicle through scooty object
  
  myscooty.scooty();          //scooty's method
  myscooty.twoWheeler();  //twoWheeler's method
  myscooty.vehicle();      //vehicle's method;
  
  return 0;
  
}