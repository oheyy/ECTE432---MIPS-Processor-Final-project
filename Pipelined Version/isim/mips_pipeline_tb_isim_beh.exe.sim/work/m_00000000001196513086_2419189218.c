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
static const char *ng0 = "//uow-home.uow.edu.au/dsho996/test/hazard_detection_unit.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t6[8];
    char t11[8];
    char t27[8];
    char t42[8];
    char t57[8];
    char t73[8];
    char t88[8];
    char t96[8];
    char t124[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t28) != 0)
        goto LAB12;

LAB13:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    memcpy(t132, t27, 8);

LAB16:    t164 = (t132 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB53;

LAB50:    if (t23 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t11) = 1;

LAB53:    memset(t27, 0, 8);
    t13 = (t11 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t13) != 0)
        goto LAB56;

LAB57:    t28 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB58;

LAB59:    memcpy(t132, t27, 8);

LAB60:    t146 = (t132 + 4);
    t165 = *((unsigned int *)t146);
    t166 = (~(t165));
    t167 = *((unsigned int *)t132);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(54, ng0);

LAB94:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB92:
LAB48:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB12:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB13;

LAB14:    t39 = (t0 + 1848U);
    t40 = *((char **)t39);
    t39 = (t0 + 1528U);
    t41 = *((char **)t39);
    memset(t42, 0, 8);
    t39 = (t40 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t41);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB20;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t42) = 1;

LAB20:    memset(t57, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t58) != 0)
        goto LAB23;

LAB24:    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = (!(t66));
    t68 = *((unsigned int *)t65);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB25;

LAB26:    memcpy(t96, t57, 8);

LAB27:    memset(t124, 0, 8);
    t125 = (t96 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t96);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t125) != 0)
        goto LAB41;

LAB42:    t133 = *((unsigned int *)t27);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t27 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB16;

LAB19:    t56 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB23:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    t70 = (t0 + 1848U);
    t71 = *((char **)t70);
    t70 = (t0 + 1688U);
    t72 = *((char **)t70);
    memset(t73, 0, 8);
    t70 = (t71 + 4);
    t74 = (t72 + 4);
    t75 = *((unsigned int *)t71);
    t76 = *((unsigned int *)t72);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t70);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t74);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB31;

LAB28:    if (t84 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t73) = 1;

LAB31:    memset(t88, 0, 8);
    t89 = (t73 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t73);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t89) != 0)
        goto LAB34;

LAB35:    t97 = *((unsigned int *)t57);
    t98 = *((unsigned int *)t88);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = (t57 + 4);
    t101 = (t88 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t87 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t88) = 1;
    goto LAB35;

LAB34:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB35;

LAB36:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    t110 = (t57 + 4);
    t111 = (t88 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t57);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t111);
    t117 = (~(t116));
    t118 = *((unsigned int *)t88);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t122 & t120);
    t123 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t123 & t121);
    goto LAB38;

LAB39:    *((unsigned int *)t124) = 1;
    goto LAB42;

LAB41:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB42;

LAB43:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t27 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t27);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB45;

LAB46:    xsi_set_current_line(42, ng0);

LAB49:    xsi_set_current_line(43, ng0);
    t170 = ((char*)((ng2)));
    t171 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t171, t170, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB52:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t27) = 1;
    goto LAB57;

LAB56:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB57;

LAB58:    t34 = (t0 + 2008U);
    t35 = *((char **)t34);
    t34 = (t0 + 1528U);
    t39 = *((char **)t34);
    memset(t42, 0, 8);
    t34 = (t35 + 4);
    t40 = (t39 + 4);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t40);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t34);
    t52 = *((unsigned int *)t40);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB64;

LAB61:    if (t53 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t42) = 1;

LAB64:    memset(t57, 0, 8);
    t43 = (t42 + 4);
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t43) != 0)
        goto LAB67;

LAB68:    t58 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = (!(t66));
    t68 = *((unsigned int *)t58);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB69;

LAB70:    memcpy(t96, t57, 8);

LAB71:    memset(t124, 0, 8);
    t110 = (t96 + 4);
    t126 = *((unsigned int *)t110);
    t127 = (~(t126));
    t128 = *((unsigned int *)t96);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t110) != 0)
        goto LAB85;

LAB86:    t133 = *((unsigned int *)t27);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t125 = (t27 + 4);
    t131 = (t124 + 4);
    t136 = (t132 + 4);
    t139 = *((unsigned int *)t125);
    t140 = *((unsigned int *)t131);
    t141 = (t139 | t140);
    *((unsigned int *)t136) = t141;
    t142 = *((unsigned int *)t136);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB60;

LAB63:    t41 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t57) = 1;
    goto LAB68;

LAB67:    t56 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB68;

LAB69:    t64 = (t0 + 2008U);
    t65 = *((char **)t64);
    t64 = (t0 + 1688U);
    t70 = *((char **)t64);
    memset(t73, 0, 8);
    t64 = (t65 + 4);
    t71 = (t70 + 4);
    t75 = *((unsigned int *)t65);
    t76 = *((unsigned int *)t70);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t64);
    t79 = *((unsigned int *)t71);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t64);
    t83 = *((unsigned int *)t71);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB75;

LAB72:    if (t84 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t73) = 1;

LAB75:    memset(t88, 0, 8);
    t74 = (t73 + 4);
    t90 = *((unsigned int *)t74);
    t91 = (~(t90));
    t92 = *((unsigned int *)t73);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t74) != 0)
        goto LAB78;

LAB79:    t97 = *((unsigned int *)t57);
    t98 = *((unsigned int *)t88);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t89 = (t57 + 4);
    t95 = (t88 + 4);
    t100 = (t96 + 4);
    t103 = *((unsigned int *)t89);
    t104 = *((unsigned int *)t95);
    t105 = (t103 | t104);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t100);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB74:    t72 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t88) = 1;
    goto LAB79;

LAB78:    t87 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB79;

LAB80:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t100);
    *((unsigned int *)t96) = (t108 | t109);
    t101 = (t57 + 4);
    t102 = (t88 + 4);
    t112 = *((unsigned int *)t101);
    t113 = (~(t112));
    t114 = *((unsigned int *)t57);
    t115 = (t114 & t113);
    t116 = *((unsigned int *)t102);
    t117 = (~(t116));
    t118 = *((unsigned int *)t88);
    t119 = (t118 & t117);
    t120 = (~(t115));
    t121 = (~(t119));
    t122 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t122 & t120);
    t123 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t123 & t121);
    goto LAB82;

LAB83:    *((unsigned int *)t124) = 1;
    goto LAB86;

LAB85:    t111 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB86;

LAB87:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t136);
    *((unsigned int *)t132) = (t144 | t145);
    t137 = (t27 + 4);
    t138 = (t124 + 4);
    t148 = *((unsigned int *)t27);
    t149 = (~(t148));
    t150 = *((unsigned int *)t137);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t138);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t160 & t158);
    t161 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB89;

LAB90:    xsi_set_current_line(48, ng0);

LAB93:    xsi_set_current_line(49, ng0);
    t147 = ((char*)((ng2)));
    t164 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t164, t147, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB92;

}


extern void work_m_00000000001196513086_2419189218_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000001196513086_2419189218", "isim/mips_pipeline_tb_isim_beh.exe.sim/work/m_00000000001196513086_2419189218.didat");
	xsi_register_executes(pe);
}
