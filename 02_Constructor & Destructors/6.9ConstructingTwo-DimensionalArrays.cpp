#include <iostream>
using namespace std;

class ChessBoard {
private:
    // TODO 1: Declare a double pointer to a char named 'board'.
    char **board;
    int rows, cols;

public:
    ChessBoard(int r, int c) {
        rows = r;
        cols = c;

        // TODO 2: Allocate an array of character pointers (char*) of size 'rows'.
        // Assign it to 'board'.
        board = new char*[rows];
        
        // TODO 3: Write a for-loop from i = 0 up to 'rows'.
        // Inside, allocate a standard char array (char) of size 'cols' for each board[i].
        for(int i = 0; i < rows; i++){
            board[i] = new char[cols];
        }
        
    }

    // Helper function to visualize the board
    void setupEmptyBoard() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                board[i][j] = '-';
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Creating a standard 8x8 chess board
    ChessBoard game(8, 8);
    game.setupEmptyBoard();
    
    cout << "Board Layout:" << endl;
    game.display();

    return 0;
}