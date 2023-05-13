#include <stdio.h>
int main(int argc, char *argv[])
{
    int res=0;
    printf("\noperator is :%s",argv[3]);
    if(strcmp(argv[3],"+")==0)
    {
        res=(atoi(argv[1])+atoi(argv[2]));
    }
    if(strcmp(argv[3],"m")==0)
    {        
        res=(atoi(argv[1]) * atoi(argv[2]));
    }
        if(strcmp(argv[3],"-")==0)
    {
        res=(atoi(argv[1])-atoi(argv[2]));
    }
    printf("\nResult is :%d",res);
    return 0;
}