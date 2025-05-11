#include "tcard.h"

sol::TCard::TCard(std::wstring temp_symbol, std::wstring temp_type): symbol{temp_symbol}, type(temp_type)
{

}

sol::TCard::TCard(const TCard& other)
{
    this->symbol = other.symbol;
    this->type = other.type;
    this->color = other.color;
}

void sol::TCard::Set_Colors(std::vector<std::string> colors, std::vector<std::vector<std::wstring>> symbols)
{
    for(int i=0;i<symbols.size();i++)
    {
        for(int j=0;j<symbols[i].size();j++)
        {
            if(this->symbol == symbols[i][j])
            {
                this->color = colors[i];
            }
        }
    }
}
