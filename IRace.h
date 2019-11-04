#pragma once
class IRace {
public:
	IRace(int HP_Mod, int AC_Mod, int HitBonusMod): m_HP_Mod(HP_Mod), 
		m_AC_Mod(AC_Mod), m_HitBonusMod(HitBonusMod)
	{}
	virtual int GetHPMod() {
		return m_HP_Mod;
	}

	virtual int GetACMod() {
		return m_AC_Mod;
	}

	virtual int GetHitBonusMod() {
		return m_HitBonusMod;
	}

	~IRace() {

	}

protected:
	int m_HP_Mod;
	int m_AC_Mod;
	int m_HitBonusMod;
};