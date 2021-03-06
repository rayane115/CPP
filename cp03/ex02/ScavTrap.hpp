#ifndef ScavTRAP_HPP
# define ScavTRAP_HPP

# include <iostream>
# include <string>
# include <time.h> 
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		ScavTrap &		operator=( ScavTrap const & rhs );

		int				challengeNewcomer(FragTrap & target);

	private:

		std::string		_name;
		int				_hitPoints;
		unsigned int	_maxHit;
		int				_energyPoints;
		unsigned int	_maxEnergy;
		int				_level;
		int				_meleeAttack;
		int				_rangeAttack;
		int				_armorDamage;

};

#endif 