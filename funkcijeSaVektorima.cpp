/*
Napisati funkciju poduplaj koja u proslijedjenom vektoru brojeva, svaki broj duplira odnosno mnozi sa 2.
Funkcija treba da radi sa vektorom cijelih i realnih brojeva.
Napisati funkciju printaj_vektor koja ispisuje proslijedjeni vektor (obratiti paznju da je i u ovom slucaju moguce raditi sa vektorom cijelih i realnih brojeva.
Napisati funkciju pozdrav koja nas pozdravlja na nacin da ispise “Pozdrav, “
te nakon toga string koji se proslijedjuje datoj funkciji. U slucaju da funkciju pozovemo bez argumenata,
 funkcija treba ispisati “Pozdrav, nepoznati.”. Zabranjeno je koristiti if/else blokove.
Napisati minimalnu main funkciju koja testira rad funkcija.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pozdrav ( string s = "nepoznati"){
    cout << "Pozdrav, " + s + "." << endl;
}

void poduplaj (vector <auto> &v){
    cout << "Brojevi pomnozeni sa 2 su:"<<endl;
    for (auto k = v.begin(); k!=v.end(); k++){
        cout << (*k)*2<<"   ";
    }
    cout << endl;
}

void printaj_vektor (vector <auto> &vec){
    cout << "Isprintan isti vektor je: "<< endl;
    for (auto k = vec.begin(); k!=vec.end(); k++)
        cout << (*k)<<endl;
    }


int main (int argc, char *argv[]) {

    cout << "Unesite ime" << endl;
    string str;
    if(!(cin >> str)) str = "";


    cout<<  str.size() << ' ' << (int)str[0] << endl;
    pozdrav(str);

    cout << "Unesite vektor brojeva " << endl;
    vector <double> vec;
    double x;
    while (cin >> x){
        vec.push_back(x);
    }
    poduplaj (vec);
    printaj_vektor(vec);



    return 0;
}
