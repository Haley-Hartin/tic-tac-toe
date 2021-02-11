/**
Haley Hartin
Wayne Wood
Tic Tac Toe Game
This file containes the implementations of a tic tac toe game.
*/
#include <iostream>
#include <vector>

/*
* Creates a 2d-vector string board.
*
* @return new_board, newly created board.
*/
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

/*
* Places a marker onto the specified input location,
* it distinguishes 'x' or 'o' by the player integer.
*
* @param board, the 2d string vector board that holds moves
* @param location, a numerical designation for where the position of the player will be placed
* @param player, signifies the player. i.e. 0='x', 1='o'
*
* @return none
*/
void PlaceMarker(std::vector<std::vector<std::string> >& board, std::string location, int player) {
    int loc = std::stoi(location);

    for (int i=0, m=board.size(); i<m; ++i) {
        for (int j=0, n=board[i].size(); j<n; ++j) {
            if (!--loc) board[i][j] = player ? "o" : "x";
        }
    }
}

/**
 * Main driver for the game.
 *
 * @param None.
 * @return None.
 */
int main () {

    int player = 0;
    std::vector<std::vector<std::string> > our_board = CreateBoard();
    for(int turn =0; turn<9; turn++){

      DisplayBoard(our_board);
      std::string choice = GetPlayerChoice();
      PlaceMarker(our_board, choice, player);
      player = !(player);

    }

    DisplayBoard(our_board);
    std::cout<<"The Game Is Over!"<<std::endl;

}
