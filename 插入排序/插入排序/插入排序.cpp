#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,5,4,2,7,6,10,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int j;
	for (int i = 1; i < n; i++)  // 循环从第2个元素开始
	{
		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;    
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}