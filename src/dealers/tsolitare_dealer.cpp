#include "tsolitare_dealer.h"

void sol::TSolitare_dealer::Deal(TBoard& board, TBoard_factory& factory, TDeck& deck, int game_dificulty)
{
    std::vector<std::wstring> end_card_order{L"A",L"1",L"2",L"3",L"4",L"5",L"6",L"7",L"8",L"9",L"10",L"J",L"Q",L"K"};
    std::vector<std::wstring> middle_card_order{L"K",L"Q",L"J",L"10",L"9",L"8",L"7",L"6",L"5",L"4",L"3",L"2",L"1",L"A"};
    std::vector<std::wstring> types{L"♥",L"♦",L"♠",L"♣"};

    for(int i=0;i<4;i++)
    {
        factory.Create_End_stack(board,end_card_order,types[i],{L"A"});
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

