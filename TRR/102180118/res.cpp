#include <bits/stdc++.h>
using namespace std;

#define inFile "input.txt"
#define outFile "output.txt"

int a, b, n;
int G[100][100];
int S[100], P[100], Len[100], J[100];
int dis;

void InFile(ifstream &Input)
{
    int i = 0;
    while (Input.eof() == false)
    {
        Input >> J[i];
        ++i;
    }
    n = J[0];
    cout << n << endl;
    int t = 0;
    for (int z = 0; z < J[0]; z++)
    {
        for (int j = 0; j < J[0]; j++)
        {
            G[z][j] = J[t + 1];
            t++;
            cout << G[z][j] << " ";
        }
        cout << endl;
    }
    a = J[n * n + 1];
    b = J[n * n + 2];
    cout << a << " " << b << endl;
}

void Init()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dis = dis + G[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && G[i][j] == 0)
                G[i][j] = dis;

    for (int i = 0; i < n; i++)
        Len[i] = dis;
}

void Dijkstra(ofstream &Output)
{
    int temp = 0, k = 0, p = 0, tam = a;
    Len[a] = 0;
    while (S[b] == 0)
    {
        if (p == n + 1)
            break;
        for (int i = 0; i < n; i++)
            if (S[i] != 1 && temp >= Len[i] && G[tam][i] < dis)
            {
                temp = Len[i];
                k = i;
            }
        S[k] = 1;
        P[p] = k;
        tam = k;
        p++;
        for (int i = 0; i < n; i++)
            if (S[i] != 1 && G[k][i] < dis && i != k)
                Len[i] = temp + G[k][i];

        for (int i = 0; i < n; i++)
            if (S[i] == 0 && Len[i] < dis && G[tam][i] < dis)
            {
                temp = Len[i];
                break;
            }
    }
    if (p == n + 1)
    {
        cout << "-1";
        exit(0);
    }
    else
    {
        for (int i = 0; i < p; i++)
        {
            cout << P[i] << " ";
            Output << P[i] << " ";
        }
        cout << endl
             << temp;
        Output << endl << temp;
    }
}

int main()
{
    ifstream Input(inFile);

    if (Input.fail())
    {
        cout << "WARNING: The file does not exist! "
             << "You are creating a file 'input.txt' in the same folder.";

        return 0;
    }
    else
        cout << "Read file successfully!" << endl;

    InFile(Input);
    Input.close();

    Init();

    ofstream Output(outFile);
    if (Output.fail())
        cout << "Failed to write this file!" << endl;
    else
        cout << "Write file successfully!" << endl;

    Dijkstra(Output);
    Output.close();

    return 0;
}