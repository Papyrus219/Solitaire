#ifndef TDEALER_H
#define TDEALER_H

#include"../cards/tdeck.h"
#include"../environmment/tboard.h"
#include"../factories/tboard_factory.h"

namespace sol
{

    /**
     * Abstract class to make dealers who deal cards on start of games.
     */

    class TDealer
    {
    public:
        void virtual Deal(TBoard &board, TBoard_factory &factory, TDeck &deck, int game_dificulty=0) = 0;
    };

}

#endif // TDEALER_H
