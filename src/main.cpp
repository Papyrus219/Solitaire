#include<iostream>
#include"cards/tcard.h"
#include"cards/tdeck.h"
#include"stacks/tcard_stack.h"
#include"environmment/tboard.h"
#include"dealers/tsolitare_dealer.h"
#include"factories/tboard_factory.h"

int main()
{
    sol::TDeck deck{{L"♥",L"♦",L"♠",L"♣"},{L"A",L"1",L"2",L"3",L"4",L"5",L"6",L"7",L"8",L"9",L"10",L"J",L"Q",L"K"}};
    deck.Set_Colors({"red","black"},{{L"♥",L"♦"},{L"♠",L"♣"}});
    deck.Shufle();

    sol::TBoard_factory board_factory;
    sol::TBoard board;

    sol::TSolitare_dealer dealer;

    dealer.Deal(board,board_factory,deck,0);

    auto middle_ptr = board.get_middle_stacks_const_ptr();

    auto (*middle_ptr)[0].Get_visible_cards_const_ptr();

    return 0;
}
