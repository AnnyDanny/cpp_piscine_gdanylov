#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const &copy);
		Squad & operator=(Squad const &over);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);

	private:
		int _unitCount;
		int _size;
		ISpaceMarine** _SpaceMarine;

};

#endif