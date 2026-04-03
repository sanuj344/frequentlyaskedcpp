#include <iostream>
using namespace std;

// Abstract class
class Payment {
public:
    virtual void pay(int amount) = 0; // pure virtual function
};

// Concrete class
class UPI : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

class CreditCard : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};

int main() {
    Payment* p;

    UPI u;
    CreditCard c;

    p = &u;
    p->pay(500);

    p = &c;
    p->pay(1000);

    return 0;
}





// notification system




#include <iostream>
using namespace std;

// Abstract class
class Notification {
public:
    virtual void sendNotification(string message) = 0; // abstract method
};

// Email Notification
class EmailNotification : public Notification {
public:
    void sendNotification(string message) override {
        cout << "Sending Email: " << message << endl;
    }
};

// SMS Notification
class SMSNotification : public Notification {
public:
    void sendNotification(string message) override {
        cout << "Sending SMS: " << message << endl;
    }
};

// Push Notification
class PushNotification : public Notification {
public:
    void sendNotification(string message) override {
        cout << "Sending Push Notification: " << message << endl;
    }
};

int main() {
    Notification* n;

    EmailNotification email;
    SMSNotification sms;
    PushNotification push;

    n = &email;
    n->sendNotification("Hello via Email");

    n = &sms;
    n->sendNotification("Hello via SMS");

    n = &push;
    n->sendNotification("Hello via Push");

    return 0;
}