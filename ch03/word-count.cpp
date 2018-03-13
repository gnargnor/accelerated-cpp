#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cin;         using std::cout;
using std::vector;      using std::string;
using std::sort;        using std::endl;

int main()
{
    // instructions
    cout << "Word Count" << endl;
    cout << "----------" << endl;
    cout << "This program will count the number of times each word is" << endl;
    cout << "entered into the prompt" << endl;
    cout << "----------" << endl;
    
    // declare string variable to represent input
    string current_word;

    // declare vector that will contain the list of words
    vector<string> word_list;
    typedef vector<string>::size_type list_size;

    // prompt for input in a while loop
    cout << "Enter some words, homey." << endl;
    while (cin >> current_word) {
        word_list.push_back(current_word);
    }
    // set the size of the list
    list_size size = word_list.size();

    // prevent nubbiness
    if (size == 0) {
        cout << "Although this may appear to be a seemingly useless program, " << endl;
        cout << "Your inability to play by the rules casts you in a much worse light." << endl;

        return 1;
    }

    // sort the vector
    sort(word_list.begin(), word_list.end());
    
    // invariant:
    // list position is the next word to analyze
    int list_position = 0;
    int current_count = 0;
    string focus_word = word_list[list_position];
    vector<string> words;
    vector<int> count;

    // initialize focus word to first word to analyze
       
    // while loop or if else statement that adds while the wprd remains the same
    while (list_position != size) {        
        ++list_position;
        ++current_count;
        if (focus_word != word_list[list_position]) {
            words.push_back(focus_word);
            count.push_back(current_count);
            focus_word = word_list[list_position];
            current_count = 0;
        }
    }

    list_size unique_count = words.size();
    // reset list position
    list_position = 0;
    
    // print total unique words
    cout << "Total unique words: " << unique_count << endl;
    while (list_position != unique_count) {
        cout << words[list_position] << " : " << count[list_position] << endl;
        ++list_position;
    }
    
    return 0;
}
