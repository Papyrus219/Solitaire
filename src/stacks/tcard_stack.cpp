#include "tcard_stack.h"

sol::TCard_stack::TCard_stack(std::vector<std::wstring> card_order): Card_order{card_order}
{

}

int sol::TCard_stack::Get_card_possition_in_order(TCard &card)
{
    for(int i=0;i<Card_order.size();i++)
    {
        if(card.Get_symbol()==Card_order[i])
        {
            return i;
        }
    }

    return -1;
}

