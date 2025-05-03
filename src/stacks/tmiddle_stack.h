#ifndef TMIDDLE_STACK_H
#define TMIDDLE_STACK_H

#include "tcard_stack.h"

/**
 * Class representing 7 main middle stacks in solitaire.
 */

namespace sol
{
    class TMiddle_stack : public TCard_stack
    {
    public:
        TMiddle_stack(std::vector<std::wstring> card_order, std::vector<TCard> visible_cards, std::stack<TCard> hidden_cards);

        virtual bool Is_add_correct(std::vector<TCard> *moved_cards) override;
        virtual bool Is_take_correct(int amount_of_card_taken) override;
        virtual void Take_cards(std::vector<TCard> *moved_cards, int amount_of_card_taken=1) override;
        virtual void Add_cards(std::vector<TCard> *moved_cards) override;

    private:
        void Check_and_show_hidden_card();

        std::vector<TCard> Visible_cards;
        std::stack<TCard> Hidden_cards;
    };
}

#endif // TMIDDLE_STACK_H
