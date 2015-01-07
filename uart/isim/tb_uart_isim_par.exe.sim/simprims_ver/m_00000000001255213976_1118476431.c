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



static void Gate_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 2904);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 2824);
    *((int *)t9) = 1;

LAB1:    return;
}


extern void simprims_ver_m_00000000001255213976_1118476431_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_1118476431", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_1118476431.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_0088441421_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_0088441421", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_0088441421.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_0038155672_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_0038155672", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_0038155672.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_3300966976_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_3300966976", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_3300966976.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2729473216_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2729473216", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2729473216.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_1965817322_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_1965817322", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_1965817322.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_0436999077_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_0436999077", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_0436999077.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2530308520_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2530308520", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2530308520.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_0428394443_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_0428394443", "isim/tb_uart_isim_par.exe.sim/simprims_ver/m_00000000001255213976_0428394443.didat");
	xsi_register_executes(pe);
}