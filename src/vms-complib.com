$ arch := 'f$getsyi("arch_name")'
$ compile := cc/decc/nolist/include_dir=[]
$
$ if arch .eqs. "VAX" then goto skipCJK
$ compile /obj=[.charmaps] [.charmaps]cjk-big5
$ compile /obj=[.charmaps] [.charmaps]cjk-cns
$ compile /obj=[.charmaps] [.charmaps]cjk-ejp
$ compile /obj=[.charmaps] [.charmaps]cjk-ejx
$ compile /obj=[.charmaps] [.charmaps]cjk-gb
$ compile /obj=[.charmaps] [.charmaps]cjk-johb
$ compile /obj=[.charmaps] [.charmaps]cjk-sjcp
$ compile /obj=[.charmaps] [.charmaps]cjk-sjx
$ compile /obj=[.charmaps] [.charmaps]cjk-uhc
$
$ skipCJK:
$ compile /obj=[.charmaps] [.charmaps]arabic
$ compile /obj=[.charmaps] [.charmaps]armscii
$ compile /obj=[.charmaps] [.charmaps]ascii
$ compile /obj=[.charmaps] [.charmaps]cp1047
$ compile /obj=[.charmaps] [.charmaps]cp1125
$ compile /obj=[.charmaps] [.charmaps]cp1131
$ compile /obj=[.charmaps] [.charmaps]cp1250
$ compile /obj=[.charmaps] [.charmaps]cp1251
$ compile /obj=[.charmaps] [.charmaps]cp1252
$ compile /obj=[.charmaps] [.charmaps]cp1253
$ compile /obj=[.charmaps] [.charmaps]cp1254
$ compile /obj=[.charmaps] [.charmaps]cp1255
$ compile /obj=[.charmaps] [.charmaps]cp1256
$ compile /obj=[.charmaps] [.charmaps]cp1257
$ compile /obj=[.charmaps] [.charmaps]cp1258
$ compile /obj=[.charmaps] [.charmaps]cp437
$ compile /obj=[.charmaps] [.charmaps]cp720
$ compile /obj=[.charmaps] [.charmaps]cp737
$ compile /obj=[.charmaps] [.charmaps]cp775
$ compile /obj=[.charmaps] [.charmaps]cp850
$ compile /obj=[.charmaps] [.charmaps]cp852
$ compile /obj=[.charmaps] [.charmaps]cp853
$ compile /obj=[.charmaps] [.charmaps]cp855
$ compile /obj=[.charmaps] [.charmaps]cp857
$ compile /obj=[.charmaps] [.charmaps]cp858
$ compile /obj=[.charmaps] [.charmaps]cp860
$ compile /obj=[.charmaps] [.charmaps]cp861
$ compile /obj=[.charmaps] [.charmaps]cp862
$ compile /obj=[.charmaps] [.charmaps]cp863
$ compile /obj=[.charmaps] [.charmaps]cp864e
$ compile /obj=[.charmaps] [.charmaps]cp865
$ compile /obj=[.charmaps] [.charmaps]cp866
$ compile /obj=[.charmaps] [.charmaps]cp869
$ compile /obj=[.charmaps] [.charmaps]cygwin
$ compile /obj=[.charmaps] [.charmaps]georg-ps
$ compile /obj=[.charmaps] [.charmaps]isoarab
$ compile /obj=[.charmaps] [.charmaps]isocyril
$ compile /obj=[.charmaps] [.charmaps]isogreek
$ compile /obj=[.charmaps] [.charmaps]isohebr
$ compile /obj=[.charmaps] [.charmaps]koi8-r
$ compile /obj=[.charmaps] [.charmaps]koi8-ru
$ compile /obj=[.charmaps] [.charmaps]koi8-t
$ compile /obj=[.charmaps] [.charmaps]koi8-u
$ compile /obj=[.charmaps] [.charmaps]latin-10
$ compile /obj=[.charmaps] [.charmaps]latin-2
$ compile /obj=[.charmaps] [.charmaps]latin-3
$ compile /obj=[.charmaps] [.charmaps]latin-4
$ compile /obj=[.charmaps] [.charmaps]latin-5
$ compile /obj=[.charmaps] [.charmaps]latin-6
$ compile /obj=[.charmaps] [.charmaps]latin-7
$ compile /obj=[.charmaps] [.charmaps]latin-8
$ compile /obj=[.charmaps] [.charmaps]latin-9
$ compile /obj=[.charmaps] [.charmaps]m-roman
$ compile /obj=[.charmaps] [.charmaps]pt154
$ compile /obj=[.charmaps] [.charmaps]tcvn
$ compile /obj=[.charmaps] [.charmaps]tis620
$ compile /obj=[.charmaps] [.charmaps]viscii
$
$ cre/dir [.'arch']
$ libr/create [.'arch']charmaps [.charmaps]*.obj