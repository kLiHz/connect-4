#ifndef CHESS_GAME_HPP
#define CHESS_GAME_HPP

#include <string>
#include <map>

class ChessGame
{
private:
public:
    enum class SUBJECT {NEUTRAL, PLAYER, PLAYER1, PLAYER2, COMPUTER};
    enum class GAME_MODE {DEFAULT, PVP, PVC};

    ChessGame();
    virtual ~ChessGame() = default;

    SUBJECT get_mover_this_round() {
        if (move_cnt % 2 == 1) return firstmover;
        else return secondmover;
    }

    SUBJECT get_firstmover() { return firstmover; }
    SUBJECT get_secondmover() { return secondmover; }
    
    void set_game_mode(ChessGame::GAME_MODE mode) { this->gamemode = mode; }
    void set_firstmover(ChessGame::SUBJECT subj) { this->firstmover = subj; }
    void set_secondmover(ChessGame::SUBJECT subj) { this->secondmover = subj; }

    void set_name_tag(ChessGame::SUBJECT subj, std::string name) { name_tags[subj] = name; }
    auto get_name_tag(ChessGame::SUBJECT subj) { return name_tags[subj]; }
    
    auto get_move_cnt() { return move_cnt; }
    SUBJECT get_winner() { return winner; }

    virtual SUBJECT win_check() = 0;
    virtual void finish_move() { winner = this->win_check(); move_cnt++; } 
    virtual bool is_over() = 0;

protected:
    int move_cnt;
    bool is_game_over;
    std::map<SUBJECT, std::string> name_tags;
    SUBJECT firstmover, secondmover, winner;
    GAME_MODE gamemode;
};

#endif // CHESS_GAME_HPP
