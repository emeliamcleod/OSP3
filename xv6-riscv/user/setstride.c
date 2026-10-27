#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
void main (){
    // need to define an integer here then 
    int result = setstride(14);
    printf("setstride: %d\n", result); //should return 0

    int result2_perchance = setstride(0);
    printf("setstride: %d\n", result2_perchance); //should return -1
}