#include <iostream>
#include <string>
#include <vector>

// Enum for account types
enum class AccountType {
  SAVINGS,
  CHECKING,
  CREDIT
};

// Account class
class Account {
public:
  Account(std::string name, AccountType type, double balance)
    : name_(name), type_(type), balance_(balance) {}

  std::string name() const { return name_; }
  AccountType type() const { return type_; }
  double balance() const { return balance_; }

  void Deposit(double amount) { balance_ += amount; }
  bool Withdraw(double amount) {
    if (amount > balance_) {
      std::cout << "Insufficient funds." << std::endl;
      return false;
    }
    balance_ -= amount;
    return true;
  }

private:
  std::string name_;
  AccountType type_;
  double balance_;
};

// Bank class
template <typename T>
class Bank {
public:
  void AddAccount(T account) { accounts_.push_back(account); }

  T* GetAccount(std::string name) {
    for (auto& account : accounts_) {
      if (account.name() == name) {
        return &account;
      }
    }
    return nullptr;
  }

private:
  std::vector<T> accounts_;
};

// Utility functions
AccountType GetAccountType() {
  while (true) {
    std::cout << "Select account type (1- Savings, 2- Checking, 3- Credit): ";
    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
      return AccountType::SAVINGS;
    case 2:
      return AccountType::CHECKING;
    case 3:
      return AccountType::CREDIT;
    default:
      std::cout << "Invalid choice. Please try again." << std::endl;
    }
  }
}

double GetAmount() {
  while (true) {
    std::cout << "Enter amount: ";
    double amount;
    std::cin >> amount;
    if (amount > 0) {
      return amount;
    }
    std::cout << "Invalid amount. Please try again." << std::endl;
  }
}

// Main function
int main() {
  Bank<Account> bank;
  std::string name;
  double initial_balance;
  while(true){
    std::cout << "Welcome to the Bank Management System" << std::endl;
    std::cout << "1. Create an account" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    switch(choice){
  case 1:
        std::cout << "Enter account holder name: ";
        std::cin >> name;
        std::cout << "Enter initial balance: ";
        std::cin >> initial_balance;
        bank.AddAccount(Account(name, GetAccountType(), initial_balance));
        std::cout << "Account created successfully!" << std::endl;
        break;
    case 2:
        std::cout << "Enter account holder name: ";
        std::cin >> name;
        auto* account = bank.GetAccount(name);
        if (account) {
          account->Deposit(GetAmount());
          std::cout << "Deposit successful. New balance: " << account->balance() << std::endl;
        } else {
          std::cout << "Account not found." << std::endl;
        }
        break;
    // case 3:
    //     std::cout << "Enter account holder name: ";
    //     std::cin >> name;
    //     auto* account2 = bank.GetAccount(name);
    //     if (account2) {
    //       if (account2->Withdraw(GetAmount())) {
    //         std::cout << "Withdrawal successful. New balance: " << account2->balance() << std::endl;
    //       }
    //     } else {
    //       std::cout << "Account not found." << std::endl;
    //     }
    //     break;
    // case 4 :
    //     std::cout << "Exiting the system...\nThank you for using the Bank Management System." << std::endl;
    //     return 0;
    //     break;
    // default :
    //     std::cout << "Invalid choice. Please try again." << std::endl;
    }
  }
  return 0;
}