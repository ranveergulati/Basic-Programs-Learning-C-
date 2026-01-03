#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"____CALCULATOR____"<<"\n";
    std::cout<<"Enter either + - * /: ";
    std::cin>> op;

    std::cout<<"Enter First Number: ";
    std::cin>>num1;

    std::cout<<"Enter Second Number: ";
    std::cin>>num2;
    switch(op){
        case '+':
        std::cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;

        case'-':
        std::cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;

        case'*':
        std::cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;

        case'/':
        std::cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;

        default:
        std::cout<<"That wasn't a valid operator.";
        break;

    }

    std::cout<<"\n"<<"Program Ended";



    return 0;
}