/**
Haley Hartin
Wayne Wood
Tic Tac Toe Game
This file containes the implementations of a tic tac toe game.
*/
#include <iostream>
#include <vector>

std::vector<std::vector<std::string> > CreateBoard() {
    std::vector<std::vector<std::string> > new_board(3, std::vector<std::string>(3, " "));
    int iterator = 1;
    for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j<3; j++){
        std::string c = std::to_string(iterator);
        new_board[i][j] = c;
        iterator++;
      }

    }
    return new_board;

}

/**
 * Displays the game board;
 *
 * @param board, A vector of stings representing the game board.
 * @return None.
 */
void DisplayBoard(std::vector<std::vector<std::string> >board){
  for(int i =0; i<3; i++){
    for(int j=0; j<3;j++){
      std::cout<<board[i][j]<<", ";
    }
    std::cout<<std::endl;
  }
}

/**
 * Get the location for the player to move to.
 *
 * @param None.
 * @return choice, A string of the location to move to.
 */
std::string GetPlayerChoice(){
  std::string choice;
  std::cout << "Enter the number of the space to move to: "; // Type a number and press enter
  std::cin >> choice; // Get user input from the keyboard
  return choice;
}

/**
 * Main driver for the game.
 *
 * @param None.
 * @return None.
 */
int main () {
    std::vector<std::vector<std::string> > our_board = CreateBoard();
    DisplayBoard(our_board);
    std::string choice = GetPlayerChoice();
}
