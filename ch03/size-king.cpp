#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <ios>

using std::cin;         using std::cout;
using std::string;      using std::vector;
using std::endl;        using std::streamsize;
using std::sort;

int main()
{
    // define program
    cout << "Size King" << endl;
    cout << "---------" << endl;
    cout << "I will tell you the little and big size kings" << endl;
    cout << "---------" << endl;
    // define variables: current string, shortest string, longest string
    string current;
    string shortest = "";
    string longest = "";

    typedef string::size_type str_size;
    str_size short_size = shortest.size();
    str_size long_size = longest.size();
    // ask for input - slow down, it's a mr. show s.1 ep.1 ref
    cout << "Feed me the banana, slave." << endl;
    while (cin >> current) {
        str_size cur_size = current.size();
        if (cur_size > long_size) {
            longest = current;
            long_size = cur_size;
        }
    }
    // if size of input is greater than longest string
    //
    // if size of input is less than shortest string
    //
    // print shortest string
    //
    // print longest string
}
