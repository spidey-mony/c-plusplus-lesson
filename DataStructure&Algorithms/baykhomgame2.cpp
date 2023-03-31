#include <iostream>
using namespace std;

struct Move {
    int player;
    int sticks;
    Move* next;
    Move* prev;
};

class BayKhom {
private:
    int num_players;
    int num_sticks;
    int current_player;
    int sticks_left;
    Move* head;
public:
    BayKhom(int players, int sticks) {
        num_players = players;
        num_sticks = sticks;
        current_player = 1;
        sticks_left = num_sticks;
        head = new Move;
        head->player = 0;
        head->sticks = 0;
        head->next = head;
        head->prev = head;
    }
    BayKhom() {
        Move* current_move = head;
        do {
            Move* next_move = current_move->next;
            delete current_move;
            current_move = next_move;
        } while (current_move != head);
    }
    void play() {
        while (sticks_left > 0) {
            cout << "Sticks left: " << sticks_left << endl;
            cout << "Player " << current_player << "'s turn:" << endl;
            int sticks_taken;
            cout << "How many sticks do you want to take? ";
            cin >> sticks_taken;
            while (sticks_taken < 1 || sticks_taken > 3 || sticks_taken > sticks_left) {
                cout << "Invalid input. How many sticks do you want to take? ";
                cin >> sticks_taken;
            }
            add_move(current_player, sticks_taken);
            sticks_left -= sticks_taken;
            if (sticks_left == 0) {
                cout << "Player " << current_player << " wins!" << endl;
                break;
            }
            current_player = (current_player % num_players) + 1;
        }
    }
    void print_moves() {
        Move* current_move = head;
        do {
            if (current_move->player != 0) {
                cout << "Player " << current_move->player << " takes " << current_move->sticks << " sticks." << endl;
            }
            current_move = current_move->next;
        } while (current_move != head);
    }
private:
    void add_move(int player, int sticks) {
        Move* new_move = new Move;
        new_move->player = player;
        new_move->sticks = sticks;
        new_move->next = head;
        new_move->prev = head->prev;
        head->prev->next = new_move;
        head->prev = new_move;
        head = new_move;
    }
};

int main() {
    int num_players, num_sticks;
    cout << "Enter the number of players (2-4): ";
    cin >> num_players;
    while (num_players < 2 || num_players > 4) {
        cout << "Invalid input. Enter the number of players (2-4): ";
        cin >> num_players;
    }
    cout << "Enter the number of sticks (10-50): ";
    cin >> num_sticks;
    while (num_sticks < 10 || num_sticks > 50) {
        cout << "Invalid input. Enter the number of sticks (10-50): ";
        cin >> num_sticks;
    }
    BayKhom game(num_players, num_sticks);
    game.play();
    game.print_moves();
    return 0;
}