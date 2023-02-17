#include<stdio.h>
#include<string.h>
int my_strcmp(const char* target,const char* source)
{
	while (*target == *source)//当两个数组字符不相等时跳出循环
	{
		if (*target == '\0')//所有字符相等，返回0
		{
			return 0;
		}
		target++;
		source++;//字符相等再比较下一个位置的两个字符
	}
	return *target - *source;//根据strcmp的源码，返回<0为后者大，返回>0为前者大
}
int main()
{
	char arr1[20] =  "abcdr" ;
	char arr2[] = "ed";
	int ff=my_strcmp(arr1, arr2);//两个数组比较函数调用并返回值
	if (ff < 0)
	{
		printf("arr1<arr2\n");
	}
	else if(ff>0)
	{
		printf("arr1>arr2\n");
	}
	else
	{
		printf("arr1=arr2\n");
	}
	return 0;
}