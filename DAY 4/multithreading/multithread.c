#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
void *myThCall(void *ptr)
{
 int *myptr = (int *)ptr;
 static int s=0;
 s=s+1;
 g=g+1;
 printf("Static=%d, Global=%d, Thread ID=%d\n", s,g,*myptr);
}
int main()
{
    int i;
    pthread_t tid;

    for(i=0;i<5;i++)
    {
        pthread_create(&tid, NULL,myThCall,(void *)&tid);
    }
    pthread_exit(NULL);
    return 0;
}