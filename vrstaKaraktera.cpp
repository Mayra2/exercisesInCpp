/*Zahtjevati unos karaktera sa standardnog ulaza. Karakteri se unose sve dok korisnik ne
unese '0' ili eksplicitno prekine unos (CTRL+D).
Potrebno je kreirati 3 kolekcije: samoglasnici, suglasnici i ostali.
Unesene karaktere smjestiti u odgovarajuce kolekcije.
Nakon zavrsetka unosa je potrebno:
1. Ispisati sve karaktere iz kolekcija koristeci for i for-each petlje
2. Ispisati broj unesenih samoglasnika, suglasnika, te ostalih karaktera*/

#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    char a;
    int sam = 0, sug=0, ostalo=0;
    vector <char> samoglasnici;
    vector <char> suglasnici;
    vector <char> ostali;

    for (; a!='0' ;){

            cout << "Unesite karakter po zelji: " << endl;
            cout << "Za kraj unosa unesite 0. " << endl;
            cin>> a;

            if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
                samoglasnici.push_back(a);
                sam++;
                cout << "Uneseni karakter " << a << " je samoglasnik." << endl;
            } else if (a>= 'A' && a<= 'Z' || a>='a' && a <= 'z'){
                suglasnici.push_back(a);
                sug++;
                cout << "Uneseni karakter " << a << " je suglasnik." << endl;
            } else if (a=='0')
                cout << "Kraj unosa." << endl;
            else{
                ostali.push_back(a);
                ostalo++;
                cout << "Uneseni karakter " << a << " spada u ostale karaktere." << endl;
            }

    }
    cout << "Broj unesenih samoglasnika je: " << sam << ". To su: "<< endl;
    for (char slovo : samoglasnici){
        cout<< slovo << "  ";
    }
    cout<< endl;

    cout << "Broj unesenih suglasnika je: " << sug<< ". To su: "<< endl;
    for (char slovo : suglasnici){
             cout<< slovo << "  ";
    }
    cout<< endl;


    cout << "Broj unesenih ostalih karaktera je: " << ostalo<< ". To su: "<< endl;
    for (char slovo : ostali){
        cout<< slovo << "  ";
    }
    cout<< endl;


    return 0;
}
