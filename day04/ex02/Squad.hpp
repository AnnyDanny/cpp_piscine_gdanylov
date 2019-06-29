#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {
	public:
		virtual ~Squad() {

		}
		Squad();
		Squad(ISquad const &copy);
		ISquad & operator=(Squad const &over);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);

	private:
		int _unitCount;
		int _size;
		ISpaceMarine** _SpaceMarine;

};

#endif