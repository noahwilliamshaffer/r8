#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {1, 2, 5, 3, 4, 5};

    cout << "Elements: ";
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    auto itr = remove(v.begin(), v.end(), 5);

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    copy(v.begin(), itr, ostream_iterator<int>(cout, " "));
    cout << endl;


    exit(EXIT_SUCCESS);
}
