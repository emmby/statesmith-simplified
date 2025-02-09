# Actions and Triggers

When an event is dispatched the state machine responds by performing actions, such as changing a variable, performing I/O, invoking a function, generating another event instance, or changing to another state.


## A Simple Example

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

## Trigger and action syntax

The syntax for actions and triggers are as follows:

`trigger / action`

TODO is this supported?

One or more can be nested inside a block:

```
{
    trigger / action
}
```

## Supported Triggers

StateSmith supports the following triggers:
* `entry`
* `exit`
* user-defined events (learn more in the Events tutorial)


## See Also 

See https://en.wikipedia.org/wiki/UML_state_machine for a reference on state machine grammar. Not all features may be supported by StateSmith.


