# $FreeBSD$

PORTNAME=	biber
PORTVERSION=	2.12
DISTVERSIONPREFIX=	v
CATEGORIES=	print perl5
PKGNAMEPREFIX=	latex-
DIST_SUBDIR=	TeX

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	BibTeX replacement for users of biblatex

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

__DEPENDS= \
	ja-p5-Encode-EUCJPASCII>0:japanese/p5-Encode-EUCJPASCII \
	p5-Business-ISBN>0:misc/p5-Business-ISBN \
	p5-Business-ISMN>0:misc/p5-Business-ISMN \
	p5-Business-ISSN>0:misc/p5-Business-ISSN \
	p5-Class-Accessor>0:devel/p5-Class-Accessor \
	p5-Config-AutoConf>0:devel/p5-Config-AutoConf \
	p5-Data-Compare>0:devel/p5-Data-Compare \
	p5-Data-Dump>0:devel/p5-Data-Dump \
	p5-Data-Uniqid>0:devel/p5-Data-Uniqid \
	p5-DateTime>0:devel/p5-DateTime \
	p5-DateTime-Format-Builder>0:devel/p5-DateTime-Format-Builder \
	p5-DateTime-Calendar-Julian>0:devel/p5-DateTime-Calendar-Julian \
	p5-Encode-HanExtra>0:chinese/p5-Encode-HanExtra \
	p5-Encode-JIS2K>0:converters/p5-Encode-JIS2K \
	p5-ExtUtils-LibBuilder>0:devel/p5-ExtUtils-LibBuilder \
	p5-File-Slurper>0:devel/p5-File-Slurper \
	p5-IPC-Run3>0:devel/p5-IPC-Run3 \
	p5-Lingua-Translit>0:devel/p5-Lingua-Translit \
	p5-List-AllUtils>0:devel/p5-List-AllUtils \
	p5-List-MoreUtils>0:lang/p5-List-MoreUtils \
	p5-List-MoreUtils-XS>0:lang/p5-List-MoreUtils-XS \
	p5-Log-Log4perl>0:devel/p5-Log-Log4perl \
	p5-Mozilla-CA>0:www/p5-Mozilla-CA \
	p5-Regexp-Common>0:textproc/p5-Regexp-Common \
	p5-Text-BibTeX>0:textproc/p5-Text-BibTeX \
	p5-Text-CSV>0:textproc/p5-Text-CSV \
	p5-Text-CSV_XS>0:textproc/p5-Text-CSV_XS \
	p5-Text-Roman>0:textproc/p5-Text-Roman \
	p5-URI>0:net/p5-URI \
	p5-Unicode-LineBreak>0:textproc/p5-Unicode-LineBreak \
	p5-XML-LibXML>0:textproc/p5-XML-LibXML \
	p5-XML-LibXML-Simple>0:textproc/p5-XML-LibXML-Simple \
	p5-XML-LibXSLT>0:textproc/p5-XML-LibXSLT \
	p5-XML-Writer>0:textproc/p5-XML-Writer \
	p5-autovivification>0:devel/p5-autovivification
BUILD_DEPENDS=	${__DEPENDS}
RUN_DEPENDS=	${__DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
USE_TEX=	texmf
USE_GITHUB=	yes
GH_ACCOUNT=	plk

NO_ARCH=	yes

.include <bsd.port.mk>
