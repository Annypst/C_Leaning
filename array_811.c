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
//	//��ת����
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("\npls input the %d num:",i+1);
//		scanf("\n%d",&arr[i],i+1);
//	
//	}
//	//����¼�������
//	printf("--------------------------------------\n");
//	arp(arr, 5);
//	printf("\n--------------------------------------\n");
//	//��ת
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//
//		i++;
//		j--;//i++ʹi��ֵ��һ����i+1��i��ֵ���䣬��i+1�Ľ������һ�����ʽ��
//
//	}
//
//	//������ת���
//	arp(arr, len);
//
//
//	return 0;
//}