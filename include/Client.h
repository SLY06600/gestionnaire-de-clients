#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    int ID;
    int Age;
    std::string Nom;

public:
    // Constructeurs
    Client();
    Client(int id, const std::string& nom, int age);

    // Getters
    int getID() const;
    int getAge() const;
    std::string getNom() const;

    // Setters
    void setNom(const std::string& nom);
    void setAge(int age);

    // Affichage
    void afficher() const;
};

#endif // CLIENT_H
