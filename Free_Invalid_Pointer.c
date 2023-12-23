// Online C compiler to run C program online
#include <stdio.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int Fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}
void swap(int *a, int *b)
{
    *a = *a + (*b);
    *b = *a - (*b);
    *a = *a - (*b);
}
void Maximum(int *ptr, int range, int k)
{
    int max = 0;
    for (int i = 0; i < range; i++)
    {
        if (*(ptr + i) >= k)
        {
            swap((ptr + i), (ptr + range - 1));
            free((ptr + range - 1));
            range--;
            i--;
        }
        else
        {
            max = *(ptr + i);
        }
    }
    printf("%d\n", max);
}

void calculate_the_maximum(int n, int k, int range)
{
    int *AND = (int *)malloc(range * sizeof(int));
    int *OR = (int *)malloc(range * sizeof(int));
    int *XOR = (int *)malloc(range * sizeof(int));
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            *(AND + count) = i & j;
            printf("a & b = %d\t", *(AND + count));
            *(OR + count) = i | j;
            printf("a | b = %d\t", *(OR + count));
            *(XOR + count) = i ^ j;
            printf("a ^ b = %d\t", *(XOR + count));
            count++;
            printf("\n");
        }
    }
    printf("\n");
    Maximum(AND, range, k);
    Maximum(OR, range, k);
    Maximum(XOR, range, k);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int range = Fact(n) / (Fact(2) * Fact(n - 2));

    calculate_the_maximum(n, k, range);

    return 0;
}

// output
/*
5 4
a & b = 0	a | b = 3	a ^ b = 3
a & b = 1	a | b = 3	a ^ b = 2
a & b = 0	a | b = 5	a ^ b = 5
a & b = 1	a | b = 5	a ^ b = 4
a & b = 2	a | b = 3	a ^ b = 1
a & b = 0	a | b = 6	a ^ b = 6
a & b = 0	a | b = 7	a ^ b = 7
a & b = 0	a | b = 7	a ^ b = 7
a & b = 1	a | b = 7	a ^ b = 6
a & b = 4	a | b = 5	a ^ b = 1

free(): invalid pointer
Aborted

*/
