#include <iostream>
using namespace std;

int main()
{
    int m = 2; //row
    int n = 3; //column
    int **p;
    p = new int *[m];
    for (int i = 0; i < m; ++i)
    {
        *(p + i) = new int[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> *(*(p + i) + j);
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }

    return 1;
}