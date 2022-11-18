#define  _CRT_SECURE_NO_WARNINGS 1
//2018
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		int i = 0;
//		for (i = 1;i <=n;i++)
//		{
//			if (i <= 4)
//			{
//				arr[i] = i;
//			}
//			else
//			{
//				arr[i] = arr[i - 1] + arr[i - 3];
//			}
//		
//		}
//		printf("%d\n", arr[n]);
//	}
//	return 0;
//}


//2019
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[100] = {0};
//	while (~scanf("%d%d", &n, &m))
//	{
//		if (n == 0 && m == 0)
//		{
//			return 0;
//		}
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0;i < n;i++)
//		{
//			if (m <= arr[i])
//			{
//				for (int j = n;j > i;j--)
//				{
//					arr[j] = arr[j-1];
//				}
//				arr[i] = m;
//				break;
//			}
//			if (arr[n - 1] < m)
//			{
//				arr[n] = m;
//				break;
//			}
//		}
//		printf("%d", arr[0]);
//		for (i = 1;i <= n;i++)
//		{
//			printf(" %d", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//


//2020
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int j = 0;j < n - 1;j++)
//		{
//			for (int i = 0;i < n - 1 - j;i++)
//			{
//				if (arr[i] < 0)
//				{
//					if (arr[i + 1] < 0)
//					{
//						if (-arr[i] < -arr[i + 1])
//						{
//							int tmp = arr[i];
//							arr[i] = arr[i + 1];
//							arr[i + 1] = tmp;
//						}
//					}
//					else
//					{
//						if (-arr[i] < arr[i + 1])
//						{
//							int tmp = arr[i];
//							arr[i] = arr[i + 1];
//							arr[i + 1] = tmp;
//						}
//					}
//				}
//				else
//				{
//					if (arr[i + 1] < 0)
//					{
//						if (arr[i] < -arr[i + 1])
//						{
//							int tmp = arr[i];
//							arr[i] = arr[i + 1];
//							arr[i + 1] = tmp;
//						}
//					}
//					else
//					{
//						if (arr[i] < arr[i + 1])
//						{
//							int tmp = arr[i];
//							arr[i] = arr[i + 1];
//							arr[i + 1] = tmp;
//						}
//					}
//				}
//			}
//		}
//		printf("%d", arr[0]);
//		for (int i = 1;i < n;i++)
//		{
//			printf(" %d", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2021
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		int count = 0;
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0;i < n;i++)
//		{
//			count += arr[i] / 100 + arr[i] % 100 / 50 + arr[i] % 100 % 50 / 10 + arr[i] % 100 % 50 % 10 / 5 + arr[i] % 100 % 50 % 10 % 5 / 2
//				+ arr[i] % 100 % 50 % 10 % 5 % 2 / 1;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//
//}

	//2022
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int arr[100][100] = { 0 };
//	int max = 0;
//	int x = 0;
//	int y = 0;
//	while (~scanf("%d%d", &m, &n))
//	{
//		if (m == 0 && n == 0)
//		{
//			return 0;
//		}
//		for (int i = 1;i <= m;i++)
//		{
//			for (int j = 1;j <= n;j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		max = arr[0][0];
//		for (int i = 1;i <= m;i++)
//		{
//			for (int j = 1;j <= n;j++)
//			{
//
//				if (arr[i][j] < 0 && max < 0)
//				{
//					if (-arr[i][j] > -max)
//					{
//						max = arr[i][j];
//						x = i;
//						y = j;
//					}
//				}
//				else if (arr[i][j] < 0 && max>0)
//				{
//					if (-arr[i][j] > max)
//					{
//						max = arr[i][j];
//						x = i;
//						y = j;
//					}
//				}
//				else if (arr[i][j] >= 0 && max < 0)
//				{
//					if (arr[i][j] > -max)
//					{
//						max = arr[i][j];
//						x = i;
//						y = j;
//					}
//				}
//				else
//				{
//					if (arr[i][j] > max)
//					{
//						max = arr[i][j];
//						x = i;
//						y = j;
//					}
//				}
//			}
//		}
//		printf("%d %d %d\n", x, y, max);
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m, n;
//	int arr[1000][1000] = { 0 };
//	int max = 0;
//	int x = 0;
//	int y = 0;
//	while (~scanf("%d%d", &m, &n))
//	{
//		if (m == 0 && n == 0)
//		{
//			return 0;
//		}
//		for (int i = 1;i <= m;i++)
//		{
//			for (int j = 1;j <= n;j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		max = arr[0][0];
//		for (int i = 1;i <= m;i++)
//		{
//			for (int j = 1;j <= n;j++)
//			{
//				if (fabs(arr[i][j]) > fabs(max))
//				{
//					max = arr[i][j];
//					x = i;
//					y = j;
//				}
//			}
//		}
//		printf("%d %d %d\n", x, y, max);
//	}
//	return 0;
//}


//2023
//学生1第一科分数、学生1第二科分数、学生1第三科分数 … 学生1第m科分数
//学生2第一科分数、学生2第二科分数、学生2第三科分数 … 学生1第m科分数
//学生3第一科分数、学生3第二科分数、学生3第三科分数 … 学生1第m科分数
//……
//学生n第一科分数、学生n第二科分数、学生n第三科分数 … 学生n第m科分数
//以此类推
//要求输出三行：
//第一行：输出n个学生的平均成绩，结果保留两位小数
//第二行：输出m科分数的平均成绩，结果保留两位小数
//第三行：输出一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
//#include<stdio.h>
//int main()
//{
//	int n, m,count;
//	int arr[100][100] = { 0 };
//	double sum = 0.0;
//	double aver1[50] = {0}, aver2[50] = {0};
//	while (~scanf("%d%d", &n, &m))
//	{
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < m;j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		for (int i = 0;i < n;i++)
//		{
//			sum = 0.0;
//			for (int j = 0;j < m;j++)
//			{
//				sum += arr[i][j];
//			}
//			aver1[i] = sum / m;
//		}
//		for (int j = 0;j < m;j++)
//		{
//			sum = 0.0;
//			for (int i = 0;i < n;i++)
//			{
//				sum += arr[i][j];
//			}
//			aver2[j] = sum / n;
//		}
//		int flag;
//		count = 0;
//		for (int i = 0;i < n;i++)
//		{
//
//			flag = 1;
//			for (int j = 0;j < m;j++)
//			{
//				if (arr[i][j] < aver2[j])
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag)
//			{
//				count++;
//			}
//		}
//
//		for (int i = 0;i <= n-1;i++)
//		{
//			if (i == 0)
//			{
//				printf("%.2lf", aver1[i]);
//			}
//			else
//			{
//				printf(" %.2lf", aver1[i]);
//			}
//		}
//		printf("\n");
//		for (int i = 0;i <= m - 1;i++)
//		{
//			if (i == 0)
//			{
//				printf("%.2lf", aver2[i]);
//			}
//			else
//			{
//				printf(" %.2lf", aver2[i]);
//			}
//		}
//		printf("\n");
//		printf("%d\n\n", count);
//	}
//	return 0;
//}
////for (int i = 0;i < n - 1;i++)
////{
////	printf("%.2lf ", aver1[i]);
////}
////printf("%.2lf\n", aver1[n - 1]);
////for (int i = 0;i < m - 1;i++)
////{
////	printf("%.2lf ", aver2[i]);
////}
////printf("%.2lf\n", aver2[m - 1]);
////printf("%d\n\n", count - 1);



