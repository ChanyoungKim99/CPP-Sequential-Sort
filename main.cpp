#include <iostream>

void PrintArray(int input[], int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << input[i] << " ";
	}
	std::cout << std::endl;
}

void Swap(int& value1, int& value2)
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

// Sequential Sort

void SequentialSort(int input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				Swap(input[i], input[j]);
			}
		}
	}
}
// Time Complexity : O(n^2)  // Worst Case 고려
// 자세하게 분석하면
// n - 1, n - 2, n - 3, ... , 1
// = 1 + 2 + 3 + ... + n - 1
// = n(n - 1)/2	

// Space Complexity : O(n)

int main()
{
	const int SIZE{ 5 };
	int array[SIZE]{ 8, 7, 2, 3, 1 };

	SequentialSort(array, SIZE);
	PrintArray(array, SIZE);
}