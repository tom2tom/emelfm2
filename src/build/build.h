#ifndef __BUILD_H__
#define __BUILD_H__
#define PROGNAME "emelFM2"
#define BINNAME "emelfm2"
#define VERSION "0.9.1"
#define RELEASE ".2"
#define BUILDSTAMP "27 Apr 2017"
#define BUILDDATE "Thu Apr 27 15:59:06 AEST 2017"
#define BUILDINFO "Linux 4.4.59-desktop-1.mga5/x86_64"
#define COPYRIGHT "2003-2017, tooar <tooar@emelfm2.net>"
#define BUILDOPTS "BIN_DIR=/usr/local/bin|CFLAGS=-Wall -Winline|CONFIGDOC=CONFIGURATION|DEBUG=1 |DOC_DIR=/usr/local/share/doc/emelfm2|DOCS_VERSION=0|EDITOR_SPELLCHECK=0 |EXTRA_BINDINGS=0|FILES_UTF8ONLY=0|HELPDOC=USAGE |I18N=1|ICON_DIR=/usr/local/share/pixmaps/emelfm2|LIB_DIR=/usr/local/lib|LOCALE_DIR=/usr/local/share/locale |MAN_DIR=/usr/local/share/man/man1|NEW_COMMAND=1|PANES_HORIZONTAL=0 |PLUGINS_DIR=/usr/local/lib/emelfm2/plugins|PREFIX=/usr/local|STRIP=0|USE_GAMIN=0 |USE_INOTIFY=1|USE_KQUEUE=0|USE_PORTEVENT=0 |USE_WAYLAND=0|WITH_KERNELFAM=1 |WITH_ACL=0|WITH_ASSIST=0|WITH_CUSTOMMOUSE=0 |WITH_DEVKIT=0|WITH_GTK2=0|WITH_GTK3=0|WITH_HAL=0 |WITH_LATEST=1|WITH_OUTPUTSTYLES=0 |WITH_POLKIT=0|WITH_THUMBLIB=0|WITH_THUMBS=1 |WITH_TRACKER=0|WITH_TRANSPARENCY=0|WITH_UDISKS=0 |XDG_DESKTOP_DIR=/usr/local/share/applications|XDG_INTEGRATION=1"
#define PREFIX "/usr/local"
#define LIB_DIR "/usr/local/lib"
#define PLUGINS_DIR "/usr/local/lib/emelfm2/plugins"
#define DOC_DIR "/usr/local/share/doc/emelfm2"
#define ICON_DIR "/usr/local/share/pixmaps/emelfm2"
#define LOCALE_DIR "/usr/local/share/locale"
#define E2_DEBUG_LEVEL 5
#define E2_CURRENTLIBS
#define E2_XDG
#define E2_NEW_COMMAND
#define E2_THUMBNAILS
#define MAIN_HELP "USAGE"
#define CFG_HELP "CONFIGURATION"
#ifdef __linux__
#define E2_FAM_INOTIFY
#endif
#define E2_ADD_STOCKS
#endif //ndef __BUILD_H__
