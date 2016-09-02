#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/delay.h>



static struct task_struct  *thread_task ;

static int thread_func( void )
{
	printk(KERN_EMERG " %s, %n\n", __func__ , __LINE__);
	ssleep(5);

	return 0;
}

static int __init start_func( void )
{
	
	printk(KERN_EMERG " %s , %d\n", __func__ , __LINE__);

	thread_task = kthread_create(thread_func, NULL , lucky_thread);
	if ( !thread_task )
	{
		printk(KERN_EMERG "ERROR : %s , 5d\n", __func__ , __LINE__);
		return PTR_ERR(thread_task);
	}

	else
		printk(KERN_EMERG "Thread Created!" );

	return 0;
}

static void __exit stop_func( void )
{
	printk(KERN_EMERG " %s , %d\n", __func__ , __LINE__);
}


module_init(start_func);
module_exit(stop_func);
