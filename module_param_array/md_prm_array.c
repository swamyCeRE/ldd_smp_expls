#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int value[3];
static int count = 3;

//module_param_array(value,int,&count,0644);

module_param_array(value,int,&count,0);
static int __init test_init(void)
{
	int i;
	printk("Module loaded\n");
	printk("module of value passe = %d ", count);

	for(i=0;i<count;i++)
	{
		printk("value[%d} passed =%d\n",i,value[i]);
	}
	
	return 0;
}

static void __exit test_exit(void)
{
	printk("module exited\n");
}

module_init(test_init);
module_exit(test_exit);
