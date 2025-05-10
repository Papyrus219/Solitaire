#ifndef SOL_TSOLITARE_DEALER_H
#define SOL_TSOLITARE_DEALER_H

#include"tdealer.h"

namespace sol {

/**
 * Class wich deal cards in solitare.
 */
class TSolitare_dealer :  TDealer
{
    virtual void Deal(TBoard & board, TBoard_factory & factory, TDeck &deck, int game_dificulty) override;
};

}

#endif // SOL_TSOLITARE_DEALER_H
