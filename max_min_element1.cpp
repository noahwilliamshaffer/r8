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

    auto itr1 = max_element(v.begin(), v.end());
    auto itr2 = min_element(v.begin(), v.end());

    cout << "Maximum element: " << *itr1 << endl;
    cout << "Minimum element: " << *itr2 << endl;
    exit(EXIT_SUCCESS);
}
