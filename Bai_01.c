#include <stdio.h>

int main()
{
    // int MYBIRTHYEAR;
    // char NAME;
    // printf("Nhap vao nam sinh la: \n");
    //  scanf("%d, &MYBIRTHYEAR");
    // printf("Nhap ho ten:");
    // scanf("%s,&MYNAME"); \\

    //  printf("So tuoi cua ban la: %d", 2024-MYBIRTHYEAR);

    int num2[6] = {5, 4, 3, 2, 1, 0};
    for (int i = 5; i >= 0; i--)
    {
        printf("Tu vi thu %d: %d \n", i, num2[i]);
    }
    return 0;
}
