#include <iostream>
#include <vector>

std::vector<std::vector<std::string> > CreateBoard() {
    std::vector<std::vector<std::string> > new_board(3, std::vector<std::string>(3, " "));

    return new_board;
}

void DisplayBoard(std::vector<std::vector<std::string> > board) {
    for (int i=0, m=board.size(); i<m; ++i) {
        for (int j=0, n=board[i].size(); j<n; ++j) {
            std::cout << board[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}

int main () {
    std::vector<std::vector<std::string> > our_board = CreateBoard();

}