/* vim: set filetype=cpp: */
// uses a loop to generate a fancy display based on input name
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    // ask for a name
    cout << "What\'s yer name, sonny? ";

    // read the name
    string name;
    cin >> name;

    // build our message
    const string greeting = "Hello, " + name + "!";

    // set pad
    const int pad = 1;

    // set rows and cols
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
        
    // print new line
    cout << endl;

    // write rows
    for (int r = 0; r != rows; ++r) {
        // invariant: written c rows
        string::size_type c = 0;
        // write a row 
        while (c != cols) {
            // write the greeting inside of the pad if the position is correct
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows -1 || c == 0 || c == cols -1)
                    cout << "*";
                else
                    cout << " ";
                ++c;    
            }
        }
        cout << endl;
    }    

    return 0;
}
