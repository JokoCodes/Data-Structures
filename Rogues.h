#pragma once


#include "IClass.h"
#include "IRace.h"

class Rogue :
	public IClass
{
public:

	Rogue(IRace* race) : IClass(race)
	{
		//	m_hitPointMod = 10;
		//	m_ArmorClassMod = 10;
		//	m_HitBonusMod = 2;
		m_HP = 150;
		m_AC = 10;
		m_Damage = 20;
	}

	~Rogue() {}

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

private:
	Rogue();

};