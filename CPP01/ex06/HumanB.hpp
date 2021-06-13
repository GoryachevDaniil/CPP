#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	m_name;
	Weapon 		*m_weapon;
public:
	HumanB();
	HumanB(const std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};
#endif
