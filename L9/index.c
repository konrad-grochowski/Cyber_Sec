#include <unistd.h>

char shellcode[] = "\xeb\x19\x31\xc0\x31\xdb\x31\xd2\x31\xc9\xb0\x04\xb3\x01\x59\xb2\x06\xcd\x80\x31\xc0\xb0\x01\x31\xdb\xcd\x80\xe8\xe2\xff\xff\xff\x32\x34\x34\x39\x33\x36";

int main(int argc, char* argv[])
{
    int *ret;
    ret = (int*)&ret + 2;
    (*ret) = (int)shellcode;
}