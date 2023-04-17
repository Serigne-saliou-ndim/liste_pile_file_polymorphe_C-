#include"liste.h"


liste::liste()
{
    debut = nullptr ;
    courant = debut ;
    longueur=0 ;
}

liste::~liste()
{
    courant = debut ;
    maillon* tempo=nullptr ;
    while(courant !=NULL)
    {
         tempo= courant;
         delete tempo->element ;
        delete tempo;
        courant = courant->next;
    }

}

void liste::ajouter_objet(objet * ob) /// AJOUT EN QUEUE
{
    /// creation du maillon
    maillon* nouveau = new maillon ;
    nouveau->element = ob ;
    nouveau->next = nullptr ;

    /// ajout

    if (debut==nullptr)
        debut = nouveau ;
    else
    {
        courant = debut ;
        while(courant->next != nullptr )
            courant = courant->next ;

        courant->next=nouveau ;

    }

    longueur+=1 ;
}

void liste::ajoute_position(int pos, objet* autre)
{
    // création du maillon
    maillon* nouveau = new maillon;
    nouveau->element = autre;
    nouveau->next = NULL;

    if (debut == NULL || pos <= 1) {
        // ajout en début de liste
        nouveau->next = debut;
        debut = nouveau;
    } else {
        int i = 1;
        maillon* precedent = debut;
        courant = debut->next;

        /// recherche de la position
        while (courant != NULL && i < pos)
        {
            precedent = courant;
            courant = courant->next;
            i++;
        }

        if (i < pos) // fin de liste
        {
            // ajout en fin de liste
            precedent->next = nouveau;
        }
        else
        {
            // ajout à la position trouvée
            nouveau->next = courant;
            precedent->next = nouveau;
        }
    }

    longueur+=1;
}

void liste::supprime_position(int pos)
{
    // vérifier si la liste est vide
    if (debut == NULL) {
        cout << "Erreur: La liste est vide" << endl;
        return;
    }

    // vérifier si la position est valide
    if (pos <= 0 || pos > longueur) {
        cout << "Erreur: Position invalide" << endl;
        return;
    }

     courant = debut;
    maillon* precedent = NULL;
    int i = 1;

    // trouver le maillon à supprimer
    while (i < pos) {
        precedent = courant;
        courant = courant->next;
        i++;
    }

    // supprimer le maillon
    if (precedent == NULL) { // supprimer le premier maillon
        debut = courant->next;
    } else {
        precedent->next = courant->next;
    }

    delete courant;
    longueur-=1;
}

objet* liste::get_objet(int pos)
{
    // Vérifier que la position est valide
    if (pos < 0 || pos >= longueur)
    {
        return NULL;
    }

     courant = debut;
    int i = 0;

    // Parcourir la liste jusqu'à la position demandée
    while (i < pos)
    {
        courant = courant->next;
        i++;
    }

    // Retourner le maillon à la position demandée
    return courant->element;
}


void liste::affichage_liste()
{
    if(debut==nullptr)
        cout<<"\n\tLa liste est vide "<<endl ;
    else
    {
         courant = debut ;
        while(courant != nullptr )
        {
            courant->element->afficher() ;
      /*  cout << "+-----------------------------+" << endl;
        cout << "| Nom : " <<  setw(20) << left << courant->element->getNom() << "|" << endl;
        cout << "| Numero : " << setw(17) << left <<courant->element->getNumero() << "|" << endl;
        cout << "+-----------------------------+" << endl;
    */
            courant = courant->next ;
        }

    }
}

void main_Liste()
{
    // creation de la liste
    liste listePolymorphe;



    objet1 o1("Objet 1", 1, 1.5);
    objet2 o2("Objet 2", 2, "rouge");
    objet3 o3("Objet 3", 3, 10);

    objet1 o4("Objet 4", 4, 2.5);
    objet2 o5("Objet 5", 5, "Bleu");
    objet3 o6("Objet 6", 6, 20);



    listePolymorphe.ajouter_objet(&o1);
    listePolymorphe.ajouter_objet(&o2);
    listePolymorphe.ajouter_objet(&o3);

    listePolymorphe.ajoute_position(4,&o4);
    listePolymorphe.ajoute_position(5,&o5);
    listePolymorphe.ajoute_position(6,&o6);
   //listePolymorphe.supprime_position(1) ;


    // affichage de la liste
    listePolymorphe.affichage_liste();

}
