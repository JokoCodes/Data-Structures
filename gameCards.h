#ifndef GAMECARDS_H
#define GAMECARDS_H

enum suit_t {
	HEARTS,
	SPADES,
	DIAMONDS,
	CLUBS
};


class Card
{
public:
	Card() { //contructor initializing the class
		cardVal = 0;
	}

	Card(int rank) {
		cardVal = rank;
	}

	virtual ~Card() {

	}

	/*void Values(int value) {
		int l = 0;
		for (int i = 0; i < 13; i++) { //determines cardVal

		}
	}
	*/
	int GetRank() {
		return cardVal;
	}

protected:

private:

	int cardVal;
};

class Deck 
{
public:
	Card GetCard(int index) {

	}
private:
	void init_deck() {
		int pos = 0;
		for (int s = 0; s < 4; s++) {
			for (int rank = 1; rank <= 13; rank++)
			{
				m_deck.push_back(Card((suit_t)s, rank));
				pos++;
			}
		}
	}
	std::vector<Card> deck;
};
#endif //GAMECARDS_H
