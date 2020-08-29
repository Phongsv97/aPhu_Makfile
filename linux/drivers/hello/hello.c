#include <linux/module.h> 

#define DRIVER_AUTHOR "PHONGLT"
#define DRIVER_DESC   "A sample loadable kernel module"


static int __init init_hello(void)
{
    printk("Hello Vietnam\n");
    return 0;
}

static void __exit exit_hello(void)
{
    printk("Goodbye Vietnam\n");
}

module_init(init_hello);
module_exit(exit_hello);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR); 
MODULE_DESCRIPTION(DRIVER_DESC); 
MODULE_SUPPORTED_DEVICE("testdevice"); 
