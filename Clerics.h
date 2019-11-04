#pragma once

#include "Iship.h"
#include "IRace.h"

class Clerics : public Iship
{
public:

	Clerics(IRace* race) : Iship(race)
	{
        m_hitPointMod = 10;
        m_ArmorClassMod = 10;
        m_HitBonusMod = 2;
        HP = 150;
        AC = 20;
	}

    ~Clerics() {}

	virtual int GetHullPoints() override
	{
		int retVal = m_hull + m_race->GetHullPointMods();
		return retVal;
	}

private :
    Clerics();

};

