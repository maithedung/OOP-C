#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     // int a;
//     // int &a_ref = a;
//     // int *pa = &a;
//     // cout << *pa << endl;
//     // *pa++;
//     // cout << *pa << endl
//     //      << *pa++;
//     // int *pa = nullptr;
//     // // cout << pa << endl;
//     // if (pa == NULL)
//     //     cout << "Do nothing" << endl;
//     // else
//     //     cout << *pa;
//     // // cout << *pa;

//     return 0;
// }

int add(int x, int y)
{
    return x + y;
}

// int main()
// {
//     int x = 5;
//     // tùy thuộc vào thứ tự evaluate các param của conmpiler
//     // mà phép cộng này có thể là 5+6 hoặc 6+6
//     int value = add(x, ++x);

//     std::cout << value; // 11 or 12?
//     return 0;
// }

int main()
{
    // int arr[3] = {0, 1, 2};
    // int i = 0;

    // arr[i++] = ++i;
    // int x = ++i + ++i;
    // int x = (5, 6, 7);
    // cout << x;

    // std::cout << arr[i] << endl;
    // std::cout << x;

    // char a = 'a';
    // char *b = &a;

    // char c = &b;
    // cout << *c;
    // cout << *b;

    // float a = 3.0;
    // double b = 3.0;
    // a == b ? cout << "t" : cout << "f";

    int *p=NULL;
    delete p;

    return 0;
}