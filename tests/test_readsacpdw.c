#include <stdio.h>
#include "sacio.h"
int main(){
    SACHEAD hd;
    float *data;
    data = read_sac_pdw("seis.little.sac", &hd, -2, -1, 2);
    int i;
    for (i=0; i<hd.npts; i++) {
        printf("%d %f\n", i, data[i]);
    }
    return 0;
}
