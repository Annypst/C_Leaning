//#include<stdio.h>;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p = &a;//p is a's address
//	int** pp = &p;//pp is p's address
//	*pp = &b;//now,pp is b's address
//	printf("%d\n", **pp);//*pp is b's address,and * *pp is used to turn b's add to b,is20
//	printf("\n---------------------------------------------\n");
//	
//	int arr[] = { 10,20,40,40,90,60 ,90,89};
//	//使用指针遍历array
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++)
//	{
//		int* p = &arr[i];
//		printf("%d\n", *p);
//	}
//
//	return 0;
//}