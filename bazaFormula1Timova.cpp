/*Kreirati program koji predstavlja jednostavnu bazu pozadataka Formula 1 timova.
Svaki Formula 1 tim je opisan slijedecim atributima: naziv, lista vozaca, proizvodjac motora, godisnji budzet.

Na primjer: Tim Ferrari ima naziv “Scuderia Ferrari”, listu vozaca {“Charles Leclerc”, “Carlos Sainz”}, proizvodjaca motora “Ferrari” te godisnji budzet 300m $ (ovo mozete pohranjivati kao cijeli broj).

Program treba da omoguci slijedece funkcionalnosti:
1. Unos tima
2. Ispis jednog tima na osnovu imena
3. Ispis svih timova

Obratiti paznju na citljivost koda, te dijeljenje koda u smislene cjeline (funkcije).
Nepredvidjene situacije adekvatno tretirati koristeci iznimke. Primjer: Korisnik odabere opciju 3 za ispis svih timova, a prethodno nije unesen niti jedan tim.
Za pohranu Formula 1 timova koristiti objekat tipa std::vector.
*/
#include <iostream>
#include<vector>
#include<string>

using namespace std;

struct Formula {
    string naziv;
    vector <string> vozac;
    string proizvodjac;
    int budzet;
};

void upis ( vector <Formula> &v){

    Formula f1;
    cout<<"Unesite naziv tima: " << endl;
    cin >> f1.naziv; //kako ovdje napraviti da prima vise rijeci
    cin.clear();

   string voz;

   while( getline(cin, voz)){
    cout<<"Unesite vozace tima: " << endl;
        if (voz !="") //zasto ne radi ispravno bez ovog
            f1.vozac.push_back(voz);
    }
    cin.clear();

    cout<<"Proizvodjac motora: " << endl;
    cin >> f1.proizvodjac;
    cout<<"Budzet: " << endl;
    cin >> f1.budzet;

    v.push_back(f1);
}

void ispis_svih (const vector <Formula> &f1){

    if(f1.size()==0)
        throw 1;

    else{

     cout<< "Unijeli ste: "<< endl;

    for (int i = 0; i < f1.size(); i++){
        Formula v = f1.at(i);
        cout << "Naziv tima: " << v.naziv << endl;

            for(int j=0; j<v.vozac.size() ; j++) {
                cout << "Vozac " <<j+1<<": " << v.vozac.at(j)<< endl;
            }
        cout << "Proizvodjac: " << v.proizvodjac << endl;
        cout << "Budzet: " << v.budzet << endl;
     }
    }
}

void ispis (const vector <Formula> &f1){

   cout << "Unesite ime tima kog zelite pronaci u bazi: " << endl;
    string ime;
    cin>>ime;

    if(f1.size()==0)
            throw 2;

     for(auto i=0; i<f1.size(); i++){
        Formula v=f1.at(i);

        if (ime==v.naziv){
            cout << "Ime: " << v.naziv << endl;

            for(auto i=0; i<v.vozac.size(); i++)
                cout << "Vozaci: " << v.vozac[i]<< endl;

            cout << "Proizvodjac: " << v.proizvodjac << endl;
            cout << "Budzet: " << v.budzet << endl;
    }
    else
            throw 3;

    }
}

int main()
{
    cout << "Dobrodosli u bazu Formula 1 timova!" << endl;
    int izbor;
    vector <Formula> f1;

do{
          cout << "1. Unos tima" << endl;
            cout << "2. Ispis jednog tima na osnovu imena" << endl;
            cout << "3. Ispis svih timova"<< endl;
            cout <<"4. Kraj programa."<<endl;

            cin>>izbor;

            switch(izbor){
                case 1:
                    upis(f1);
                    break;
                case 2:
                    try{
                        ispis(f1);
                    }
                    catch (int a) {
                    cout <<"Greska broj: "<<a<<endl;
                    if (a==2)
                        cout << "Niste nista upisali u bazu."<<endl;
                    else if (a==3)
                        cout << "Ne postoji tim sa datim imenom."<<endl;
                    }
                    break;
                case 3:
                       try{
                        ispis_svih(f1);
                    }
                    catch (int a) {
                    cout <<"Baza je prazna"<<endl;
                    }
                break;
                case 4:
                    return 0;
                    break;
                default:
                    cout << "Niste unijeli ispravan broj menija."<<endl;
    }
} while (izbor!=4);
    return 0;
    }

