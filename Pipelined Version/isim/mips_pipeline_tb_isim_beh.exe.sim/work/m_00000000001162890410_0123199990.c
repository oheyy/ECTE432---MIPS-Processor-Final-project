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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//uow-home.uow.edu.au/dsho996/test/alucontrol.v";
static int ng1[] = {2, 0};
static int ng2[] = {32, 0};
static int ng3[] = {34, 0};
static int ng4[] = {6, 0};
static int ng5[] = {36, 0};
static int ng6[] = {0, 0};
static int ng7[] = {37, 0};
static int ng8[] = {1, 0};
static int ng9[] = {39, 0};
static int ng10[] = {12, 0};
static int ng11[] = {42, 0};
static int ng12[] = {7, 0};
static int ng13[] = {15, 0};
static int ng14[] = {3, 0};
static int ng15[] = {4, 0};



static void Always_6_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(7, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB29:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t30 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB38:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(8, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);

LAB13:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t28, 32);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB28:    goto LAB12;

LAB14:    xsi_set_current_line(9, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    goto LAB28;

LAB16:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB28;

LAB18:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB28;

LAB20:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB28;

LAB22:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB28;

LAB30:    xsi_set_current_line(19, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB38;

LAB32:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB38;

}


extern void work_m_00000000001162890410_0123199990_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000001162890410_0123199990", "isim/mips_pipeline_tb_isim_beh.exe.sim/work/m_00000000001162890410_0123199990.didat");
	xsi_register_executes(pe);
}
