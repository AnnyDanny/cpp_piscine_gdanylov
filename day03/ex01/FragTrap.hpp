#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string usname);
 	FragTrap(FragTrap const & copy);

	int level;
	bool dead;

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	FragTrap & operator=(FragTrap const & over);



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