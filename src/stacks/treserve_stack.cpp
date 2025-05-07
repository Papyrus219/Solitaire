#include "treserve_stack.h"

bool sol::TReserve_stack::Is_take_correct(int amount_of_card_taken)
{
    if(Visible_cards.size() > 0)
        return true;
    else
        return true;
}

bool sol::TReserve_stack::Is_add_correct(std::vector<TCard> *moved_cards)
{
    return false;
}

void sol::TReserve_stack::Take_cards(std::vector< sol::TCard > *moved_cards, int amount_of_card_taken)
{
    moved_cards->push_back(Visible_cards.top());
    Visible_cards.pop();
}

void sol::TReserve_stack::Add_cards(std::vector< sol::TCard > *moved_cards)
{
 //Function is not need there.
}

bool sol::TReserve_stack::Show_more_cards()
{
    while(!Visible_cards.empty())
    {
        Hidden_cards.push(Visible_cards.top());
        Visible_cards.pop();
    }

    switch(difficulty)
    {
        case 0:
            if(Hidden_cards.size() > 0)
            {
                Visible_cards.push(Hidden_cards.front());
                Hidden_cards.pop();
            }
            else
                return false;

            return true;

        case 1:
            for(int i=0;(i<3 && i<Hidden_cards.size());i++)
            {
                Visible_cards.push(Hidden_cards.front());
                Hidden_cards.pop();
            }
    }

    return false;
}
