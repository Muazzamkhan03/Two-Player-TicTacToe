#include "header.h" 
#include <iostream>


int main() {    
    char choice;
    XO game;     

    std::cout<<"Welcome to Tic Tac Toe\n"
    <<"Enter y to play game and n to exit\n";
    std::cin>>choice;

    while(choice != 'n'){
        game.StartGame();
        std::cout<<"Welcome to Tic Tac Toe\n"
        <<"Enter y to play game and n to exit\n";
        std::cin>>choice;
    }
    
    return 0;

} 

