#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* t, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		t[i] = Low + rand() % (High - Low + 1);
}
void Print(int* t, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "t[" << setw(2) << i << " ] = " << setw(4) << t[i] << endl;
	cout << endl;
}
int Sum(int* t, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (t[i] <= 0 && t[i] % 5 != 0)
			S += t[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 25;
	int t[n];
	int Low = -20;
	int High = 37;
	Create(t, n, Low, High);
	Print(t, n);
	cout << "S = " << Sum(t, n) << endl;
	return 0;
}