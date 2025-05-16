#include"tdrawer.h"
#include<iostream>
#include<iomanip>
#include<print>
#include"tcolorer.h"

using namespace sol;

void sol::TDrawer::Draw_solitare_board(TBoard& board)
{
    Draw_reserve_stacks(board.get_reserve_stacks_const_ptr());
    Draw_end_stacks(board.get_end_stacks_const_ptr());
    Draw_middle_stacks(board.get_middle_stacks_const_ptr());
}

void sol::TDrawer::Draw_reserve_stacks(const std::vector<TReserve_stack>* reserve_stacks_ptr) const
{

}

void sol::TDrawer::Draw_end_stacks(const std::vector<TEnd_stack>* end_stacks_ptr) const
{

}


void sol::TDrawer::Draw_middle_stacks(const std::vector<TMiddle_stack>* middle_stacks_ptr) const
{
    TColorer colors;
    bool loop{};
    int depth{};

    std::print("   ");
    for(int i=0;i<middle_stacks_ptr->size();i++)
    {
        std::print("{} {:<}  {}" ,colors.green ,static_cast<char>('A'+i) ,colors.normal);
    }
    std::print("\n");

    do
    {
        std::print("{}{:<}. {}" ,colors.blue ,depth, colors.blue);
        loop = false;

        for(int i=0;i<middle_stacks_ptr->size();i++)
        {
            auto hidden_stack_ptr = (*middle_stacks_ptr)[i].Get_hidden_cards_const_ptr();
            auto visible_stack_ptr  = (*middle_stacks_ptr)[i].Get_visible_cards_const_ptr();

            if(depth < hidden_stack_ptr->size())
            {
                std::cout << std::left << "### ";
                loop = true;
            }
            else if(depth < hidden_stack_ptr->size() + visible_stack_ptr->size())
            {
                std::cout << (*visible_stack_ptr)[depth-hidden_stack_ptr->size()];
            }
            else
            {
                std::print("    ");
            }
        }

        std::print("\n");
        depth++;
    }while(loop);
}
