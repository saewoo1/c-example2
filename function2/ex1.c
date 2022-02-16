#include <stdio.h>
int sort(int *parr)
{
    int i, j, temp;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (parr[i] > parr[j])
            {
                temp = parr[i];
                parr[i] = parr[j];
                parr[j] = temp;
            }
        }
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%d, ", parr[i]);
    }
}
int main()
{
    int arr[11], i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d번째 인자를 입력하세요\n", i);
        scanf("%d", &arr[i]);
    }

    sort(arr);
    return 0;
}