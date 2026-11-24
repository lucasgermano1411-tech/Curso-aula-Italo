#include < iostream >
using namespace std;
int main()
{
    int opcao = -1; // 1. Inicializacao
    while (opcao != 0)
    { // 2. Condicao
        cout << "\n [1] Executar [0] Sair : ";
        cin >> opcao; // 3. Atualizacao
        if (opcao == 1)
        {
            cout << " Executando acao ...\ n";
        }
    }
    cout << " Programa encerrado !" << endl;
    return 0;
}
