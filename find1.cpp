#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {1, 2, 5, 3, 4, 5};
    size_t cnt = 0;

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    auto itr = find(v.begin(), v.end(), 5);

    while (itr != v.end()) {
	++cnt;
	itr = find(++itr, v.end(), 5);
    }

    cout << "There are " << cnt << " 5s" << endl;
    exit(EXIT_SUCCESS);
}
