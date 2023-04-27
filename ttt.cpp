/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include "ttt.hpp"

using namespace std;

int main()
{
   int turns_taken = 0;
   bool full_table = false;
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