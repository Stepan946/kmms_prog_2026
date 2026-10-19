#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace Stepan {

    const MenuItem EXIT = {
        "0 - Закончить путешествие", Stepan::exit, &Stepan::MAIN, nullptr, 0
    };

    const MenuItem TRAVEL_BACK = {
        "0 - Выйти в меню",
        Stepan::go_back,
        &Stepan::MAIN,
        nullptr,
        0
    };

    const MenuItem FAR_EAST_BACK = {
        "0 - Выйти в предыдущее меню",
        Stepan::go_back,
        &Stepan::TRAVEL,
        nullptr,
        0
    };

    const MenuItem VLADIVOSTOK = {
        "1 - Владивосток",
        Stepan::show_city,
        &Stepan::FAR_EAST,
        nullptr,
        0
    };

    const MenuItem SAKHALIN = {
        "2 - Сахалин",
        Stepan::show_city,
        &Stepan::FAR_EAST,
        nullptr,
        0
    };

    const MenuItem KHABAROVSK = {
        "3 - Хабаровск",
        Stepan::show_city,
        &Stepan::FAR_EAST,
        nullptr,
        0
    };

    const MenuItem ALTAI = {
        "2 - Алтай",
        Stepan::show_region,
        &Stepan::TRAVEL,
        nullptr,
        0
    };

    const MenuItem GOLDEN_RING = {
        "3 - Золотое кольцо",
        Stepan::show_region,
        &Stepan::TRAVEL,
        nullptr,
        0
    };

    namespace {
        const MenuItem* const far_east_children[] = {
            &FAR_EAST_BACK,
            &VLADIVOSTOK,
            &SAKHALIN,
            &KHABAROVSK
        };

        const int far_east_size =
            sizeof(far_east_children) /
            sizeof(far_east_children[0]);
    }

    const MenuItem FAR_EAST = {
        "1 - Дальний Восток",
        Stepan::show_menu,
        &Stepan::TRAVEL,
        far_east_children,
        far_east_size
    };

    namespace {
        const MenuItem* const travel_children[] = {
            &TRAVEL_BACK,
            &FAR_EAST,
            &ALTAI,
            &GOLDEN_RING
        };

        const int travel_size =
            sizeof(travel_children) /
            sizeof(travel_children[0]);
    }

    const MenuItem TRAVEL = {
        "1 - Путешествовать", Stepan::show_menu,
        &Stepan::MAIN,
        travel_children,
        travel_size
    };

    namespace {
        const MenuItem* const main_children[] = {
            &EXIT,
            &TRAVEL
        };

        const int main_size =
            sizeof(main_children) /
            sizeof(main_children[0]);
    }

    const MenuItem MAIN = {
        "Главное меню",
        Stepan::show_menu,
        nullptr,
        main_children,
        main_size
    };
}