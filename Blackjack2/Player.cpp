#include "Player.h"
#include <iostream>

void Player::DrawCard(Deck deck, Score score)
{
    //gives random number
    deck.SetRandomType();
    deck.SetRandomValue();
    score.SetScore();

    std::cout << "\nYou got "; 
    std::cout << "Your current score is " << score.AddScore() << std::endl;
    
    //checking if the card has been taken
    deck.CardTaken();
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
    score.AddScore();  //Gergo added score here
}