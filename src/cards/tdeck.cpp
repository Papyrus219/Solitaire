#include<algorithm>
#include <chrono>
#include<random>
#include"tdeck.h"

sol::TDeck::TDeck(std::vector<std::wstring> types, std::vector<std::wstring> symbols): Card_types{types},Card_symbols{symbols}
{
    for(auto type : types)
    {
        for(auto symbol : symbols)
        {
            this->Cards.push(TCard{symbol,type});
        }
    }
}


void sol::TDeck::Shufle()
{
    std::vector<TCard> To_shufle{};

    while(!Cards.empty())
    {
        To_shufle.push_back(Cards.top());
        Cards.pop();
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(To_shufle.begin(),To_shufle.end(),std::default_random_engine(seed));

    for(auto card : To_shufle)
        Cards.push(card);
}
