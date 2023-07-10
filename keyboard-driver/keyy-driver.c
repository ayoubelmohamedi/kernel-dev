
#include <linux/module.h>


MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("keyboard Driver");
MODULE_AUTHOR("Custom");


/*
Callbacks required to implement a device driver
*/
static struct file_operations fops = 
{
	.read = dev_read,
	.open = dev_open,
	.write = dev_write,
	.release = dev_rls,_
};


static int hello_init(void)
{
	printk(KERN_ALERT "Hello world");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye world as is");

}

module_init(hello_init);
module_exit(hello_exit);
