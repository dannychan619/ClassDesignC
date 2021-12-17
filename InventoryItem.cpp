#include "InventoryItem.h"

InventoryItem::InventoryItem()
{
	this->name = "";
	this->quantity = 0;
	this->price = 0.0;
}
InventoryItem::InventoryItem(string name, int quantity, double price)
{
	this->name = name;
	this->quantity = quantity;
	this->price = price;
}
string InventoryItem::getName() { return name; }
int InventoryItem::getQuantity() { return quantity; }
double InventoryItem::getPrice() { return price; }
double InventoryItem::getTotalCost() { return(getPrice() * getQuantity()); }
void InventoryItem::reStock(int num) { this->quantity += num; }
void InventoryItem::printDetails()
{
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20) << name << left << setw(10) << quantity << left << setw(1) << getTotalCost() << endl;
}