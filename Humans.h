#pragma once
#include "IRace.h"

class Human : IRace {

public:
	// m_HitBonusMod = 2;
	Human() : IRace(-1, 0, 7) {

	}
	virtual ~Human() {}


};