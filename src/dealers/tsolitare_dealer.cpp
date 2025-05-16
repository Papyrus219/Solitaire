#include "tsolitare_dealer.h"

void sol::TSolitare_dealer::Deal(TBoard& board, TBoard_factory& factory, TDeck& deck, int game_dificulty)
{
    std::vector<std::string> end_card_order{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    std::vector<std::string> middle_card_order{"K","Q","J","10","9","8","7","6","5","4","3","2","A"};
    std::vector<std::string> types{"♥","♦","♠","♣"};

    for(int i=0;i<4;i++)
    {
        factory.Create_End_stack(board,end_card_order,types[i],{"A"});
    }

    for(int i=1;i<=7;i++)
    {
        std::vector<TCard> visible_cards;
        std::stack<TCard> hidden_cards;
        for(int j=0;j<i;j++)
        {
            if(j == 0)
            {
                visible_cards.push_back(deck.Cards.top());
            }
            else
            {
                hidden_cards.push(deck.Cards.top());
            }
            deck.Cards.pop();
        }
        factory.Create_middle_stack(board,middle_card_order,visible_cards,hidden_cards);
    }

    std::queue<TCard> reserve_cards;
    while(!deck.Cards.empty())
    {
        reserve_cards.push(deck.Cards.top());
        deck.Cards.pop();
    }
    factory.Create_reserve_stack(board,game_dificulty,reserve_cards);

}

