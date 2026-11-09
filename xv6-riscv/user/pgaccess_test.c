#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/riscv.h" // defines PGSIZE
#include "user/user.h"

int main(int argc, char *argv[])
{
    char *pageTester;
    int accessBitmap = 0;
    pageTester = malloc(sizeof(int)*8*PGSIZE);
    /*
    for (int i = 0; i < sizeof(int)*8; ++i)
    {
        pageTester[i*PGSIZE]=1; // accessed
    }
    */
    
    //only changing accessed pages 0, 2 and 5 to test.
    pageTester[0 * PGSIZE] = 1;
    pageTester[2 * PGSIZE] = 1;
    pageTester[5 * PGSIZE] = 1;
    
    if (pgaccess(pageTester,sizeof(int)*8,&accessBitmap) < 0)
    {
        printf("error in pgaccess\n");
    }
    else
    {
        for (int i =0; i < sizeof(int)*8; ++i)
        {
            printf("Page %d, accessed: %d\n",
                i, (accessBitmap & (1<<i))!=0);
        }
    }
    return 0;
}
  