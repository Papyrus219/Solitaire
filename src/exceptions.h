#ifndef EXCEPTIONS
#define EXCEPTIONS

#include<string>

struct TWrong_move_input
{
    TWrong_move_input(std::string reason);
    TWrong_move_input(std::string reason, std::string arg_numer);

    std::string reason;
    std::string arg_numer{};
};

#endif
