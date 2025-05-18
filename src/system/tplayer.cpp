#include "tplayer.h"

#include"../cards/tcard.h"
#include"../cards/tdeck.h"
#include"../stacks/tcard_stack.h"
#include"../environmment/tboard.h"
#include"../dealers/tsolitare_dealer.h"
#include"../factories/tboard_factory.h"
#include"tdrawer.h"
#include"../exceptions.h"
#include<print>

void sol::TPlayer::Game()
{
    sol::TDeck deck{{"♥","♦","♠","♣"},{"A","2","3","4","5","6","7","8","9","10","J","Q","K"}};
    deck.Set_Colors({"red","black"},{{"♥","♦"},{"♠","♣"}});
    deck.Shufle();

    sol::TBoard_factory board_factory;
    sol::TBoard board;

    sol::TSolitare_dealer dealer;
    dealer.Deal(board,board_factory,deck,0);

    sol::TDrawer drawer;

    while(game_loop)
    {
        system("clear");
        drawer.Draw_solitare_board(board);

        std::print("{}",Chouse_message);
        std::string arg1{}, arg2{};
        std::cin >> arg1 >> arg2;

        try
        {
            Test_arguments(arg1,arg2);
            Move_cards(arg1,arg2);
        }
        catch(TWrong_move_input x)
        {
            std::print("{}{}.\n",x.reason,x.arg_numer);
        }
    }
}


bool sol::TPlayer::Move_cards(std::string arg1, std::string arg2)
{

}

void sol::TPlayer::Test_arguments(std::string arg1, std::string arg2)
{
    if(arg1.size() == 2)
    {
        char arg1_half1{arg1[0]};
        char arg1_half2{arg1[1]};

        Test_first_half_of_argument(arg1_half1, "argument_1");
        Test_second_half_of_argument(arg1_half2, "argument_1");
    }
    else if(arg1.size() == 1)
    {
        char arg1_half1{arg1[0]};

        Test_first_half_of_argument(arg1_half1, "argument_1");
    }
    else
    {
        TWrong_move_input x{"First argument is too long"};
        throw(x);
    }

    if(arg2.size() == 2)
    {
        char arg2_half1{arg1[0]};
        char arg2_half2{arg1[1]};

        Test_first_half_of_argument(arg2_half1, "argument_2");
        Test_second_half_of_argument(arg2_half2, "argument_2");
    }
    else if(arg2.size() == 1)
    {
        char arg2_half1{arg1[0]};

        Test_first_half_of_argument(arg2_half1, "argument_2");
    }
    else
    {
        TWrong_move_input x{"Second argument is too long"};
        throw(x);
    }
}

void sol::TPlayer::Test_first_half_of_argument(char arg_half, std::string wich_arg)
{
    switch(arg_half)
    {
        case 'M':
            break;
        case 'E':
            break;
        case 'R':
            break;
        default:
            TWrong_move_input x{"Wrong stack type at: ",wich_arg};
            throw(x);
            break;
    }
}

void sol::TPlayer::Test_second_half_of_argument(char arg_half, std::string wich_arg)
{

}

