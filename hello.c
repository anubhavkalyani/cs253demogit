#include<stdio.h>
void main(){
printf("Helloworld!\n");
printf("This must be monolithic design\n");
microkernel_sendmsg("is more portable");
}
void microkernel_sendmsg(char *a)
{
	printf("microkernel %s\n",a);
}
