#include "CashRegister.h"

int CashRegister::indexOf(string name)
{
    int index = -1;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].getName().compare(name) == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}
void CashRegister::addItem()
{
    string item;
    int quantity;
    double price;
    int onHand;
    cin.ignore();
    cout << "Enter the item name: ";
    getline(cin, item, '\n');
    int index = indexOf(item);
    if (index == -1)
    {
        // item not present, good to add
        cout << "Enter the quantity: ";
        cin >> quantity;
        cout << "Enter the price: $";
        cin >> price;
        items.push_back(InventoryItem(item, quantity, price));
        cout << item << " successfully added to the list.\n";
    }
    else
    {
        // item already present, we need to add stock to it
        cout << item << " is already present in the list!\nEnter the quantity to re-stock: ";
        cin >> quantity;
        items[index].reStock(quantity);
        cout << item << " has been re-stocked to " << items[index].getQuantity() << ".\n";
    }
}
void CashRegister::checkOut()
{
    cout << "YOUR CART DETAILS:\n------------------\n";
    for (InventoryItem item : items)
        item.printDetails();
    double subTotal = 0.0;
    for (InventoryItem item : items)
        subTotal += item.getTotalCost();
    double salesTax = (0.06 * subTotal);
    double total = (subTotal + salesTax);
    cout << "\nPurchase sub total: $" << subTotal << endl;
    cout << "Tax: $" << salesTax << endl;
    cout << "Purchase total: $" << total << endl;
}