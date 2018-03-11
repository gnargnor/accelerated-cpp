#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::cout;
using std::vector;          using std::string;
using std::setprecision;    using std::sort;
using std::reverse;         using std::streamsize;
using std::endl;

int main()
{
    // declare variables: input list, current input, size type of vector<int>
    vector<int> integer_list;
    int current_input;
     
    // ask for a list of quartiles
    cout << "Quartiles" << endl;
    cout << "---------" << endl;
    cout << "This program will return a sorted list of the quartiles of " << endl;
    cout << "integers entered in non increasing order" << endl;
    cout << "---------" << endl;
    cout << "Enter integers followed by end-of-file:" << endl;

    // push the current input into our integer list until the user ends the input
    while (cin >> current_input){
        integer_list.push_back(current_input);    
    }
    
    // now that we have our full list, sort then reverse
    sort(integer_list.begin(), integer_list.end());
    reverse(integer_list.begin(), integer_list.end());
    
    // for loop type definition for vector size
    typedef vector<int>::size_type vector_size;
    vector_size size = integer_list.size();

    // print out list of quartiles to a precision of 4
    cout << "Quartiles:" << endl;
    
    streamsize prec = cout.precision();
    cout.precision(6);   
    for (int i = 0; i != size; ++i) {
        double current_quartile = integer_list[i] /(double) 4;
        cout << current_quartile << endl;
    }
    cout.precision(prec);

    return 0;
}
