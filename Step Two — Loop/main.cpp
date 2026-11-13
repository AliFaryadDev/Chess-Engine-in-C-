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
    //in our previous mehod we used cout statements to print the same task by using 64 times cout statements. We will do the same task with the help of loop in just few steps. 
  for (int i = 0; i < 8; i++){
  for (int j = 0; j < 8; j++){
  cout<<"\t"<<chessBoard[i][j]<<" ";
        }
        cout<<endl;
    }
   
    

    return 0;
}