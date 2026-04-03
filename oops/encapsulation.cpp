#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance; // hidden data

public:
    // setter
    void setBalance(int b) {
        if (b >= 0) {
            balance = b;
        }
    }

    // getter
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(1000);  // controlled access
    cout << acc.getBalance(); // read value

    return 0;
}