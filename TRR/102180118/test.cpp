#include <iostream>
#include <fstream>
using namespace std;

int G[100][100];
int S[100], P[100], Len[100], J[100];
int sum;

void InputFile(fstream &Input, int &a, int &b, int &n)
{
    int i = 0;
    while (Input.eof() == false)
    {
        Input >> J[i];
        i++;
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

void init(int G[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + G[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && G[i][j] == 0)
                G[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++)
    {
        Len[i] = sum;
    }
}

void dijkstra(fstream &Output, int a, int z, int n)
{
    int temp = 0, k = 0, p = 0, tam = a;
    Len[a] = 0;
    while (S[z] == 0)
    {
        //	cout << " k truoc for :  " << k << endl;
        if (p == n + 1)
            break;
        for (int i = 0; i < n; i++)
        {
            if (S[i] != 1 && temp >= Len[i] && G[tam][i] < sum)
            {
                temp = Len[i];
                k = i;
            }
        }
        //	cout << "temp: " << temp << " K: "<< k << endl;
        S[k] = 1;
        P[p] = k;
        tam = k;
        p++;
        for (int i = 0; i < n; i++)
        {
            if (S[i] != 1 && G[k][i] < sum && i != k)
            {
                Len[i] = temp + G[k][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (S[i] == 0 && Len[i] < sum && G[tam][i] < sum)
            {
                temp = Len[i];
                //			cout << "temp'': " << temp << endl;
                break;
            }
        }
        /*for (int i = 0; i < n; i++)
		{
			cout << S[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << Len[i] << " ";
		}
		cout << endl;*/
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
        Output << endl
               << temp;
    }
}

int main()
{
    int n;
    int a, b;
    fstream Input;
    Input.open("INPUT.txt", ios_base::in);
    if (Input.fail() == true)
    {
        cout << "\nWARNING: The file does not exist!\nCreat a file 'Input.txt' in the same folder.\n\n\n\n";
        system("pause");
        return 0;
    }
    fstream Output;
    Output.open("OUTPUT.txt", ios_base::out);
    InputFile(Input, a, b, n);
    Input.close();
    init(G, n);
    dijkstra(Output, a, b, n);
    Output.close();

    return 0;
}