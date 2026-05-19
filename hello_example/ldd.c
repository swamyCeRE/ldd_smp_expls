#include <linux/init.h>
#include <linux/module.h>
#include <asm/current.h>

MODULE_LICENSE("Dual BSD/GPL"); //*

static int hello_init(void){
    printk(KERN_ALERT "Hello world\n");
    printk(KERN_INFO "The process is \"%s\" (pid %i)\n",current->comm, current->pid);
return 0;
}

int __init my_init_function(void)
{
int err;
/* registration takes a pointer and a name */
err = register_this(ptr1, "skull");
if (err) goto fail_this;
err = register_that(ptr2, "skull");
if (err) goto fail_that;
err = register_those(ptr3, "skull");
if (err) goto fail_those;
return 0; /* success */
fail_those: unregister_that(ptr2, "skull");
fail_that: unregister_this(ptr1, "skull");
fail_this: return err; /* propagate the error */
}

static void hello_exit(void){
    printk(KERN_ALERT "good bye crueal world\n");
}

module_init(my_init_function);
module_exit(hello_exit);
