#pragma once

#include "Iship.h"
#include "IRace.h"

class Rogues : public Iship
{
public:

	Rogues(IRace* race) : Iship(race)
	{
        m_hitPointMod = 10;
        m_ArmorClassMod = 10;
        m_HitBonusMod = 2;
        HP = 100;
        AC = 15;
	}

    ~Rogues() {}

	virtual int GetHullPoints() override
	{
		int retVal = m_hull + m_race->GetHullPointMods();
		return retVal;
	}

private :
    Rogues();

};

