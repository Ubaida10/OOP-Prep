/*#include <iomanip>
#include<iostream>
#include <string>
using namespace std;

class InventoryItem 
{
    string description; // The item description 
    double cost; // The item cost 
    int units; // Number of units on hand

public: 

    // Constructor #1 
    InventoryItem() 
    {
        // Initialize description, cost, and units. 
        description = "";
        cost = 0.0; 
        units = 0;
        
    } 
    
    // Constructor #2 
    InventoryItem(const string& desc) 
    {
        // Assign the value to description. 
        description = desc; 
        // Initialize cost and units. 
        cost = 0.0; 
        units = 0;
    }
    
    // Constructor #3 
    InventoryItem(const string& desc, double c, int u) 
    {
        // Assign values to description, cost, and units. 
        description = desc; 
        cost = c; 
        units = u;
    } 
    
    // Mutator functions 
    void setDescription(const string& d) 
    { description = d; } 
     
    void setCost(double c) 
    { cost = c; } 
     
    void setUnits(int u) 
    { units = u; } 
     
    // Accessor functions 
    string getDescription() const 
    { return description; } 
     
    double getCost() const 
    { return cost; } 
     
    int getUnits() const 
    { return units; } 
};



// This program demonstrates an array of class objects. 

int main() 
{ 
    constexpr int NUM_ITEMS = 5; 
    InventoryItem inventory[NUM_ITEMS] = { 
        InventoryItem("Hammer", 6.95, 12), 
        InventoryItem("Wrench", 8.75, 20), 
        InventoryItem("Pliers", 3.75, 10), 
        InventoryItem("Ratchet", 7.95, 14), 
        InventoryItem("Screwdriver", 2.50, 22)
    };
    cout << setw(14) <<"Inventory Item" << setw(8) << "Cost" << setw(8) << setw(16) << "Units on Hand\n"; 
    cout << "-------------------------------------\n"; 
     
    for (int i = 0; i < NUM_ITEMS; i++) 
    {
        cout << setw(14) << inventory[i].getDescription(); 
        cout << setw(8) << inventory[i].getCost(); 
        cout << setw(7) << inventory[i].getUnits() << "\n"; 
    } 


    int size;
    cout<<"Number of items: ";
    cin>>size;
    cin.ignore();
    string description;
    double cost;
    int units;
    InventoryItem *item = new InventoryItem[size];
    for(int i=0;i<size;i++)
    {
        //cin.ignore();
        cout<<"Enter the description: ";
        getline(cin, description);
        cout<<"Enter the cost: ";
        cin>>cost;
        cin.ignore();
        cout<<"Enter the units: ";
        cin>>units;
        item[i] = InventoryItem(description, cost, units);
    }

    cout<<"Dynamic array:\n";
    cout << setw(14) <<"Inventory Item" << setw(8) << "Cost" << setw(8) << setw(16) << "Units on Hand\n"; 
    cout << "-------------------------------------\n"; 
     
    for (int i = 0; i < size; i++) 
    {
        cout << setw(14) << item[i].getDescription(); 
        cout << setw(8) << item[i].getCost(); 
        cout << setw(7) << item[i].getUnits() << "\n"; 
    }
    return 0; 
}*/