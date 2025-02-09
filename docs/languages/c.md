# Generating C State Machines

## Prerequisites

This tutorial assumes you have completed the following sections before proceeding:
* [Quickstart](docs/quickstart/quickstart.md)


## Generate the code in C 

Using the `lightbulb.puml` example from the previous section, let's generate C code to start:

```
% statesmith --lang=c99 lightbulb.puml
```

## View the State Machine

Take a look at the generated files on the disk. They should look pretty similar to the ones in the links below.

* [lightbulb.h](lightbulb.h): This is the generated header for your state machine. You will use this state machine in your apps.
* [lightbulb.c](lightbulb.c): This is the generated implementation for your state machine. You generally won't need to do much with the implementation, but it can
be interested to inspect to see how it works.
* [lightbulb.sim.html](lightbulb.sim.html): A simple simulator that runs your statemachine and allows you to interact with it. It's not needed, but can be handy. You can disable generation of the simulator with the `--no-sim-gen` option.

Open the `lightbulb.sim.html` simulator in your web browser to verify your state machine works the way you expect. Here's the same simulator hosted on github: [lightbulb.sim.html simulator](https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html)


## Using the State Machine in your own app

> [!WARNING]
> TODO need to update C gen to support implementing callbacks

To write an app that will use your new state machine,
add the following contents to a new file `myapp.c`. This code will:
1. Instantiate the state machine struct.
2. Start an event loop that tickles the state machine with every tick of the loop.
3. Implement callbacks to do things as the machine enters different states.

```
/* myapp.c */
{% include_relative myapp.c %}
```

