#include <iostream>
#include <vector>
#include <string>

struct Note {
    std::string nom;
    std::string prenom;
    double note;
};

void add(std::vector<Note>& listeNotes) {
    Note nouvelleNote;
    std::cout << "Entrez le nom: ";
    std::cin >> nouvelleNote.nom;
    std::cout << "Entrez le prenom: ";
    std::cin >> nouvelleNote.prenom;
    std::cout << "Entrez la note: ";
    std::cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    std::cout << "succes" << std::endl;
}

void displaynotes(const std::vector<Note>& listeNotes) {
    std::cout << "Liste des notes :" << std::endl;
    for (const auto& note : listeNotes) {
        std::cout << "Nom : " << note.nom << ", Prenom : " << note.prenom << ", Note : " << note.note << std::endl;
    }
}

void sup(std::vector<Note>& listeNotes) {
    std::string nom, prenom;
    std::cout << "entrez le nom: ";
    std::cin >> nom;
    std::cout << "entrez le prenom: ";
    std::cin >> prenom;

    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            std::cout << "succes" << std::endl;
            return;
        }
    }
    std::cout << "introuvable" << std::endl;
}

void moyenne(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "aucune note dans la liste" << std::endl;
        return;
    }

    double somme = 0.0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    double moyenne = somme / listeNotes.size();
    std::cout << moyenne << std::endl;
}

int main() {
    std::vector<Note> listeNotes;
    int choix;

    do {
        std::cout << "\nMenu :" << std::endl;
        std::cout << "1. Ajouter une note" << std::endl;
        std::cout << "2. Afficher la liste des notes" << std::endl;
        std::cout << "3. Supprimer une note" << std::endl;
        std::cout << "4. Afficher la moyenne des notes" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Entrez votre choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1:
                add(listeNotes);
                break;
            case 2:
                displaynotes(listeNotes);
                break;
            case 3:
                sup(listeNotes);
                break;
            case 4:
                moyenne(listeNotes);
                break;
            case 5:
                break;
            default:
                std::cout << "erreur" << std::endl;
        }
    } while (choix != 5);

    return 0;
}
