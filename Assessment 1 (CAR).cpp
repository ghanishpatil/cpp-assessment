#include <iostream>
#include <string>
using namespace std;

class car {
  public :
  //Properties
  string brand ;
  string model ; 
  int year ;
  
  //Function to display car info
  void displayinfo(){
    cout << "brand : " << brand << endl;
    cout << "model : " << model << endl;
    cout << "year : " << year << endl;
  }

};

int main(){
  //create an object for car
  car car1;
  car1.brand = "Ford";
  car1.model = " Mustang gt";
  car1.year = 1964;
  
  //create object for another car
  car car2;
  car2.brand = "mercedes";
  car2.model = "AMG";
  car2.year = 1991;
  
  //create object for another car
  car car3;
  car3.brand = "lamborghini" ;
  car3.model = "SVJ 63";
  car3.year = 2019;
  
  
  //Print attribute values 
  cout << "car1 information : " << endl;
  car1.displayinfo();
  cout << endl; //for better readability
  
  cout << "car2 information : " << endl;
  car2.displayinfo(); 
  cout <<  endl ; //for better readability
  
  cout << "car3 information : " << endl;
  car3.displayinfo();
  
  cout << endl;
  
  /*cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
  cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
  cout << car3.brand << " " << car3.model << " " << car3.year << "\n"; */
  
return 0 ;
}