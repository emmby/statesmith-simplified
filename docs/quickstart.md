# Quickstart


## Installation

You can install statesmith using many common package managers:

```
 Mac homebrew: ...
```

```
 Linux apt-get:
```

```
 Windows nuget:
```



If you don't want to use one of the methods above, you can always download the binary directly:
* download link


## Create a State Machine

Let's create our first state machine. We'll use PlantUML to get started quickly. Later you can try one of our other supported diagraming formats.

<table>
<tr>
<td>

<img src="https://emmby.github.io/statesmith-simplified/media/light.svg" />

</td>
<td>
<pre>
# light.puml
@startuml
[*] --> Off
Off -> On : Switch pressed
On -> Off : Switch pressed
@enduml
</pre>
</td>
</tr>
</table>


## Generate the default Code

Now run `statesmith` to generate code for this state machine.

```
% statesmith light.puml
```

StateSmith defaults to generating HTML and JavaScript code. HTML and JS are broadly supported and easy to view in any browser, which is what we'll do now.

## View the State Machine

Open `light.html` in your browser.

TODO blah blah interact.

Take a look at the generated files on the disk
* `light.html`: A simple simulator that runs your statemachine and allows you to interact with it.
* `light.js`: The generated JavaScript state machine. You can include this state machine in your JavaScript apps

TODO links to examples dir for light.html and light.js

## Next Steps

You've generated your first statesmith state machine!

Continue next to the Languages section to see how to generate state machine in C, C++, C#, Java, Python, TypeScript, or one of our other supported languges.
