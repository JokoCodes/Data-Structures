#pragma once

#include "IRace.h"
class IClass {

public:

	IClass(IRace* race) : m_HP(0), m_AC(0), m_hitBonus(0), m_race(race)
	{

	}

	virtual int GetHP() = 0;
	virtual int GetAC() = 0;
	virtual int GetHitBonus() = 0;
	virtual ~IClass() {}

protected:
	int m_HP;
	int m_AC;
	int m_hitBonus;
	int m_Damage;
	IRace* m_race;

};