#include "Account.h"

void Account::setName(std::string n){
    name = n;
}

std::string Account:: getName(){
    return name;
}

bool Account::deposit(double amount){
    if (amount > 0){
         balance += amount;
         return true;
    }
     else
        return false;
}

bool Account::withdraw(double amount){
    if (balance-amount >=0){
        balance -= amount;
        return true;
    }
    else
        return false;
}
