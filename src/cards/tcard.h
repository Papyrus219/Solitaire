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
        TCard(std::string temp_symbol, std::string temp_type);
        TCard(const TCard& other);

        void Set_Colors(std::vector<std::string> colors, std::vector<std::vector<std::string>> types);

        std::string Get_symbol() const {return symbol;};
        std::string Get_type() const {return type;};
        std::string Get_color() const {return color;};

    protected:
        std::string symbol;
        std::string type;
        std::string color{""};

        friend std::ostream & operator<<(std::ostream& cout, sol::TCard &card);
    };
}

std::ostream & operator<<(std::ostream& cout, const sol::TCard &card);

#endif // TCARD_H
