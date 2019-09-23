#include <stdio.h>

void Init(int a[], int n);
void Out(int a[], int n);
int IsLast(int a[], int n);
void Gen(int a[], int n);
void Method(int a[], int n);

int main()
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    int a[n + 1];
    Method(a, n);
    return 0;
}

void Init(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void Out(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

int IsLast(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i + 1])
            return 0;
    }
    return 1;
}

void Gen(int a[], int n)
{
    int i = n - 1;
    while (a[i] < a[i - 1])
    {
        i--;
    }

    int k = n;
    while (a[i] >= a[k])
    {
        k--;
    }

    int t = a[i];
    a[i] = a[k];
    a[k] = t;

    int l = i + 1;
    int r = n;
    while (l < r)
    {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

void Method(int a[], int n)
{
    Init(a, n);
    Out(a, n);
    int stop = IsLast(a, n);
    while (stop == 0)
    {
        Gen(a, n);
        Out(a, n);
        stop = IsLast(a, n);
    }
}