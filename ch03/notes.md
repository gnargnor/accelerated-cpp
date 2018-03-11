# Accelerated C++
## _by Andrew Koenig and Barbara E. Moo_
---
## Chapter 03
### I/O header miscellany
* **\<ios>**: defines _streamsize_, which is the type used to designate the size or number of separte inputs
* **\<iomanip>**: defines io manipulators, such as _setprecision_, which allows us to define how many significant digits the output should contain
* **end-of-file**:  Different C++ implementations allow users to signify the end of input differently.  Common way is to begin a new line and then use <kbd>ctrl</kbd>+<kbd>z</kbd>  or <kbd>ctrl</kbd>+<kbd>d</kbd>
### Doubles vs Float
* **double** is a floating point number that has double the precision as **float**.
* it is almost always better to use **double** rather than **float**
* historically, **float** was used to conserve memory.
* the precision of **float** and **double** depends on the c++ implementation that the code is being run
### Input Chaining
* `cin >> input1 >> input2`
### Output Line Breaks
```
cout << "You can break lines of standard output   "
        "by closing the current line's quotes     "
        "since adjacent quotes separated by white "
        "space are always concatenated.           ";
```
### Default Initialization
* Initializing a variable without assigning a value is called default initialization
* The default value is different depending on the type being initialized
* Local variables of built in type are _undefined_ by default, and undefined variables contain whatever garbage that was stored in that memory location.
* Some implementations don't deal with undefined values well, recalling the memory that was stored there previously even though its illegal to do anything with an undefined value besides write a valid value to it.
* If you don't initialize int variables, programs will often fail, because the first time you go to access the variable, the first thing the program does is to read it.
* Conversely, if you're going to read directly into a new variable, initializing it is unnecessary
### setprecision
* using an io manipulator causes the io to be manipulated in the way designated until the end of the file
* therefore, it is good practice to set it back (even if you're near the end of a file)
* setprecision manipulates input or output inside of code designating either
### Testing for End of Input
```
while (cin >> x) {
    // do something
}
```
* testing for end of input in this way checks to see if the value return to cin is truthy or falsey.  The actual truthiness or falsiness of input and output evaluations is more complicated than evaluating bool or coercing int truthiness, but suffice it to say that the defin ition of cin validates input
* if the input is not valid / signifies the end of input, the while loop breaks.
* for example, if the type doesn't match the variable that the input is being stored in
### Invariants revisited
* The invariants set must be true at all times: when initialized, at the beginning, and at the end of each interation of the loop.
* Each time the loop is entered, the invariant must be set to be true before the loop ends.
### Vectors
* **vectors** a standard library type that holds an unknown number of sequenced values of the assigned type
* **vectors** are **containers** that hold a collection of values
* Declaration: `vector<double> homework;`
* All values of a vector container must be of the same type
* Vector definition makes use of template classes - what vector is (type vector) is different from what it contains (type double)
* **push_back** is a member function of vectors - just like push, it pushes the value passed onto the end or back of the vector and increases the size of the vector by one.
* The vector type itself defines a `vector<double>::size_type` type (the size of the vector) and a member function `size`
* All vector<double>::size_type values are unsigned integrals - they can never be negative.  You never have to check if its < 0.
* Containers generally define a type, `size_type`, which should be used to store the size of the container rather than defining the size as an int, for example.
### typedef
* using the `typedef` prefix signifies to the program that the name following the type declared will be used to store the type declared
* for example:
```
typedef vector<double>::size_type vec_sz;
```
* This sets the variable `vec_sz` equal to the type `vector<double>::size_type`
* Now, when we say
```
vec_sz size = homework.size()
```
* `size`  will have a type of `vector<double>::size_type` because that is what we set `vec_sz` to store
### sort
* defined in the `<algorithm>` header
* rearranges the values in a container to be in non decreasing order
* arguments specify the elements to be sorted.  For vectors, we use `homework.begin()` and `homework.end()`
### conditional operator ? :
* same as the javascript ternary conditional operator
### Ordinary integers and unsigned integers
* When ordinary integers and unsigned integers are combined in an expression, the ordinary integer is changed to unsigned before evaluation.  Therefore, if part of an expression is an unsigned integer, what it evaluates to cannot be negative.
### End of Chapter
* `sort(b, e)` rearrages elements in range [b, e) in nondecreasing order
* `max(e1, e2)` returns the max of two expressions that evaluate to exactly the same type
* `while (cin >> x) {//dosomething}` tests the state of the stream after trying to evaluate cin >> x -- if the stream is in a state of error it returns false
* s.precision(n) sets the precisionm of stream s to n
* setprecision(n) returns a value that sets the precision of an inline stream to n
* you can call setprecision(n) inside of a literal input stream, s.precision(n) sets a variable with a stored input streams precision to n
* 
