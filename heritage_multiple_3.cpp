#include <iostream>
using namespace std;

class Etudiant {
  private:
    int id;

  public:
    Etudiant(int id): id(id){}

    int get_id() const {
      return id;
    }
};

class Employe {
  private: 
    int id;
    string nom;
    double salaire;

  public: 
    Employe(int id, string nom, double salaire): id(id), nom(nom), salaire(salaire){}

    string get_id() const {
      return "ID: " + to_string(id);
    }
};

class Auxiliaire : public Etudiant, public Employe {
  public:
   Auxiliaire(int id, string nom, double salaire) : Etudiant(id), Employe(id, nom, salaire) {}

   string get_employe_id() {
    return Employe::get_id();
   }

   int get_etudiant_id() {
    return Etudiant::get_id();
   }
};

int main () {
  Auxiliaire* auxiliaire = new Auxiliaire(3, "Mathieu", 3000);

  cout << auxiliaire->Employe::get_id() << endl;
} 