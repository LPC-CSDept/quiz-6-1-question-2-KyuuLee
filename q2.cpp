#include <iostream>
#include <iomanip>
using namespace std;

//********************
void getInput(int &, int &, int &);
int findMin(int, int, int);
void printResult(int n1, int n2, int n3, int min);

int main()
{
	int n1, n2, n3;
	int min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}

void getInput(int &n1, int &n2, int &n3)
{
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3)
{
	int min;
	min = n1;
	(n2 < min) ? min = n2 : min = min;
	(n3 < min) ? min = n3 : min = min;
	return min;
}
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}

// ******************************
// Implement all your functions here
// ******************************