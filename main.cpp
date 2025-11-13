#include "sistemaMensagem.h"
#include "menuPrincipal.h"
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");

    exibeMenuPrincipal();

    return 0;
}