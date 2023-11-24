#include <iostream>
using namespace std;

class Etudiant {
  public:
    int id;

};

class Employe {
  public: 
    string nom;
    double salaire;
};

class Auxiliaire : public Etudiant, public Employe {
};

class Aux : public Auxiliaire{};

int main () {
  Auxiliaire* auxiliaire = new Auxiliaire();

  auxiliaire->id = 1;
  auxiliaire->nom = "Mathieu";
  auxiliaire->salaire = 1000,0;

  Employe* p1 = auxiliaire;
  Etudiant* e1 = auxiliaire;
} 