#include"pile.h"

#include "liste.h"

 PILE:: PILE()
 {
        // Constructeur : initialise la liste Pile
        Pile = liste();
 }

bool PILE::estVide()
{
    // Retourne true si la pile est vide, false sinon
    if(Pile.getLongueur() == 0)
        return true ;
    else
        return false ;
}

void PILE::depiler()
{
        // Supprime le dernier élément de la pile
        Pile.supprime_position(1);
}

 PILE:: ~PILE()
 {

        while( !estVide() )
            depiler();
 }

void PILE ::empiler(objet* o)
{
        // Ajoute un élément à la fin de la pile
        Pile.ajoute_position(1,o);
}



objet* PILE::sommet()
{
        // Retourne l'élément au sommet de la pile (dernier ajouté)
        return Pile.get_objet(1);
}




int PILE::longueur()
{
        // Retourne le nombre d'éléments dans la pile
        return Pile.getLongueur();
}

void PILE::afficher()
{
    PILE tempo ; // garder la pile
cout << "\n\t***************" << endl;
    while( !estVide())
    {
        tempo.empiler( this->sommet()) ;

         sommet()->afficher() ;
        cout<<"\n\t***************"<<endl;
        depiler() ;
    }
cout << "\n\t***************" << endl;
    // restitution
     while( !tempo.estVide())
    {
        empiler( tempo.sommet()) ;

        tempo.depiler() ;
    }

}
void main_Pile()
{
    PILE pile ;

    objet1 o1("Objet 1", 1, 1.5);
    objet2 o2("Objet 2", 2, "rouge");
    objet3 o3("Objet 3", 3, 10);

    objet1 o4("Objet 4", 4, 2.5);
    objet2 o5("Objet 5", 5, "Bleu");
    objet3 o6("Objet 6", 6, 20);

    pile.empiler(&o1);
    pile.empiler(&o2);
    pile.empiler(&o3);
    pile.empiler(&o4);
    pile.empiler(&o5);
    pile.empiler(&o6);

    pile.afficher();

}



