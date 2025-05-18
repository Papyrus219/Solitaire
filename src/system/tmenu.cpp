#include"tmenu.h"
#include"tcolorer.h"
#include"tplayer.h"
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
    TPlayer player;

    player.Game();
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
