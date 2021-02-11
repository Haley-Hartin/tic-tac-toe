#include <iostream>
#include <vector>

/*
* Creates a 2d-vector string board.
*
* @return new_board, newly created board. 
*/
std::vector<std::vector<std::string> > CreateBoard() {
    std::vector<std::vector<std::string> > new_board(3, std::vector<std::string>(3, " "));

    return new_board;
}

void DisplayBoard(std::vector<std::vector<std::string> >board){
  for(int i =0; i<3; i++){
    for(int j=0; j<3;j++){
      std::cout<<board[i][j]<<", ";
    }
    std::cout<<std::endl;
  }
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

    for (auto v : board) {
        for (std::string s : v) {
            if (!loc--) s = player ? "o" : "x";
        }
    }
}

int main () {
    int player = 0;
    std::vector<std::vector<std::string> > our_board = CreateBoard();
    DisplayBoard(our_board);

    PlaceMarker(our_board, input, player);
}
