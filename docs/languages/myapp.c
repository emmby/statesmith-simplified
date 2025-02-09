#include "lightbulb.h"

/* Implement the callbacks that are defined in the header */
/* TODO */


/* Instantiate the state machine struct */
lightbulb sm;

int main() {
    /* Initialize and start the state machine */
    lightbulb_ctor(&sm);
    lightbulb_start(&sm);

    /* Start an event loop to respond to events and update the state machine. */
    while(1) {
        loop();
    }

    return 0;
}

void loop() {
  /*
   * (optional) Respond to events.
   * For example, on a button press you might trigger 
   * BeadSorter_dispatch_event(&sm, BeadSorter_EventId_SWITCH);
   */

  /* 
   * Advance the state machine.
   * Dispatch a DO for every tick of the event loop.
   */
  BeadSorter_dispatch_event(&sm, BeadSorter_EventId_DO);
}