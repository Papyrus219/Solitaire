#ifndef TBOARD_FACTORY_H
#define TBOARD_FACTORY_H

#include"../environmment/tboard.h"

/**
 * Class that make stacks in board
 */
namespace sol
{
    class TBoard_factory
    {
    public:
        void Create_reserve_stack(TBoard &board, int dificulty, std::queue<TCard> cards);
        void Create_middle_stack(TBoard &board, std::vector<std::string> card_order, std::vector<TCard> visible_cards, std::stack<TCard> hidden_cards);
        void Create_End_stack(TBoard &board, std::vector<std::string> card_order, std::string type, std::vector<std::string> symbols);
    };
}

#endif // TBOARD_FACTORY_H
