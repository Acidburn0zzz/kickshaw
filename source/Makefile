SOURCES = 	adding_and_deleting.c auxiliary.c context_menu.c drag_and_drop.c \
		editing.c find.c kickshaw.c load_menu.c save_menu.c selecting.c timer.c
OBJS    = ${SOURCES:.c=.o}
CFLAGS  = -O2 -pedantic -std=gnu99 -Wall -Wextra `pkg-config gtk+-3.0 --cflags`
LDADD   = `pkg-config gtk+-3.0 --libs`
CC      = gcc
PACKAGE = kickshaw
PREFIX 	= /usr


all: ${OBJS}
	${CC} -o ${PACKAGE} ${OBJS} ${LDADD}

.c.o:
	${CC} ${CFLAGS} -c $<

clean:
	rm *.o kickshaw

install:
	cp kickshaw $(PREFIX)/bin
	cp kickshaw.desktop $(PREFIX)/share/applications

uninstall:
	rm $(PREFIX)/bin/kickshaw
	@echo "For every user who has started kickshaw a settings file .kickshawrc was created inside the respective home directory. It is not removed automatically, but can be removed by hand."
