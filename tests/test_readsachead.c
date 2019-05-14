#include <stdio.h>
#include "sacio.h"

int main(){
    SACHEAD hd;
    read_sac_head("seis.little.sac", &hd);
    printf("delta=%f npts=%d nvhdr=%d stnm=%s\n",
            hd.b, hd.npts, hd.nvhdr, hd.kevnm);

    read_sac_head("seis.big.sac", &hd);
    printf("delta=%f npts=%d nvhdr=%d stnm=%s\n",
            hd.b, hd.npts, hd.nvhdr, hd.kevnm);
    return 0;
}
