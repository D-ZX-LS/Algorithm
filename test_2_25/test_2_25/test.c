#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if ((n % i) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (--n)
//	{
//		int ret = is_prime(n);
//		if (ret == 1)
//		{
//			printf("%d", n);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 3-1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//
//	int a[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		a[i] = abs(arr[i] - 6);
//	}
//	if (a[0] <= a[1] && a[0] <= a[2])
//	{
//		printf("%d", arr[0]);
//	}
//	else if (a[1] <= a[0] && a[1] <= a[2])
//	{
//		printf("%d", arr[1]);
//	}
//	else if (a[2] <= a[0] && a[2] <= a[1])
//	{
//		printf("%d", arr[2]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//	int x1, y1, x2, y2, x3, y3, x4, y4;
//	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
//	double n1x = x2 - x1;
//	double n1y = y2 - y1;
//
//	double n2x = x4 - x3;
//	double n2y = y4 - y3;
//
//	if (n1x == n2x && n1x == 0)
//	{
//		if (n1y == n2y)
//		{
//			printf("YES");
//			return 0;
//		}
//	}
//
//	if (n1y == n2y && n1y == 0)
//	{
//		if (n1x == n2x)
//		{
//			printf("YES");
//			return 0;
//		}
//	}
//
//	if ((n2x / n1x) == (n2y / n1y))
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
//
//0 0 999 0
//0 5 999 5

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a, b = 0;
//	int count = 0;
//	int k = 0;
//	a = m % 10;
//	b = n % 10;
//	if (a + b >= 10)
//	{
//		count++;
//	}
//	m = m / 10;
//	n = n / 10;
//
//	a = m % 10;
//	b = n % 10;
//	if (a + b +count>= 10)
//	{
//		count++;
//		k++;
//	}
//	m = m / 10;
//	n = n / 10;
//
//	a = m % 10;
//	b = n % 10;
//	if (a + b + k >= 10)
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	int n, w;
//	scanf("%d%d", &n, &w);
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < w-1; i++)
//	{
//		sum = (sum + n) * 2;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if ((n % i) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			int ret = is_prime(i);
//			if (ret == 1)
//			{
//				printf("%d ", i);
//			}
//			n = n / i;
//			i = 1;
//
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void f(int* N, int n)
//{
//    int* p = N;
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (p[i] == 0)
//        {
//            int j = 0;
//            for (j = i; j < n-1; j++)
//            {
//                int tmp = p[j];
//                p[j] = p[j+1];
//                p[j + 1] = tmp;
//
//            }
//            n--;
//            i--;
// 
//        }
//    }
//}
//int main()
//{
//    int N[100], i, n;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) scanf("%d", &N[i]);
//    f(N, n);
//    for (i = 0; i < n; i++) printf("%d ", N[i]);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 1; i < n; i += 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	node* head =NULL;
//	node* tail =NULL;
//	node* next =NULL;
//
//	for (i = 1; i <= n; i++)
//	{
//		node* newnode = (node*)malloc(sizeof(node));
//		newnode->data = i;
//		newnode->next = NULL;
//
//		if (i == 1)
//		{
//			head = newnode;
//		}
//		else
//		{
//			tail->next = newnode;
//		}
//		tail = newnode;
//	}
//
//	int listnum = n;
//	while (listnum > 1)
//	{
//		//1
//		next = head->next;
//		head->next = NULL;
//		tail->next = head;
//		tail = head;
//		head = next;
//
//		//2
//		next = head->next;
//		head->next = NULL;
//		tail->next = head;
//		tail = head;
//		head = next;
//
//		//3
//		next = head->next;
//		free(head);
//		head = next;
//		listnum--;
//	}
//
//	printf("%d", head->data);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void reverse(char* left, char* right)
{
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[1000] = { 0 };
	gets(arr);
	int sum = 0;
	char* left = &arr[0];
	char* right = &arr[0];
	while (*right)
	{
		int digit = 0;

		while (*left == ' '&& *left)
		{
			left++;
		}
		right = left;
		while (*right != ' '&& *right)
		{
			right++;
			digit++;
		}
		reverse(left, right - 1);

		//ПајУ
		while (left < right)
		{
			sum = sum + (*left-'0') * (int)(pow(10, digit - 1));
			left++;
			digit--;
		}
	}
	printf("%d", sum);
	
	return 0;
}