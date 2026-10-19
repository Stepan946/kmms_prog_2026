#pragma once
#include "menu.hpp"

namespace Stepan {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);
    const MenuItem* show_city(const MenuItem* current);
    const MenuItem* show_region(const MenuItem* current);
}