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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Desktop/SCCPU/Regfile.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {32, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 2724);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 2664);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = (t0 + 1564);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1564);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1564);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 600U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_29_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 2760);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 2672);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = (t0 + 1564);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1564);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1564);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 692U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Always_31_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t53[8];
    char t84[8];
    char t85[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    int t100;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1152U);
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB27;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB29:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t8) != 0)
        goto LAB32;

LAB33:    t22 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t22);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB34;

LAB35:    memcpy(t53, t30, 8);

LAB36:    t38 = (t53 + 4);
    t78 = *((unsigned int *)t38);
    t79 = (~(t78));
    t80 = *((unsigned int *)t53);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(33, ng0);

LAB12:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB13:    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1564);
    t4 = (t0 + 1564);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 1564);
    t21 = (t8 + 40U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 5, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t39 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t41 = (!(t10));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    t4 = (t0 + 1564);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 1564);
    t21 = (t8 + 40U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 5, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t39 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t41 = (!(t10));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1564);
    t4 = (t0 + 1564);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 1564);
    t21 = (t8 + 40U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 5, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t39 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t41 = (!(t10));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1564);
    t4 = (t0 + 1564);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = (t0 + 1564);
    t21 = (t8 + 40U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 5, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t39 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t41 = (!(t10));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB24;

LAB25:    goto LAB11;

LAB14:    xsi_set_current_line(36, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 1564);
    t22 = (t0 + 1564);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t32 = (t0 + 1564);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 1656);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB16:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB17;

LAB18:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t30), t44, 0LL);
    goto LAB19;

LAB20:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t30), t44, 0LL);
    goto LAB21;

LAB22:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t30), t44, 0LL);
    goto LAB23;

LAB24:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t30), t44, 0LL);
    goto LAB25;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB29;

LAB28:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t30) = 1;
    goto LAB33;

LAB32:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    t28 = (t0 + 968U);
    t29 = *((char **)t28);
    memset(t31, 0, 8);
    t28 = (t29 + 4);
    t48 = *((unsigned int *)t28);
    t49 = (~(t48));
    t50 = *((unsigned int *)t29);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t28) != 0)
        goto LAB39;

LAB40:    t54 = *((unsigned int *)t30);
    t55 = *((unsigned int *)t31);
    t56 = (t54 & t55);
    *((unsigned int *)t53) = t56;
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = (t53 + 4);
    t57 = *((unsigned int *)t33);
    t58 = *((unsigned int *)t34);
    t59 = (t57 | t58);
    *((unsigned int *)t35) = t59;
    t60 = *((unsigned int *)t35);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB36;

LAB37:    *((unsigned int *)t31) = 1;
    goto LAB40;

LAB39:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB40;

LAB41:    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t35);
    *((unsigned int *)t53) = (t62 | t63);
    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t64 = *((unsigned int *)t30);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (~(t66));
    t68 = *((unsigned int *)t31);
    t69 = (~(t68));
    t70 = *((unsigned int *)t37);
    t71 = (~(t70));
    t39 = (t65 & t67);
    t41 = (t69 & t71);
    t72 = (~(t39));
    t73 = (~(t41));
    t74 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t74 & t72);
    t75 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t72);
    t77 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t77 & t73);
    goto LAB43;

LAB44:    xsi_set_current_line(45, ng0);
    t40 = (t0 + 876U);
    t83 = *((char **)t40);
    t40 = (t0 + 1564);
    t86 = (t0 + 1564);
    t87 = (t86 + 44U);
    t88 = *((char **)t87);
    t89 = (t0 + 1564);
    t90 = (t89 + 40U);
    t91 = *((char **)t90);
    t92 = (t0 + 784U);
    t93 = *((char **)t92);
    xsi_vlog_generic_convert_array_indices(t84, t85, t88, t91, 2, 1, t93, 5, 2);
    t92 = (t84 + 4);
    t94 = *((unsigned int *)t92);
    t42 = (!(t94));
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t43 = (!(t96));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB47;

LAB48:    goto LAB46;

LAB47:    t97 = *((unsigned int *)t84);
    t98 = *((unsigned int *)t85);
    t99 = (t97 - t98);
    t100 = (t99 + 1);
    xsi_vlogvar_wait_assign_value(t40, t83, 0, *((unsigned int *)t85), t100, 0LL);
    goto LAB48;

}


extern void work_m_00000000001125105523_2937920168_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Always_31_2};
	xsi_register_didat("work_m_00000000001125105523_2937920168", "isim/test2_1_isim_beh.exe.sim/work/m_00000000001125105523_2937920168.didat");
	xsi_register_executes(pe);
}
