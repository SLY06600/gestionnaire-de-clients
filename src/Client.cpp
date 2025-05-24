#include "Client.h"
#include <iostream>

// Constructeur par défaut
Client::Client() : ID(0), Age(0), Nom("") {}

// Constructeur avec paramètres
Client::Client(int id, const std::string& nom, int age) : ID(id), Age(age), Nom(nom) {}

// Getters
int Client::getID() const {
    return ID;
}

int Client::getAge() const {
    return Age;
}

std::string Client::getNom() const {
    return Nom;
}

// Setters
void Client::setNom(const std::string& nom) {
    Nom = nom;
}

void Client::setAge(int age) {
    Age = age;
}

// Méthode d'affichage
void Client::afficher() const {
    std::cout << "ID: " << ID << ", Nom: " << Nom << ", Age: " << Age << std::endl;
}
