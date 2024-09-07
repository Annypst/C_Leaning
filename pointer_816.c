//#include<stdio.h>;
//void get(int arr[], int len, int* max, int* min);
//
//int main()
//{
//	int arr[] = { 9,3,4,5,2,1,98,44,-10 };
//	int max = arr[0];
//	int min = arr[0];
//	int len = sizeof(arr) / sizeof(int);
//	get(arr, len, &max, &min);
//	printf("\nmax is:%d", max);
//	printf("\nmix is:%d", min);
//
//	return 0;
//}
////this func is used to get max and min of the array.
//void get(int arr[], int len,int *max,int *min)
//{
////get max
//	*max = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//
//	}
////get min
//	*min = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//
//	}
//
//
//}