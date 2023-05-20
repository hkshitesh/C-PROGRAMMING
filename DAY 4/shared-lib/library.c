#include<stdio.h>
ssize_t signum(ssize_t input)
{
    printf("from shared lib %li\n",input);
    if(0==input)
    {
        return 0;
    }
    else{
        return input < 0 ? -1 : 1 ;
    }
}