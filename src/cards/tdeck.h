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
        TDeck(std::vector<std::wstring> types, std::vector<std::wstring> symbols);

        void Shufle();
        std::stack<TCard> Cards;
        std::vector<std::wstring> Card_types;
        std::vector<std::wstring> Card_symbols;

    };

}

#endif // TDECK_H
