#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
// using namespace ios;

int main()
{
    int m, n;
    FILE *f;
    char fn[50];

    cout << "File name: ";

    cin.get(fn, 50);
    cout << fn << endl;
    f = fopen(fn, "wt");

    // fclose(f);

    srand(time(0));

    m = 2 + rand() % 8;
    n = 2 + rand() % 8;
    fprintf(f, "%d %d\n", m, n);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            fprintf(f, "%d ", 1 + rand() % 100);
        fprintf(f, "\n");
    }

    // for (int i = 0; i < 10; ++i)
    //     cout << rand() % 100 - 50 << endl;

    fclose(f);

    return 0;
}