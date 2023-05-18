/*
Napisati funkciju my_sort koja sortira vektor cijelih brojeva na nacin da su parni brojevi prije neparnih.
Na primjer: za vektor brojeva {3, 5, 1, 4, 6} moguci redoslijed brojeva nakon poziva funkcije bi mogao biti {4, 6, 3, 5, 1}.
U slucaju da proslijedjeni vektor sadrzi manje od 2 broja, generisati iznimku tipa std::logic_error.
Napisati minimalnu main funkciju koja testira rad funkcije.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void iznimka (const vector <int> &v){
   if (v.size()<2)
        throw  1;
}
 bool my_sort(int a, int b){
    if (a % 2 != b % 2)
            return a % 2 == 0;
        else
            return a < b;
 }
void probaj (vector <int> &vec){ //nije konstantan
    try{
        iznimka(vec);

        cout << "Vektor je: "<< endl;
        sort(vec.begin(), vec.end(), my_sort);
        for (auto i = 0; i<vec.size(); i++)
            cout << vec[i] << " ";
    }
    catch(int izn){
    cout << "Greska " << izn << endl;
  }

}
int main(){
    cout << "Unesite cijele brojeve" << endl;
    vector <int> vec;
    int x;
    while (cin>>x)
        vec.push_back(x);

probaj(vec);

    return 0;
}
