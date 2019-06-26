#include "Human.hpp"

int		main()
{
	Human bob;

	std::string victims[] = {"coutry", "France", "Ukraine", "soldiers", "children"};
	std::string attackers[] = {"intimidatingShout", "meleeAttack", "rangedAttack", "something do not work", "", "2017", "intimidatingShout"};

	size_t victims_amount = 0;



size_t attackers_amount = 0;


 	victims_amount = sizeof(victims)/sizeof(victims[0]);
	attackers_amount = sizeof(attackers)/sizeof(attackers[0]);

    size_t i = 0;
    size_t j = 0;
    while (j < attackers_amount)
    {
    	i = 0;
	    while (i < victims_amount)
	    {
	    	bob.action(attackers[j], victims[i]);
	    	i++;
	    }
	    j++;
	}

	return 0;
}