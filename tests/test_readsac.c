#include <stdio.h>
#include <stdlib.h>
#include "sacio.h"

int main(){
    SACHEAD hd;
    float *data;
    int i;

    data = read_sac("seis.little.sac", &hd);
    printf("delta=%f npts=%d nvhdr=%d stnm=%s\n",
            hd.b, hd.npts, hd.nvhdr, hd.kevnm);
    for (i=0; i<hd.npts; i++) {
        printf("%d %f %f\n", i, i*hd.delta, data[i]);
    }
    free(data);

    data = read_sac("seis.big.sac", &hd);
    printf("delta=%f npts=%d nvhdr=%d stnm=%s\n",
            hd.b, hd.npts, hd.nvhdr, hd.kevnm);
    for (i=0; i<hd.npts; i++) {
        printf("%d %f %f\n", i, i*hd.delta, data[i]);
    }
    free(data);

    data = read_sac("seis_sp_am.sac", &hd);
    printf("delta=%f npts=%d nvhdr=%d stnm=%s\n",
            hd.b, hd.npts, hd.nvhdr, hd.kevnm);
    for (i=0; i<hd.npts; i++) {
        printf("%d %f %f\n", i, i*hd.delta, data[i]);
    }
    free(data);

    return 0;
}
