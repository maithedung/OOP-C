#include <stdio.h>

int main()
{
    int hang;
    hang = 0;
    scanf("%d", &hang);
    for (int i = hang; i > 0; i--)
    {
        printf("\n");
        for (int j = i; j > 0; j--)
            printf("*");
    }
    return 0;
}