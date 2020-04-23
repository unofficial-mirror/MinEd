#! /bin/sh

LC_ALL=C
export LC_ALL

grep '[^	 -~]' mined.1 | tr -d "[	 -~]" |
sed -e '/^$/ d' -e 's,\(.\),\1
sort | uniq