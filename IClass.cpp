#include "IClass.h"
#include "Party.h"
#include <vector>

void IClass::Attack(vector<IClass*> defendingParty, int choice1, vector<IClass*> attackingParty, int choice2)
{
	int damage = attackingParty.at(choice2)->GetDamage();
	damage = damage + attackingParty.at(choice2)->GetHitBonus();
	if (defendingParty.at(choice1)->GetAC() < damage) {
		defendingParty.at(choice1)->m_HP = defendingParty.at(choice1)->GetHP() - (damage - defendingParty.at(choice1)->GetAC());
		cout << damage - defendingParty.at(choice1)->GetAC() << " damage was done!" << endl;
	}
	else {
		cout << "The defender has more armor than the attacker's damage!" << endl;
		defendingParty.at(choice1)->m_HP--;
	}
}
