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

  <img src="https://github.com/user-attachments/assets/49111aec-2d52-4b09-88ee-cbfcf5962847" />

</td>
<td>
<pre>
# hello.puml
@startuml
Bob -> Alice : hello
@enduml  
</pre>
</td>
</tr>
</table>

## Generate the default Code

Now run `statesmith` to generate code for this state machine.

```
% statesmith hello.puml
```

StateSmith defaults to generating HTML and JavaScript code. HTML and JS are broadly supported and easy to view in any browser, which is what we'll do now.

## View the State Machine

Open `hello.html` in your browser.

TODO blah blah interact.

Take a look at the generated files on the disk
* `hello.html`: A simple simulator that runs your statemachine and allows you to interact with it.
* `hello.js`: The generated JavaScript state machine. You can include this state machine in your JavaScript apps

TODO links to examples dir for hello.html and hello.js

## Next Steps

You've generated your first statesmith state machine!

Continue next to the Languages section to see how to generate state machine in C, C++, C#, Java, Python, TypeScript, or one of our other supported languges.
