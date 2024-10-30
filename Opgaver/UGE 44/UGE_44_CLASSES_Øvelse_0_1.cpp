#include <iostream>
#include <string>

using namespace std; 

#define newline "\n";


class Kunde {
    
    public:

        string navn;
        double indkomst;
        double tlf; 
        double formue = 0;
        float rente; 
        int abonnement;
        double rente_intægt;
        void indsæt_penge (double);
        void beregn_abonnement ();
        void rente_intægter ();
};

void Kunde::indsæt_penge (double beløb) {
    formue = formue + beløb;
}

void Kunde::rente_intægter () {

    if (formue < 100000) {
        rente = 2.5;
    }
    if ((formue > 100000) && (formue < 250000)) {
        rente = 3.75; 

    }
    if (formue >= 250000) {
        rente = 5; 
    };

    rente_intægt = (formue/100)*rente; 
}

void Kunde::beregn_abonnement () {
    if (formue < 100000) {
        abonnement = 0;
    }
    if ((formue > 100000) && (formue < 250000)) {
        abonnement = 50;

    }
    if (formue >= 250000) {
        abonnement = 100;
    };

}

int main () {
    
    Kunde bruger; 

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

    bruger.rente_intægter ();
    bruger.beregn_abonnement ();
    bruger.rente;

    cout << bruger.rente << "\n";
    cout << "Den årlige renteindtægt er " << bruger.rente_intægt << std::endl;
    cout << "Den månedlige abonnement koster " << bruger.abonnement << std::endl;


 return 0;

}
