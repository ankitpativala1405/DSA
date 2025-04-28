#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", New Balance: $" << balance << endl;
        } else {
            cout << "Withdrawal amount exceeds the balance." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    virtual void displayAccountInfo() const {
        cout << "Balance: $" << balance << endl;
    }

    virtual double calculateInterest() const = 0; 
};


class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate)
        : BankAccount(initialBalance), interestRate(rate) {}

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    double calculateInterest() const override {
        return balance * (interestRate / 100);
    }
};


class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(double initialBalance, double limit)
        : BankAccount(initialBalance), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", New Balance: $" << balance << endl;
        } else {
            cout << "Withdrawal amount exceeds the overdraft limit." << endl;
        }
    }

    double calculateInterest() const override {
        return 0; 
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};


class FixedDepositAccount : public BankAccount {
private:
    double term; 

public:
    FixedDepositAccount(double initialBalance, double t)
        : BankAccount(initialBalance), term(t) {}

    double calculateInterest() const override {
        return balance * 0.05; 
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Term: " << term << " months" << endl;
    }
};

void displayMenu() {
    cout << "\nBank Account Management System\n";
    cout << "1. Create Savings Account\n";
    cout << "2. Create Checking Account\n";
    cout << "3. Create Fixed Deposit Account\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<unique_ptr<BankAccount>> accounts;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            double balance, rate;
            cout << "Enter initial balance for Savings Account: ";
            cin >> balance;
            cout << "Enter interest rate: ";
            cin >> rate;
            accounts.push_back(make_unique<SavingsAccount>(balance, rate));

        } else if (choice == 2) {
            double balance, limit;
            cout << "Enter initial balance for Checking Account: ";
            cin >> balance;
            cout << "Enter overdraft limit: ";
            cin >> limit;
            accounts.push_back(make_unique<CheckingAccount>(balance, limit));

        } else if (choice == 3) {
            double balance, term;
            cout << "Enter initial balance for Fixed Deposit Account: ";
            cin >> balance;
            cout << "Enter term (in months): ";
            cin >> term;
            accounts.push_back(make_unique<FixedDepositAccount>(balance, term));

        } else if (choice == 4) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    for (const auto& account : accounts) {
        account->displayAccountInfo();
        cout << "Interest: $" << account->calculateInterest() << endl;
    }

    return 0;
}