#include <iostream>
#include <string>
#include <map>
using namespace std;

// User account structure
struct Account {
    string name;
    int pin;
    double balance;
};

// ATM system class
class ATM {
private:
    map<int, Account> accounts; // Map to store account number and corresponding account details
    int currentAccount;

    // Helper function to verify PIN
    bool verifyPin(int pin) {
        return accounts[currentAccount].pin == pin;
    }

public:
    ATM() : currentAccount(-1) {}

    // Add a new account
    void addAccount(int accountNumber, string name, int pin, double balance) {
        accounts[accountNumber] = {name, pin, balance};
    }

    // Login to an account
    bool login(int accountNumber, int pin) {
        if (accounts.find(accountNumber) != accounts.end()) {
            if (verifyPin(pin)) {
                currentAccount = accountNumber;
                cout << "Login successful. Welcome, " << accounts[accountNumber].name << "!\n";
                return true;
            } else {
                cout << "Invalid PIN.\n";
            }
        } else {
            cout << "Account number not found.\n";
        }
        return false;
    }

    // Logout from the current account
    void logout() {
        currentAccount = -1;
        cout << "Logged out successfully.\n";
    }

    // Check balance
    void checkBalance() {
        if (currentAccount != -1) {
            cout << "Your current balance is: Rs. " << accounts[currentAccount].balance << "\n";
        } else {
            cout << "Please login first.\n";
        }
    }

    // Deposit money
    void deposit(double amount) {
        if (currentAccount != -1) {
            if (amount > 0) {
                accounts[currentAccount].balance += amount;
                cout << "Deposit successful. Your new balance is: Rs. " << accounts[currentAccount].balance << "\n";
            } else {
                cout << "Invalid deposit amount.\n";
            }
        } else {
            cout << "Please login first.\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (currentAccount != -1) {
            if (amount > 0 && amount <= accounts[currentAccount].balance) {
                accounts[currentAccount].balance -= amount;
                cout << "Withdrawal successful. Your new balance is: Rs. " << accounts[currentAccount].balance << "\n";
            } else {
                cout << "Invalid withdrawal amount or insufficient balance.\n";
            }
        } else {
            cout << "Please login first.\n";
        }
    }
};

int main() {
    ATM atm;

    // Adding some accounts
    atm.addAccount(12345, "Alice", 1111, 5000);
    atm.addAccount(67890, "Bob", 2222, 3000);

    int choice;
    do {
        cout << "\n*** Welcome to ATM System ***\n";
        cout << "1. Login\n";
        cout << "2. Check Balance\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Logout\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int accountNumber, pin;
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter PIN: ";
            cin >> pin;
            atm.login(accountNumber, pin);
            break;
        }
        case 2:
            atm.checkBalance();
            break;
        case 3: {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            atm.deposit(amount);
            break;
        }
        case 4: {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            atm.withdraw(amount);
            break;
        }
        case 5:
            atm.logout();
            break;
        case 6:
            cout << "Thank you for using the ATM. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

