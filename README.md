# CPP03

C++ Module 03: inheritance hierarchy from ClapTrap through ScavTrap, FragTrap, to DiamondTrap — exploring single, multi-level, and diamond inheritance in C++98.

## Project Overview
- What it does: builds a game-character class hierarchy demonstrating inheritance, method overriding, and the C++ diamond problem.
- Core themes: `public` inheritance, `virtual` base classes, constructor/destructor chaining.

## Architecture & Design
- **ex00 (ClapTrap)**: base class with `name`, `hitPoints(10)`, `energyPoints(10)`, `attackDamage(0)`; `attack()`, `takeDamage()`, `beRepaired()`.
- **ex01 (+ScavTrap)**: inherits ClapTrap; overrides stats (HP=100, EP=50, AD=20); adds `guardGate()`; overrides `attack()`.
- **ex02 (+FragTrap)**: inherits ClapTrap; stats (HP=100, EP=100, AD=30); adds `highFivesGuys()`.
- **ex03 (DiamondTrap)**: inherits BOTH FragTrap and ScavTrap (diamond inheritance); has its own `name` + ClapTrap `name` set to `name_clap_name`; `whoAmI()` prints both names.

## Core Concepts (with code)
- Diamond inheritance resolution:
```cpp
// DiamondTrap.hpp
class DiamondTrap: public FragTrap, public ScavTrap {
    std::string name;  // shadows ClapTrap::name
public:
    DiamondTrap(std::string name);
    void attack(const std::string& target);  // uses ScavTrap::attack
    void whoAmI();  // prints DiamondTrap name AND ClapTrap::name
};
```
- Constructor chaining:
```cpp
// DiamondTrap inherits FragTrap's HP/AD and ScavTrap's EP
// ClapTrap name = "<name>_clap_name"
```

## Code Walkthrough
1) ex00: ClapTrap attack costs 1 energy; takeDamage reduces HP; beRepaired costs 1 energy, adds HP.
2) ex01: ScavTrap announces differently; `guardGate()` prints gate keeper mode.
3) ex02: FragTrap adds `highFivesGuys()` positive interaction.
4) ex03: DiamondTrap resolves ambiguity; `whoAmI()` shows both name layers.

## Installation & Setup
- `make` per exercise (C++98).

## Technical Deep Dive
- Diamond problem: without `virtual` inheritance, ClapTrap subobject is duplicated. Exercise explores this ambiguity.
- Constructor/destructor order follows C++ standard: base first, derived last (reverse for destructors).
- Energy/HP checks prevent actions when resources are depleted.

## Improvements & Future Work
- Add `virtual` inheritance to cleanly resolve the diamond.
- Add a battle simulation main to exercise all class interactions.

## Author
Oualid Obbad (@oualidobbad)