/* vim: set filetype=cpp: */
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // invariant: r == rows printed
    const int rows = 12;
    for (int r = 0; r != rows; ++r) {
        if (r == 0 || r == rows - 1) {
            string line(r * 2 + 1, '*');
            cout << line;
        } else {
            // invariant: c == columns printed
            int c = 0;
            while (c != r * 2 + 1) {
                if (c == 0 || c == r * 2)
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
