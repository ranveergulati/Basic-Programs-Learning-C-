#include <iostream>
#include <iomanip>   //used to fix balance at 2 decimals

//check how to prevent infinite printing in terminal below cin choice

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice = 0;
    do{
        std::cout<<"*******************\n";
        std::cout<<"Enter your choice:- \n";
        std::cout<<"*******************\n";
        std::cout<<"1. Show Balance\n";
        std::cout<<"2. Deposit Money\n";
        std::cout<<"3. Withdraw Money\n";
        std::cout<<"4. Exit\n";
        std::cout<<"Input: ";
        std::cin>>choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout<<"Thank for visiting :-)\n";
                break;
            default:
                std::cout<<"Invalid Input\n";
        }

    }while(choice!=4);
    
    return 0;
}

void showBalance(double balance){
    std::cout<<"\nYour balance is: $"<<std::setprecision(2)<<std::fixed<<balance<<"\n\n"; //this way we display balance upto 2 decimals
}
double deposit(){
    double amount =0;
    std::cout<<"Enter amount to be deposited: ";
    std::cin>>amount;
    if(amount>0){
        std::cout<<"$"<<amount<<" deposited successfully!";
        return amount;
    }
    else{
        std::cout<<"Not a valid amaount.";
        return 0;
    }
}
double withdraw(double balance){
    double amount =0;
    std::cout<<"Enter amount to be withdrawn: ";
    std::cin>>amount;
    if (amount>balance){
        std::cout<<"Not enough funds";
        return 0;
    }
    else if(amount >0){
        std::cout<<"Amount withdrawn successfully!";
        return amount;
    }
    else{
        std::cout<<"Invalid amount";
        return 0;
    }
}