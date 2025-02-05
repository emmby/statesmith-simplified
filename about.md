about this repo


## notable design choices

#### docs instead of wiki
the wiki has been difficult to maintain. we can get a lot of the benefits of the wiki by adding a custom nav sidebar to the docs directory.

#### minimize choices during onboarding
statesmith is powerful. as a new user, it can be very challenging to figure out how to get started. the new ss.cli helps, but even so it's hard to get started.

the new onboarding documentation tackles this by minimizing choices. it gets users up and running with a simple, universally available example, and then builds on that. users can still choose their own adventure and escape into "advanced mode" at any time.

#### a simplified, posix style build tool
ss.cli is a powerful shell-like tool that is interactive driven first, and xxx second

we introduce an alternative tool that is less powerful, but more familiar to developers who commonly use build tooling. statesmith is intended to drop into any build system (Arduino IDE, GitHub actions, makefiles, ant, maven, node, etc.) and be easy to use from any shell. as such, it is non-interactive beyond the command line.

users can continue to use ss.cli for more advanced usage at any time.


#### examples embedded directly in docs
using stack overflow 35080160



#### TODO: INGEST MERMAID
once ss can read mermaid, the developer workflow for people who want to embed their workflows in their readmes