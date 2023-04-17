#ifndef OBJET_H
#define OBJET_H

#include <iostream>
#include<string.h>

using namespace std ;

class objet
{
private :
    string nom ;
    int numero ;
public:
	objet(string , int);

	virtual ~objet();

	// Implémentation de la méthode d'affichage virtuelle pure de la classe objet
    virtual void afficher()
    {
         cout <<"\n\tNom :"<< this->nom<<endl ;
         cout <<"\n\tNumero :" << this->numero <<endl;
    }
    string getNom() { return nom ;}
    int getNumero() { return numero ;}
};

class objet1 : public objet
{
private:
    double poids;
public:
    void afficher ();
    objet1(string , int, double);
    ~objet1();
};

class objet2 : public objet
{
private:
    string couleur;

public:
    void afficher ();
    objet2(string , int,string);
    ~objet2();
};

class objet3 : public objet
{
private:
    int taille;
public:
    void afficher ();
    objet3(string , int, int);
    ~objet3();
};

#endif // OBJET_H
