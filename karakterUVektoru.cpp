/*
Zahtjevati unos sa standardnog ulaza, te rezultat spremiti u varijablu tipa string.
Pored toga, potrebno je kreirati rezultujuci vektor karaktera koji ce se popunjavati na slijedeci
nacin:
- Prolaziti kroz uneseni string karakter po karakter
- Ako se karakter ne nalazi u rezultujucem vektoru, dodati ga u isti.
Na primjer:
Za string “objekti” u vektoru se trebaju nalaziti karakteri ‘o’ ‘b’ ‘j’ ‘e’ ‘k’ ‘t’ ‘i’
Za string “televizori” u vektoru se trebaju nalaziti karakteri ‘t’ ‘e’ ‘l’ ‘v’ ‘i’ ‘z’ ‘o’ ‘r’
*/
#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    cout << "Unesite proizvoljan string: " << endl;
    string unos;
    cin>>unos;

    vector<char> vektorSlova;

    for(int i = 0; i < unos.size(); i++) {
        bool postojiChar = false;

        for(int j = 0; j < vektorSlova.size(); j++){
            if(unos[i] == vektorSlova.at(j)) {
                postojiChar = true;}
        }

        if(!postojiChar) {
            vektorSlova.push_back(unos[i]);
            }
    }

    cout << "Vektor: ";
    for(int j = 0; j < vektorSlova.size(); j++){
        cout<<vektorSlova.at(j);
    }
    cout << endl;

    return 0;
}
