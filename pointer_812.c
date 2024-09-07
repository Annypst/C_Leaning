//#include<stdio.h>;
//void cge(int*p1, int*p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 =temp ;
//
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	*p = 2000;
//	printf("%d\n", *p);
//	printf("----------------------------;");
//	int b = 20;
//	int c = 30;
//	printf("\nchange front:%d %d", b, c);
//	cge(&b, &c);//notice! must add the & means that is the address,nor the variate b or c.
//	printf("\nchange in:%d %d", b,c);
//
//	return 0;
//}