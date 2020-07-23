// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() 
{
    cout.precision(2);
    cout << fixed;
    
    vector<Account *> several;
    
    several.push_back(new Savings_Account{});
    several.push_back(new Checking_Account{});
    several.push_back(new Trust_Account{});
    
    
    deposit(several, 2000);
    
    
    for (auto thang:several)
        delete thang;
        
    cout << "dude" << endl;
    return 0;
}

