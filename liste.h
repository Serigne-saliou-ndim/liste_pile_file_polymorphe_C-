#ifndef LISTE_H
#define LISTE_H

#include <iostream>
#include<string.h>
#include"objet.h"

using namespace std ;

struct maillon
{
    objet* element ; // pointeur sur l'objet parent
    struct maillon * next ;
};

class liste
{
private :
    int longueur ;
    maillon* debut ;
    maillon* courant ;
public:
	liste();
	~liste();
	void ajouter_objet(objet *) ;
	void supprimer_objet(objet*) ;
	void ajoute_position(int , objet * ); // ajouter a une position
	void supprime_position(int pos) ;
	objet* get_objet(int ); // obtenir l'element a la position
	int getLongueur() { return longueur ;}
	void affichage_liste() ;


};

void main_Liste() ; /// TESTE DE LA CLASS LISTE

#endif // LISTE_H
