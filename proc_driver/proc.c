#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>

MODULE_LICENSE("Dual BSD/GPL"); //*

static struct proc_dir_entry *custom_proc_dir;
struct proc_ops custum_proc_dt = {
    
};
static int proc_init(void){
    printk(KERN_ALERT "proc dynamic init : entered\n");
   custom_proc_dir = proc_create("swamy_driver", 
                                0,
		                        NULL,
                                &custum_proc_dt);
    printk(KERN_ALERT "proc dynamic init : end\n");
return 0;
}


static void proc_exit(void){
    printk(KERN_ALERT "proc dinamic exit : entered\n");
    proc_remove(custom_proc_dir);
    printk(KERN_ALERT "proc dinamic exit : end\n");
}

module_init(proc_init);
module_exit(proc_exit);