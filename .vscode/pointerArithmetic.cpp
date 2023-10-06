#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << i << endl; // must print 4
    cout << "t before " << t << endl;
    t = t + 1; // must increase address stored at t by 4 bytes as it stores int
    cout << "t after " << t << endl;
}