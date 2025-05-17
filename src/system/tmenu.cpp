#include"tmenu.h"
#include"tcolorer.h"
#include"../cards/tcard.h"
#include"../cards/tdeck.h"
#include"../stacks/tcard_stack.h"
#include"../environmment/tboard.h"
#include"../dealers/tsolitare_dealer.h"
#include"../factories/tboard_factory.h"
#include"tdrawer.h"
#include<iostream>
#include<print>



void sol::TMenu::Choose()
{
    sol::TColorer colors;

    while(program_loop)
    {
        system("clear");
        std::print("{}{}{}{}",colors.violet,welcome_message,colors.yelow,options);

        char option;
        std::cin >> option;

        switch(option)
        {
            case '1':
                New_game();
                break;
            case '2':
                Continue();
                break;
            case '3':
                Info();
                break;
            case '4':
                Ranking();
                break;
            case '5':
                Exit();
                break;
        }
    }
}

void sol::TMenu::New_game()
{
    system("clear");

    sol::TDeck deck{{"♥","♦","♠","♣"},{"A","2","3","4","5","6","7","8","9","10","J","Q","K"}};
    deck.Set_Colors({"red","black"},{{"♥","♦"},{"♠","♣"}});
    deck.Shufle();

    sol::TBoard_factory board_factory;
    sol::TBoard board;

    sol::TSolitare_dealer dealer;
    dealer.Deal(board,board_factory,deck,0);

    sol::TDrawer drawer;
    drawer.Draw_solitare_board(board);

    char a;
    std::cin >> a;
}

void sol::TMenu::Continue()
{

}

void sol::TMenu::Info()
{

}

void sol::TMenu::Ranking()
{

}

void sol::TMenu::Exit()
{
    program_loop = false;
}
