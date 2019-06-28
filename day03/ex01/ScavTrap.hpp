#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap {

	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string usname);
 	ScavTrap(ScavTrap const & copy);

	int level;
	int individuality;

	void challengeNewcomer();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);

	ScavTrap & operator=(ScavTrap const & over);



protected:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;

	std::string name;

	int melAttackDam;
	int rangAttackDam;
	int armorDamRed;

	void beRepaired(unsigned int amount);
	int get_hitPoints() const;
 	int get_maxHitPoints() const;
 	int get_energyPoints() const;
 	int get_maxEnergyPoints() const;
 	int get_melAttackDam() const;
 	int get_rangAttackDam() const;
 	int get_armorDamRed() const;
 	std::string get_name() const;

};

#endif