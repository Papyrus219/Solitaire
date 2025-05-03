
#include<string>

/**
 * @todo write docs
 */

namespace sol
{
    struct TColorer
    {
        std::wstring black{L"\033[30m"};
        std::wstring red{L"\033[31m"};
        std::wstring green{L"\033[32m"};
        std::wstring yelow{L"\034[33m"};
        std::wstring blue{L"\033[34m"};
        std::wstring violet{L"\033[35m"};
        std::wstring turquoise{L"\033[36m"};
        std::wstring white{L"\033[37m"};
    };
}
