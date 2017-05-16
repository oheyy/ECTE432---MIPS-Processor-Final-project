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
static const char *ng0 = "//uow-home.uow.edu.au/dsho996/test/signextend.v";



static void Always_4_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5, ng0);

LAB5:    xsi_set_current_line(6, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlogtype_sign_extend(t4, 32, t6, 16);
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000000194702576_1900080952_init()
{
	static char *pe[] = {(void *)Always_4_0};
	xsi_register_didat("work_m_00000000000194702576_1900080952", "isim/mips_pipeline_tb_isim_beh.exe.sim/work/m_00000000000194702576_1900080952.didat");
	xsi_register_executes(pe);
}
