#include "GestionClients.h"
#include <iostream>

GestionClients::GestionClients() : id_courant(1) {}

void GestionClients::ajouterClient(const std::string& nom, int age) {
    clients.emplace_back(id_courant++, nom, age);
}

void GestionClients::afficherClients() const {
    for (const auto& client : clients) {
        client.afficher();
    }
}

bool GestionClients::supprimerClientParID(int id) {
    for (auto it = clients.begin(); it != clients.end(); ++it) {
        if (it->getID() == id) {
            clients.erase(it);
            return true; // succès suppression
        }
    }
    return false; // client non trouvé
}

Client* GestionClients::chercherClientParID(int id) {
    for (auto& client : clients) {
        if (client.getID() == id) {
            return &client;
        }
    }
    return nullptr;
}


// Client* GestionClients::chercherClientParID(int id) {
//     for (auto& c : clients) {
//         if (c.getID() == id) {
//             return &c;
//         }
//     }
//     return nullptr;
// }
