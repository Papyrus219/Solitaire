#ifndef SOL_TDRAWER_H
#define SOL_TDRAWER_H

#include "../environmment/tboard.h"

namespace sol
{

/**
 * Class that draw stuff on screen.
 */
    class TDrawer
    {
    public:
        void Draw_solitare_board(TBoard &board);
    };

}

#endif // SOL_TDRAWER_H
