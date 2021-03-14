#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, array[10] = {0};
    printf("Please enter any number\n");
    scanf("%d", &number);

    while(number > 0)
    {
        array[number % 10]++;
        number /= 10;
    }

    for(int i = 0; i < 10; i++)
        if(array[i])
            printf("%d amount = %d\n", i, array[i]);

    return 0;
}

/*
input:
Please enter any number: 913837454

output:
1 amount = 1
3 amount = 2
4 amount = 2
5 amount = 1
7 amount = 1
8 amount = 1
9 amount = 1
*/
