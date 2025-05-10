#include "tboard_factory.h"

void sol::TBoard_factory::Create_reserve_stack(TBoard& board, int dificulty, std::queue<TCard> cards)
{
    board.Reserve_stacks.emplace_back(dificulty,cards);
}


void sol::TBoard_factory::Create_middle_stack(TBoard& board, std::vector<std::wstring> card_order, std::vector<TCard> visible_cards, std::stack<TCard> hidden_cards)
{
    board.Middle_stacks.emplace_back(card_order,visible_cards,hidden_cards);
}

void sol::TBoard_factory::Create_End_stack(TBoard& board, std::vector<std::wstring> card_order, std::wstring type, std::vector<std::wstring> symbols)
{
    board.End_stacks.emplace_back(card_order,type,symbols);
}
