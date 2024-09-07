#include<stdio.h>
#include<time.h>
#include<math.h>

int main()
{
	//二维数组
	int arr[3][5] =
	{
		{1,3,4,56,7},
		{22,33,44,66,77},
		{222,444,555,777,777}

	};

	for (int i = 0; i < 3; i++)//外循环
	{
		for (int j = 0; j < 5; j++)//内循环
		{
			printf("\n%d\n", arr[i][j]);//i行j列

		}
		printf("\n_________________");

	}
return 0;
}