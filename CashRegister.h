#pragma once
#include "InventoryItem.h"

class CashRegister
{
private:
	vector<InventoryItem> items;
public:
	CashRegister() {}
	void addItem();
	int indexOf(string);
	void checkOut();
};