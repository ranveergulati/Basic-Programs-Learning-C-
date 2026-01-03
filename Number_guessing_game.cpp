#include <iostream>

int main(){
    srand(time(0));
    int num=rand()%20+1;
    int guess;
    int tries=1;
    std::cout<<"Enter your guess from 1-100: ";
    std::cin>>guess;

    while(guess!=num){
        if(guess>num){
            tries++;
            std::cout<<"Number is smaller than your guess, guess again: ";
            std::cin>>guess;
        }
        else if(guess<num){
            tries++;
            std::cout<<"Number is bigger than your guess, guess again: ";
            std::cin>>guess;
        }

    }
    std::cout<<"CORRECT guess in "<<tries<<" tries.";

    return 0;
}