#include <iostream>

#include <string>

using namespace std;


int main()

{

    string usrLetter, outputString;
    int count = 0;
    bool keepRunning = true;
    bool isValid = true;

    // Main while loop start

    while (keepRunning)

    {
        // Prompt user to enter letters
        cout << "Enter a 7 character string, or type # to quit : ";
        getline(cin, usrLetter);
        cout << endl;
        cout << "You entered: " << usrLetter << endl;

    //Quits the program//
    if (usrLetter == "#") {
        cout << "Exiting program." << endl;
        break;
    }

        //Checks length of string, prints an error if it's too long.
    if (usrLetter.length() <= 7) {

        // Start for loop that converts letters to numbers

        for (int i = 0; i < usrLetter.length(); i++){

            // Check if space or not bool
            bool space = false;


            // Start switch case converter
            switch (usrLetter.at(i)) {
                case 'A':
                case 'a':
                case 'B':
                case 'b':
                case 'C':
                case 'c':
                    outputString += "2";
                    count++;
                    break;
                case 'D':
                case 'd':
                case 'E':
                case 'e':
                case 'F':
                case 'f':
                    outputString += "3";
                    count++;
                    break;

                case 'G':
                case 'g':
                case 'H':
                case 'h':
                case 'I':
                case 'i':
                    outputString +=  "4";
                    count++;
                    break;

                case 'J':
                case 'j':
                case 'K':
                case 'k':
                case 'L':
                case 'l':
                    outputString += "5";
                    count++;
                    break;
                case 'M':
                case 'm':
                case 'N':
                case 'n':
                case 'O':
                case 'o':
                    outputString +=  "6";
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
                    outputString += "7";
                    count++;
                    break;
                case 'T':
                case 't':
                case 'U':
                case 'u':
                case 'V':
                case 'v':
                    outputString += "8";
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
                    outputString += "9";
                    count++;
                    break;

                case ' ':
                    space = true;
                    break;

                default:
                    cout << "Invalid, no special characters allowed." << endl;
                    isValid = false;
                    i = 50;
                    break;

            }

            // add - after 3 digits
            if (count == 3 && !space) {
                outputString += "-";
                space = false;
            }
            if (count == 7) {
                break;
            }
        }
    
        }
            else {
            cout << "Invalid, string is too long to fit in a phone number." << endl;
                    isValid = false;
                }

        // Print output converted phone number (If the number is valid)
        if (isValid) {
        cout << "The corresponding telephone digit is: ";
        cout << outputString;
        cout << endl; 
        }
        // blank out outputString and set valid to true again
        outputString = "";
        count = 0;
        isValid = true;
    }
    return 0;

}