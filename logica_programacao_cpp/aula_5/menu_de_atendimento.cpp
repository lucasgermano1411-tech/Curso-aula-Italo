#include < iostream >
using namespace std;
int main()
{
    int opcao;
    cout << " === MENU DE ATENDIMENTO ===\ n";
    cout << "1 - Consultar Saldo \n";
    cout << "2 - Realizar Saque \n";
    cout << "3 - Falar com Atendente \n";
    cout << " Escolha uma opcao : ";
    cin >> opcao;
    cout << "\n";
    // A variavel ’opcao ’ e avaliada diretamente nos casos abaixo
    switch (opcao)
    {
    case 1:
        cout << " Seu saldo atual e: R$ 1.500 ,00\n";
        break; // Encerra o switch para nao executar os casos de baixo
    case 2:
        cout << " Iniciando operacao de saque ...\n";
        break;

    case 3:
        cout << " Transferindo para um atendente humano ...\n";
        break;
    default:
        // Executado caso o usuario digite qualquer numero diferente de 1, 2 ou 3
        cout << " Opcao invalida ! Tente novamente .\n";
        break;
    }
    cin.ignore();
    cout << "\ nPressione [ ENTER ] para sair ... ";
    cin.get();
    return 0;
}