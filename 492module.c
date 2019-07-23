#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Carly Palicz");
MODULE_DESCRIPTION("Linux Module for Lab 1 part j");
MODULE_VERSION("0.01");

static int __init module_492_init(void)
{
	printk(KERN_INFO "Hello World from Carly Palicz (10413844)\n");
	return 0; 
}

static void __exit module_492_exit(void)
{
	printk(KERN_INFO "PID of current process is %d and name is %s\n", current->pid,current->comm);
}

module_init(module_492_init);
module_exit(module_492_exit);


