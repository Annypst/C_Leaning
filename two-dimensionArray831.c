#include<stdio.h>
#include<time.h>
#include<math.h>

int main()
{
	//��ά����
	int arr[3][5] =
	{
		{1,3,4,56,7},
		{22,33,44,66,77},
		{222,444,555,777,777}

	};

	for (int i = 0; i < 3; i++)//��ѭ��
	{
		for (int j = 0; j < 5; j++)//��ѭ��
		{
			printf("\n%d\n", arr[i][j]);//i��j��

		}
		printf("\n_________________");

	}
return 0;
}