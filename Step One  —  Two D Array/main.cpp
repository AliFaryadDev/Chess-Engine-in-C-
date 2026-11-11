#include <iostream>
using namespace std;

int main() {
    string chessBoard[8][8] = {
      //2 D Array
        {"♜", "♞", "♝", "♛", "♚", "♝", "♞", "♜"},
        {"♟", "♟", "♟", "♟", "♟", "♟", "♟", "♟"},
        {".", ".", ".", ".", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", ".", ".", "."},
        {".", ".", ".", ".", ".", ".", ".", "."},
        {"♙", "♙", "♙", "♙", "♙", "♙", "♙", "♙"},
        {"♖", "♘", "♗", "♕", "♔", "♗", "♘", "♖"}
    };

    //Heading
    cout << "\n\n\n\t\tThe Terminal Chess Game" << endl << endl;

    // Row 0
    cout << "\t" << chessBoard[0][0] << "\t";
    cout << chessBoard[0][1] << "\t";
    cout << chessBoard[0][2] << "\t";
    cout << chessBoard[0][3] << "\t";
    cout << chessBoard[0][4] << "\t";
    cout << chessBoard[0][5] << "\t";
    cout << chessBoard[0][6] << "\t";
    cout << chessBoard[0][7] << endl;

    // Row 1
    cout << "\t" << chessBoard[1][0] << "\t";
    cout << chessBoard[1][1] << "\t";
    cout << chessBoard[1][2] << "\t";
    cout << chessBoard[1][3] << "\t";
    cout << chessBoard[1][4] << "\t";
    cout << chessBoard[1][5] << "\t";
    cout << chessBoard[1][6] << "\t";
    cout << chessBoard[1][7] << endl;

    // Row 2
    cout << "\t" << chessBoard[2][0] << "\t";
    cout << chessBoard[2][1] << "\t";
    cout << chessBoard[2][2] << "\t";
    cout << chessBoard[2][3] << "\t";
    cout << chessBoard[2][4] << "\t";
    cout << chessBoard[2][5] << "\t";
    cout << chessBoard[2][6] << "\t";
    cout << chessBoard[2][7] << endl;

    // Row 3
    cout << "\t" << chessBoard[3][0] << "\t";
    cout << chessBoard[3][1] << "\t";
    cout << chessBoard[3][2] << "\t";
    cout << chessBoard[3][3] << "\t";
    cout << chessBoard[3][4] << "\t";
    cout << chessBoard[3][5] << "\t";
    cout << chessBoard[3][6] << "\t";
    cout << chessBoard[3][7] << endl;

    // Row 4
    cout << "\t" << chessBoard[4][0] << "\t";
    cout << chessBoard[4][1] << "\t";
    cout << chessBoard[4][2] << "\t";
    cout << chessBoard[4][3] << "\t";
    cout << chessBoard[4][4] << "\t";
    cout << chessBoard[4][5] << "\t";
    cout << chessBoard[4][6] << "\t";
    cout << chessBoard[4][7] << endl;

    // Row 5
    cout << "\t" << chessBoard[5][0] << "\t";
    cout << chessBoard[5][1] << "\t";
    cout << chessBoard[5][2] << "\t";
    cout << chessBoard[5][3] << "\t";
    cout << chessBoard[5][4] << "\t";
    cout << chessBoard[5][5] << "\t";
    cout << chessBoard[5][6] << "\t";
    cout << chessBoard[5][7] << endl;

    // Row 6
    cout << "\t" << chessBoard[6][0] << "\t";
    cout << chessBoard[6][1] << "\t";
    cout << chessBoard[6][2] << "\t";
    cout << chessBoard[6][3] << "\t";
    cout << chessBoard[6][4] << "\t";
    cout << chessBoard[6][5] << "\t";
    cout << chessBoard[6][6] << "\t";
    cout << chessBoard[6][7] << endl;

    // Row 7
    cout << "\t" << chessBoard[7][0] << "\t";
    cout << chessBoard[7][1] << "\t";
    cout << chessBoard[7][2] << "\t";
    cout << chessBoard[7][3] << "\t";
    cout << chessBoard[7][4] << "\t";
    cout << chessBoard[7][5] << "\t";
    cout << chessBoard[7][6] << "\t";
    cout << chessBoard[7][7] << endl;

    return 0;
}
