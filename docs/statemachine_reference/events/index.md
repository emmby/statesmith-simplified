# Event triggers

You use Events to trigger different actions.

By default, every state has an implicit `enter` and `exit` event trigger. You can use
these triggers to run arbitrary actions.


## A Simple Example

This example uses `enter` and `exit` events to trigger the `enter_off()` and `enter_on()` actions.

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

<iframe height="300" width="600" src="https://emmby.github.io/statesmith-simplified/statemachine_reference/events/lightbulb.sim.html"></iframe>


## User-defined events

TODO


## See Also 

See https://en.wikipedia.org/wiki/UML_state_machine for a reference on state machine grammar. Not all features may be supported by StateSmith.


