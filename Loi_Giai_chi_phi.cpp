#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int m;
    if (k <= 100)
        m = 10 * n;
    else if (k >= 101 && k <= 500)
        m = 8 * n;
    else
        m = 6 * k;
    cout << m;
    return 0;
}