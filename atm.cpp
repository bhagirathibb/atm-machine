#include <iostream>

using namespace std;

class ATM {
private:
    double balance;

public:
    ATM(double initialBalance) : balance(initialBalance) {}

    void checkBalance() {
        cout << "Your balance is: Rs" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Current balance: Rs" << balance << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: Rs" << balance << endl;
        } else {
            cout << "Invalid amount for withdrawal or insufficient funds." << endl;
        }
    }
};

int main() {
    double initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    ATM atm(initialBalance);

    int choice;
    do {
        cout << "\nATM Menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                atm.checkBalance();
                break;
            }
            case 2: {
                double depositAmount;
                cout << "Enter deposit amount: Rs";
                cin >> depositAmount;
                atm.deposit(depositAmount);
                break;
            }
            case 3: {
                double withdrawAmount;
                cout << "Enter withdrawal amount: Rs";
                cin >> withdrawAmount;
                atm.withdraw(withdrawAmount);
                break;
            }
            case 4: {
                cout << "Exiting ATM system..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice! Please try again." << endl;
                break;
            }
        }
    } while (choice != 4);

    return 0;
}
