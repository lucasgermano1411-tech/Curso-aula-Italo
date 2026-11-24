#include < iostream >
using namespace std;
int main()
{
    int idade;
    cout << " Digite sua idade : ";
    cin >> idade;
    if (idade >= 18)
    {
        cout << " Maior de idade . Pode dirigir !" << endl;
    }
    else
    {
        cout << " Menor de idade . Nao pode dirigir ." << endl;
    }
    return 0;
