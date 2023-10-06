#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *p = 0; // pointing to null
    int a = 5;
    int *p = &a;
    cout << p << endl; // stores the adress of a or value  of p
    cout << *p;        // stores value 5
    (*p)++;
    cout << endl;
    cout << "value of a increase by 1" << endl;
    cout << a;

    // copying 1 pointer to another
    int *q = p; // copying pointer
    cout << q << "-" << p << endl;
    cout << *q << "-" << *q << endl;
}