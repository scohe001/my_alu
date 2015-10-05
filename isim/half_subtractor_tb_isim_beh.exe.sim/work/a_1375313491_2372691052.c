/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/csmajs/scohe001/my_alu/my_test.vhd";



static void work_a_1375313491_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1375313491_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 5552);
    xsi_report(t2, 6U, (unsigned char)2);
    goto LAB13;

LAB14:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t9 = t13;
    goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB23;

LAB24:    t9 = (unsigned char)0;

LAB25:    if (t9 == 0)
        goto LAB21;

LAB22:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    t2 = (t0 + 5558);
    xsi_report(t2, 6U, (unsigned char)2);
    goto LAB22;

LAB23:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)3);
    t9 = t13;
    goto LAB25;

LAB26:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB32;

LAB33:    t9 = (unsigned char)0;

LAB34:    if (t9 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    t2 = (t0 + 5564);
    xsi_report(t2, 6U, (unsigned char)2);
    goto LAB31;

LAB32:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t9 = t13;
    goto LAB34;

LAB35:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB41;

LAB42:    t9 = (unsigned char)0;

LAB43:    if (t9 == 0)
        goto LAB39;

LAB40:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5576);
    xsi_report(t2, 20U, (unsigned char)0);
    xsi_set_current_line(93, ng0);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

LAB39:    t2 = (t0 + 5570);
    xsi_report(t2, 6U, (unsigned char)2);
    goto LAB40;

LAB41:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t9 = t13;
    goto LAB43;

LAB44:    goto LAB2;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

}


extern void work_a_1375313491_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1375313491_2372691052_p_0,(void *)work_a_1375313491_2372691052_p_1};
	xsi_register_didat("work_a_1375313491_2372691052", "isim/half_subtractor_tb_isim_beh.exe.sim/work/a_1375313491_2372691052.didat");
	xsi_register_executes(pe);
}
