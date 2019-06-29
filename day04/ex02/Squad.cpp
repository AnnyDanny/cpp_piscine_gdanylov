#include "ISquad.hpp"
#include "Squad.hpp"

Squad::Squad() : _unitCount(0), _size(10),  _SpaceMarine(new ISpaceMarine*[10]) {

}

Squad::Squad(ISquad const &copy) {
	_unitCount = copy._unitCount;
	_size = copy._size;
	_SpaceMarine = new ISpaceMarine*[_size];
	for (int i = 0; i < _unitCount; i++) {
		_SpaceMarine[i] = copy._SpaceMarine[i];
	}
}

Squad::~Squad() {
	for (int i = 0; i < _unitCount; i++) {
		delete _SpaceMarine[i];
	}
	delete[] _SpaceMarine;
}

Squad & Squad::operator=(Squad const &over) {
	if (this != &over) {
		for (int i = 0; i < _unitCount; i++) {
			delete _SpaceMarine[i];
		}
		delete[] _SpaceMarine;
		_unitCount = copy._unitCount;
		_size = copy._size;
		_SpaceMarine = new ISpaceMarine*[_size];
		for (int i = 0; i < _unitCount; i++) {
			_SpaceMarine[i] = copy._SpaceMarine[i];
		}
	}
	return *this;
}

int Squad::getCount() const {
	return _unitCount;
}

ISpaceMarine* Squad::getUnit(int index) const {
	if (index >= 0 && index < _unitCount) {
		return _SpaceMarine[index];
	}
	return NULL;
}

int Squad::push(ISpaceMarine* p) {
	if (_unitCount >= _size) {
		_size += 10;
		ISpaceMarine** newARR = new ISpaceMarine*[_size];
		for (int i = 0; i < _unitCount; i++) {
			newARR[i] = _SpaceMarine[i];
		}
		delete[] _SpaceMarine;
		_SpaceMarine = newARR;
	}
	_SpaceMarine[_unitCount] = p;
	_unitCount++;
	return _unitCount;
}

