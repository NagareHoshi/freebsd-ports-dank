# Created by: Gustau Perez i Querol <gustau.perez@gmail.com>
# $FreeBSD$

PORTNAME=	gnome-calculator
PORTVERSION=	3.32.2
CATEGORIES=	math gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME calculator tool

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	vala:lang/vala \
		itstool:textproc/itstool
LIB_DEPENDS=	libmpfr.so:math/mpfr \
		libmpc.so:math/mpc \
		libsoup-2.4.so:devel/libsoup

PORTSCOUT=	limitw:1,even

USES=		compiler:c11 gettext gnome localbase:ldflags meson \
		pkgconfig python:3.6+,build tar:xz
USE_GNOME=	gtksourceview4 libxml2

INSTALLS_ICONS=	yes
BINARY_ALIAS=	python3=${PYTHON_VERSION}

GLIB_SCHEMAS=	org.gnome.calculator.gschema.xml

.include <bsd.port.mk>
