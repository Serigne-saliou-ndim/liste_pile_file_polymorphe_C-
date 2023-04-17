#include"file.h"

#include "liste.h"

 _FILE:: _FILE()
 {
        // Constructeur : initialise la liste file
        file = liste();
 }

bool _FILE::estVide()
{
    // Retourne true si la pile est vide, false sinon
    if(file.getLongueur() == 0)
        return true ;
    else
        return false ;
}

void _FILE::defiler()
{
        // Supprime le dernier élément de la pile
        file.supprime_position(1);
}

 _FILE:: ~_FILE()
 {

        while( !estVide() )
            defiler();
 }

int _FILE::longueur()
{
        return file.getLongueur();
}

void _FILE ::enfiler(objet* o)
{

        file.ajoute_position(longueur(),o);
}



objet* _FILE::tete()
{

        return file.get_objet(1);
}

objet* _FILE::queu()
{

        return file.get_objet(longueur() );
}


void _FILE::afficher()
{
    _FILE tempo;
        cout << "\n\t***************" << endl;
    while (!estVide())
    {
        objet* o = tete(); // recuperation du tete de la file
        tempo.enfiler(o); // ajout de l'objet à la copie temporaire
        o->afficher(); // affichage de l'objet
        cout << "\n\t***************" << endl;
        defiler(); // suppression de l'objet de la file originale
    }
        cout << "\n\t***************" << endl;
    // Restitution des éléments de la copie temporaire à la file originale
    while (!tempo.estVide())
    {
        objet* o = tempo.tete();
        enfiler(o);
        tempo.defiler();
    }
}

void main_File()
{
    _FILE file ;

    objet1 o1("Objet 1", 1, 1.5);
    objet2 o2("Objet 2", 2, "rouge");
    objet3 o3("Objet 3", 3, 10);

    objet1 o4("Objet 4", 4, 2.5);
    objet2 o5("Objet 5", 5, "Bleu");
    objet3 o6("Objet 6", 6, 20);

    file.enfiler(&o1);
    file.enfiler(&o2);
    file.enfiler(&o3);
    file.enfiler(&o4);
    file.enfiler(&o5);
    file.enfiler(&o6);

    file.afficher();

}


