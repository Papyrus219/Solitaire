#ifndef TCARD_H
#define TCARD_H

#include<iostream>
#include<string>
#include<vector>

namespace sol
{

    class TCard
    {
    public:
        TCard(std::wstring temp_symbol, std::wstring temp_type);
        TCard(const TCard& other);

        void Set_Colors(std::vector<std::string> colors, std::vector<std::vector<std::wstring>> symbols);

        std::wstring Get_symbol(){return symbol;};
        std::wstring Get_type(){return type;};
        std::string Get_color(){return color;};

    protected:
        std::wstring symbol;
        std::wstring type;
        std::string color{""};

        friend std::wostream &operator<<(std::wostream &wcout, TCard &card);
    };

}

#endif // TCARD_H
