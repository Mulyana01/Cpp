#include <iostream>

using namespace std;

int main()
{

	int nilai;
	cout << "Masukkan nilai: ";
	cin >> nilai;

	if (nilai >= 0 && nilai <= 25)
	{
		cout << "D" << endl; // 0-25
	}
	else if (nilai >= 26 && nilai <= 50)
	{
		cout << "C" << endl; // 26-50
	}
	else if (nilai >= 51 && nilai <= 75)
	{
		cout << "B" << endl; // 51-75
	}
	else if (nilai >= 76 && nilai <= 100)
	{
		cout << "A" << endl; // 76-100
	}
	else
	{
		cout << "Invalid" << endl; // 0-25
	}

	return 0;
}
