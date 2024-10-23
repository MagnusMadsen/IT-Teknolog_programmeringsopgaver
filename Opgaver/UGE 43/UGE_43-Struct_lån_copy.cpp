#include <iostream>
#include <string>

using namespace std; 

#define newline "\n";

struct person {

    string navn;
    double formue;
    double indkomst;
    double tlf; 
    

};

int main () { 

    person bruger; 

    cout << "Hvad er dit navn? : "; 
    cin >> bruger.navn; 
    cout << "\n";

    cout << "velkommen " << bruger.navn << "\n" << "\n" << "vi skal lige bruge nogle informationer for at kunne udregne din årlige rente" << "\n"; 

    cout << "\n" << "\n"; 

    cout << "Hvad er dit mobilnummer? : "; 
    cin >> bruger.tlf; 
    cout << "\n" << "\n";

    cout << "Hvad er din formue? : "; 
    cin >> bruger.formue; 
    cout << "\n" << "\n";

    cout << "Hvad er din indkomst? : "; 
    cin >> bruger.indkomst; 
    cout << "\n" << "\n";


double rente;
double abonnement;



if (bruger.formue < 100000) { 
        // Sæt rente til 2.5% hvis sandt
        rente = 0.025; 
    } 
    // Check hvis bruger.formue under 250000
    else if (bruger.formue < 250000) { 
        rente = 0.0375;
    }
    else if (bruger.formue >= 250000) {
        rente = 0.05;
    }
    if (bruger.formue < 250000) {
        abonnement = 0;
    }
    else if (bruger.formue < 500000) {
        abonnement = 50;
    }
    else if (bruger.formue >= 500000) {
        abonnement = 100;
    }

    double renteindtægt = bruger.formue*rente; // Saldo gange rente som decimaltal giver den årlige rendetindtægt
    
    cout << "Den årlige renteindtægt er " << renteindtægt << std::endl;
    cout << "Den månedlige abonnement koster " << abonnement << std::endl;


 return 0;

}

