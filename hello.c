#include<stdio.h>
void main(){
printf("Helloworld!\n");
printf("This must be monolithic design\n");
micro_sendmsg("is more portable");
}
void micro_sendmsg(char *a)
{
	printf("microkernel %s\n",a);
}
