#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL)); // Khoi dong bo tao so ngau nhien. Mo dong ho he thong
    // srand(time(0));

    for (int i = 0; i < 3; ++i)
        cout << rand() % 100 -50<< ",";
    return 0;
}