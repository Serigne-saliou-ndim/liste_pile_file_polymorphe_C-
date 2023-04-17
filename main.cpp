#include <iostream>
#include"liste.h"
#include"pile.h"
#include"file.h"
//#include <SDL2/SDL.h>

using namespace std;

int main(int argc , char** argv)
{

    cout<<"\n\t\t+++++++++  VERSION LISTE POLYMORPHISME   +++++++++++++++"<<endl ;

    // main_Liste() ; /// TESTE DE LA CLASS LISTE

    cout<<"\n\t\t+++++++++  VERSION PILE  POLYMORPHISME +++++++++++++++"<<endl ;

    main_Pile() ; /// TESTE DE LA CLASS PILE

  cout<<"\n\t\t+++++++++  VERSION FILE  POLYMORPHISME +++++++++++++++"<<endl ;

    main_File() ; /// TESTE DE LA CLASS FILE





    return 0;
}
