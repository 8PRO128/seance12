#include <iostream>
using namespace std;

class Personne {
  private:
    int id;
    string nom;

  public:
    static int id_suivant;
    Personne();
    int get_id() const;
};

int Personne::id_suivant = 0;

int Personne::get_id() const{
  return id;
}

Personne::Personne() {
  id = id_suivant++;
}

int main() {
  Personne p1;
  Personne p2;
  Personne p3;

  cout << p1.get_id() << endl;
  cout << p2.get_id() << endl;
  cout << p3.get_id() << endl;
}


