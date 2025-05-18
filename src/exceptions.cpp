#include"exceptions.h"

TWrong_move_input::TWrong_move_input(std::string reason): reason{reason}
{

}

TWrong_move_input::TWrong_move_input(std::string reason, std::string arg_numer): reason{reason}, arg_numer{arg_numer}
{

}

