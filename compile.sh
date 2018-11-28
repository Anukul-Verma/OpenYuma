# Anukul: Script to generate libsmi.a & compile OpenYuma with SIL

#Input ZebOS/ZebOS8NG directory path
if [ "$1" == "" ]
  then
     echo
     echo "Usage: ./compile.sh <ZebOS/ZebOS8NG path>"
     echo
     exit
fi

export ZEBOS_DIR=$1
export CURR=`pwd`
PRODUCTION="PRODUCTION=1"

rm -rf testapp_tmp
mkdir testapp_tmp
cp $ZEBOS_DIR/platform/linux/obj/lib.a $ZEBOS_DIR/platform/linux/obj/pal.a testapp_tmp/
cd testapp_tmp
ar x lib.a
ar x pal.a
rm -rf lib.a pal.a
ar cr libsmi.a *.o
cp libsmi.a ../
cd ..
rm -rf testapp_tmp
cp libsmi.a netconf/src/agt/

make all $PRODUCTION && make install DESTDIR=$CURR/dest-dir
cp libsmi.a $CURR/dest-dir/usr/lib/
cp netconfd.conf dest-dir/etc/yuma/
cp openconfig-yang/* dest-dir/usr/share/yuma/modules/netconfcentral/

export DESTDIR=$CURR/dest-dir

cp libsmi.a openconfig-platform/src/
cd openconfig-platform
make all $PRODUCTION && make install DESTDIR=$CURR/dest-dir
cd ..

cp libsmi.a openconfig-platform-transceiver/src/
cd openconfig-platform-transceiver
make all $PRODUCTION && make install DESTDIR=$CURR/dest-dir
cd ..

cp libsmi.a openconfig-terminal-device/src/
cd openconfig-terminal-device
make all $PRODUCTION && make install DESTDIR=$CURR/dest-dir
cd ..

cp netconf/startup-cfg.xml dest-dir/
