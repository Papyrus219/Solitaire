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
        const std::vector<TReserve_stack>* get_reserve_stacks_const_ptr() const {return &Reserve_stacks;};
        const std::vector<TMiddle_stack>* get_middle_stacks_const_ptr() const {return &Middle_stacks;};
        const std::vector<TEnd_stack>* get_end_stacks_const_ptr() const {return &End_stacks;};

    private:
        std::vector<TReserve_stack> Reserve_stacks{};
        std::vector<TMiddle_stack> Middle_stacks{};
        std::vector<TEnd_stack> End_stacks{};

        friend class TBoard_factory;
    };
}

#endif // TBOARD_H
