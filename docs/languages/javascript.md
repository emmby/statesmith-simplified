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

* [lightbulb.js](lightbulb.js): The generated JavaScript state machine. You can include this state machine in your JavaScript apps
* [lightbulb.sim.html](lightbulb.sim.html): A simple simulator that runs your statemachine and allows you to interact with it.

The `lightbulb.js` state machine is the file you really care about, but the simulator can be immensely helpful for testing and debugging.

Open the `lightbulb.sim.html` simulator in your web browser. Here's the same simulator hosted on github: [lightbulb.sim.html](https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html)


<iframe height="300" width="600" src="https://emmby.github.io/statesmith-simplified/languages/lightbulb.sim.html"></iframe>


Now that you've been able to interact with your state machine, let's look at how to use it in your own app.


## Using the State Machine in your own app

examine the js state machine

write an app that uses the state machine

```
<!-- myapp.html -->

xxx
```




