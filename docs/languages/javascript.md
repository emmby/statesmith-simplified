# Generating JavaScript State Machines

This tutorial will walk you through how to generate JavaScript source code for a simple state machine. Even if you don't intend to build JavaScript apps, this tutorial is a great way to get started with StateSmith because it will show you how to generate an interactive simulator for your state machines that can be viewed in a web browser.

To get started, first you'll need to draw a state machine. We'll use PlantUML to get started quickly. Later you can try one of our other supported diagraming formats.


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


## Generate the JavaScript Code

Now run `statesmith` to generate code for this state machine.

```
% statesmith --lang=js lightbulb.puml
```

## View the State Machine

Take a look at the generated files on the disk. They should look pretty similar to the ones in the links below.

* [lightbulb.js](lightbulb.js): This is the **generated JavaScript state machine.** You can include this state machine in your JavaScript apps.
* [lightbulb.sim.html](lightbulb.sim.html): A simple simulator that runs your statemachine and allows you to interact with it.

Open the `lightbulb.sim.html` simulator in your web browser. Here's the same simulator hosted on github: [lightbulb.sim.html simulator](https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html)


<iframe height="300" width="600" src="https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html"></iframe>

Try clicking the `Switch` button on the right and watch the diagram update with the active state. You'll also see the event recorded in the event history on the right hand side.

Congratulations! You've generated your first StateSmith state machine and played around in it with our built in simulator.

Next let's look at how to use it in your own app.


## Using the State Machine in your own app

> [!WARN] TODO this depends on migrating the tracer functionality in the simulator into the state machine.

To use your new statemachine, you'll create a simple html page that loads and uses it.
This page will:
  1. Load your state machine.
  2. Pass it a callback with all your implementation details that tell it what to do when
     it enters various states.
  3. Create a button that firest the `SWITCH` event.
  3. Run the machine.

Create a new file called `myapp.html` and add the following

```
{% include_relative myapp.html %}
```

Now open this `myapp.html` in your browser. Notice that the page updates every time you click the Switch button!

See this in action online with [myapp.html](myapp.html): [interactive demo](https://emmby.github.io/statesmith-simplified/languages/myapp.html)


