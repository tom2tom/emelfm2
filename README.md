H2 DESCRIPTION

emelFM2 is a file manager that implements the popular two-pane
design. It features a simple GTK interface, a flexible filetyping
scheme, and a built-in command line for executing commands without
opening a terminal-emulator application. It's designed to be small,
and as fast as possible.

emelFM2 requires Gtk+2.6 or later. Gtk+3.x is ok, though problem(s)
(notably aspects of the UI layout) may become apparent. It's too
soon to comment about Gtk+4.

H2 LICENSE

emelFM2 is licensed under the [GNU General Public License V.3] (./docs/GPL).

H2 WEBSITES

emelFM2       [homepage] (http://www.emelfm2.net)

emelFM1       [sourceforge] (http://emelFM.sourceforge.net)

H2 MAILING LIST

There is an emelFM2 mailing list provided by freelists.org. You
can subscribe to that list by sending an email to [freelists]
(mailto:emelfm2-request@freelists.org) with 'subscribe' in the subject
and you can unsubscribe from the list by sending email to the
same address with 'unsubscribe' in the subject.

[email address] (mailto:emelfm2@freelists.org)
[web interface] (http://www.freelists.org/cgi-bin/list.fcgi?list_id=emelfm2)
[list archive] (http://www.freelists.org/archives/emelfm2)

H2 HELP

Your help is wanted! It is always nice to get bug reports, comments,
feature requests or patches. There is a [wiki] (http://emelfm2.net/wiki/UserGuide) where some content needs
to be added. If you have any programming skills, you might also want
to take a look at the [TODO] (./docs/TODO) list.

Please send bug reports, comments or feature requests to the mailing
list (see above). You do not need to be a subscriber to the list.

H2 INTERNATIONALISATION

Within the codebase, all strings to be translated have the necessary
_() or N_() tags.

Translations exist for
 * japanese
 * simplified chinese
 * french
 * german
 * russian
 * polish

Feel free to do another language. Start by asking on the mailing
list if anybody else is already doing the same. The 'make' targets are
i18n and [un]install_i18n.

The help documents [USAGE] (./docs/USAGE) and [CONFIGURATION] (./docs/CONFIGURATION) might well be translated
at some future time, but they are not yet mature.
Probably not worth translating yet.

H2 BETWEEN OFFICIAL RELEASES

Code is not committed to git or svn unless it is expected to build and run
as intended. However some precautions are prudent. See the [WARNING] (./docs/WARNING) file.

H2 BUILD, COMPILE

See files [CONSTRUCT] (./docs/CONSTRUCT) and [Makefile.config] (./Makefile.config).

H2 INSTALLATION, UNINSTALLATION

See the [INSTALL] (./docs/INSTALL) file.