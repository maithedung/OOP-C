#include <stdio.h>

void Gen(int a[], int n);
int Islast(int a[], int n);
void Init(int a[], int n);
void Out(int a[], int n);
void Method(int a[], int n);

int main()
{
    int n;
    printf("nhap n ");
    scanf("%d", &n);
    int b[n + 1];
    Method(b, n);
    return 0;
}

void Method(int a[], int n)
{
    Init(a, n);
    Out(a, n);
    int stop = Islast(a, n);
    while (stop == 0)
    {
        Gen(a, n);
        Out(a, n);
        stop = Islast(a, n);
    }
}

void Out(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void Init(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

int Islast(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void Gen(int a[], int n)
{
    // step 1
    int i = n - 1;
    while (a[i] > a[i + 1])
    {
        i--;
    }
    // step 2
    int k = n;
    while (a[k] < a[i])
    {
        k--;
    }
    // step 3
    int t = a[i];
    a[i] = a[k];
    a[k] = t;
    // step 4
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