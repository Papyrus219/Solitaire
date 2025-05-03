#ifndef TJUDGE_H
#define TJUDGE_H

#include<vector>

/**
 * @todo write docs
 */

namespace sol
{
    class TJudge
    {
    public:
        void Record_save();
        bool Win_check();

    private:
        std::vector<bool> Complete_stacks;
    };
}

#endif // TJUDGE_H
