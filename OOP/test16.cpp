/*
Nhập vào bàn phím các số và dừng lại khi gặp số âm.
Sau đó tính tổng các số trong mảng vừa nhập
*/
```
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, sum;

    n = sum = 0;

    while (n >= 0)
    {
        scanf("%d", &n);
        sum += n;
    }

    printf("Result = %d", sum);

    return 0;
}
```