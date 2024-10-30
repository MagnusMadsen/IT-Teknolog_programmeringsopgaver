#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

class Kunde {
public:
    string navn;
    double indkomst;
    double tlf;
    double formue = 0;
    double rente = 0.0;
    int abonnement = 0;
    double rente_intægt = 0.0;

    void indsæt_penge(double beløb);
    void beregn_abonnement();
    void beregn_rente();
};

void Kunde::indsæt_penge(double beløb) {
    formue += beløb;
}

void Kunde::beregn_abonnement() {
    if (formue < 100000) {
        abonnement = 0;
    } else if (formue < 250000) {
        abonnement = 50;
    } else {
        abonnement = 100;
    }
}

void Kunde::beregn_rente() {
    if (formue < 100000) {
        rente = 2.5;
    } else if (formue < 250000) {
        rente = 3.75;
    } else {
        rente = 5.0;
    }

    rente_intægt = (formue / 100) * rente; // Årlig renteindtægt i procent
}

int main() {
    Kunde bruger;

    // Indtastningsoplysninger
    cout << "Hvad er dit navn? : ";
    cin >> bruger.navn;
    cout << "Velkommen " << bruger.navn << "\nVi skal lige bruge nogle informationer for at kunne udregne din årlige rente\n";

    cout << "Hvad er dit mobilnummer? : ";
    cin >> bruger.tlf;

    cout << "Hvad er din formue? : ";
    cin >> bruger.formue;

    cout << "Hvad er din indkomst? : ";
    cin >> bruger.indkomst;

    // Beregn rente og abonnement
    bruger.beregn_rente();
    bruger.beregn_abonnement();
    cout << "Den årlige rente er: " << bruger.rente << "%\n";
    cout << "Den årlige renteindtægt er: " << bruger.rente_intægt << " kr\n";
    cout << "Den månedlige abonnementspris er: " << bruger.abonnement << " kr\n";

    // Opdater formue med minutlig renteindtægt
    int minutter = 5;  // Antal minutter til demonstration
    double minut_rente_intægt = bruger.rente_intægt / (365 * 24 * 60); // Minutlig renteindtægt

    for (int i = 0; i < minutter; ++i) {
        bruger.formue += minut_rente_intægt;
        cout << "Efter " << (i + 1) << " minut(ter): Formue = " << bruger.formue << " kr\n";

        std::this_thread::sleep_for(std::chrono::minutes(1)); // Vent et minut
    }

    return 0;
}