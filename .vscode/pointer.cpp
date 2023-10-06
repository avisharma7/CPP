#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    //*p stores address of num where num =5
    cout << "value of num: " << *p << endl;
    cout << "address of num: " << p << endl;

    double d = 4.3;
    double *q = &d;
    cout << *q;

    cout << endl;

    // size of
    cout << sizeof(d) << endl;  // 8 bcz of storing double
    cout << sizeof(*q) << endl; // 8 bcz pointer always stores address
}