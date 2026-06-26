#include <iostream>
#include <stdexcept>
using namespace std;

// Custom Exception
class InvalidPIN
{
};

class BankAccount
{
private:
    string name;
    int age;
    double balance;
    int pin;

public:
    BankAccount(string name, int age, double balance, int pin)
    {
        this->name = name;
        this->age = age;
        this->balance = balance;
        this->pin = pin;
    }

    void withdraw(double amount, int enteredPin)
    {
        // Age Validation
        if (age < 18)
        {
            throw "Age must be 18 or above.";
        }

        // Minimum Balance Validation
        if (balance < 500)
        {
            throw 500;
        }

        // Negative Withdraw
        if (amount < 0)
        {
            throw -1;
        }

        // PIN Validation
        if (enteredPin != pin)
        {
            throw InvalidPIN();
        }

        // Balance Check
        if (amount > balance)
        {
            throw runtime_error("Insufficient Balance");
        }

        balance -= amount;

        cout << "\nWithdraw Successful\n";
        cout << "Remaining Balance : " << balance << endl;
    }
};

int main()
{
    string name;
    int age;
    double balance;
    int pin;

    cout << "Enter Name : ";
    cin >> name;

    cout << "Enter Age : ";
    cin >> age;

    cout << "Enter Initial Balance : ";
    cin >> balance;

    cout << "Create 4-digit PIN : ";
    cin >> pin;

    BankAccount user(name, age, balance, pin);

    double amount;
    int enteredPin;

    cout << "\nEnter Withdraw Amount : ";
    cin >> amount;

    cout << "Enter PIN : ";
    cin >> enteredPin;

    try
    {
        user.withdraw(amount, enteredPin);
    }

    catch (const char *msg)
    {
        cout << "String Exception : " << msg << endl;
    }

    catch (int x)
    {
        if (x == 500)
        {
            cout << "Minimum Balance should be 500." << endl;
        }
        else if (x == -1)
        {
            cout << "Withdraw amount cannot be negative." << endl;
        }

        // Rethrow
        throw;
    }

    catch (InvalidPIN)
    {
        cout << "Custom Exception : Invalid PIN." << endl;
    }

    catch (runtime_error &e)
    {
        cout << "Runtime Error : " << e.what() << endl;
    }

    catch (exception &e)
    {
        cout << "Standard Exception : " << e.what() << endl;
    }

    catch (...)
    {
        cout << "Unknown Exception Caught." << endl;
    }

    cout << "\nProgram Finished." << endl;

    return 0;
}