#include <iostream>
#include "GestionClients.h"

int main() {
    GestionClients gestion;

    gestion.ajouterClient("Dupont", 30);
    gestion.ajouterClient("Martin", 25);
    gestion.ajouterClient("Durand", 40);

    std::cout << "Liste des clients :\n";
    gestion.afficherClients();

    int idRecherche = 2;
    Client* client = gestion.chercherClientParID(idRecherche);
    if (client) {
        std::cout << "\nClient trouvé avec ID " << idRecherche << ":\n";
        client->afficher();
    } else {
        std::cout << "\nClient avec ID " << idRecherche << " non trouvé.\n";
    }

    std::cout << "\nSuppression du client avec ID 2\n";
    gestion.supprimerClientParID(2);

    std::cout << "\nListe des clients après suppression:\n";
    gestion.afficherClients();

    return 0;
}

// #include <iostream>
// #include "GestionClients.h"

// int main() {
//     GestionClients gestion;

//     // Ajout de clients
//     gestion.ajouterClient("Dupont", 30);
//     gestion.ajouterClient("Martin", 25);
//     gestion.ajouterClient("Durand", 40);

//     // Affichage de la liste des clients
//     std::cout << "Liste des clients :\n";
//     gestion.afficherClients();

//     // Recherche d'un client par ID
//     int idRecherche = 2;
//     Client* client = gestion.chercherClientParID(idRecherche);
//     if (client) {
//         std::cout << "\nClient trouvé avec ID " << idRecherche << " :\n";
//         client->afficher();
//     } else {
//         std::cout << "\nClient avec ID " << idRecherche << " non trouvé.\n";
//     }

//     // Suppression d'un client par ID
//     std::cout << "\nSuppression du client avec ID " << idRecherche << "...\n";
//     if (gestion.supprimerClientParID(idRecherche)) {
//         std::cout << "Suppression réussie.\n";
//     } else {
//         std::cout << "Échec de la suppression : client non trouvé.\n";
//     }

//     // Affichage de la liste après suppression
//     std::cout << "\nListe des clients après suppression :\n";
//     gestion.afficherClients();

//     return 0;
// }
