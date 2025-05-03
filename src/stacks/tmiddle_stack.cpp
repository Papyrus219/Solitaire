#include "tmiddle_stack.h"

sol::TMiddle_stack::TMiddle_stack(std::vector<std::wstring> card_order, std::vector<TCard> visible_cards, std::stack<TCard> hidden_cards): TCard_stack(card_order), Visible_cards{visible_cards}, Hidden_cards{hidden_cards}
{

}

bool sol::TMiddle_stack::Is_take_correct(int amount_of_card_taken)
{
    if(amount_of_card_taken > Visible_cards.size())
        return false;

    return true;
}

bool sol::TMiddle_stack::Is_add_correct(std::vector< sol::TCard > *moved_cards)
{
    if(Visible_cards.empty())
    {
        if((*moved_cards)[moved_cards->size()-1].Get_type() == L"K")
            return true;

        return false;
    }

    int first_moved_card_order_id = Get_card_possition_in_order((*moved_cards)[moved_cards->size()-1]);
    int top_stack_card_order_id = Get_card_possition_in_order(Visible_cards[Visible_cards.size()-1]);

    if(first_moved_card_order_id != top_stack_card_order_id+1)
        return false;
    if((*moved_cards)[moved_cards->size()-1].Get_color() == Visible_cards[Visible_cards.size()-1].Get_color())
        return false;

    return true;
}

void sol::TMiddle_stack::Take_cards(std::vector< sol::TCard > *moved_cards, int amount_of_card_taken)
{
    for(int i=0;i<amount_of_card_taken;i++)
    {
        moved_cards->push_back(Visible_cards[0]);
        Visible_cards.erase(Visible_cards.begin());
    }

    Check_and_show_hidden_card();
}

void sol::TMiddle_stack::Add_cards(std::vector< sol::TCard > *moved_cards)
{
    while(!moved_cards->empty())
    {
        Visible_cards.push_back((*moved_cards)[0]);
        moved_cards->erase(moved_cards->begin());
    }
}

void sol::TMiddle_stack::Check_and_show_hidden_card()
{
    if(Visible_cards.empty() && !Hidden_cards.empty())
    {
        Visible_cards.push_back(Hidden_cards.top());
        Hidden_cards.pop();
    }
}
