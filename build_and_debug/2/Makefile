all: include lib src

include:
	cd include
	make

lib:
	cd lib/src
	make

src:
	cd app1
	make
	cd ..
	cd app2
	make
