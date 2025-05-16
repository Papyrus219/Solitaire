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
        void Draw_reserve_stacks(const std::vector<TReserve_stack>* reserve_stacks_ptr) const;
        void Draw_end_stacks(const std::vector<TEnd_stack>* end_stacks_ptr) const;
        void Draw_middle_stacks(const std::vector<TMiddle_stack>* middle_stacks_ptr) const;
    };

}

#endif // SOL_TDRAWER_H
