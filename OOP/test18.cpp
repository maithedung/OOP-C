#include <bits/stdc++.h>
using namespace std;

struct Product
{
    char name[100];
};

void display(struct Product *product)
{
    int i, N;
    char name[100];
    for (i = 0; i < N; i++)
    {
        printf("ten san pham= %s", (*(product + i)).name);
    }
}

int main(int argc, char *argv[])
{
    char x, o;
    int i, t, j, y;
    char name[100];
    printf("+-----------------------------------------------------+\n+ 1. Input some Products 2. Sort 3.Display 4. Exit +\n+-----------------------------------------------------+");
    x = getchar();
    switch (x)
    {
    case '1':
        printf("Nhap so luong san pham=  ");
        scanf("%d", &y);
        struct Sanpham
        {
            char name[100];
        } sanpham[y], temp;
        for (i = 0; i < y; i++)
        {
            printf("Nhap chi tiet san pham=  ");
            scanf("%c", &sanpham[y].name);
        }
        printf("\nBan muon lam gi voi du lieu nay? = ");
        scanf("%c", &o);
        o = getchar();
        switch (o)
        {
        case '2':
            for (i = 0; i < y; i++)
            {
                for (j = i + 1; j < y; j++)
                {
                    if (strcmp(sanpham[j].name, sanpham[j + 1].name) > 0)
                    {
                        temp = sanpham[j];
                        sanpham[j] = sanpham[j + 1];
                        sanpham[j + 1] = temp;
                    }
                }
            }
            for (i = 0; i < y; i++)
            {
                printf("%s\n", sanpham[i].name);
            }
            break;
        case '3':
            display(Struct);
            break;
        case '4':
            return 0;
        }
        getchar();
    }
    getchar();
    return 0;
}
