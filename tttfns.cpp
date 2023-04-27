// functions definitions
#include <iostream>
#include <vector>


char table[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player1 = 'X';

void greeting() {
    
    std::cout << "Welcome to the Tic Tac Toe game!\n";
    std::cout << "The game consists of two players, Player 1 => (X) Player 2 => (O)\n";
    std::cout << "The player that fills three spaces horizonatally, vertically or diagonally wins!\n\n";
    std::cout << "  ---+---+--- \n";
    std::cout << " | 1 | 2 | 3 |\n";
     std::cout << "  ---+---+--- \n";
    std::cout << " | 4 | 5 | 6 |\n";
     std::cout << "  ---+---+--- \n";
    std::cout << " | 7 | 8 | 9 |\n";
    std::cout << "  ---+---+---\n";
    std::cout << "\n";
}

void display_table() {1
    
    std::cout << "\n";
    
    for (int i = 0; i < 3; i++) {
      
        std::cout << "  ---+---+---\n";
            for (int j = 0; j < 3; j++) {
         
                std::cout << " | " << table[i][j];
                
            }
            std::cout << " | \n";
    }
    std::cout << "  ---+---+--- \n\n";
}
void display_position() {
    
    int x;
    std::cout << "Please, " << player1 << " select a position(1-9): \n";
    std::cin >> x;
    
    if (x == 1) {
        
        if (table[0][0] == '1')
            
            table[0][0] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 2) {
        
       if (table[0][1] == '2')
            
            table[0][1] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 3) {
        
        if (table[0][2] == '3')
            
            table[0][2] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 4) {
        
        if (table[1][0] == '4')
            
            table[1][0] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 5) {
        
        if (table[1][1] == '5')
            
            table[1][1] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 6) {
        
        if (table[1][2] == '6')
            
            table[1][2] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 7) {
        
        if (table[2][0] == '7')
            
            table[2][0] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 8) {
        
        if (table[2][1] == '8')
            
            table[2][1] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
    else if (x == 9) {
        
        if (table[2][2] == '9')
            
            table[2][2] = player1;
            
            else {
                
                std::cout << "Invalid move, position is already taken, try again!\n";
            }
        
    }
}
void change_turn() {
    
    if (player1 == 'X') {
        //std::cout << "Player 2, please select a position (1-9)\n";
        player1 = 'O';
    }
    
    else {
        player1 = 'X';
    }
}
char winner() {
    
    //checking winner x (rows)
    
    if (table[0][0] == 'X' && table [0][1] == 'X' && table[0][2] == 'X') {
        return 'X';
    }
    if (table[1][0] == 'X' && table [1][1] == 'X' && table[1][2] == 'X') {
        return 'X';
    }
    if (table[2][0] == 'X' && table [2][1] == 'X' && table[2][2] == 'X') {
        return 'X';
    }
    
    //checking winner x (columns)
    
    if (table[0][0] == 'X' && table [1][0] == 'X' && table[2][0] == 'X') {
        return 'X';
    }
    if (table[0][1] == 'X' && table [1][1] == 'X' && table[2][1] == 'X') {
        return 'X';
    }
    if (table[0][2] == 'X' && table [1][2] == 'X' && table[2][2] == 'X') {
        return 'X';
    }
    
    //checking winner x (diagonally)
    
    if (table[0][0] == 'X' && table [1][1] == 'X' && table[2][2] == 'X') {
        return 'X';
    }
    if (table[0][2] == 'X' && table [1][1] == 'X' && table[2][0] == 'X') {
        return 'X';
    }
    
    //--------------------------------------------------------------------
    //checking winner O (rows)
    
    if (table[0][0] == 'O' && table [0][1] == 'O' && table[0][2] == 'O') {
        return 'O';
    }
    if (table[1][0] == 'O' && table [1][1] == 'O' && table[1][2] == 'O') {
        return 'O';
    }
    if (table[2][0] == 'O' && table [2][1] == 'O' && table[2][2] == 'O') {
        return 'O';
    }
    
    //checking winner O (columns)
    
    if (table[0][0] == 'O' && table [1][0] == 'O' && table[2][0] == 'O') {
        return 'O';
    }
    if (table[0][1] == 'O' && table [1][1] == 'O' && table[2][1] == 'O') {
        return 'O';
    }
    if (table[0][2] == 'O' && table [1][2] == 'O' && table[2][2] == 'O') {
        return 'O';
    }
    
    //checking winner O (diagonally)
    
    if (table[0][0] == 'O' && table [1][1] == 'O' && table[2][2] == 'O') {
        return 'O';
    }
    if (table[0][2] == 'O' && table [1][1] == 'O' && table[2][0] == 'O') {
        return 'O';
    }
    
    return 'D';
}


    
