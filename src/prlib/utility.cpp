#include "utility.h"

int PrGetBitSize(u_int number) {
    int i;

    u_int bit = number;
    for (i = 0; bit >= 2; i++) {
        bit >>= 1;
    }

    return i + (PR_BIT(i) < number);
}
