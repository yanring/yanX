/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  hurlex 内核的入口函数
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 13时31分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include "types.h"
#include "common.h"
#include "console.h"

int kern_entry()
{
	console_clear();
    console_write("Hello, OS kernel!\n");
    console_write_color("Hello, yanX OS kernel!\n", rc_black, rc_green);
    console_write_dec(20, rc_black, rc_green);
    console_write_hex(20, rc_black, rc_green);
    return 0;

}

