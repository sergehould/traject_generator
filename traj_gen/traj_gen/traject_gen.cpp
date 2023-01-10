/* ***************************************************************************
 * File:
 * Description:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date      		Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *
 *****************************************************************************/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PV_VALUES   10
/*  Provided for simulation only.
    Returns pv.
*/
double get_pv_angle(int i) {
    if (i == 0) return PV_VALUES;
    else if (i == 1) return PV_VALUES;
    else if (i == 2) return PV_VALUES;
    else if (i == 3) return PV_VALUES;
}

/*  Provided for simulation only.
    Prints all via points.
*/
void set_all_sp_angles(double *traj, int nb) {
    int i = 0;
    printf("\njnt0 - jnt1 - jnt2 - jnt3 - n\n");
    printf("-----------------------------\n");
    for (int k = 0; k < nb * 4; k++) {
        if ((k % 4) == 0 && k!= 0) printf("%d\n", i++);
        printf("%3.2f  ", traj[k]);
    }
    printf("n: %d\n", i);
}

