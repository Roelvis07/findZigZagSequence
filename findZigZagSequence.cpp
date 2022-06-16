// findZigZagSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findZigZagSequence(vector<int> a, int n) {
    sort(a.begin(), a.end());
    int mid = ((n + 1) / 2) - 1;
    swap(a[mid], a[n - 1]);

    int st = mid + 1;
    int ed = n - 2;
    while (st <= ed) {
        swap(a[st], a[ed]);
        st = st + 1;
        ed = ed - 1;
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    int n, x;
    int test_cases;
    cin >> test_cases;

    for (int cs = 1; cs <= test_cases; cs++) {
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a.push_back(x);
        }
        findZigZagSequence(a, n);
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
