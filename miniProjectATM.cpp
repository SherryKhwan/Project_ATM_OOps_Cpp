#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Atm{
    private:
        long int acc_no;
        double balance;
        string name;
        int pin;
        string mob_no;
    public:
        void setData(long int account, double bal, string naam, int PIN, string mobile){
            acc_no = account;
            balance = bal;
            name = naam;
            pin = PIN;
            mob_no = mobile;
        }
        long int returnAccountNo(){
            return acc_no;
        }
        double returnBal(){
            return balance;
        }
        string returnName(){
            return name;
        }
        int returnPin(){
            return pin;
        }
        string returnMobile(){
            return mob_no;
        }
        void checkBalance(){
            system("cls");
            cout << "Available Balance: " << balance;
            getch;
        }
        void cashWithdraw(){
            int amount;
            system("cls");
            cout << "Enter Amount: ";
            cin >> amount;
            do{
                if ((amount > 0) && (balance > amount)){
                    balance = balance - amount;
                    cout << "Success! Collect the amount!";
                    break;
                }
                else{
                    cout << "Invalid amount! Plz try again";
                }
            }while(true);
        }
        void userDetails(){
            cout << "Account No: " << acc_no;
            cout << "\nName:       " << name;
            cout << "\nBalance:    " << balance;
            cout << "\nMobile No:  " << mob_no;
        }
        void updateMobile(){
            string old, new1;
            int temp;
            do
            {
              cout << "Enter old No: ";
              cin >> old;
              if (old == mob_no){
                cout << "Enter new No: ";
                cin >> new1;
                mob_no = new1;
                cout << "Updated Successfully!";
                break;
              }
              else{
                cout << "Invalid input! Try again!";
                cin >> temp;
                system("cls");
              }
            } while (true);
            
        }
};


int main(){
    string n, m;
    long int a;
    int p, c, temp;
    double b;
    Atm u1;
    u1.setData(12345678, 45000, "Sherry", 1111, "900000000");
    do{
        system("cls");
        cout << "Welcome to the ATM!\n";
        cout << "Enter your name: ";
        cin >> n;
        cout << "Enter your account number: ";
        cin >> a;
        if ((n == u1.returnName()) && (u1.returnAccountNo() == a)){
            do{
                system("cls");
                cout << "Welcome back " << u1.returnName() << "\n1- Check Balance\n2- Cash Withdraw\n3- User Details\n4- Update Mobile No.\n5- Exit\nChoose a No: ";
                cin >> c;
                switch (c){
                case 1:
                    u1.checkBalance();
                    cin >> temp;
                    break;
                case 2:
                    u1.cashWithdraw();
                    cin >> temp;
                    break;
                case 3:
                    u1.userDetails();
                    cin >> temp;
                    break;
                case 4:
                    u1.updateMobile();
                    cin >> temp;
                    break;
                case 5:
                    break; 
                default:
                    cout << "Invalid No! Plz Try again";
                    system("cls");
                    break;
                }
            } while(true);
        }
        else
        {
            cout << "Invalid Input Try Again!\n";
            break;
        }
        
    } while (true);
    

}