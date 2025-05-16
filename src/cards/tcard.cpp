#include "tcard.h"
#include "../system/tcolorer.h"
#include<iomanip>

sol::TCard::TCard(std::string temp_symbol, std::string temp_type): symbol{temp_symbol}, type(temp_type)
{

}

sol::TCard::TCard(const TCard& other)
{
    this->symbol = other.symbol;
    this->type = other.type;
    this->color = other.color;
}

void sol::TCard::Set_Colors(std::vector<std::string> colors, std::vector<std::vector<std::string>> types)
{
    for(int i=0;i<types.size();i++)
    {
        for(int j=0;j<types[i].size();j++)
        {
            if(type == types[i][j])
            {
                this->color = colors[i];
            }
        }
    }
}

std::ostream &operator<<(std::ostream &cout, const sol::TCard &card)
{
    sol::TColorer colors;

    std::string text{};
    if(card.Get_symbol() == "10")
    {
        text = card.Get_symbol() + card.Get_type() + " ";
    }
    else
    {
        text = card.Get_symbol() + card.Get_type() + "  ";
    }

    if(card.Get_color() == "black")
    {
        cout << colors.black;
    }
    else if(card.Get_color() == "red")
    {
        cout << colors.red;
    }

    cout << std::left << text << colors.normal;

    return cout;
}
