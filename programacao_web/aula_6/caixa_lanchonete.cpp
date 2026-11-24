#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int opc = -1;
    float tpedidos = 0.0f;
    int qtd = 0;

    while (opc != 0)
    {
        cout << "\n==== CAIXA DE LANCHONETE ====\n";
        cout << "1 - Suco natural R$ 6,00\n";
        cout << "2 - Salgado R$ 7,50\n";
        cout << "3 - Combo R$ 12,00\n";
        cout << "0 - Finalizar pedido\n";

        cout << "itens no carrinhio: " << qtd << endl
             << "Valor total ate o momento R$ " << tpedidos << endl;

        cout << "Escolha uma opcao: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            tpedidos += 6.0;
            qtd++;
            cout << "Item adicionado ao carrinho!\n ===================================\n";

            break;
        case 2:
            tpedidos += 7.5;
            qtd++;
            cout << "Item adicionado ao carrinho!\n ===================================\n   ";
            break;
        case 3:
            tpedidos += 12.0;
            qtd++;
            cout << "Item adicionado ao carrinho!\n ===================================\n   ";
            break;

        case 0:
            cout << "Pedido finalizado!\n";
            cout << "Itens no carrinho: " << qtd << endl;
            cout << "Valor total do pedido: R$ " << tpedidos << endl;
            break;
        default:
            cout << "Opção inválida!, tente novamente.\n";
            break;
        }
        cout << "itens no carrinhio: " << qtd << endl;
        cout << "Valor total ate o momento R$ " << tpedidos << endl;

        if (tpedidos >= 30.0)
        {
            cout << "Voce atingiu o valor minimo para ganhar um desconto de 10%!\n";
            tpedidos *= 0.9;
            cout << "Valor total com desconto: R$ " << tpedidos << endl;
        }
        else
        {
            cout << "Valor Total do pedido: R$ " << tpedidos << endl;
        }
    }
}
