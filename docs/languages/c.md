# Generating C State Machines

## Prerequisites

This tutorial assumes you have completed the following sections before proceeding:
* [Quickstart](docs/quickstart/quickstart.md)



## Adding event handling to your state machine

We will want to be able to execute some code whenever the state machine changes state, so let's add some
event handling to the `Off` and `On` states.

Update your lightbulb state machine to look like the following:

<table>
<tr>
<td>
<img src="lightbulb.svg">
</td>
<td>
<pre>
{% include_relative lightbulb.puml %}
</pre>
</td>
</tr>
</table>

You can see what the new states look like in the simulator.

<iframe height="300" width="600" src="https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html"></iframe>


It looks like the state machine is doing what we want. Let's go write some code to use our new state machine.

## Generate the code in C 

Let's generate C code from `lightbulb.puml` using StateSmith:

```
% statesmith --lang=c99 lightbulb.puml
```

## View the State Machine

Take a look at the generated files on the disk. They should look pretty similar to the ones in the links below.

* [lightbulb.h](lightbulb.h): This is the generated header for your state machine. You will use this state machine in your apps.
* [lightbulb.c](lightbulb.c): This is the generated implementation for your state machine. You generally won't need to do much with the implementation, but it can be interested to inspect to see how it works.
* [lightbulb.sim.html](lightbulb.sim.html): A simple simulator that runs your statemachine and allows you to interact with it. It's not needed, but can be handy. You can disable generation of the simulator with the `--no-sim-gen` option.

Open the `lightbulb.sim.html` simulator in your web browser to verify your state machine works the way you expect. Here's the same simulator hosted on github: [lightbulb.sim.html simulator](https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html)


## Using the State Machine in your own app

To write an app that will use your new state machine,
add the following contents to a new file `myapp.c`. This code will:
1. Instantiate the state machine struct.
2. Start an event loop that tickles the state machine with every tick of the loop.
3. Implement callbacks to do things as the machine enters different states.

```c
/* myapp.c */
{% include_relative myapp.c %}
```

To run your app, compile it with the C compiler of your choice. Here we use Gnu CC

> [!NOTE]
> TODO fix implicit-function-declaration error.
> 
> `lightbulb.c` does not have a forward declaration for `enter_off()` and `enter_on()`
> which will cause errors in compilers that enforce that requirement.
> This will be fixed in a future version of these docs.

```
% gcc -o myapp -Wno-error=implicit-function-declaration *.c
% ./myapp
Press <enter> to toggle the light switch.
Press ^C to quit.
Lightbulb is off
<enter>
Lightbulb is on
<enter>
Lightbulb is off
```

Congratulations! You've now written your first app using a StateSmith state machine!
