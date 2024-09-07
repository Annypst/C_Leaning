//#include <stdio.h>  
//
//
//void arp(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//    printf("%d\n", arr[i]);
//
//	}
//	
//
//}
//int main()
//{
//
//	
//	//反转数组
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("\npls input the %d num:",i+1);
//		scanf("\n%d",&arr[i],i+1);
//	
//	}
//	//遍历录入的数组
//	printf("--------------------------------------\n");
//	arp(arr, 5);
//	printf("\n--------------------------------------\n");
//	//反转
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//
//		i++;
//		j--;//i++使i的值加一，而i+1中i的值不变，是i+1的结果，即一个表达式。
//
//	}
//
//	//遍历反转后的
//	arp(arr, len);
//
//
//	return 0;
//}