#include <iostream>
#include <ctime>
#include <cstdlib>
#include "AllClasses.h"
#include "AllRaces.h"
#include "IClass.h"
#include "IRace.h"
#include "Party.h"
#include "CharacterFactory.h"
#include "Rogues.h"
#include "Party.cpp"

using namespace std;
/*
int generateNum() {

	srand(time(NULL));
	return (rand() % 15) + 1;
}
*/


int main()
{
	int userChoice;
	int raceChoice;
	CharacterFactory characterFactory;
	Party<IClass*> party1;
	Party<IClass*> party2;
	IRace* race;
	IClass* val;
	Fighter* fighter;
	Rogue* rogue;
	Cleric* cleric;
	Wizard* wizard;
	vector<IClass*>Party1(4);
	vector<IClass*>Party2(4);
	
	//val = characterFactory.CreateCharacter(CharacterFactory::FighterType, race);
	

	//val = characterFactory.CreateCharacter(CharacterFactory::RogueType, race);
	//Rogue* rogue = dynamic_cast<Rogue*>(val);
	//party1.addCharacter(rogue);
	//party1.setPartyMember(rogue);
	//std::vector<IClass*> gang(4);
	//gang = party1.getParty();
	cout << "Welcome to Dungeons and Dragons!" << endl;
	cout << "Menu: " << "\n 1.Start Game \n 2.Exit" << endl;
	cin >> userChoice;



	switch (userChoice) {

	case 1: //Setting the first party
		race = (IRace*) new Human();
		val = characterFactory.CreateCharacter(CharacterFactory::FighterType, race);
		fighter = dynamic_cast<Fighter*>(val);
		party1.setPartyMember(fighter);
		party1.addCharacter(fighter);
		cout << "A Fighter Human has been added to the first party!" << endl;

		race = (IRace*) new Halfling();
		val = characterFactory.CreateCharacter(CharacterFactory::RogueType, race);
		rogue = dynamic_cast<Rogue*>(val);
		party1.setPartyMember(rogue);
		party1.addCharacter(rogue);
		cout << "A Rogue Halfling has been added to the first party!" << endl;

		race = (IRace*) new Elf();
		val = characterFactory.CreateCharacter(CharacterFactory::ClericType, race);
		cleric = dynamic_cast<Cleric*>(val);
		party1.setPartyMember(cleric);
		party1.addCharacter(cleric);
		cout << "A Cleric Elf has been added to the first party!" << endl;

		race = (IRace*) new Dwarf();
		val = characterFactory.CreateCharacter(CharacterFactory::WizardType, race);
		wizard = dynamic_cast<Wizard*>(val);
		party1.setPartyMember(wizard);
		party1.addCharacter(wizard);
		cout << "A Wizard Dwarf has been added to the first party!" << endl;

		//Setting the second party
		race = (IRace*) new Human();
		val = characterFactory.CreateCharacter(CharacterFactory::FighterType, race);
		fighter = dynamic_cast<Fighter*>(val);
		party2.setPartyMember(fighter);
		party2.addCharacter(fighter);
		cout << "A Fighter Human has been added to the second party!" << endl;

		party2.setPartyMember(fighter);
		party2.addCharacter(fighter);
		cout << "A Fighter Human has been added to the second party!" << endl;

		party2.setPartyMember(fighter);
		party2.addCharacter(fighter);
		cout << "A Fighter Human has been added to the second party!" << endl;

		party2.setPartyMember(fighter);
		party2.addCharacter(fighter);
		cout << "A Fighter Human has been added to the second party!" << endl;

		Party1 = party1.getParty();
		Party2 = party1.getParty();
		cout << "Party 1's first member has a hit bonus of " << Party1.at(0)->GetHitBonus() << "." << endl;
		cout << "Party 1's first member has " << Party1.at(0)->GetHP() << " HP." << endl;
		cout << "Party 1's first member does " << Party1.at(0)->GetDamage() << " base damage." << endl;
		cout << "Party 1's first member has " << Party1.at(0)->GetAC() << " armor." << endl;
		cout << "Party 2's first member has a hit bonus of " << Party2.at(1)->GetHitBonus() << "." << endl;
		cout << "Party 2's first member has " << Party2.at(1)->GetHP() << " HP." << endl;
		cout << "Party 2's first member does " << Party2.at(1)->GetDamage() << " base damage." << endl;
		cout << "Party 2's first member has " << Party2.at(1)->GetAC() << " armor." << endl;
		Party1.at(0)->Attack(Party2,0,Party1,0);
		break;
	}
		/*
		switch (gameChoice) {

		case 1: //310 - 620 - 9822
			cout << "What race is the character? \n 1. Human \n 2. Halfling \n 3. Elf \n 4. Dwarf" << endl;
			cin >> raceChoice;

				
			break;

		case 2:

			break;

		}

		break;

	case 2:
		return 0;
		break;
	}
	*/
	return 0;
}