# about this repo

## PR message
Title: 

This PR addresses various onboarding usability challenges for new statesmith users.

#### Documentation is consolidated onto GitHub Pages.
Previously, documentation was a mix
of GitHub Docs, Pages, and Wiki. This made it hard to find content, resulted in parts
of things being documented in the wiki and other parts in docs, etc. The Wiki was difficult
to maintain and Docs was not as flexible as Pages. 

Using Pages enabled us to customize, doing things like:
* add a navigation sidebar
* embed *.puml and generated *.svg files directly into the page
* embed the simulator directly into the page as an iframe

It also makes documentation much easier to maintain and update than the Wiki. Anyone can submit a documentation
update along with the rest of their PR.

    
#### Simplifed onboarding.

  Statesmith is powerful. as a new user, it can be very challenging to figure out how to get started. the new ss.cli helps, but even so it's hard to get started.
  
  the new onboarding documentation tackles this by minimizing choices. it gets users up and running with a simple, universally available example, and then builds on that. users can still choose their own adventure and escape into "advanced mode" at any time.


#### A simplified, posix style build tool.
ss.cli is a powerful shell-like tool that is interactive driven first, and xxx second

we introduce an alternative tool that is less powerful, but more familiar to developers who commonly use build tooling. statesmith is intended to drop into any build system (Arduino IDE, GitHub actions, makefiles, ant, maven, node, etc.) and be easy to use from any shell. as such, it is non-interactive beyond the command line.

users can continue to use ss.cli for more advanced usage at any time.

#### A focus on integrating with familiar tools.
xxx
meet the users where they are. support popular package managers via github actions
github integration documentation.

#### Other notes

* Examples are embedded directly into the documentation. Similar to mermaid, but using PlantUML instead.
* Make PlantUML work out of the box https://github.com/StateSmith/StateSmith/issues/438






## TODO
* low maintenance dark mode support - how do plantuml diagrams look in dark mode? 
* package manager support
* google analytics support to track broken pages
