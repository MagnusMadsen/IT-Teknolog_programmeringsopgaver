#include <iostream>
#include <string>

using namespace std; 

struct person {

    string navn;
    int tlf; 
    double formue;

};

int main () { 

    person bruger {"Magnus"}; 

    cout << "Hvad er dit navn? : "; 
    cin >> bruger.navn; 
    cout << "\n"; 

    cout << "velkommen" << bruger.navn << "\n" << "\n"; 




}