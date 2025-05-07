#ifndef TRESERVE_STACK_H
#define TRESERVE_STACK_H

#include<queue>
#include"tcard_stack.h"

/**
 * @todo write docs
 */

namespace sol
{
    class TReserve_stack : public TCard_stack
    {
    public:

        virtual bool Is_take_correct(int amount_of_card_taken) override;
        virtual bool Is_add_correct(std::vector<TCard> *moved_cards) override;
        virtual void Take_cards(std::vector<TCard> *moved_cards, int amount_of_card_taken=1) override;
        virtual void Add_cards(std::vector<TCard> *moved_cards) override;
        bool Show_more_cards();

    private:
        std::queue<TCard> Hidden_cards;
        std::stack<TCard> Visible_cards;
        int difficulty; //0-easy, 1-hard
    };
}

#endif // TRESERVE_STACK_H
