#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Bob");
    ClapTrap clap2("Alice");

    clap1.attack("Alice");
    clap2.takeDamage(0);
    clap2.beRepaired(5);
    
    clap1.takeDamage(8);
    clap1.beRepaired(3);
    clap1.attack("Alice");
    
    clap1.takeDamage(10);
    clap1.attack("Alice");
    clap1.beRepaired(5);

    return 0;
}

