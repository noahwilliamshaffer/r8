#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// using a regular function
void print(int i) {
    cout << i << " ";
}

// using function object
struct printobject {
    void operator() (int i) {cout << i << " ";}
} myobject;

// elements can also be modified
void square(int & e) {
    e = e * e;
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for_each(v.begin(), v.end(), print);
    cout << endl;

    // using lambda function
    for_each(v.begin(), v.end(), [](int i) { cout << i << " ";});
    cout << endl;

    for_each(v.begin(), v.end(), myobject);
    cout << endl;

    for_each(v.begin(), v.end(), square);

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    exit(EXIT_SUCCESS);
}
