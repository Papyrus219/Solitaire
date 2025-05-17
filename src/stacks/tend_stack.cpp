#include "tend_stack.h"

sol::TEnd_stack::TEnd_stack(std::vector<std::string> card_order, std::string type, std::vector<std::string> symbols): TCard_stack{card_order}, type{type}
{
    for(auto symbol : symbols)
    {
        Cards_in_stack.push(TCard{symbol,type});
        Cards_in_stack.top().Set_Colors({"red","black"},{{"♥","♦"},{"♠","♣"}});
    }
}


bool sol::TEnd_stack::Is_add_correct(std::vector< sol::TCard > *moved_cards)
{
    if((*moved_cards)[0].Get_type() == this->type)
        if((*moved_cards)[0].Get_symbol() == Card_order[((Cards_in_stack.size() < Card_order.size())? Cards_in_stack.size() : 0)])
            return true;

    return false;
}

bool sol::TEnd_stack::Is_take_correct(int amount_of_card_taken)
{
    if(amount_of_card_taken > 1)
        return false;

    return true;
}


void sol::TEnd_stack::Take_cards(std::vector< sol::TCard > *moved_cards, int amount_of_card_taken)
{
    for(int i=0;i<amount_of_card_taken;i++)
    {
        moved_cards->push_back(Cards_in_stack.top());
        Cards_in_stack.pop();
    }
}

void sol::TEnd_stack::Add_cards(std::vector< sol::TCard > *moved_cards)
{
    for(auto card : *moved_cards)
    {
        Cards_in_stack.push(card);
    }
}
