#include <stdio.h>
#include <stdlib.h>

int occurences(int x, int tab[], int i, int j)
{
    int index, count = 0;
    for(index = i; index <= j; index++)
    {
        if(tab[index] == x)
        {
            count++;
        }
    }
    return count;
}

int majoritaire (int tab[],int length_of_array)
{
    int i;
    for(i=0; i<=(length_of_array-1)/2; i++)
    {
        if(occurences(tab[i],tab,0,length_of_array-1) > length_of_array/2)
        {
            return tab[i];
        }
    }
    return 0;
}

int main()
{
    int A[] = {1,1,2};
    int length_of_array = sizeof(A)/sizeof(int);
    int x = majoritaire(A,length_of_array);
    if(x == 0)
    {
        printf("There is no majoritary element :)");
    }
    else
    {
        printf("The majoritary element is : %i", x);
    }
    return 0;
}
