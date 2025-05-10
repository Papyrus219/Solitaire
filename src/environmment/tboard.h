#ifndef TBOARD_H
#define TBOARD_H

/**
 * @todo write docs
 */

#include"../stacks/treserve_stack.h"
#include"../stacks/tmiddle_stack.h"
#include"../stacks/tend_stack.h"

namespace sol
{
    class TBoard
    {
    public:
        TBoard();

    private:
        int Used_moves;

        std::vector<TReserve_stack> Reserve_stacks{};
        std::vector<TMiddle_stack> Middle_stacks{};
        std::vector<TEnd_stack> End_stacks{};

        friend class TBoard_factory;
    };
}

#endif // TBOARD_H
