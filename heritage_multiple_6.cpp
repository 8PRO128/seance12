#include <iostream>
using namespace std;

class Personne {
};

class Etudiant : virtual public Personne {
};

class Employe : virtual public Personne {
};

class Auxiliaire : public Etudiant, public Employe {
};

int main () {
  Auxiliaire* auxiliaire = new Auxiliaire();
  Etudiant* s = auxiliaire;
  Personne* p1 = s;
  Employe* e = auxiliaire;
  Personne* p2 = e;
  Personne* p3 = auxiliaire;
} 