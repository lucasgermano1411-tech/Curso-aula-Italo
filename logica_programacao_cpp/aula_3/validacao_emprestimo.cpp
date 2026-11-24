#include < iostream >
using namespace std;
int main()
{
    float salario;
    int idade;
    cout << " Digite o salario do cliente : R$ ";
    cin >> salario;
    cout << " Digite a idade do cliente : ";
    cin >> idade;

    // Usando o operador E (&&) para combinar as restricoes
    if (salario >= 2500.0 && idade >= 18 && idade <= 65)
    {
        cout << " Status : Emprestimo Aprovado !" << endl;
    }
    else
    {
        cout << " Status : Emprestimo Negado ." << endl;
    }

    return 0;
