#include <iostream>
#include <vector>
#include "ttt.hpp"

int main()
{
   int turns_taken = 0;
   greeting();
   
   while (1) {
    
    turns_taken++;
    display_position();
    display_table();
    winner();
    
    if (winner() == 'X') {
        std::cout << "Player1 => X wins!!!\n";
        break;
    }
    else if (winner() == 'O') {
        std::cout << "Player2 => O wins!!!\n";
        break;
    }
    else if (winner() == 'D' && turns_taken == 9) {
        std::cout << "Its a draw!!\n";
        break;
    }
    
    change_turn();
  
    }
    return 0;
}
