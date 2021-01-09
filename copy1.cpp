#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {1, 2, 5, 3, 4, 5};
    vector<int> v2 = {10, 20};

    cout << "Elements: ";
    // note that this one also uses copy
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    copy(v.begin(), v.end(), v2.begin());

    // note the output from the following line
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // now we use back_inserter
    copy(v.begin(), v.end(), back_inserter(v2));

    // note the output from the following line
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    exit(EXIT_SUCCESS);
}
