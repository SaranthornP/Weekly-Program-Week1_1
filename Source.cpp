#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of n: \n");
    scanf_s("%d", &n);
    int arr[100][100];
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }
    }
    int brr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[j][i] = arr[i][j];
        }
    }
    printf("\nAfter transpose the elements are...\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}