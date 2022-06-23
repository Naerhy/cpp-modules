#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string const& type = "bare hands");
		std::string const& getType(void) const;
		void setType(std::string const& type);
};

#endif
