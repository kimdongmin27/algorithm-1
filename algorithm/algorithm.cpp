#include <iostream>

using namespace std;

void Select(int array[], int n)
{

	int x;
	int min;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
			int x = array[i];
			array[i] = array[min];
			array[min] = x;
		}
	}

    
}


int main()
{
	/*
	int array[] = { 3,4,2,5,1 };
	int n = sizeof(array) / sizeof(array[0]);


	Select(array, n);

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}
	*/

	/*
	      300      1
	   x  125      2
	 ------------    
	     1500      3
	     600       4
        300        5
	    37500      6
	 
	
	
	*/

	int num1, num2;

	
	scanf_s("%d %d", &num1, &num2);
	/*
	printf("===============\n");
	printf(" %d\n", num2 % 10 * num1);
	printf(" %d\n", num2 / 10 % 10 * num1);
	printf("%d\n", num2 / 100 * num1);
	printf("===============\n");
	printf("%d\n", num2 * num1);
	*/
	
	int array[4] = { 0,0,0,0 };
	array[0] = num2 % 10 * num1;
	array[1] = num2 / 10 % 10 * num1;
	array[2] = num2 / 100 * num1;
	array[3] = num2 * num1;

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n",array[i]);
	}


}