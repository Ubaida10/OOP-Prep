/*#include <iomanip>
#include<iostream>
#include <string>
using namespace std;

class InventoryItem
{
private:
    InventoryItem* m_pInventoryItem;
    int current;
    string description;
    double cost;
    int units;
public:
    // Default Constructor
    InventoryItem() : description(""), cost(0), units(0), m_pInventoryItem(nullptr), current(0) {}

    
    // Parameterized Constructor
    InventoryItem(string desc, double c, int u) : description(desc), cost(c), units(u), m_pInventoryItem(nullptr), current(0) {}

    // Destructor
    ~InventoryItem()
    {
        delete[] m_pInventoryItem;
    }
    
    // Method to create an inventory array
    InventoryItem* InventoryItemArray(int size)
    {
        m_pInventoryItem = new InventoryItem[size];
        return m_pInventoryItem;
    }

    // Add an object to the inventory
    void createObject(InventoryItem* pInventoryItem, InventoryItem item)
    {
        pInventoryItem[current++] = item;
    }

    // Display inventory
    void displayInventory(InventoryItem* pInventoryItem)
    {
        cout << setw(14) << "Inventory Item" << setw(8) << "Cost" << setw(16) << "Units on Hand\n";
        cout << "-------------------------------------\n";
        for (int i = 0; i < current; i++)
        {
            cout << setw(14) << pInventoryItem[i].description
                 << setw(8) << pInventoryItem[i].cost
                 << setw(16) << pInventoryItem[i].units << "\n";
        }
    }
};


int main()
{
    InventoryItem item;
    InventoryItem* pInventoryItem = item.InventoryItemArray(5);
    item.createObject(pInventoryItem,InventoryItem("Hammer", 6.95, 12));
    item.createObject(pInventoryItem,InventoryItem("Wrench", 8.75, 20));
    item.createObject(pInventoryItem,InventoryItem("Pliers", 3.75, 10));
    item.createObject(pInventoryItem,InventoryItem("Ratchet", 7.95, 14));
    item.createObject(pInventoryItem,InventoryItem("Screwdriver", 2.50, 22));
    item.displayInventory(pInventoryItem);

    
    return 0;
}*/