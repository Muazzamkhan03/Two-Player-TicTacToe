#include "header.h" 
#include <iostream>


int main() {    
    char choice;
    XO game;     

    std::cout<<"Welcome to Tic Tac Toe\n";

    do{
        game.StartGame();
        std::cout<<"Would you like to play again?\nEnter y to play game and n to exit\n";
        std::cin>>choice;
    }while(choice!='n');
    
    return 0;

} 

