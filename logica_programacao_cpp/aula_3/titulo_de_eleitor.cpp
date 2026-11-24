#include <iostream>

using namespace std;



int main() {



    int idade;

    char possuiTitulo;


    cout << "=== SISTEMA DE VERIFICACAO ELEITORAL ===" << endl;

    cout << "Informe sua idade: ";

    cin >> idade;

    cout << "Voce ja possui titulo de eleitor? (S/N): ";

    cin >> possuiTitulo;

    cout << "\n==================================================";

    cout << "\n RELATORIO DE SITUACAO ELEITORAL";

    cout << "\n==================================================\n";

    // Verificacao da entrada

    if (idade < 0 || (possuiTitulo != 'S' && possuiTitulo != 's'

        && possuiTitulo != 'N' && possuiTitulo != 'n')) {



        cout << "ERRO: INFORMACOES INVALIDAS.";

        cout << "\nReinicie o programa e informe os dados corretamente.";

    }

    // Menor de 16 anos

    else if (idade < 16) {

        cout << "STATUS: IDADE INSUFICIENTE PARA VOTAR." << endl;

        cout << "\nCHECKLIST DE ORIENTACOES:" << endl;

        cout << "[1] Aguarde completar 16 anos para votar." << endl;

        cout << "[2] Saiba que a primeira via pode ser solicitada aos 15 anos." << endl;

        cout << "[3] Consulte o site oficial do TSE." << endl;



    }



    // Voto facultativo: 16 e 17 anos ou maiores de 70

    else if ((idade >= 16 && idade < 18) || idade > 70) {



        cout << "STATUS: VOTO FACULTATIVO." << endl;

        cout << "Voce nao e obrigado a votar." << endl;



        if (possuiTitulo == 'N' || possuiTitulo == 'n') {



            cout << "\nCHECKLIST PARA EMITIR A PRIMEIRA VIA:" << endl;

            cout << "[1] Acesse o Autoatendimento Eleitoral do TSE." << endl;

            cout << "[2] Solicite seu primeiro titulo de eleitor." << endl;

            cout << "[3] Separe documento oficial com foto." << endl;

            cout << "[4] Apresente comprovante de vinculo com o municipio." << endl;

            cout << "[5] Acompanhe a solicitacao." << endl;



        } else {



            cout << "\nCHECKLIST DE CONFERENCIA:" << endl;

            cout << "[1] Consulte a situacao do seu titulo." << endl;

            cout << "[2] Confira sua zona e secao eleitoral." << endl;

            cout << "[3] Verifique se existem pendencias." << endl;

            cout << "[4] Utilize o aplicativo e-Titulo." << endl;



        }



        cout << "\nATENCAO: O voto e facultativo nessa faixa etaria.";

        cout << "\nNao ha multa por deixar de votar.";



    }



    // Voto obrigatorio: 18 ate 70 anos

    else if (idade >= 18 && idade <= 70) {



        cout << "STATUS: VOTO E ALISTAMENTO OBRIGATORIOS." << endl;



        if (possuiTitulo == 'N' || possuiTitulo == 'n') {



            cout << "\nALERTA: VOCE AINDA NAO POSSUI TITULO." << endl;



            cout << "\nCHECKLIST DE EMISSAO:" << endl;

            cout << "[1] Acesse o portal oficial do TSE." << endl;

            cout << "[2] Entre no Autoatendimento Eleitoral." << endl;

            cout << "[3] Solicite o primeiro titulo." << endl;

            cout << "[4] Separe os documentos necessarios." << endl;

            cout << "[5] Acompanhe o processamento do pedido." << endl;



            cout << "\nIMPORTANTE: Verifique os prazos eleitorais.";

            cout << "\nA ausencia de alistamento no prazo legal pode gerar multa.";



        } else {



            cout << "\nCHECKLIST DE REGULARIZACAO E CONFERENCIA:" << endl;

            cout << "[1] Consulte a situacao eleitoral." << endl;

            cout << "[2] Confira sua zona e secao eleitoral." << endl;

            cout << "[3] Verifique possiveis multas ou pendencias." << endl;

            cout << "[4] Regularize eventuais debitos." << endl;

            cout << "[5] Compareca as urnas nas eleicoes.";



            cout << "\n\nALERTA DE MULTA:";

            cout << "\nA ausencia sem justificativa pode gerar multa eleitoral.";

        }



    }



    cout << "\n\n==================================================";

    cout << "\n INFORMACOES IMPORTANTES";

    cout << "\n==================================================";



    cout << "\nPortal oficial: www.tse.jus.br";

    cout << "\nAplicativo: e-Titulo";



    cout << "\n\nPrograma finalizado!" << endl;



    return 0;

}