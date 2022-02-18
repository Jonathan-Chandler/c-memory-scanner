top_srcdir= /c/work/c/memscan-dll/lisp/ecl-21.2.1/src
srcdir	= /c/work/c/memscan-dll/lisp/ecl-21.2.1/src/doc

prefix=/mingw32
exec_prefix=${prefix}
infodir = ${datarootdir}/info
mandir=${datarootdir}/man
docdir=${datarootdir}/doc/${PACKAGE_TARNAME}
datarootdir = ${prefix}/share
manext=1

SHELL = /bin/sh
INSTALL	= /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
mkinstalldirs = $(top_srcdir)/bdwgc/install-sh -d
INFO_FILE = ecl.info.gz
MAKEINFO = /usr/bin/makeinfo
MANUAL_MAKE_TARGET = info
MANUAL_INSTALL_TARGET = install-info
MANUAL_UNINSTALL_TARGET = uninstall-info

VERSION=21.2.1

all: $(MANUAL_MAKE_TARGET)

manual:
	cp -r $(srcdir)/manual .

info: manual
	$(MAKE) MAKEINFO=$(MAKEINFO) -C manual info

html: manual
	$(MAKE) MAKEINFO=$(MAKEINFO) -C manual html

install: $(MANUAL_INSTALL_TARGET)
	$(mkinstalldirs) $(DESTDIR)$(mandir)/man$(manext)
	$(INSTALL_DATA) ecl.man $(DESTDIR)$(mandir)/man$(manext)/ecl.$(manext)
	$(INSTALL_DATA) ecl-config.man $(DESTDIR)$(mandir)/man$(manext)/ecl-config.$(manext)

install-info:
	$(mkinstalldirs) $(DESTDIR)$(infodir)
	$(INSTALL_DATA) manual/$(INFO_FILE) $(DESTDIR)$(infodir)
	$(INSTALL_INFO) --info-dir=$(DESTDIR)$(infodir) manual/$(INFO_FILE)

install-html:
	$(mkinstalldirs) $(DESTDIR)$(docdir)/ecl-$(VERSION)
	cp -r manual/html/ $(DESTDIR)$(docdir)/ecl-$(VERSION)

uninstall: $(MANUAL_UNINSTALL_TARGET)
	$(RM) $(DESTDIR)$(mandir)/man$(manext)/ecl.$(manext)
	$(RM) $(DESTDIR)$(mandir)/man$(manext)/ecl-config.$(manext)

uninstall-info:
	$(RM) $(DESTDIR)$(infodir)/$(INFO_FILE)
	$(INSTALL_INFO) --info-dir=$(DESTDIR)$(infodir) --remove manual/$(INFO_FILE)

uninstall-html:
	$(RM) -r $(DESTDIR)$(docdir)/ecl-$(VERSION)

clean:
	$(MAKE) -C manual clean
