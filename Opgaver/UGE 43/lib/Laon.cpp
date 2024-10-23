//lån 

#include <iostream>
#include <string>

#define newline "\n"

int main ()
{

 
int formue;
double rente1 = 2.5;
double rente2 = 3.75;
double rente3 = 5.0;


std::cout << "*********Velkommen til din årlige renteudregner*********" << newline;
std::cout << newline << newline;


std::cout << "Indtast den angivet formue herunder: " << newline;
std::cin >> formue;

std::cout << newline << newline;

if (formue < 100000)
{
    std::cout << "Formuen er under 100.000 kr. "; 
    std::cout << newline; 
    std::cout << "Det giver en årlig rente på: " << rente1 << "%" << newline;

    std::cout << newline;

    std::cout << "Det giver en årlig renteintægt på: " << ((formue*rente1*360)/(360*100)) << " kr. " << newline;

}

if  (formue >= (100000) && formue <= (250000))
{
    std::cout << "Formuen er imellem 100.000 og 250.000 kr. "; 
    std::cout << newline; 
    std::cout << "Det giver en årlig rente på: " << rente2 << "%" << newline;

    std::cout << newline;

    std::cout << "Det giver en årlig renteintægt på: " << ((formue*rente2*360)/(360*100)) << " kr. " << newline;

}

if (formue >= (250001))
{
    std::cout << "Formuen er over 250.000 kr. "; 
    std::cout << newline; 
    std::cout << "Det giver en årlig rente på: " << rente3 << "%" << newline;

    std::cout << newline;

    std::cout << "Det giver en årlig renteintægt på: " << ((formue*rente3*360)/(360*100)) << " kr. ";

    std::cout << newline << newline;


}

if (formue <= (250000))
{
    std::cout << "Ingen mdr. gebyr: " << newline;

}

if (formue >= (250001) && formue <= (500000))
{
    std::cout << "I og med at formuen er imellem 250.000 kr. og 500.000kr. " << newline << "bliver der tilføjet et måndeligt gebyr på 50 kr. ";
    std::cout << newline;

    std::cout << "Det giver en årlig gebyrintægt på: " << (50*360) << " kr. " << newline;

}

if (formue >= (500001))
{
    std::cout << "I og med at formuen er over 500.000kr. " << newline << "bliver der tilføjet et måndeligt gebyr på 100 kr. ";
    std::cout << newline;

    std::cout << "Det giver en årlig gebyrintægt på: " << (100*360) << " kr. " << newline;

}


 return 0;

} 


