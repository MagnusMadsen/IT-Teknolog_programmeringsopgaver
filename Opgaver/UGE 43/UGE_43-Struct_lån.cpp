#include <iostream>
#include <string>

using namespace std; 

struct person {

    string navn;
    int tlf; 
    double formue;

};

int main () { 

    person magnus {"Magnus"}; 

    cout << "Hvad er dit navn? : "; 
    cin >> magnus.navn; 
    cout << "\n"; 

    cout << "velkommen" << magnus.navn << "\n" << "\n"; 


}
