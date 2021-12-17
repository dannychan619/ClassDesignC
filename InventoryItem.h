#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class InventoryItem
{
private:
	string name;
	int quantity;
	double price;
public:
	InventoryItem();
	InventoryItem(string, int, double);
	string getName();
	int getQuantity();
	double getPrice();
	double getTotalCost();
	void reStock(int);
	void printDetails();
};