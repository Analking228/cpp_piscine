#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("crude spiked club");

    HumanA tiler("Tiler", club);
    tiler.attack();
    club.setType("some other type of club");
    tiler.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");

    HumanB edward("Edward");
    edward.setWeapon(club);
    edward.attack();
    club.setType("some other type of club");
    edward.attack();
    }
}