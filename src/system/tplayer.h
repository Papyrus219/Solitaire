#ifndef TPLAYER_H
#define TPLAYER_H

#include<string>
#include"../environmment/tboard.h"

/**
 * @todo write docs
 */

namespace sol
{
    class TPlayer
    {
    public:
        int Used_moves{};
        void Game();

    private:
        bool Move_cards(std::string arg1, std::string arg2);
        void Undo_move();
        std::string Chouse_message{"Select stack you want to move card from and to wich stack: "};

        void Test_arguments(std::string arg1, std::string arg2);
        void Test_first_half_of_argument(char arg_half, std::string wich_arg);
        void Test_second_half_of_argument(char arg_half, std::string wich_arg);

        bool game_loop{true};
    };
}

#endif // TPLAYER_H
