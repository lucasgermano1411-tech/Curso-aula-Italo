#include < iostream >
using namespace std;
int main()
{
    float media;
    cout << " Digite a media do aluno : ";
    cin >> media;
    if (media >= 60.0)
    {
        cout << " Status : APROVADO !" << endl;
    }
    else
    {
        cout << " Status : REPROVADO !" << endl;
    }

    return 0;
}
