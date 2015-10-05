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
static const char *ng0 = "/home/csmajs/scohe001/my_alu/my_alu_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_0730398811_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0730398811_2372691052_p_1(char *t0)
{
    char t18[16];
    char t19[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int64 t17;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int64 t24;

LAB0:    t1 = (t0 + 3672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6440);
    t4 = (t0 + 4120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6443);
    *((int *)t2) = 0;
    t3 = (t0 + 6447);
    *((int *)t3) = 7;
    t9 = 0;
    t10 = 7;

LAB4:    if (t9 <= t10)
        goto LAB5;

LAB7:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t17 = *((int64 *)t3);
    t24 = (t17 * 10);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t24);

LAB29:    *((char **)t1) = &&LAB30;

LAB1:    return;
LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 6451);
    t6 = (t0 + 4184);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6459);
    *((int *)t2) = 0;
    t3 = (t0 + 6463);
    *((int *)t3) = 255;
    t13 = 0;
    t14 = 255;

LAB8:    if (t13 <= t14)
        goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6360U);
    t4 = (t0 + 6499);
    t6 = (t19 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t13 = (2 - 0);
    t21 = (t13 * 1);
    t21 = (t21 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t21;
    t7 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t18, t3, t2, t4, t19);
    t8 = (t0 + 4120);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t22 = (t12 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t17 = *((int64 *)t3);
    t24 = (t17 * 2);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t24);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB6:    t2 = (t0 + 6443);
    t9 = *((int *)t2);
    t3 = (t0 + 6447);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB7;

LAB26:    t13 = (t9 + 1);
    t9 = t13;
    t4 = (t0 + 6443);
    *((int *)t4) = t9;
    goto LAB4;

LAB9:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 6467);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6475);
    *((int *)t2) = 0;
    t3 = (t0 + 6479);
    *((int *)t3) = 255;
    t15 = 0;
    t16 = 255;

LAB12:    if (t15 <= t16)
        goto LAB13;

LAB15:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 6328U);
    t4 = (t0 + 6491);
    t6 = (t19 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t15 = (7 - 0);
    t21 = (t15 * 1);
    t21 = (t21 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t21;
    t7 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t18, t3, t2, t4, t19);
    t8 = (t0 + 4184);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t22 = (t12 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 8U);
    xsi_driver_first_trans_fast(t8);

LAB10:    t2 = (t0 + 6459);
    t13 = *((int *)t2);
    t3 = (t0 + 6463);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB11;

LAB21:    t15 = (t13 + 1);
    t13 = t15;
    t4 = (t0 + 6459);
    *((int *)t4) = t13;
    goto LAB8;

LAB13:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 2448U);
    t5 = *((char **)t4);
    t17 = *((int64 *)t5);
    t4 = (t0 + 3480);
    xsi_process_wait(t4, t17);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 6475);
    t15 = *((int *)t2);
    t3 = (t0 + 6479);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB15;

LAB20:    t20 = (t15 + 1);
    t15 = t20;
    t4 = (t0 + 6475);
    *((int *)t4) = t15;
    goto LAB12;

LAB16:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6344U);
    t4 = (t0 + 6483);
    t6 = (t19 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t20 = (7 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t21;
    t7 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t18, t3, t2, t4, t19);
    t8 = (t0 + 4248);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t22 = (t12 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB22:    goto LAB6;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB27:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6502);
    xsi_report(t2, 20U, (unsigned char)0);
    xsi_set_current_line(116, ng0);

LAB33:    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    goto LAB2;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}


extern void work_a_0730398811_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0730398811_2372691052_p_0,(void *)work_a_0730398811_2372691052_p_1};
	xsi_register_didat("work_a_0730398811_2372691052", "isim/my_alu_tb_isim_beh.exe.sim/work/a_0730398811_2372691052.didat");
	xsi_register_executes(pe);
}
