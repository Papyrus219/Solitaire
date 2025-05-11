#ifndef TPLAYER_H
#define TPLAYER_H

/**
 * @todo write docs
 */

namespace sol
{
    class TPlayer
    {
    public:
        int Used_moves;

        void Undo_move();
        bool Move_cards();
    };
}

#endif // TPLAYER_H
