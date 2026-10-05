#include<iostream>
using namespace std;
// saving account class 

class savingAccount {

    private:
     string accountHolderName;
     int accountNumber;
     double balance;
     double interestrate;

     public:
     savingAccount( string name, int accNumber , double initialBalance , double rate){

        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestrate = rate;

        
     }

     void deposit(double amount){
      if (amount>0){
         balance += amount;
         cout << "Deposited:rs" << amount << endl;
      }
     }
     void withdraw(double amount){
      if (amount >0 && amount<=balance){
         balance-= amount;

         cout<< "Withdrawn: rs"<< amount << endl;
      }else{
         cout << " insufficient balance ! " << endl;
      }
     }

     void applyinterest()
     { double interest = balance* interestrate/100;
    balance += interest;
    cout << "interest Applied: rs" << interest << endl;
     }

     void display (){
      cout << " Saving Account " << endl;
      cout << " Account Holder:" << accountHolderName << endl;
      cout << " Account Number :"<< accountNumber << endl;
      cout << " Balance rs" << balance << endl;
      cout << " interest Rate :" << interestrate << "%" << endl; 
     }
};

// checking Account class 

class checkingAccount {

   private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

    public:

    checkingAccount(string name, int accNumber, double initialBalance, double fee) {
      accountHolderName = name;
      accountNumber = accNumber;
      balance = initialBalance;
      transactionFee = fee;

    }

    void deposit(double amount){
      if (amount>0){
         balance += amount;
         cout <<" Deposited : rs" << amount << endl;

      }
    }

    void Withdraw(double amount){
      double total = amount+ transactionFee;
    if(total<= balance){
      balance -=total;
      cout << " Withdrawn:rs"<< amount<< "(rs" << transactionFee <<"fee applied)" << endl;
    } else{
      cout <<" Insufficient balance for withdrawal + fee!" << endl;
    }
    }

    void display(){
      cout << "\n[Checking Account]" << endl;
      cout<< "Account Holder"<< accountHolderName<< endl;
      cout<< "AccountNumber " <<accountNumber<< endl;
      cout<< " Balance:rs" << balance << endl;
      cout<< " Transaction Fee:rs"<< transactionFee<< endl;

       }
};


// main function
int main(){
   savingAccount saving("Alice",1001,5000.0,3.0);
   checkingAccount checking("Bob",1002,3000.0,20.0);

   // Operatios on Saving Account 
   saving.display();
   saving.deposit(1000);
   saving.withdraw(2000);
   saving.applyinterest();
   saving.display();

   // operations on checkinng account
   checking.display();
   checking.deposit(1500);
   checking.Withdraw(1000);
   checking.display();
   return 0;


}