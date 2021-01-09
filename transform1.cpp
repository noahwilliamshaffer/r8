#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// note how this differs from the function in for_each1.cpp
int square(int e) {
    e = e * e;
    return e;
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    // note that we copy modified elements back to the same vector
    // in general the destination can be different container
    transform(v.begin(), v.end(), v.begin(), square);

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    exit(EXIT_SUCCESS);
}
