#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30, 40, 10, 10, 40, 50, 40, 60};

    cout << "Original: ";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(v1.begin(), v1.end());

    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    cout << "After removing duplicates: ";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    exit(EXIT_SUCCESS);
}
