#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;         using std::setprecision;
using std::cout;        using std::string;
using std::endl;        using std::streamsize;
using std::sort;        using std::vector;

int main()
{
    // ask for name
    cout << "What\'s yer name fella?" << endl;
    string name;
    cin >> name;
    cout << "Hey there, " << name << "!" << endl;

    // ask for midterm grades
    cout << "Please enter your midterm and final exam grades: " << endl;
    double midterm, final;
    cin >> midterm >> final;

    // ask for homework grades
    cout << "Now enter all of your homework grades, "
            "followed by \'end-of-file\': " << endl;
    
    // container homework
    vector<double> homework;
    // input variable
    double x;

    // invariant: homework contains all grades
    while (cin >> x) 
        homework.push_back(x);
    
    // type definition - size of vector container
    typedef vector<double>::size_type vec_sz;
    // size of homework
    vec_sz size = homework.size();
    if (size == 0) {
        cout << endl << "DO YOUR GODDAMN HOMEWORK" << endl;

        return 1;
    }
    
    // sort the grades
    sort(homework.begin(), homework.end());
    
    // compute median
    vec_sz med = size / 2;
    double median;
    median = (size % 2 == 0)
        ? homework[med] + homework[med - 1] / 2
        : homework[med];

    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        << setprecision(prec) << endl;
    
    return 0;
}
