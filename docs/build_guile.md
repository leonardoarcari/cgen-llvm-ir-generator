# Guile 1.8 compilation guide

CGEN LLVM-IR requires a working installation of Guile 1.8.x.

Following you can find a script to build it and install it. You require the following tools:

* autotools
* autoconf
* libtool

```sh
# Make a build dir
mkdir root
INSTALL_DIR="$PWD/root"

# Compile guile
wget https://ftp.gnu.org/gnu/guile/guile-1.8.5.tar.gz
tar xaf guile-1.8.5.tar.gz
cd guile-1.8.5
sed 's|ACLOCAL_AMFLAGS|#\0|' Makefile.am -i
libtoolize --install --copy --force --automake
aclocal -I m4/
autoconf --force
autoheader
automake --add-missing --copy --foreign --force-missing
./configure --prefix="$INSTALL_DIR" --disable-error-on-warning
sed 's/^snarf2checkedtexi = /\0 echo /' libguile/Makefile -i
make -j$(nproc)
make install
cd ..
```