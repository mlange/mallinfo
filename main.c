#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(int argc, char *argv[])
{
    struct mallinfo minfo;

    malloc(1024);
    malloc(132);
    malloc(154);
    malloc(10123);
    malloc(6);
    malloc(40);
    malloc(123123);
    malloc(87);

    minfo = mallinfo( );

    printf("\n");
    printf("Arena Size: %u bytes\n", minfo.arena);
    printf("\n");

    printf("Small Blocks\n", minfo.smblks);
    printf("\n");
    printf("          Number: %u      \n", minfo.smblks);
    printf("    Space In Use: %u bytes\n", minfo.usmblks);
    printf("      Space Free: %u bytes\n", minfo.fsmblks);
    printf("\n");

    printf("Number of Ordinary Blocks\n");
    printf("\n");
    printf("          Number: %u      \n", minfo.ordblks);
    printf("    Space In Use: %u bytes\n", minfo.uordblks);
    printf("      Space Free: %u bytes\n", minfo.fordblks);
    printf("\n");

    exit(0);
}

