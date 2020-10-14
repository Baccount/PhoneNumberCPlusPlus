
// Declare necessary header files.

#include <iostream>

#include <string>

using namespace std;

// start the main function

int main()

{

    // Declare the integer
    string usrLetter, resultString;
    int count = 0;
    // Display the information on console.
    cout << "Program to prompt the user to enter a telephone number expressed in letters" << endl;
    cout << "To stop the program enter #." << endl;

    // start the while loop
    // check whether string contains # or not.

    while (usrLetter != "#")

    {
        // Prompt the user to enter the phone number expressed in letters
        cout << "Enter a telephone number expressed in letters: ";
        // input letters.

        getline(cin, usrLetter);
        cout << endl;

        // Display the statement on console.
        cout << "The telephone you entered is: " << usrLetter << endl;
        // Display the telephone number.
        cout << "The corresponding telephone digit is: ";

        // start the while loop.

        for (int i = 0; i < usrLetter.length(); i++){

            // Declare variables.
            bool notSpace = true;
            // Start the switch case



            switch (usrLetter[i]) {
                case 'A':
                case 'a':
                case 'B':
                case 'b':
                case 'C':
                case 'c':
                    resultString += "2";
                    count++;
                    break;
                case 'D':
                case 'd':
                case 'E':
                case 'e':
                case 'F':
                case 'f':
                    resultString += "3";
                    count++;
                    break;

                case 'G':
                case 'g':
                case 'H':
                case 'h':
                case 'I':
                case 'i':
                    resultString +=  "4";
                    count++;
                    break;

                case 'J':
                case 'j':
                case 'K':
                case 'k':
                case 'L':
                case 'l':
                    resultString += "5";
                    count++;
                    break;
                case 'M':
                case 'm':
                case 'N':
                case 'n':
                case 'O':
                case 'o':
                    resultString +=  "6";
                    count++;
                    break;

                case 'P':
                case 'p':
                case 'Q':
                case 'q':
                case 'R':
                case 'r':
                case 'S':
                case 's':
                    resultString += "7";
                    count++;
                    break;
                case 'T':
                case 't':
                case 'U':
                case 'u':
                case 'V':
                case 'v':
                    resultString += "8";
                    count++;
                    break;

                case 'W':
                case 'w':
                case 'X':
                case 'x':
                case 'Y':
                case 'y':
                case 'Z':
                case 'z':
                    resultString += "9";
                    count++;
                    break;

                case ' ':
                    notSpace = false;
                    break;

                default:
                    cout << "Invalid input.";

            }

            //display after the third digit

            if (count == 3 && notSpace) {
            // Display hypen on console.
                resultString += "-";
            // Check whether the value of count is 7 or not.
            }
            if (count == 7) {
                break;
            }


        }
        cout << resultString;
        cout << endl;
        // Update the value of count.
        count = 0;
    }
    return 0;

}