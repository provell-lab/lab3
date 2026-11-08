// Задание 1

//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//#include <ctime>
//#include <clocale>
//#include <windows.h>
//using namespace std;
//
//int searchmin(float arr[], int n) {
//	int ind_min = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] < arr[ind_min])
//		{
//			ind_min = i;
//		}
//	}
//	return ind_min;
//}
//
//int main() {
//	const int N1 = 10;
//	const int N2 = 10;
//	float a[N1], b[N2];
//	setlocale(LC_ALL, "Russian");
//	for (int i = 0; i < N1; i++) {
//		a[i] = rand() % 201 - 100;
//	}
//	for (int i = 0; i < N2; i++) {
//		b[i] = rand() % 201 - 100;
//	}
//
//	for (int i = 0; i < N1; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//	cout << endl;
//	for (int i = 0; i < N2; i++)
//	{
//		cout << b[i] << " ";
//	}
//	cout << endl;
//
//	int rez1 = searchmin(a, N1);
//	int rez2 = searchmin(b, N2);
//	int dist1 = N1 - 1 - rez1;
//	int dist2 = N2 - 1 - rez2;
//
//	if (dist1 < dist2) {
//		cout << "Минимум находится ближе к концу в массиве a";
//	}
//	else if (dist1 > dist2) {
//		cout << "Минимум находится ближе к концу в массиве b";
//	}
//	else {
//		cout << "Минимумы находятся на одинаковом расстоянии от конца";
//	}
//	return 0;
//}

// Задание 2
//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//#include <clocale>
//using namespace std;
//
//const int N = 10;
//
//int sumstolb(int arr[][N], int j) {
//	int sum = 0;
//	for (int i = j; i < N; i++)
//	{
//		sum += arr[i][j];
//	}
//	return sum;
//}
//
//int main() {
//	int a[N][N];
//	setlocale(LC_ALL, "Russian");
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			a[i][j] = rand() % 21 - 10;
//			cout << setw(4) << a[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//	for (int j = 0; j < N; j++)
//	{
//		int rez = sumstolb(a, j);
//		cout << "Сумма в столбце " << j + 1 << " = " << rez << endl;
//	}
//
//	return 0;
//}