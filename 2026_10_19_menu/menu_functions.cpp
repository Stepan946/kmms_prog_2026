#include <iostream>
#include <cstdlib>
#include "menu_functions.hpp"

namespace Stepan {

    const MenuItem* show_menu(const MenuItem* current) {
        for (int i = 1; i < current->children_count; i++) {
            std::cout << current->children[i]->title
                      << std::endl;
        }

        std::cout << current->children[0]->title
                  << std::endl;

        std::cout << "Путешествие > ";

        int user_input;
        std::cin >> user_input;

        return current->children[user_input];
    }

    const MenuItem* exit(const MenuItem* current) {
        std::cout << "Путешествие закончено!"
                  << std::endl;
        std::exit(0);
        return nullptr;
    }

    const MenuItem* go_back(const MenuItem* current) {
        return current->parent;
    }

    const MenuItem* show_city(const MenuItem* current) {
        std::cout << current->title
                  << std::endl << std::endl;
        return current->parent;
    }

    const MenuItem* show_region(const MenuItem* current) {
        std::cout << current->title
                  << std::endl << std::endl;
        return current->parent;
    }
}