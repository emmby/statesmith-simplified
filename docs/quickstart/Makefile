# Assumes that ss.cli is in your path

all: lightbulb.svg lightbulb.js

lightbulb.svg: /tmp/plantuml.jar lightbulb.puml
	java -jar /tmp/plantuml.jar -headless -tsvg lightbulb.puml	
	
lightbulb.js: /tmp/ss.cli lightbulb.puml
	ss.cli run --lang=JavaScript --no-ask --no-csx -h -b

# This depends on graphviz
/tmp/plantuml.jar:
	wget https://sourceforge.net/projects/plantuml/files/plantuml.jar/download -O /tmp/plantuml.jar

