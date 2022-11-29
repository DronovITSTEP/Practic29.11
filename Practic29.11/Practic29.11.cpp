#include <iostream>
#include <iomanip>

using namespace std;

/*void f(int arr[], int arr2[][4]) {
	arr2[1][2] = 555;
}*/

void f1(int[][4], int, int);
void f2(int[][4], int, int);
void f3(int[][10], int[][5], int, int);
void f4(int n, int k);
 
int main()
{
	/*
	const int row = 3;
	const int col = 4;
	int arr[row][col]{ 
		 0 1 2 3
	0	{1,2,3,4},
	1	{5,6,7,8},
	2	{6,9,9,0}
	};
	int arr2[col]{ 9,8,7,6 };
	//int a = arr[1][2]; // a = 7

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	f(arr2, arr);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	//const int row = 3;
	//const int col = 4;
	//int arr[row][col]{
	//	{1,2,3,4},
	//	{5,6,7,8},
	//	{6,9,9,0}
	//};

	//f1(arr, row, col);
	//f2(arr, row, col);

	// rand()%(Y-X) + X

	//srand(time(NULL));
	//const int ROW = 5;
	//const int COL = 10;
	//int arr[ROW][COL];
	//int arr2[ROW][ROW];
	//for (int i = 0; i < ROW; i++) {
	//	for (int j = 0; j < COL; j++) {
	//		arr[i][j] = rand() % 50;
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//f3(arr, arr2, ROW, COL);

	f4(5, 25);
}

/*
	В двумерном массиве целых чисел посчитать:
	■ Сумму всех элементов массива;
	■ Среднее арифметическое всех элементов массива;
	■ Минимальный элемент;
	■ Максимальный элемент.
	*/

void f1(int arr[][4], int row, int col) 
{
	int sum = 0, min = arr[0][0], max = arr[0][0];
	float avg;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
			if (min > arr[i][j]) min = arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	avg = (float)sum / (row * col);

	cout << "Summa = " << sum << endl
		<< "AVG = " << avg << endl
		<< " Min = " << min << endl
		<< "Max = " << max << endl;
}

/*. 
В двумерном массиве целых чисел посчитать
сумму элементов : в каждой строке; в каждом столбце;
одновременно по всем строкам и всем столбцам.
Оформить следующим образом :

 3  5  6  7 | 21
12  1  1  1 | 15
 0  7 12  1 | 20
----------------
15  3 19  9 | 56

*/

void f2(int arr[][4], int row, int col) {
	int sum = 0; // сумма всех элементов
	int sumRow; // сумма элементов в строке
	int sumCol; // сумма элементов в столбце

	for (int i = 0; i < row; i++) {
		sumRow = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
			sumRow += arr[i][j];
			cout << setw(3) << arr[i][j];
		}
		cout << " | " << sumRow << endl;
	}
	cout << string(20, '-') << endl;

	for (int j = 0; j < col; j++) {
		sumCol = 0;
		for (int i = 0; i < row; i++) {
			sumCol += arr[i][j];
		}
		cout << setw(3) << sumCol;
	}

	cout << " | " << sum;
}

/*
Напишите программу, в которой объявляется
массив размером 5×10 и массив размером 5×5. Первый
массив заполняется случайными числами, в диапазоне
от 0 до 50. Второй массив заполняется по следующему
принципу: первый элемент второго массива равен сумме
первого и второго элемента первого массива, второй 
элемент второго массива равен сумму третьего и четвертого
элемента первого массива.
*/

void f3(int arr[][10], int arr2[][5], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0, k = 0; j < row; j++, k += 2) {
			arr2[i][j] = arr[i][k] + arr[i][k + 1];
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}

/*
Написать функцию, выводящую на экран
прямоугольник с высотой N и шириной K.
*/
void f4(int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << '+';
		}
		cout << endl;
	}
}
/*

*************
*************
*************

*/