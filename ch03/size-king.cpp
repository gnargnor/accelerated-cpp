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

    string current_word;
    vector<string> word_list;
    
    while (cin >> current_word) {
        word_list.push_back(current_word);
    }
    //
    // string shortest = word_list[0;
    // string longest = "";

    typedef vector<string>::size_type list_size;
    typedef string::size_type str_size;

    list_size word_list_size = word_list.size();

    if (word_list_size == 0) {
        cout << "Watch it, pal." << endl;

        return 1;
    }

    string shortest = word_list[0];
    string longest = word_list[0];
    str_size short_size = shortest.size();
    str_size long_size = longest.size();
  
    for (int cur = 1; cur != word_list_size; ++cur) {
            
    }
    
     
}
    // if size of input is greater than longest string
    
    // if size of input is less than shortest string
    //
    // print shortest string
    //
    // print longest string
}
