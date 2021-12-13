#pragma once
#include "Cards.h"
#include <string>
#include "ErrorCatching.h"

class Play
{
public:

	Play();
    void DrawCard();
    void CountScore();

    void PrintPicture();

    void PrintCurrentCardType();
    Cards::Value GetCurrentCardValue();
    void PrintCurrentCardValue();

private:

    std::string symbol;
    ErrorCatching m_error;

    int m_randomType;
    int m_randomValue;

    const int m_typeNumber = 4;
    const int m_valueNumber = 13;

    int m_newCard;

    Cards   twoClubs, threeClubs, fourClubs, fiveClubs, sixClubs, sevenClubs,
            eightClubs, nineClubs, tenClubs, jackClubs, queenClubs, kingClubs, aceClubs;

    Cards   twoHearts, threeHearts, fourHearts, fiveHearts, sixHearts, sevenHearts,
            eightHearts, nineHearts, tenHearts, jackHearts, queenHearts, kingHearts, aceHearts;

    Cards   twoSpades, threeSpades, fourSpades, fiveSpades, sixSpades, sevenSpades,
            eightSpades, nineSpades, tenSpades, jackSpades, queenSpades, kingSpades, aceSpades;

    Cards   twoDiamonds, threeDiamonds, fourDiamonds, fiveDiamonds, sixDiamonds, sevenDiamonds,
            eightDiamonds, nineDiamonds, tenDiamonds, jackDiamonds, queenDiamonds, kingDiamonds, aceDiamonds;

    //============================================================

    Cards deck[4][13] = { { twoClubs, threeClubs, fourClubs, fiveClubs, sixClubs,
                            sevenClubs, eightClubs, nineClubs, tenClubs, jackClubs,
                            queenClubs, kingClubs, aceClubs },

                        { twoHearts, threeHearts, fourHearts, fiveHearts, sixHearts,
                          sevenHearts, eightHearts, nineHearts, tenHearts, jackHearts,
                          queenHearts, kingHearts, aceHearts },

                        { twoSpades, threeSpades, fourSpades, fiveSpades, sixSpades,
                         sevenSpades, eightSpades, nineSpades, tenSpades, jackSpades,
                         queenSpades, kingSpades, aceSpades },

                        { twoDiamonds, threeDiamonds, fourDiamonds, fiveDiamonds, sixDiamonds,
                        sevenDiamonds, eightDiamonds, nineDiamonds, tenDiamonds, jackDiamonds,
                        queenDiamonds, kingDiamonds, aceDiamonds }};
};

