#ifndef HEADER
#define HEADER 

#define PLAYER1 1
#define PLAYER2 2

class XO {  
    int board[3][3];  // Sets a two dimensional array, which stores the moves made by the players 
    int turn;// Stores the number of the player, whose turn it is 
    int isGameOver;   // Represents if the game is over and stores the winner 
    void PlayGame();  // Play the game
    public:      
         
    void StartGame();   // Starts the game by setting all slots in the array to 0, giving control to player 1, draws the board and playGame
    void Next_Player_Moves();  // Gives control of motion to next player
    int Move(int); // Inputs the no. of slot on the printed board and then stores in corresponding position in array
    void Check_For_Win();  // Checks if someone is winning
    void DrawBoard(); //Draws board
}; 
    
#endif