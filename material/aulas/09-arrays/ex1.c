int main(int esi, long rdi){
    int edx = 0;
    int retval = 0;
    long rcx;
    goto IF21;
    IF12:
        rcx = edx;
    retval += 4*rcx + rdi;
    edx += 1;
    IF21:
        if(edx <esi){
            goto IF12;
        }
    return retval;
}