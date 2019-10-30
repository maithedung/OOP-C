#include <bits/stdc++.h>
using namespace std;

int Test()
{
    int m = 1;
    return m++;
}

int main()
{
    // cout << Test();
    int m = 1;
    // cout << m++;
    cout << m++ + ++m;
    // cout << m++;
    
    return 0;
}