#pragma once


#include "IClass.h"
#include "IRace.h"

class Wizard :
	public IClass
{
public:

	Wizard(IRace* race) : IClass(race)
	{

		m_HP = 150;
		m_AC = 10;
		m_Damage = 20;
	}

	~Wizard() {}

	virtual int GetHP() override
	{
		int retVal = m_HP + m_race->GetHPMod();
		return retVal;
	}

	virtual int GetAC() override
	{
		int retVal = m_AC + m_race->GetACMod();
		return retVal;
	}

	virtual int GetHitBonus() override
	{
		int retVal = m_hitBonus + m_race->GetHitBonusMod();
		return retVal;
	}

	virtual int GetDamage() override
	{
		int retVal = m_Damage;
		return retVal;
	}

private:
	Wizard();

};