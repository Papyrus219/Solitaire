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
        TReserve_stack(int dificulty, std::queue<TCard> cards);

        virtual bool Is_take_correct(int amount_of_card_taken) override;
        virtual bool Is_add_correct(std::vector<TCard> *moved_cards) override;
        virtual void Take_cards(std::vector<TCard> *moved_cards, int amount_of_card_taken=1) override;
        virtual void Add_cards(std::vector<TCard> *moved_cards) override;
        bool Show_more_cards();

        const std::queue<TCard>* Get_hidden_cards_const_ptr() const {return &Hidden_cards;};
        const std::vector<TCard>* Get_vissible_cards_const_ptr() const {return &Visible_cards;};

    private:
        std::queue<TCard> Hidden_cards;
        std::vector<TCard> Visible_cards{{"10","♣","black"},{"3","♥","red"},{"2","♣","black"}};
        int difficulty; //0-easy, 1-hard
    };
}

#endif // TRESERVE_STACK_H
