#include <iostream>

class BankAccount {
    private :
        double balance;
    public:
        BankAccount(double balance) : balance(balance) {}

        double getSolde()const{
            return balance;
        }
        /*
        bool deposit(double amount){
            if (amount <= 0){
                return false ;
            }
            balance += amount;
            return true;
        }

        bool withdraw(double amount){
        
        if (amount <= 0){
        return false;
        }
        if (amount > balance){
        return false;
        }
        balance-= amount;
        return true;
        
        }
        };
        */
        void SetDepot(double amount_){
            balance += amount_;
        }
        void SetRetirer(double amount_){
            balance -= amount_;
        }
    };

/*
bool execute() {
if (!from->withdraw(amount)){
    return false;
    if (!to->deposit(amount)){
    from->deposit(amount);
    return false
    }
return true
}
*/
class Transaction {
    private:
        BankAccount* from;
        BankAccount* to;
        double amount;
    public:
        Transaction(BankAccount* from, BankAccount* to, double amount) : from(from), to(to), amount(amount) {}
 
    bool execute() {
        // on fait this-> quand ca vient de la classe elle meme 
        // sinon exemple : from->balance cad on montre que ca vient d une autre classe. 
        if (from->getSolde() > 0) {
            from->SetRetirer(amount);
            to->SetDepot(amount);
            return true;
        }
    return false;
    }


};


int main() {

    BankAccount* account1 = new BankAccount(2000.0);
    BankAccount* account2 = new BankAccount(1000.0);
    Transaction* transaction = new Transaction(account1, account2, 500.0);

    bool res = transaction->execute();
        if (res) {
            std::cout << "Transaction successful" << std::endl;
        } 
        else {
            std::cout << "Transaction failed" << std::endl;
        }
 
 std::cout << "account1 : " << account1->getSolde() << std::endl;
 std::cout << "account2 : " << account2->getSolde()<< std::endl;

 delete account1;
 delete account2;
 
 account1 = new BankAccount(2000.0);
 account2 = new BankAccount(1000.0);
 double montant = 5000;
 transaction = new Transaction(account1, account2, montant);

 res = transaction->execute();

 std::cout << "montant de la transaction : " << montant << std::endl;

 if (res) {
 std::cout << "Transaction successful" << std::endl;
 } 
 else {
 std::cout << "Transaction failed" << std::endl;
 }
 
 std::cout << "account1 : " << account1->getSolde() << std::endl;
 std::cout << "account2 : " << account2->getSolde()<< std::endl;
 
 return 0;
}