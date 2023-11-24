#include <iostream>
using namespace std;

class Personne {
  private:
    int id;
    string nom;

  public:
    Personne();
    Personne(const Personne& p);
    Personne(int id);
    Personne(int id, string nom);
};

Personne::Personne() {}

Personne::Personne(const Personne& p) {
  id = p.id;
  nom = p.nom;
}

Personne::Personne(int id) : id(id) {}

Personne::Personne(int id, string nom) : Personne(id) {
    this->nom = nom;
  }


class Etudiant : public Personne {
  public:
    Etudiant();
};

Etudiant::Etudiant() : Personne() {}

int main () {
  Personne p1;

  Personne p2(p1);
}