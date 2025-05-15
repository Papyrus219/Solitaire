#include"tdrawer.h"
#include<iomanip>

using namespace sol;

void sol::TDrawer::Draw_solitare_board(TBoard& board)
{
    auto middle_stacks_ptr = board.get_middle_stacks_const_ptr();

    bool loop{};
    int depth{};

    std::wcout << L"   ";
    for(int i=0;i<middle_stacks_ptr->size();i++)
    {
        std::wcout << L" " << static_cast<char>('A'+i) << L"  ";
    }
    std::wcout << L'\n';

    do
    {
        std::wcout << depth << L". ";
        loop = false;

        for(int i=0;i<middle_stacks_ptr->size();i++)
        {
            auto hidden_stack_ptr = (*middle_stacks_ptr)[i].Get_hidden_cards_const_ptr();
            auto visible_stack_ptr  = (*middle_stacks_ptr)[i].Get_visible_cards_const_ptr();

            if(depth < hidden_stack_ptr->size())
            {
                std::wcout << std::left << std::setw(4) << L"### ";
                loop = true;
            }
            else if(depth < hidden_stack_ptr->size() + visible_stack_ptr->size())
            {
                std::wcout << std::left << std::setw(4) << (*visible_stack_ptr)[depth-hidden_stack_ptr->size()];
                loop = true;
            }
            else
            {
                std::wcout << L"    ";
            }
        }

        std::wcout << L"\n";
        depth++;
    }while(loop);
}
