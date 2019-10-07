#ifndef GAMECARDS_H
#define GAMECARDS_H


class gameCards
{
    public:
        gameCards(){ //contructor initializing the class
        cardVal= 0;
        }
        virtual ~gameCards();

    const char* getSuit(){
        cardSuit suit;
        switch(suit){
            case ACE: return "Ace";
            case SPADE: return "Spade";
            case DIAMOND: return "Diamond";
            case HEARTS: return "Hearts";
        }
        return "Error";
    }
    void Card(string s, int value);

    protected:

    private:
    enum cardSuit{
        ACE,
        SPADE,
        DIAMOND,
        HEARTS,
    };
    int cardVal;
};

void Card(string s, int value){

    int l = 0;
    for(int i=0; i<13; i++){ //determines cardVal

        for(int j= 0; j <4; j++){ //determines Card Suite

        }

    }


}

#endif // GAMECARDS_H
