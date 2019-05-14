#include <stdio.h>
#include <stdlib.h>
#include "sacio.h"

int main()
{
    printf("delta = %d\n", sac_head_index("delta"));
    printf("b     = %d\n", sac_head_index("b"));
    printf("t0    = %d\n", sac_head_index("T0"));
    printf("t5    = %d\n", sac_head_index("t5"));
    printf("f     = %d\n", sac_head_index("f"));
    printf("resp4 = %d\n", sac_head_index("resp4"));
    printf("resp9 = %d\n", sac_head_index("resp9"));
    printf("evla  = %d\n", sac_head_index("evla"));
    printf("user0 = %d\n", sac_head_index("user0"));
    printf("user5 = %d\n", sac_head_index("user5"));
    printf("dist  = %d\n", sac_head_index("dist"));
    printf("inter3= %d\n", sac_head_index("internal3"));
    printf("xmax  = %d\n", sac_head_index("xmaximum"));
    printf("unused= %d\n", sac_head_index("unused3"));
    printf("nzyear= %d\n", sac_head_index("nzyear"));
    printf("nzmsec= %d\n", sac_head_index("nzmsec"));
    printf("inter4= %d\n", sac_head_index("internal4"));
    printf("iftype= %d\n", sac_head_index("iftype"));
    printf("istreg= %d\n", sac_head_index("istreg"));
    printf("imagty= %d\n", sac_head_index("imagtyp"));
    printf("unusex= %d\n", sac_head_index("unused13"));
    printf("leven = %d\n", sac_head_index("leven"));
    printf("kstnm = %d\n", sac_head_index("kstnm"));
    printf("khole = %d\n", sac_head_index("khole"));
    printf("kt0   = %d\n", sac_head_index("kt0"));
    printf("kt3   = %d\n", sac_head_index("kt3"));
    printf("kt6   = %d\n", sac_head_index("KT6"));
    printf("kt9   = %d\n", sac_head_index("kt9"));
    printf("kuser1= %d\n", sac_head_index("kuser1"));
    printf("knetwk= %d\n", sac_head_index("knetwk"));

}
