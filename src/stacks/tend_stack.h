#ifndef TEND_STACK_H
#define TEND_STACK_H

#include "tcard_stack.h"

namespace sol
{
    /*
     * Class that represent stacks on top of board in solitare.
    */
    class TEnd_stack : public TCard_stack
    {
    public:
        TEnd_stack(std::vector<std::string> card_order, std::string type, std::vector<std::string> symbols);

        virtual bool Is_add_correct(std::vector<TCard> *moved_cards) override;
        virtual bool Is_take_correct(int amount_of_card_taken) override;
        virtual void Take_cards(std::vector<TCard> *moved_cards, int amount_of_card_taken=1) override;
        virtual void Add_cards(std::vector<TCard> *moved_cards) override;

        std::string Get_type() const {return type;};
        const std::stack<TCard>* Get_stack_constptr() const {return &Cards_in_stack;};

    private:
        std::string type;
    };
}

#endif // TEND_STACK_H
