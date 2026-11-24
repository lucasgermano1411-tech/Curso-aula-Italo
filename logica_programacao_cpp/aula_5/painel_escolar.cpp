#include <iostream>
using namespace std;
int main()
{
    int opcao = -1;
    float n1, n2, media;
    while (opcao != 0)
    {
        cout << "\n === AUTOATENDIMENTO ACADEMICO === " << endl;
        cout << "1 - Consultar Situacao de Matricula " << endl;
        cout << "2 - Solicitar Declaracao de Frequencia " << endl;
        cout << "3 - Simular Aprovacao por Media " << endl;
        cout << "0 - Sair " << endl;
        cout << " Escolha uma opcao : ";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            cout << "\n[ STATUS ] Matricula ATIVA no curso tecnico ." << endl;
            break;
        case 2:
            cout << "\n[ PROTOCOLO #2026] Declaracao enviada para o e- mail ." << endl;
            break;
        case 3:
            cout << "\n Digite a Nota 1 e a Nota 2: ";
            cin >> n1 >> n2;
            media = (n1 + n2) / 2.0;
            cout << " Media calculada : " << media << " -> ";
            if (media >= 6.0)
                cout << " APROVADO !" << endl;
            else
                cout << " RECUPERACAO !" << endl;
            break;
        case 0:
            cout << "\n Encerrando o sistema . Ate logo !" << endl;
            break;
        default:
            cout << "\n[ ERRO ] Opcao invalida ! Tente novamente ." << endl;
            break;
            if (opcao != 0)
            {
                cin.ignore();
                cout << " Pressione [ ENTER ] para voltar ao menu ... ";
                cin.get();
            }
        }
    }
    return 0;
}
