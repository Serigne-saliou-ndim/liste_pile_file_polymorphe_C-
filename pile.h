#include"liste.h"

class PILE
{
private:

  liste Pile;

public:
  PILE();
  ~PILE();
  void empiler(objet*);
  void depiler();
  objet* sommet();
  bool estVide();
  void afficher() ;
  int longueur();
};

void main_Pile() ; /// TESTE DE LA CLASS PILE

