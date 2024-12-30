# ATM-System
An ATM simulation program in C++ with features like balance inquiry, cash withdrawal, deposit, user login, and pin management.
# Automatic Teller Machine (ATM) System

This project is a basic implementation of an Automatic Teller Machine (ATM) system using C++. The system allows users to log in to their accounts, check their balance, deposit money, withdraw money, and log out.

## Features

1. **Login**: Users can log in to their accounts using their account number and PIN.
2. **Check Balance**: Users can view their current account balance.
3. **Deposit Money**: Users can add money to their account balance.
4. **Withdraw Money**: Users can withdraw money, provided they have sufficient balance.
5. **Logout**: Users can log out of their accounts.
6. **Account Management**: Admin can add predefined accounts.

## Getting Started

### Prerequisites

- Dev C++ compiler 
- Basic knowledge of C++

### Installation

1. Clone the repository or copy the source code.
2. Save the source code to a file, e.g., `atm_system.cpp`.
3. Compile the program 
   ```
4. Run the compiled program:
   ```
   ./atm_system
   ```

### Adding Accounts

In the `main()` function, accounts can be added using the `addAccount()` method. For example:
```cpp
atm.addAccount(12345, "Alice", 1111, 5000);
atm.addAccount(67890, "Bob", 2222, 3000);
```
Here, the parameters are:
- Account Number
- Account Holder's Name
- PIN
- Initial Balance

## How to Use

1. Launch the program.
2. Follow the menu to:
   - Login using your account number and PIN.
   - Check your balance.
   - Deposit or withdraw money.
   - Logout when done.
3. Exit the program using the `Exit` option.

## Example

```plaintext
*** Welcome to ATM System ***
1. Login
2. Check Balance
3. Deposit Money
4. Withdraw Money
5. Logout
6. Exit
Enter your choice: 1
Enter account number: 12345
Enter PIN: 1111
Login successful. Welcome, Alice!

*** Welcome to ATM System ***
1. Login
2. Check Balance
3. Deposit Money
4. Withdraw Money
5. Logout
6. Exit
Enter your choice: 2
Your current balance is: Rs. 5000
```

## File Structure

- `atm_system.cpp`: Main source code file for the project.
- `README.md`: Documentation for the project (this file).

## Future Enhancements

- Add support for account creation by users.
- Include a transaction history feature.
- Enhance security by implementing encryption for PINs.
- Add a graphical user interface (GUI).

## Author

- Shubhranshi Patel
- shubhranshipatel@gmail.com

Feel free to reach out for any suggestions or questions!

