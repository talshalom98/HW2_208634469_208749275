
#include <stdio.h>

int add_ok(int x, int y);


int main()
{
    int x = ;
    int y = -9999999999999999999;
    int ok = add_ok(x, y);
    printf("%d", ok);
    return 0;
}

int add_ok(int x, int y)
{
    if ((x>0)&(y>0)&((x+y)<0))
        return -1;
    if ((x<0)&(y<0)&((x+y)>0))
        return -2;
    return 1;
}