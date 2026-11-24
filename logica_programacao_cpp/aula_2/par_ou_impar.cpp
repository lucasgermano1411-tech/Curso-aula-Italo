#include < iostream >
using namespace std;
int main()
{
    int numero;
    cout << " Digite um numero inteiro : ";
    cin >> numero;
    // O operador % calcula o resto da divisao inteira
    if (numero % 2 == 0)
    {
        cout << "O numero " << numero << " e PAR." << endl;
    }
    else
    {
        cout << "O numero " << numero << " e IMPAR ." << endl;
    }

    return 0;
}
