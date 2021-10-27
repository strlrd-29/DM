#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    int i,j,k;
    printf("1    5    10\n");
    printf("-------------\n");
    for(i=0; i<=100; i++)
    {
        for(j=0; j<=20; j++)
        {
            for(k=0; k<=10; k++)
            {
                if((i+5*j+10*k == 100) == 1)
                {
                    printf("%d    %d    %d\n",i,j,k);
                }
            }
        }
    }


    return 0;
}
