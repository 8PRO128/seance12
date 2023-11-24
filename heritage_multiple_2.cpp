#include <iostream>
using namespace std;

class Etudiant {
  public:
    int id;

    Etudiant(int id) : id(id) {}

    int get_id() const {
      return id;
    }
};

class Employe {
  public: 
    int id;
    string nom;
    double salaire;

    Employe(int id) : id(id) {}

    string get_id() const {
      return "ID: " + to_string(id);
    }
};

class Auxiliaire : public Etudiant, public Employe {
  public:
    Auxiliaire(int id) : Etudiant(id), Employe(id) {}
};

int main () {
  Auxiliaire* auxiliaire = new Auxiliaire(10);

  cout << auxiliaire->Employe::get_id() << endl;
} 