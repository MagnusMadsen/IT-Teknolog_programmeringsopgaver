#include <iostream>
#include <string>

using namespace std; 

#define newline "\n";


class Kunde {
    public:
        double formue = 0;
        int abonnement;
        void indsæt_penge (double);
        void beregn_abonnement ();
};

void Kunde::indsæt_penge (double beløb) {
    formue = formue + beløb;
}

void Kunde::beregn_abonnement () {
    if (formue < 100000.0) {
        abonnement = 0;
    }
    else if (100000.0 < formue < 250000.0) {
        abonnement = 50;
    }
    else if (formue >= 250000.0) {
        abonnement = 100;
    };
}

int main () {
    Kunde ucl;
    std::cout << ucl.formue << std::endl;
    ucl.formue = 50000.0;
    ucl.beregn_abonnement();
    std::cout << ucl.formue << std::endl; 
    std::cout << ucl.abonnement << std::endl;
    ucl.indsæt_penge(100000.0);
    ucl.beregn_abonnement();
    std::cout << ucl.formue << std::endl;
    std::cout << ucl.abonnement << std::endl;


return 0;

}
