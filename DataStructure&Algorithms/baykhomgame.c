#include <stdio.h>
#include <stdlib.h>

struct Turn {
  int player_number;
  int sticks_taken;
  struct Turn *next;
  struct Turn *prev;
};

void insert(struct Turn **head_ref, int new_player_number, int new_sticks_taken) {
  // Allocate memory for new node
  struct Turn* new_turn = (struct Turn*)malloc(sizeof(struct Turn));
  
  // Set player number and sticks taken for new node
  new_turn->player_number = new_player_number;
  new_turn->sticks_taken = new_sticks_taken;
  
  // Set next and prev pointers for new node
  new_turn->next = (*head_ref);
  new_turn->prev = (*head_ref)->prev;
  
  // Update next and prev pointers for surrounding nodes
  (*head_ref)->prev->next = new_turn;
  (*head_ref)->prev = new_turn;
  
  // Update head pointer
  (*head_ref) = new_turn;
}

int main() {
  int num_players = 2;
  int num_sticks = 10;
  int current_player = 1;
  int sticks_left = num_sticks;
  
  // Initialize head pointer
  struct Turn* head = (struct Turn*)malloc(sizeof(struct Turn));
  head->player_number = 0;
  head->sticks_taken = 0;
  head->next = head;
  head->prev = head;
  
  // Play game
  while (sticks_left > 0) {
    printf("%d sticks left.\n", sticks_left);
    printf("Player %d's turn:\n", current_player);
    
    // Get sticks taken from current player
    int sticks_taken;
    printf("How many sticks do you want to take? ");
    scanf("%d", &sticks_taken);
    while (sticks_taken < 1 || sticks_taken > 3 || sticks_taken > sticks_left) {
      printf("Invalid input. How many sticks do you want to take? ");
      scanf("%d", &sticks_taken);
    }
    
    // Add turn to list
    insert(&head, current_player, sticks_taken);
    
    // Update sticks left and current player
    sticks_left -= sticks_taken;
    if (sticks_left == 0) {
      printf("Player %d wins!\n", current_player);
      break;
    }
    current_player = (current_player % num_players) + 1;
  }
  
  // Print list of turns
  printf("\nList of turns:\n");
  struct Turn* current_turn = head;
  do {
    printf("Player %d takes %d sticks.\n", current_turn->player_number, current_turn->sticks_taken);
    current_turn = current_turn->next;
  } while (current_turn != head);
  
  // Free memory
  current_turn = head;
  do {
    struct Turn* next_turn = current_turn->next;
    free(current_turn);
    current_turn = next_turn;
  } while (current_turn != head);
  
  return 0;
}
