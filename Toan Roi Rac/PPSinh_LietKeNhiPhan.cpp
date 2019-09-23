#include <stdio.h>

void Method(int b[], int n);
void Init(int b[], int n);
void Out(int b[], int n);
int IsLast(int b[], int n);
void Gen(int b[], int n);

int main()
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    int b[n + 1];
    Method(b, n);
    return 0;
}

void Out(int b[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n");
}

void Init(int b[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        b[i] = 0;
    }
}

int IsLast(int b[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
            return 0;
    }
    return 1;
}

void Gen(int b[], int n)
{
    int i = n;
    while (b[i] == 1)
    {
        i--;
    }
    b[i] = 1;
    for (int j = i + 1; j <= n; j++)
    {
        b[j] = 0;
    }
}

void Method(int b[], int n)
{
    Init(b, n);
    Out(b, n);
    int stop = IsLast(b, n);
    while (!stop)
    {
        Gen(b, n);
        Out(b, n);
        stop = IsLast(b, n);
    }
}