#include <iostream>
#include <ctime> //for time()
#include <cstdlib> //for rand and srand (including these to is not always required but some compilers need them)

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main(){
    srand(time(NULL));
    char player;
    char computer;
    player=getUserChoice();
    std::cout<<"Your Choice: ";
    showChoice(player);
    std::cout<<"\n";
    computer=getComputerChoice();
    std::cout<<"Computer's Choice: ";
    showChoice(computer);
    std::cout<<'\n';
    chooseWinner(player,computer);
    return 0;
}

char getUserChoice(){
    char player;
    do{    
        std::cout<<"Stone, Paper, Scissors Game!\n";
        std::cout<<"****************************\n";
        std::cout<<"r for Rock\n";
        std::cout<<"p for Paper\n";
        std::cout<<"s for Scissors\n";
        std::cin>>player;
    }while(player!='r' && player!='p' && player!='s');
    return player;
}
char getComputerChoice(){
    int num=rand()%3+1;
    char choice;
    switch(num){
        case 1:
            choice='r';
            break;
        case 2:
            choice='p';
            break;
        case 3:
            choice='s';
            break;
    }
    return choice;
}
void showChoice(char choice){
    switch (choice){
        case 'r':
            std::cout<<"Rock";
            break;
        case 'p':
            std::cout<<"Paper";
            break;
        case 's':
            std::cout<<"Scissors";
            break;
        
    }

}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if (computer=='r'){
                std::cout<<"It's a tie.\n";
            }
            else if(computer =='p'){
                std::cout<<"You Lose :-(\n";
            }
            else if(computer=='s'){
                std::cout<<"YOU WIN!!! :-D\n";
            }
            break;
        case 'p':
            if (computer=='p'){
                std::cout<<"It's a tie.\n";
            }
            else if(computer =='s'){
                std::cout<<"You Lose :-(\n";
            }
            else if(computer=='r'){
                std::cout<<"YOU WIN!!! :-D\n";
            }
            break;
        case 's':
            if (computer=='s'){
                std::cout<<"It's a tie.\n";
            }
            else if(computer =='r'){
                std::cout<<"You Lose :-(\n";
            }
            else if(computer=='p'){
                std::cout<<"YOU WIN!!! :-D\n";
            }
            break;
        
        }
}