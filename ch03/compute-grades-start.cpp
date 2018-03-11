#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;         using std::setprecision;
using std::cout;        using std::string;
using std::endl;        using std::streamsize;

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
            "followed by \'end-of-file\': " <<endl;
    
    // number of grades entered, sum of grades entered
    int count = 0;
    double sum = 0;
    
    // read variable
    double x;

    // invariant:
    //      we've read count grades and sum is the sum of the grades entered
    while (cin >> x) {
        ++count;
        sum += x;
    }

    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
        << setprecision(prec) << endl;
    
    return 0;
}
