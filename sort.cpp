#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {3, 6, 8, 9, 1, 0, 2, 5, 7, 4};
    sort(a, a + 10);
    for (int i : a) cout << i << " ";
}

