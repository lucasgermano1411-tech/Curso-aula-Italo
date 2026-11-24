#include < iostream >
using namespace std;
int main()
{
    char genero;
    int idade;
    cout << " === SISTEMA DE TRIAGEM CIVICA E ALISTAMENTO === " << endl;
    cout << " Informe o genero (M para Masculino / F para Feminino ): ";
    cin >> genero;
    cout << " Informe sua idade atual : ";
    cin >> idade;
    cout << "\n-- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- --" << endl;
    cout << " RELATORIO PERSONALIZADO DE ORIENTACOES :" << endl;
    cout << " --------------------------------------------" << endl;

    if (genero == 'M' || genero == 'm') 
    {
        if (idade >= 18)
        {
            cout << " STATUS : Alistamento militar OBRIGATORIO ." << endl;
            cout << " Passo 1: Acesse o portal alistamento .eb. mil .br." << endl;
            cout << " Passo 2: Tenha em maos CPF , RG e comprovante de residencia ." << endl;
            cout << " Passo 3: Acompanhe a data de apresentacao na Junta de Servico Militar." << endl;
            cout
                << " Passo 4: Compareca para a realizacao dos exames gerais ." << endl;
        }
        else
        {
            cout << " STATUS : Dispensado do alistamento no momento ." << endl;
            cout << " Faltam " << (18 - idade) << " ano (s) para o periodo obrigatorio   ." << endl;
        }
    }
    else if (genero == 'f' || genero == 'F')
    {
        cout << " STATUS : O alistamento militar feminino e VOLUNTARIO ." << endl;
        cout << " Passo 1: O ingresso ocorre mediante concurso publico ." << endl;
        cout << " Passo 2: Verifique os editais da Marinha , Exercito ou Aeronautica ." << endl;
    }
    else
    {
        cout << " Opcao de genero invalida . Reinicie o programa ." << endl;
    }

    return 0;
}
