#include <iostream>
using namespace std;

int main() {
    string from;
    string to;
    string move;
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
  for (char ch = 'a'; ch <= 'h'; ch++){
      cout<<"\t"<<ch<<" ";
  }
    cout<<endl;
    cout<<"\t"<<"------------------------------";
    cout<<endl;
  for (int i = 0; i < 8; i++){
      cout<<i+1;
  for (int j = 0; j < 8; j++){
  cout<<"\t"<<chessBoard[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\t"<<"------------------------------";
    cout<<endl;
   for (char ch = 'a'; ch <= 'h'; ch++){
      cout<<"\t"<<ch<<" ";
   }
    //Ask a Player to enter your move
    cout<<"\t"<<endl<<endl<<"Enter your move: ";
    cin>>move;
    cout<<"Your move is: "<<move;

     from = move.substr(0, 2);
     to = move.substr(2, 2);

    cout << "From: " << from << endl;
    cout << "To: " << to << endl;

    return 0;
}