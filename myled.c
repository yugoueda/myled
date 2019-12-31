#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/io.h>
#include <linux/timer.h>
#include <asm/delay.h>
#include <linux/timer.h>
#include <linux/delay.h>

MODULE_AUTHOR("Ryuichi Ueda,Yugo Ueda");
MODULE_DESCRIPTION("driver for LED control");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

static int __init init_mod(void) //カーネルモジュールの初期化
{
        return 0;
}

static void __exit cleanup_mod(void) //後始末
{
}

module_init(init_mod);     
module_exit(cleanup_mod); 
