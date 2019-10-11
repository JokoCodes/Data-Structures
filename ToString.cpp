// ToString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include "gameCards.h"




//class Card {
	

//};

class Person
{
public:
	Person(std::string name) :m_name(name)
	{

	}

	std::string GetName() const
	{
		return m_name;
	}

	virtual ~Person()
	{
		std::cout << "Deleting " << m_name << std::endl;
	}

	void AddCardToHand(const Card * c)
	{
		m_listOfCards.push_back(c);
	}

private:
	std::string m_name;
	std::list<const Card *> m_stackOfCards;
	std::list<const Card *> m_listOfCards;

};

class Game
{
public:
	Game()
	{
		m_player1 = new Person("Player1");
		m_player2 = new Person("Player2");

		// For create the Cards in the masterCardList, and then seed the 
		// community deck
		// See - http://www.cplusplus.com/reference/cstdlib/rand/ for ideas of how to pick random
		// numbers

	}

	~Game()
	{
		delete m_player1;
		delete m_player2;
		
		//do a for each on masterCard list and delete the Cards

	}

	void Play() {

	}

private:
	Person * m_player1;
	Person * m_player2;

	std::list<Card *> m_masterCardList;  // Note not a const, as this is where we will
	// delete the memory


};

class PlayerHand {
public:

	bool CheckHand() {
		if (cardsInHand.size() <= 5) {
			return true;
		}
		else {
			return false;
		}
	}

	PlayerHand() {
		cardsInHand = {};
	}

std::vector<int> getCards() {
		return cardsInHand;
	}

	void SortHand() {

	}

	bool DrawCard() {

		if (cardsInHand.size() == 6) {
			return false;
		}
		else {
		cardsInHand.push_back(cardFromDeck); //this needs to push back the card that was drawn.
		}	
	}

	void DiscardCard(int card) {
		for (int i = 0; i < cardsInHand.size() - 1; i++) {
			if (cardsInHand.at(i) == card) {
				int temp = cardsInHand.at(i); //this value would need to be added to the community pile
				cardsInHand.erase.at(i); //removes the card from the player's hand
			}
		}
	}
private: 
	std::vector <int> cardsInHand;
	int cardFromDeck;
};

class Draw {
public:

	std::stack <Card> DrawPile() {

	}

	void DrawCard(std::vector <int> cardsInHand) {
		cardsInHand.push_back(drawPile.top()); //adds the top card of the draw pile to the player's hand
		drawPile.pop(); //removes the top card from the draw pile
		
	}
	
private:
	std::stack <int> drawPile;
};

int main()
{
	std::list<const Person *> stackOfPeople;
	Person * p1 = new Person("Huey 1");
	Person * p2 = new Person("Louie 2");
	Person * p3 = new Person("Dewey 3");

	stackOfPeople.push_front(p1);
	stackOfPeople.push_front(p2);
	stackOfPeople.push_front(p3);

	for (const Person* p : stackOfPeople)
	{
		std::string name = p->GetName();
		std::cout << name << " " << std::endl;
	}
	std::cout <<  std::endl;


	std::list<const Person *> queueOfPeople;

	queueOfPeople.push_back(p1);
	queueOfPeople.push_back(p2);
	queueOfPeople.push_back(p3);

	for (const Person* p : queueOfPeople)
	{
		std::string name = p->GetName();
		std::cout << name << " " << std::endl;
	}

	std::cout << "calling pop methods" << std::endl;
	stackOfPeople.pop_front();
	queueOfPeople.pop_front();

	for (const Person* p : stackOfPeople)
	{
		std::string name = p->GetName();
		std::cout << name << " " << std::endl;
	}
	std::cout << std::endl;

	for (const Person* p : queueOfPeople)
	{
		std::string name = p->GetName();
		std::cout << name << " " << std::endl;
	}

	std::cout << "calling clear methods" << std::endl;
	stackOfPeople.clear();
	queueOfPeople.clear();
	std::cout << "calling delete" << std::endl;
	delete p1;
	delete p2;
	delete p3;

    return 0;
}
