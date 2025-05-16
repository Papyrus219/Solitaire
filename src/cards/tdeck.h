#ifndef TDECK_H
#define TDECK_H

#include<vector>
#include<stack>
#include"tcard.h"

namespace sol
{

    class TDeck
    {
    public:
        TDeck(std::vector<std::string> types, std::vector<std::string> symbols);

        void Shufle();
        void Set_Colors(std::vector<std::string> colors, std::vector<std::vector<std::string>> types);

        std::stack<TCard> Cards;
        std::vector<std::string> Card_types;
        std::vector<std::string> Card_symbols;

    };

}

#endif // TDECK_H
