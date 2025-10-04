#include <iostream>
using namespace std;


class BankAccount {
    int balance;
    string name;

public:

    int accountNumber;
    
    void createAccount() {
        cout << "\nEnter your name: ";
        cin >> name;
        while(true){
            cout << "Enter account number : ";
            cin >> accountNumber;
            if(cin.fail()){
                cout << "Invalid account Number !!"<<endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }else{
                break;
            }
        }
        while(true){
            cout << "Enter initial balance: ";
            cin >> balance;
            if(cin.fail()){
                cout << "Invalid Amount !!"<<endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }else{
                break;
            }
        }
        
    }

    
    void credit() {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount credited successfully.\n";
    }

   
    void debit() {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Amount debited successfully.\n";
        }
    }

   
    void showDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    
    void showAllDetails() {
        cout << name<<"\t" << accountNumber << "\t" << balance;
    }

};

int main() {
    int users = 100; 
    
    BankAccount u[users]; 
    int userCount = 0;

    int choice;

    do {
        cout << "\n==== Simple SBI Bank Menu ====\n";
        cout << "1. Create New Account\n";
        cout << "2. Credit Amount\n";
        cout << "3. Debit Amount\n";
        cout << "4. Show Account Details\n";
        cout << "5.Show all User Details\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int accNo, F = 0;

        switch (choice) {
            case 1:
                if (userCount < users) {
                    u[userCount].createAccount();
                    userCount++;
                } else {
                    cout << "Maximum user limit reached.\n";
                }
                break;

            case 2:
                cout << "Enter account number: ";
                cin >> accNo;
                F = 0;
                for (int i = 0; i < userCount; i++) {
                    if (u[i].accountNumber == accNo) {
                        u[i].credit();
                        F = 1;
                        break;
                    }
                }
                if (F == 0) cout << "Account not found.\n";
                break;

            case 3:
                cout << "Enter account number: ";
                cin >> accNo;
                F = 0;
                for (int i = 0; i < userCount; i++) {
                    if (u[i].accountNumber == accNo) {
                        u[i].debit();
                        F = 1;
                        break;
                    }
                }
                if (F == 0) cout << "Account not found.\n";
                break;

            case 4:
                cout << "Enter account number: ";
                cin >> accNo;
                F = 0;
                for (int i = 0; i < userCount; i++) {
                    if (u[i].accountNumber == accNo) {
                        u[i].showDetails();
                        F = 1;
                        break;
                    }
                }
                if (F == 0) cout << "Account not found.\n";
                break;
                
            case 5:
               cout << "\nName" << "\t" << "Account Num" << "\t" << "Amount in count" <<endl;
               for(int i = 0; i < userCount; i++){
                    u[i].showAllDetails();
               }
               break;

            case 6:
                cout << "Thank you for using the bank system!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}