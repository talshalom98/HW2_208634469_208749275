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
    unsigned exp_only = uf >> 23; //to check if exp = 111...
    if (((frac_mask & uf) > 0) && (exp_only == 0x000000ff))
        return uf;
    return uf ^ xor_element;
}
