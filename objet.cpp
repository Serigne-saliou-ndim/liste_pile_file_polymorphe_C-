#include <iostream>
#include<string.h>
#include"objet.h"

using namespace std ;

// Constructeur par défaut de la classe objet
objet::objet(string name , int number)
{ nom=name;
  numero = number ;
}

// Destructeur de la classe objet
objet::~objet()
{
}



// Constructeur de la classe objet1
objet1::objet1(string name , int number , double poid) : objet(name , number)
{
    poids= poid ;
}

// Destructeur de la classe objet1
objet1::~objet1()
{
}

// Implémentation de la méthode d'affichage de la classe objet1
void objet1::afficher()
{
    objet::afficher();

    cout <<"\n\tPoids : " << poids <<endl;
    cout<<"\n" ;
}

// Constructeur de la classe objet2
objet2::objet2(string name , int number,string color) : objet(name , number)
{
    couleur=color ;
}

// Destructeur de la classe objet2
objet2::~objet2()
{
}

// Implémentation de la méthode d'affichage de la classe objet2
void objet2::afficher()
{
    objet::afficher();

    cout <<"\n\tCouleur : " << couleur <<endl;
    cout<<"\n" ;
}

// Constructeur de la classe objet3
objet3::objet3(string name , int number , int sizeobjet) : objet(name , number)
{
    taille=sizeobjet ;
}

// Destructeur de la classe objet3
objet3::~objet3()
{
}

// Implémentation de la méthode d'affichage de la classe objet3
void objet3::afficher()
{
    objet::afficher();

    cout <<"\n\tTaille : " << taille <<endl;
    cout<<"\n" ;
}

