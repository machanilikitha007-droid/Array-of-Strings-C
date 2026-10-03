#include <stdio.h>

int main()
{
    char names[5][50];

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Name %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    printf("\nNames entered:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
