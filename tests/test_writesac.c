#include <stdio.h>
#include "sacio.h"

int main() {
    float *data;
    SACHEAD hd;

    data = read_sac("seis.big.sac", &hd);

    int i;
    for (i=0; i<hd.npts; i++) {
        data[i] = data[i]*10;
    }
    write_sac("seis.out", hd, data);
}
