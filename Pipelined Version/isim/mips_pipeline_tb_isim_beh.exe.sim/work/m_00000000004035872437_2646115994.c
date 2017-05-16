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
static const char *ng0 = "//uow-home.uow.edu.au/dsho996/test/datamem.v";
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static int ng3[] = {3, 0};



static void Cont_7_0(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 255U);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 8, 2);
    t22 = (t0 + 4784);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 255U;
    t28 = t27;
    t29 = (t5 + 4);
    t30 = *((unsigned int *)t5);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 24, 31);
    t35 = (t0 + 4640);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Cont_8_1(char *t0)
{
    char t5[8];
    char t12[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 255U);
    t22 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t12, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t23, 32, 2);
    t24 = (t0 + 4848);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 16, 23);
    t37 = (t0 + 4656);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Cont_9_2(char *t0)
{
    char t5[8];
    char t12[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 255U);
    t22 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t12, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t23, 32, 2);
    t24 = (t0 + 4912);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 8, 15);
    t37 = (t0 + 4672);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Cont_10_3(char *t0)
{
    char t5[8];
    char t12[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 255U);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t12, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t23, 32, 2);
    t24 = (t0 + 4976);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7);
    t37 = (t0 + 4688);
    *((int *)t37) = 1;

LAB1:    return;
}

static void Always_11_4(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t30[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);

LAB9:    xsi_set_current_line(15, ng0);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 24);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 24);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 2408);
    t24 = (t0 + 2408);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2408);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t31 = (t0 + 1688U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 127U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 127U);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t30, 7, 2);
    t40 = (t22 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t23 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2408);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    t26 = (t30 + 4);
    t28 = (t27 + 4);
    t16 = *((unsigned int *)t27);
    t17 = (t16 >> 0);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t20 & 127U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 127U);
    t29 = ((char*)((ng1)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t30, 32, t29, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t51, 32, 2);
    t31 = (t22 + 4);
    t35 = *((unsigned int *)t31);
    t42 = (!(t35));
    t32 = (t23 + 4);
    t36 = *((unsigned int *)t32);
    t45 = (!(t36));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2408);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    t26 = (t30 + 4);
    t28 = (t27 + 4);
    t16 = *((unsigned int *)t27);
    t17 = (t16 >> 0);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t20 & 127U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 127U);
    t29 = ((char*)((ng2)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t30, 32, t29, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t51, 32, 2);
    t31 = (t22 + 4);
    t35 = *((unsigned int *)t31);
    t42 = (!(t35));
    t32 = (t23 + 4);
    t36 = *((unsigned int *)t32);
    t45 = (!(t36));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2408);
    t24 = (t21 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    memset(t30, 0, 8);
    t26 = (t30 + 4);
    t28 = (t27 + 4);
    t16 = *((unsigned int *)t27);
    t17 = (t16 >> 0);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t20 & 127U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 127U);
    t29 = ((char*)((ng3)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t30, 32, t29, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t51, 32, 2);
    t31 = (t22 + 4);
    t35 = *((unsigned int *)t31);
    t42 = (!(t35));
    t32 = (t23 + 4);
    t36 = *((unsigned int *)t32);
    t45 = (!(t36));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t47 = *((unsigned int *)t22);
    t48 = *((unsigned int *)t23);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t21, t11, 0, *((unsigned int *)t23), t50, 0LL);
    goto LAB11;

LAB12:    t37 = *((unsigned int *)t22);
    t38 = *((unsigned int *)t23);
    t49 = (t37 - t38);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t50, 0LL);
    goto LAB13;

LAB14:    t37 = *((unsigned int *)t22);
    t38 = *((unsigned int *)t23);
    t49 = (t37 - t38);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t50, 0LL);
    goto LAB15;

LAB16:    t37 = *((unsigned int *)t22);
    t38 = *((unsigned int *)t23);
    t49 = (t37 - t38);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t23), t50, 0LL);
    goto LAB17;

}


extern void work_m_00000000004035872437_2646115994_init()
{
	static char *pe[] = {(void *)Cont_7_0,(void *)Cont_8_1,(void *)Cont_9_2,(void *)Cont_10_3,(void *)Always_11_4};
	xsi_register_didat("work_m_00000000004035872437_2646115994", "isim/mips_pipeline_tb_isim_beh.exe.sim/work/m_00000000004035872437_2646115994.didat");
	xsi_register_executes(pe);
}
