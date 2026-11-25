String Parsing in C++

Project: Terminal Based Chess Game
Step: 05
Language: C++

📄 Table of Contents

- "Introduction" (#introduction)
- "What is String Parsing?" (#what-is-string-parsing)
- "Understanding the Input" (#understanding-the-input)
- "C++ Code" (#c-code)
- "Code Explanation" (#code-explanation)
- "Understanding "substr()"" (#understanding-substr)
- "How Parsing Works" (#how-parsing-works)
- "Output" (#output)
- "Conclusion" (#conclusion)

---

1. Introduction

In our Terminal Based Chess Game, the player enters a chess move as a single string.

For example:

e2e4

This input contains two different pieces of information:

- "e2" = Source Position
- "e4" = Destination Position

We need to separate these two values so that our program can understand the player's move.

For this purpose, we use String Parsing.

2. What is String Parsing?

String Parsing is the process of analyzing a string and dividing it into smaller meaningful parts.

Example:

string move = "e2e4";

We parse this string into two parts:

e2e4
 |
 |---- e2 (Source Position)
 |
 |---- e4 (Destination Position)

This allows us to extract useful information from a single string.

3. Understanding the Input

Consider this input:

string move = "e2e4";

A string stores characters in sequence, and each character has an index.

Character| e| 2| e| 4
Index| 0| 1| 2| 3

Important: String indexing starts from "0", not "1".

Therefore:

- Index "0" contains "e".
- Index "1" contains "2".
- Index "2" contains "e".
- Index "3" contains "4".

4. C++ Code

```cpp 
#include <iostream>
#include <string>
using namespace std;

int main() {

    string move;

    cout << "Enter your move: ";
    cin >> move;

    string from = move.substr(0, 2);
    string to = move.substr(2, 2);

    cout << "From: " << from << endl;
    cout << "To: " << to << endl;

    return 0;
}

5. Code Explanation

1. Header Files

#include <iostream>
#include <string>

- "iostream": Allows us to take input and display output.
- "string": Allows us to work with strings and their functions.

2. Namespace

using namespace std;

Allows us to use standard C++ objects and functions without writing "std::" repeatedly.

3. Main Function

int main() {

The execution of our program starts from the "main()" function.

4. String Declaration

string move;

We declare a string variable named "move" to store the player's chess move.

5. Taking Input

cout << "Enter your move: ";
cin >> move;

- "cout" displays a message.
- "cin" takes input from the player.
- The entered move is stored in the "move" variable.

For example:

e2e4

6. Extracting Source Position

string from = move.substr(0, 2);

We use the "substr()" function to extract a part of the original string.

- "0" = Starting index.
- "2" = Number of characters to extract.

Result:

from = "e2"

7. Extracting Destination Position

string to = move.substr(2, 2);

- "2" = Starting index.
- "2" = Number of characters to extract.

Result:

to = "e4"

8. Displaying Results

cout << "From: " << from << endl;
cout << "To: " << to << endl;

Displays the extracted source and destination positions.

9. Return Statement

return 0;

Indicates that the program has finished successfully.

6. Understanding "substr()"

"substr()" is a built-in C++ string function used to extract a substring from an existing string.

Syntax:

string.substr(starting_index, length);

Parameter| Meaning
starting_index| Where extraction begins
length| Number of characters to extract

Example:

string text = "HELLO";

string result = text.substr(1, 3);

cout << result;

Output:

ELL

Explanation:

- Starting index = "1"
- Number of characters = "3"
- Extracted characters = "ELL"

7. How Parsing Works

Let's understand the complete execution step by step.

Step 1 — Input

The player enters:

e2e4

Step 2 — Store Input

string move = "e2e4";

Step 3 — Extract Source

string from = move.substr(0, 2);

Result: "e2"

Step 4 — Extract Destination

string to = move.substr(2, 2);

Result: "e4"

Step 5 — Final Result

Original String: e2e4

Source Position: e2
Destination Position: e4

8. Output

Enter your move: e2e4

From: e2
To: e4

9. Conclusion

In this step, we learned how to perform String Parsing in C++.

We took a single string containing a chess move and extracted two meaningful parts using the "substr()" function.

- "e2" represents the source position.
- "e4" represents the destination position.

Key Learning: String Parsing helps us extract meaningful information from a single string so that our program can process it separately.

---

Next Step: Use the extracted source and destination positions to process the player's chess move.