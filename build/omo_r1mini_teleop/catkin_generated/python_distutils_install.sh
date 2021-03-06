#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/kw-cobot/catkin_ws/src/omo_r1mini/omo_r1mini_teleop"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/kw-cobot/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/kw-cobot/catkin_ws/install/lib/python2.7/dist-packages:/home/kw-cobot/catkin_ws/build/omo_r1mini_teleop/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/kw-cobot/catkin_ws/build/omo_r1mini_teleop" \
    "/usr/bin/python2" \
    "/home/kw-cobot/catkin_ws/src/omo_r1mini/omo_r1mini_teleop/setup.py" \
     \
    build --build-base "/home/kw-cobot/catkin_ws/build/omo_r1mini_teleop" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/kw-cobot/catkin_ws/install" --install-scripts="/home/kw-cobot/catkin_ws/install/bin"
