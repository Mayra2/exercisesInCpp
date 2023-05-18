#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account myAcc;
    myAcc.setName("Majrin racun.");
    myAcc.setBalance(1000.0);

    if (myAcc.deposit(200.0))
        cout << "Na racunu imate: " <<  myAcc.getBalance() << "KM." << endl;
    else
        cout << "Doslo je do greske, novac nije prebacen na racun." << endl;

    if (myAcc.withdraw(500.0))
         cout << "Na racunu imate: " <<  myAcc.getBalance() << "KM." << endl;
    else
        cout << "Doslo je do greske, novac nije podignut sa racuna." << endl;

    if (myAcc.withdraw(1500.0))
     cout << "Na racunu imate: " <<  myAcc.getBalance() << "KM." << endl;
    else
        cout << "Doslo je do greske, novac nije podignut sa racuna." << endl;
    return 0;
}
