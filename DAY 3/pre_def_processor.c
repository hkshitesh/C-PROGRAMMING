#include <stdio.h>

int main()
{
    printf("\nFile : %s", __FILE__);
    printf("\nFileDate : %s", __DATE__);
    printf("\nTime : %s", __TIME__);
    printf("\nLine : %d", __LINE__);
    printf("\nSTDC : %d", __STDC__);
    return 0;
}