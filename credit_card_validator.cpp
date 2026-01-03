#include <iostream>

//Luhn's Algorithm
/*
1.Double every second digit from right to left. if doubled number is 2 digit, split them.
2. add all single digits from step1
3. add all odd number digits from right to left
4. sum results from  steps 2 & 3.
5. if step 4 is divisible by 10, # is valid.
*/
int getDigits(const int number);
int sumOddDigits(const std::string cardnumber);
int sumEvenDigits(const std::string cardnumber);

int main(){
    std::string cardnumber;
    int result=0;

    std::cout<<"Enter a credit card number #: ";
    std::cin>>cardnumber;

    result = sumEvenDigits(cardnumber)+sumOddDigits(cardnumber);

    if (result%10==0){
        std::cout<<"It is a valid Credit Card Number.";
    }
    else{
        std::cout<<"Invalid Credit Card Number";
    }
    return 0;
}
int getDigits(const int number){ //using for even sum function
        return (int)number/10 + (number%10);
}

int sumOddDigits(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
        sum+=(int)cardnumber.at(i)-48;  //48 subtracted as it is the decimal value of character 0. explained at end
    }
    return sum;
}
int sumEvenDigits(const std::string cardnumber){
        int sum=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        sum+=getDigits(((int)cardnumber.at(i)-48)*2);
    }
    return sum;
}

//WHY 48 IS SUBTRACTED??

//in ascii table every character has decimal values. decimal value of 0 is 48, 1 is 49, 2 is 50 ..... 9 is 57
//when we convert character into int using (int)stringname method, we get decimal values of the character
//thus we subtract 48 to get the integer.