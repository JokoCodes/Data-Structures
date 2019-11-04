#pragma once

#include "Iship.h"
#include "IRace.h"

class Wizards : public Iship
{
public:

	Wizards(IRace* race) : Iship(race)
	{
        m_hitPointMod = 10;
        m_ArmorClassMod = 10;
        m_HitBonusMod = 2;
        HP = 100;
        AC = 20;
	}

    ~Wizards() {}

	virtual int GetHullPoints() override
	{
		int retVal = m_hull + m_race->GetHullPointMods();
		return retVal;
	}

private :
    Wizzards();

};

