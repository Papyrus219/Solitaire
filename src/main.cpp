#include<iostream>
#include"cards/tcard.h"
#include"cards/tdeck.h"
#include"stacks/tcard_stack.h"
#include"environmment/tboard.h"
#include"dealers/tsolitare_dealer.h"
#include"factories/tboard_factory.h"
#include"system/tdrawer.h"
#include"system/tcolorer.h"
#include<print>

int main()
{
    sol::TColorer colors;

    sol::TDeck deck{{"♥","♦","♠","♣"},{"A","2","3","4","5","6","7","8","9","10","J","Q","K"}};
    deck.Set_Colors({"red","black"},{{"♥","♦"},{"♠","♣"}});
    deck.Shufle();

    sol::TBoard_factory board_factory;
    sol::TBoard board;

    sol::TSolitare_dealer dealer;
    dealer.Deal(board,board_factory,deck,0);

    sol::TDrawer drawer;
    drawer.Draw_solitare_board(board);

    return 0;
}
