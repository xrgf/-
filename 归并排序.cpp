#include<iostream>
using namespace std;
void merg_sort(int* a, int fbegin, int fend, int sbegin, int send, int* b)
{
	int L = fbegin;
	int R = sbegin;
	int cursize = fbegin;//z���ﲻ����0��ʼ �ݹ�����ǰ���Ӧ��ʼλ�ý��и�ֵ�� 
	while (L <= fend && R <= send)
	{
		if (a[L] > a[R])
		{
			b[cursize++] = a[R++];
		}
		else
		{
			b[cursize++] = a[L++];
		}
	}
	while (L <= fend)
	{
		b[cursize++] = a[L++];
	}
	while (R <= send)
	{
		b[cursize++] = a[R++];
	}
	memcpy(a+fbegin, b+fbegin, sizeof(int) * (send-fbegin+1));//Ҫ��ʼλ�ý��и�ֵ��Ȼ�����ظ���ͬһ���ط���ֵ 
}
void Merg_sort(int* a, int left, int right, int* b)
{

	int min = (left + right) / 2;
	if (left < right) 
	{
		Merg_sort(a, left, min, b);
		Merg_sort(a, min + 1, right, b);
		merg_sort(a, left, min, min + 1, right, b);
	}
}
int main()
{

	int a[10] = { 1,3,4,9,9,2,4,15,17,10 };
	int b[10];
	Merg_sort(a, 0, 9, b);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
