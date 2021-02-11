#include <iostream>
#include <vector>

std::vector<std::vector<std::string> > CreateBoard() {
    std::vector<std::vector<std::string> > new_board(3, std::vector<std::string>(3, " "));

    return new_board;
}

int main () {
    std::vector<std::vector<std::string> > our_board = CreateBoard();
    
}