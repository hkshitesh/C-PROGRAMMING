#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=0;
    printf("\nNo. of Arguments are: %d",argc);
    for(int i=0;i<argc;i++)
    {
    printf("\nName of the program is : %s",argv[i]);
    }
    return 0;
}