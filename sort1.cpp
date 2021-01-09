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

    if (is_sorted(v.begin(), v.end())) {
	cout << "Sorted" << endl;
    } else {
	cout << "Not sorted" << endl;
    }

    sort(v.begin(), v.end());
    cout << "After sorting: ";
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    if (is_sorted(v.begin(), v.end())) {
	cout << "Sorted" << endl;
    } else {
	cout << "Not sorted" << endl;
    }

    exit(EXIT_SUCCESS);
}
