#ifndef TCARD_STACK_H
#define TCARD_STACK_H

#include<stack>
#include<vector>
#include"../cards/tcard.h"

namespace sol
{
    /*
     * Abstract class to storage and manage cards.
     */
    class TCard_stack
    {
    public:
        virtual void Add_cards(std::vector<TCard> *moved_cards) = 0;
        virtual void Take_cards(std::vector<TCard> *moved_cards, int amount_of_card_taken=1) = 0;
        virtual bool Is_add_correct(std::vector<TCard> *moved_cards) = 0;
        virtual bool Is_take_correct(int amount_of_card_taken) = 0;
        int Get_card_possition_in_order(TCard &card);

        virtual ~TCard_stack() = default;

    protected:
        std::stack<TCard> Cards_in_stack;
        std::vector<std::string> Card_order;
        TCard_stack(std::vector<std::string> card_order);
    };
}

#endif // TCARD_STACK_H
