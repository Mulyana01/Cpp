#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    switch (nilai)
    {
    case 1:
        cout << "Nilai 1";
        break;
    case 2:
        cout << "Nilai 2";
        break;
    case 3:
        cout << "Nilai 3";
        break;
    default:
        cout << "Nilai tidak ada";
    }

    return 0;
}
