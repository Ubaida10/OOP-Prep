#include <iostream>
using namespace std;
class AuxiliaryOffice; // Forward declaration

class Budget 
{ 
    static double corpBudget; // Static member variable
    double divisionBudget;    // Instance member variable

public: 
    Budget() : divisionBudget(0) {}

    void addBudget(double b) 
    { 
        divisionBudget += b; 
        corpBudget += b; 
    }

    double getDivisionBudget() const 
    { 
        return divisionBudget; 
    }

    static double getCorpBudget() 
    { 
        return corpBudget; 
    }

    // Declare AuxiliaryOffice as a friend class
    friend class AuxiliaryOffice;
};

// Static member initialization
double Budget::corpBudget = 0;

class AuxiliaryOffice 
{ 
    double auxBudget;

public: 
    AuxiliaryOffice() : auxBudget(0) {}

    double getDivisionBudget() const 
    { 
        return auxBudget; 
    }

    void addBudget(double b, Budget &div) 
    { 
        auxBudget += b; 
        div.divisionBudget += b;  // Direct access to private member of Budget
        Budget::corpBudget += b;  // Direct access to static private member of Budget
    }
};


int main() 
{
    Budget div1, div2;
    AuxiliaryOffice aux1;

    // Add budgets directly using Budget's method
    div1.addBudget(500);
    div2.addBudget(300);

    // Add budget to AuxiliaryOffice and update Budget's division and corporate budget
    aux1.addBudget(100, div1);

    // Get individual budgets
    cout << "Division 1 Budget: " << div1.getDivisionBudget() << "\n"; // 600
    cout << "Auxiliary Office Budget: " << aux1.getDivisionBudget() << "\n"; // 100

    // Get corporate budget
    cout << "Corporate Budget: " << Budget::getCorpBudget() << "\n"; // 900

    return 0;
}
