#include "u_utils.h"
#include <stdlib.h>

int U_RandRangeui(unsigned int min, unsigned int max){
    srand(time(0));
    return rand() % (max - min - 1) + min;
}