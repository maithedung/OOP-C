#include <fstream>
#include <iostream>
using namespace std;

void Outfile(string filename)
{
    ofstream outfile;
    outfile.open(filename);
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
            outfile << i * j << " ";
        outfile << endl;
    }
    outfile.close();
}

void Infile(string filename)
{
    string line;

    ifstream infile;
    infile.open(filename);

    while (!infile.eof())
    {
        getline(infile, line);
        cout << line << endl;
    }

    infile.close();
}

int main()
{

    Outfile("dung1.txt");
    Infile("dung1.txt");
    // Infile("dung.txt");

    return 0;
}