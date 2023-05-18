/*Napisati program koji uokvirava uneseni string na slijedeci nacin (korisnik je unio string “PROGRAMIRANJE”):
?***************?
?*PROGRAMIRANJE*?
?***************?
Napomena: program treba biti funkcionalan za stringove razlicitih duzina.*/
#include <iostream>
#include<string>

using namespace std;

int main()
{
    cout << "Unesite string po zelji: " << endl;
    string korisnikovUnos;
    cin>> korisnikovUnos;

    string linijaIznadIspod = "?" + string(korisnikovUnos.size()+2, '*') + "?";

    cout<< linijaIznadIspod <<endl;
    cout << "?*" <<korisnikovUnos<< "*?"<<endl;
    cout<< linijaIznadIspod <<endl;

    return 0;
}
