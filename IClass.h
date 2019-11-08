#pragma once

#include "IRace.h"
#include <iostream>
#include <vector>

using namespace std;
class IClass {

public:

	IClass(IRace* race) : m_HP(0), m_AC(0), m_hitBonus(0), m_race(race)
	{

	}

	virtual int GetHP() = 0;
	virtual int GetAC() = 0;
	virtual int GetHitBonus() = 0;
	virtual int GetDamage() = 0;
	virtual void Attack(vector<IClass*> defendingParty, int choice1, vector<IClass*> attackingParty, int choice2);
	virtual ~IClass() {}

protected:
	int m_HP;
	int m_AC;
	int m_hitBonus;
	int m_Damage;
	IRace* m_race;

};