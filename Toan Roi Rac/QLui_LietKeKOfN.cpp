#include <iostream>
using namespace std;

void ToHop(int i, int s[], int n, int k);
void Out(int s[], int n);
void Init(int n);

int main()
{
    int n, k;
    cin >> n >> k;
    int s[n + 1];
    ToHop(1, s, n, k);
    return 0;
}

void ToHop(int i, int s[], int n, int k)
{
    for (int j = 1; j <= n; j++)
    {
        if (j >= s[i - 1] + 1 && j <= n - k + i)
        {
            s[i] = j;
            if (i == k)
                Out(s, k);
            else
                ToHop(i + 1, s, n, k);
        }
    }
}

void Out(int s[], int k)
{
    for (int i = 1; i <= k; i++)
        cout << s[k];
    cout << endl;
}