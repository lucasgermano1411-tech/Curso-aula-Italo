#include < iostream >
using namespace std;
int main()
{
    int nota;
    cout << " Digite a nota (0 a 100) : ";
    cin >> nota;
    if (nota >= 60)
    {
        cout << " Status : Aprovado !" << endl;
    }
    else if (nota >= 40)
    {
        cout << " Status : Em Recuperacao !" << endl;
    }
    else
    {
        cout << " Status : Reprovado Direto !" << endl;
    }
    return 0;
}
