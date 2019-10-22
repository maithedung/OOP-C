class Point2D
{
private:
    int xVal;
    int yVal;
public:
    const int z;

public:
    // get
    int Get_xVal()
    {
        return this->xVal;
    }
    void Set_xVal(int);
    void TinhTien(int);
    void Show();

    Point2D(int);

    Point2D(int = 1, int = 2, const int);

    Point2D(const Point2D &);

    ~Point2D();
};