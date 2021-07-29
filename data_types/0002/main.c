#include <stdio.h>
#include <float.h>

int main()
{
    printf("Storage size for float: %d \n", sizeof(float));
    printf("FLT_MAX        : %g\n", (float) FLT_MAX);
    printf("FLT_MIN        : %g\n", (float) FLT_MIN);
    printf("-FLT_MAX       : %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN       : %g\n", (float) -FLT_MIN);

    printf("Storage size for double: %d\n", sizeof(double));
    printf("DBL_MAX                : %g\n", (double) DBL_MAX);
    printf("DBL_MIN                : %g\n", (double) DBL_MIN);
    printf("-DBL_MAX               : %g\n", (double) -DBL_MAX);
    printf("Precision value        : %d\n", FLT_DIG );

    return 0;
}

/*
Storage size for float: 4
FLT_MAX        : 3.40282e+038
FLT_MIN        : 1.17549e-038
-FLT_MAX       : -3.40282e+038
-FLT_MIN       : -1.17549e-038
Storage size for double: 8
DBL_MAX                : 1.79769e+308
DBL_MIN                : 2.22507e-308
-DBL_MAX               : -1.79769e+308
Precision value        : 6
*/
