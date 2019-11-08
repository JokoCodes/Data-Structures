#pragma once


#include "IClass.h"
#include "IRace.h"

class Fighter :
	public IClass
{
public:

	Fighter(IRace* race) : IClass(race)
	{
		//	m_hitPointMod = 10;
		//	m_ArmorClassMod = 10;
		//  m_HitBonusMod = 2;
		m_HP = 200;
		m_AC = 20;
		m_Damage = 20;
	}

	~Fighter() {}

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
	Fighter();

};