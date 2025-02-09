# Generating JavaScript State Machines

This tutorial will walk you through how to generate JavaScript source code for a simple state machine. Even if you don't intend to build JavaScript apps, this tutorial is a great way to get started with StateSmith because it will show you how to generate an interactive simulator for your state machines that can be viewed in a web browser.


## Prerequisites

We recommend completing the following sections before proceeding with this tutorial:
* [Quickstart](docs/quickstart/quickstart.md)


## Using the State Machine in your own app

> [!WARNING] 
> TODO this depends on migrating the tracer functionality in the simulator into the state machine.

To use the state machine you created in Quickstart, you'll create a simple html page that loads and uses the state machine.

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


