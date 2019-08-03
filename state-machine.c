/*
 * Includes
 */
#include <stdio.h>

/*
 * Macros
 */
#define STATE_CHANGE_1 (0)
#define STATE_CHANGE_2 (2)
#define STATE_CHANGE_3 (4)

/*
 * Typedefs
 */
typedef enum {
  STATE_A,
  STATE_B,
  STATE_C,
  STATE_MAX
} StateMachineState;

typedef struct {
  int attribute1;
  int attribute2;
  int attribute3;
} Attribute;

/* The function pointer signiture */

typedef void (*StateMachineRoutine)(void);

/*
 * Function prototypes
 */
void init(void);
void changeState(StateMachineState newState);
void STATE_A_routine(void);
void STATE_B_routine(void);
void STATE_C_routine(void);

/*
 * Global (module wide) variables
 */
static unsigned int stateCounter = 0;

/* This pattern allows the state data to be held in a central place */

static Attribute attributes[STATE_MAX] = {
/* attribute1, attribute2, attribute3 */
  {         0,          1,          2}, /* STATE_A */
  {         1,          2,          0}, /* STATE_B */
  {         2,          0,          1}, /* STATE_C */
};
static StateMachineState state;
static StateMachineRoutine stateMachineRoutine[STATE_MAX] = {
  STATE_A_routine,
  STATE_B_routine,
  STATE_C_routine
};

/*
 * Main
 */
int main (void) {
  init();
  for(;;) {
    /* Using a function pointer as the state leads to the following calling code.
     * Can also use a switch statement, which doesn't risk overflowing an array,
     * and is arguably simpler.
     */
    if (state < STATE_MAX) {
      stateMachineRoutine[state]();
    }
    else {
      break;
    }
    stateCounter++;
  }
}

void init(void) {
  state = STATE_A;
  stateCounter = 0;
}

void changeState(StateMachineState newState) {
  state = newState;
}

void STATE_A_routine(void) {
  printf("Running state A: %d %d %d, Counter: %d\n",
      attributes[state].attribute1,
      attributes[state].attribute2,
      attributes[state].attribute3,
      stateCounter
  );

  /* In this example, each state is responsible for checking for state change.
   * This can also be done at the top level which creates less duplication,
   * but more complex state change logic. It may require a switch statement
   * which knows the current state and what state it would like to change to.
   */
  if (stateCounter > STATE_CHANGE_1) {
    changeState(STATE_B);
  }
}

void STATE_B_routine(void) {
  printf("Running state B: %d %d %d, Counter: %d\n",
      attributes[state].attribute1,
      attributes[state].attribute2,
      attributes[state].attribute3,
      stateCounter
  );
  if (stateCounter > STATE_CHANGE_2) {
    changeState(STATE_C);
  }
}

void STATE_C_routine(void) {
  printf("Running state C: %d %d %d, Counter: %d\n",
      attributes[state].attribute1,
      attributes[state].attribute2,
      attributes[state].attribute3,
      stateCounter
  );
  if (stateCounter > STATE_CHANGE_3) {
    changeState(STATE_MAX); /* This is to terminate the example. Normally, you wouldn't do this! */
  }
}
