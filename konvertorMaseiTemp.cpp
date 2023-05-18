/*Napisati program koji predstavlja konverter mjernih jedinica. Program treba da sadrzi:
1. Konverter mjernih jedinica temperature iz Kelvina u Celzijuse.
2. Konverter mase izmedju kilograma i funte (kg - lb)
Program kada se starta treba da ispise meni za korisnika. Primjer koristenja programa je dat
ispod.
Welcome to Unit converter. Please enter one of the following options:
1. Temperature
2. Weight
Your choice: 1
Enter temperature in degrees Kelvin: 105
105 degrees Kelvin is -168.15 degrees Celsius.*/
#include <iostream>
namespace temp{
    const double konstantaZaTemp = 273.15;
}
namespace masa{
    const double lbUKg = 0.453592;
    const double kgULb = 2.20462;
}
using namespace std;

int main()
{
    cout << "1. Pretvaranje Kelvina u Celzijuse." << endl;
    cout << "2. Pretvaranje Celzijusa u Kelvine." << endl;
    cout << "3. Pretvaranje kg u lbs." << endl;
    cout << "4. Pretvaranje lbs u kg." << endl;
    cout << "Unesite svoj izbor: " << endl;

    int izbor;
    cin >> izbor;

    if (izbor==1){
        using namespace temp;
        cout << "Unesite stepene u K: " << endl;
        double stepenK, stepenC;
        cin>> stepenK;

        if ( stepenK < 0)
        cout << "Neispravan unos, pokusajte ponovo: " << endl;
        else {
            stepenC = stepenK - konstantaZaTemp;
            cout << "Unesena temperatura u Kelvinima je: " << stepenC << " Celzijusa."<<endl;
        }
    } else  if (izbor==2){
        using namespace temp;
        cout << "Unesite stepene u C: " << endl;
        double stepenK, stepenC;
        cin>> stepenC;

        if ( stepenK < -273.5)
        cout << "Neispravan unos, pokusajte ponovo: " << endl;
        else {
            stepenK = stepenC + konstantaZaTemp;
            cout << "Unesena temperatura u Celzijusima je: " << stepenK << " Kelvina."<<endl;
        }
    } else  if (izbor==3){
        using namespace masa;
        cout << "Unesite masu u kg: " << endl;
        double kg, lbs;
        cin>> kg;

        if ( kg < 0)
        cout << "Neispravan unos, pokusajte ponovo: " << endl;
        else {
            lbs = kg * kgULb;
            cout << "Unesena masa u kg je: " << lbs << " lbs."<<endl;
        }
    } else  if (izbor==4){
        using namespace masa;
        cout << "Unesite masu u lbs: " << endl;
        double kg, lbs;
        cin>> lbs;

        if ( lbs < 0)
        cout << "Neispravan unos, pokusajte ponovo: " << endl;
        else {
            kg = lbs * lbUKg;
            cout << "Unesena masa u lbs je: " << kg << " kg."<<endl;
        }
    } else
        cout << "Neispravan odabir.";

    return 0;
}
