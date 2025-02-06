# Generating JavaScript

First create the state machine. We'll use PlantUML to get started quickly. Later you can try one of our other supported diagraming formats.

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


## Generate the JavaScript Code

Now run `statesmith` to generate code for this state machine.

```
% statesmith --lang=js hello.puml
```

## View the State Machine

Open `hello.html` in your browser.

TODO blah blah interact.

Take a look at the generated files on the disk.
* `hello.html`: A simple simulator that runs your statemachine and allows you to interact with it.
* `hello.js`: The generated JavaScript state machine. You can include this state machine in your JavaScript apps

TODO links to examples dir for hello.html and hello.js

## Using the State Machine in your own app

examine the js state machine

write an app that uses the state machine

```
<!-- myapp.html -->

xxx
```




