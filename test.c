#include<stdio.h>
#include<string.h>
int my_strcmp(const char* target,const char* source)
{
	while (*target == *source)//�����������ַ������ʱ����ѭ��
	{
		if (*target == '\0')//�����ַ���ȣ�����0
		{
			return 0;
		}
		target++;
		source++;//�ַ�����ٱȽ���һ��λ�õ������ַ�
	}
	return *target - *source;//����strcmp��Դ�룬����<0Ϊ���ߴ󣬷���>0Ϊǰ�ߴ�
}
int main()
{
	char arr1[20] =  "abcdr" ;
	char arr2[] = "ed";
	int ff=my_strcmp(arr1, arr2);//��������ȽϺ������ò�����ֵ
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