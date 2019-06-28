#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap {
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string usname);
 	ClapTrap(ClapTrap const & copy);

	int level;
	bool 			dead;

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);

	ClapTrap & operator=(ClapTrap const & over);

	void beRepaired(unsigned int amount);
	int get_hitPoints() const;
 	int get_maxHitPoints() const;
 	int get_energyPoints() const;
 	int get_maxEnergyPoints() const;
 	int get_melAttackDam() const;
 	int get_rangAttackDam() const;
 	int get_armorDamRed() const;
 	std::string get_name() const;

protected:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;

	std::string name;

	int melAttackDam;
	int rangAttackDam;
	int armorDamRed;

	
};


#endif