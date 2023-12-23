#include<stdioh>
#include<stdlib.h>
#include<stbool.h>
int Int vector
void bar(void)
{
printf("Augh!I've been hacked!\n");
}
void Insert Int(unsigned index,usingned long value)
{
printf("Writing memory at%p\n",&Int vector[index]));
Int vector[index]));
Int vector[index]=value;
}
bool Init vector{int size)
{
Int vector=(int*)malloc(size of(int)*size);
printf("Address of Int vector is %p\n",Int vector);
if(Int vector=NULL)
return false;
else
return true;
}
int main(int argc,char*argr[])
{
unsigned long index,value;
it(argc!=3)
{
printf("usage is %s[index][value]\n");
return-1;
}
printf("Address of  bar is%p\n", bar);
if(!Init vector(oxfff))
{
printf("cannot intialize vector !\n");
return-1;
}
index=atol)argv[1]);
value=atol(argv[2]);
Insert Int(index,value);
return 0;
}


