#include "Player.h"
#include <iostream>

Player::Player()
{
    answer = 2;
}

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "\nYou got "; 
    
    //prints relevant stuff
    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    m_score.SetCardValue(deck.GetValue());
   
    m_score.CountScore();
    m_score.PrintScore();
}

void Player::MakeChoice(Deck deck)
{
    std::cout << "Player, do you wish to continue and receive another card? [0/1]" << std::endl;
    std::cin >> answer;


    if (answer == 0)
    {
        std::cout << "You said NO" << std::endl;
    }
    else if (answer == 1)
    {
        std::cout << "You said YES" << std::endl;
        std::cout << "Goodluck, Player" << std::endl;
        
        //gives random number
        deck.SetRandomSuit();
        deck.SetRandomRank();

        std::cout << "\nYou got ";

        //prints relevant stuff
        deck.PrintCurrentCardRank();
        deck.PrintCurrentCardSuit();
        deck.PrintPicture();

        m_score.SetCardValue(deck.GetValue());
        m_score.CountScore();

        m_score.PrintScore();
    }
    else
    {
        m_error.ValidInput(answer);
    }
}
