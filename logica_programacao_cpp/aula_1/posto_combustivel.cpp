#include < iostream >
using namespace std;
int main()
{
    char tipo;
    float litros, total;
    cout << " Digite (G) asolina ou (E) tanol : ";
    cin >> tipo;
    cout << " Digite os litros : ";
    cin >> litros;

    if (tipo == 'G' || tipo == 'g')
    {
        total = litros * 5.80;
    }
    else
    {
        total = litros * 4.20;
    }

    cout << " Valor total a pagar : R$ " << total << endl;

    if (total > 150.0)
    {
        cout << " Parabens ! Voce ganhou uma lavagem gratis !" << endl;
    }
    return 0;
}