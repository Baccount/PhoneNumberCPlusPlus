
#include <iostream>

#include <string>

using namespace std;


int main()

{

    string usrLetter, outputString;
    int count = 0;
    bool keepRunning = true;

    // Main while loop start

    while (keepRunning)

    {
        // Prompt user to enter letters
        cout << "Enter your telephone number : ";
        getline(cin, usrLetter);
        cout << endl;
        cout << "Your telephone number is: " << usrLetter << endl;







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
                    cout << "Invalid" << endl;
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
        // Print output converted phone number
        cout << "The corresponding telephone digit is: ";
        cout << outputString;
        cout << endl;
        // blank out outputString
        outputString = "";
        count = 0;

    }
    return 0;

}