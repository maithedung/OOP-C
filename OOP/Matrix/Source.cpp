#include <iostream>
using namespace std;

/* Matrix.h */
class Matrix
{
public:
    int **data;
    int row, col;

public:
    Matrix(int = 2, int = 3, int = 1);
    // ~Matrix();
    friend ostream &operator<<(ostream &, const Matrix &);
    // friend istream &operator<<(istream &, Matrix &);
}

/* Matrix.cpp */
Matrix::Matrix(int row, int col, int t)
{
    this->row = row;
    this->col = col;
    this->data = new int *[this->row];
    for (int i = 0; i < this->row; ++i)
    {
        *(this->data + i) = new int[this->col];
        for (int j = 0; j < this->col; ++j)
            *(*(this->data + i) + j) = t;
    }
}

// Matrix::~Matrix()
// {
// }

ostream& operator()(ostream& o,const Matrix&m){
    for(int i=0;i<m.row)
}
