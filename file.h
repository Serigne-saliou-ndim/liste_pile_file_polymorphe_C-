#ifndef FILE_H
#define FILE_H

#include"liste.h"

class _FILE
{
private:

  liste file;

public:
  _FILE();
  ~_FILE();
  void enfiler(objet*);
  void defiler();
  objet* tete();
  objet* queu();
  bool estVide();
  void afficher() ;
  int longueur();
};

void main_File() ; /// TESTE DE LA CLASS FILE
#endif // FILE_H
