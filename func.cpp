# include "header.h"
# include <iostream>

void XO::StartGame() {     
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = 0;
        }
    }
    turn = PLAYER1;   
    isGameOver = 0;  
    DrawBoard();   
    PlayGame();   
} 

void XO::DrawBoard() {      
    int temp[9]; 
    int k = 0; 
    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){    
            if (board[i][j] == 0){  // If the array pos has a 0, means no player has played, and so only no. is represented
                temp[k] = k+49; 
            }    
            else{   
                if (board[i][j] == 1){ // If the array pos has a 1, means player 1 has played for that position, and so an X is represented
                    temp[k] = 88; 
                }  
                else{ // If the array pos has a 2, means player 2 has played for that position, and so an O is represented
                    temp[k] = 79; 
                }     
            }    
                k++;
        }          
    }   
    std::cout << "*****2-Player Tic Tac Toe*****\n";  
    std::cout << " |**********|\n";  
    std::cout <<" |" << (char)temp[0] << " | " << (char)temp[1] << " | " << (char)temp[2] << " | \n"; 
    std::cout << " |**********|\n"; 
    std::cout <<" |" << (char)temp[3] << " | " << (char)temp[4] << " | " << (char)temp[5] << " | \n"; 
    std::cout << " |**********|\n"; 
    std::cout <<" |" << (char)temp[6] << " | " <<    (char)temp[7] << " | " << (char)temp[8] << " | \n"; 
    std::cout << std::endl << std::endl; 
    
}

void XO::PlayGame() {   
    int imove;      
    while (isGameOver!=turn){       
        std::cout << "Player Number " << turn << " Please enter move: \n";    
        std::cin >> imove;    
        Move(imove); 
    }      
    std::cout << "Player Number " << turn << "  Wins!" << std::endl; 
}

int XO::Move(int i) {            
    int x = (i - 1)/3;  
    int y = ((i + 2) % 3);  
    int returnVal = board[x][y];  
    if (returnVal == 0){    
        board[x][y] = turn;    
        Check_For_Win();    
        if (!isGameOver){  
            Next_Player_Moves();       
        }      
    }
    else{
        std::cout << "Invalid move, try again.\n";
    }       
    DrawBoard();      
    return returnVal; 
} 

void XO::Next_Player_Moves() {  
    (turn==1)?(turn=PLAYER2):(turn=PLAYER1);
} 
    
void XO::Check_For_Win() { 
    if ((board[0][0] == turn) && (board[1][0] == turn) &&    (board[2][0] == turn)){
        isGameOver = turn;
    }  
    else if ((board[0][1] == turn) && (board[1][1] == turn) && (board[2][1] == turn)){
        isGameOver = turn;
    }    
    else if ((board[0][2] == turn) && (board[1][2] ==    turn) && (board[2][2] == turn)){
        isGameOver = turn;
    } 
    else if ((board[0][0] == turn) && (board[0][1] ==  turn) && (board[0][2] == turn)){
        isGameOver = turn;
    }   
    else if ((board[1][0] == turn) && (board[1][1] ==    turn) && (board[1][2] == turn)){
        isGameOver = turn;
    } 
    else if ((board[2][0] == turn) && (board[2][1]  == turn) && (board[2][2] == turn)){
        isGameOver = turn;
    }   
    else if ((board[0][0] == turn) &&   (board[1][1] == turn) && (board[2][2]  == turn)){
        isGameOver = turn;
    } 
    else if ((board[0][2] == turn) &&  (board[1][1] == turn) && (board[2][0] == turn)){
        isGameOver = turn;
    } 
} 


