
#include <stdio.h>

int add_ok(int x, int y);
unsigned float_neg (unsigned uf);


int main()
{
    /*int x = ;
    int y = -9999999999999999999;
    int ok = add_ok(x, y);
    printf("%d", ok);*/
    printf("Enter 32-bit number, representing a floating point:\n");
    unsigned int uf;
    scanf("%x", &uf);
    printf("%x\n", float_neg(uf));
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


unsigned float_neg (unsigned uf)
{
    unsigned int xor_element = (1 << 31);   //1000 0000 0000 ... integer. for '^' bitwise operator with uf.
    int frac_mask = (1U << 23) - 1;  //to check if frac > 0
    unsigned exp_only = uf >> 23;
    int exp_mask = (1U << 8) -1;
    return uf ^ xor_element;
}