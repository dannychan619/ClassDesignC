#include "CashRegister.h"

int main()
{
    CashRegister cashRegister;
    int n;
    cout << "Enter the number of items to be added: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cashRegister.addItem();
        cout << endl;
    }

    cout << "\nChecking out..\n";
    cashRegister.checkOut();
    return 0;
}