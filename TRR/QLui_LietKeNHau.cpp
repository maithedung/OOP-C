#include <iostream>
using namespace std;

void XepHau(int i, int s[], int n);
void Out(int s[], int n);
void Init(int n);

int A[100], B[100], C[100];
int count = 0;

int main()
{
    int n;
    cin >> n;
    int s[n + 1];
    Init(n);
    XepHau(1, s, n);
    cout << count;
    return 0;
}

void XepHau(int i, int s[], int n)
{
    for (int j = 1; j <= n; j++)
    {
        if (A[j] == 1 && B[i + j] == 1 && C[i - j] == 1)
        {
            s[i] = j;
            A[j] = 0;
            B[i + j] = 0;
            C[i - j] = 0;
            if (i == n)
                Out(s, n);
            else
                XepHau(i + 1, s, n);
            A[j] = 1;
            B[i + j] = 1;
            C[i - j] = 1;
        }
    }
}

void Init(int n)
{
    for (int i = 1; i <= n; i++)
        A[i] = 1;
    for (int i = 2; i <= 2 * n; i++)
        B[i] = 1;
    for (int i = 1 - n; i <= n - 1; i++)
        C[i] = 1;
}

void Out(int s[], int n)
{
    for (int i = 1; i <= n; i++)
        cout << s[i];
    cout << endl;
    ++count;
}