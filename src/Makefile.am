# -----> Shared library
lib_LTLIBRARIES             = libmtx.la
libmtx_la_SOURCES           = meataxe.h args.c berlekmp.c \
	bsand.c bscore.c bsdup.c bsissub.c bsmatch.c bsminus.c \
	bsop.c bsor.c bsprint.c bsread.c bswrite.c \
	cfinfo.c \
	charpol.c chbasis.c \
	error.c \
	ffio.c \
	fpcore.c fpdup.c fpmul.c fpmul2.c fpprint.c \
	gcd.c genseed.c\
	grmaprow.c grmatcore.c grtable.c \
	homcomp.c \
	imatcore.c imatread.c imatwrite.c\
	init.c intio.c issub.c \
	isisom.c kernel-0.c \
	ldiag.c \
	maddmul.c mat2vec.c matadd.c matclean.c matcmp.c \
	maketabF.c \
	matcopy.c matcore.c matcut.c \
	matdup.c matech.c matid.c matins.c matinv.c matmul.c \
	matnull.c matorder.c \
	matpivot.c\
	matprint.c matpwr.c matread.c mattr.c mattrace.c matwrite.c \
	message.c \
	mfcore.c mfread.c mfreadlong.c mfwrite.c mfwritelong.c \
	minpol.c mkendo.c\
	mmulscal.c mraddgen.c mrcore.c mrread.c mrtranspose.c mrwrite.c \
	msclean.c mscore.c \
	mtensor.c mtxobj.c os.c \
	permcmp.c permcore.c permdup.c perminv.c permmul.c permorder.c\
	permprint.c permpwr.c permread.c permwrite.c poladd.c\
	polcmp.c polcore.c polderive.c poldiv.c poldup.c\
	polgcd.c polmul.c polprint.c polread.c polwrite.c \
	quotient.c random.c rdcfgen.c \
	saction.c setcore.c setinsert.c settest.c \
	spinup.c spinup2.c \
	split.c stabpwr.c stfcore.c \
	stfread.c stfwrite.c \
	string.c \
	sumint.c \
	temap.c \
	tkinfo.c vec2mat.c \
	wgen.c \
	window.c \
	zcleanrow.c zcmprow.c zgap.c zpermrow.c \
	zzz2.c

# Enable shared library build on Cygwin
AM_LDFLAGS = -no-undefined

# -----> Headers
include_HEADERS          = meataxe.h

# -----> Executables (built from the shared library)

LDADD = $(lib_LTLIBRARIES)

bin_PROGRAMS = cfcomp chop decomp genmod mkcycl mkdotl mkgraph mkhom mkhom_old\
  mkinc mksub mktree orbrep precond pseudochop pwkond rad soc symnew tcond tuc \
  zad zbl zcf zcl zcp zct zcv zef zev zfr ziv zkd zmo zmu zmw znu zor zpo zpr \
  zpt zqt zro zsc zsi zsp zsy ztc zte ztr zts zuk zvp
