#ifndef TMENU_H
#define TMENU_H

#include<string>

namespace sol
{
    /**
     *  Class managing main menu wich apper after booting game.
     */
    class TMenu
    {
    public:
        void Choose();
    private:
        void New_game();
        void Continue();
        void Info();
        void Ranking();
        void Exit();

        bool program_loop{true};
        std::string welcome_message{"SOLITAIRE\nBy:Papyrus219\n\n"};
        std::string options{"1.New game\n2.Continue\n3.Info\n4.Ranking\n5.Exit\n\nChoose option:"};
    };
}

#endif // TMENU_H
