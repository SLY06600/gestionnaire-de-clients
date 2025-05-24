#ifndef GESTIONCLIENTS_H
#define GESTIONCLIENTS_H

#include <vector>
#include "Client.h"

class GestionClients {
private:
    std::vector<Client> clients;
    int id_courant;

public:
    GestionClients();

    void ajouterClient(const std::string& nom, int age);
    void afficherClients() const;
    bool supprimerClientParID(int id);
    Client* chercherClientParID(int id);
};

#endif // GESTIONCLIENTS_H
