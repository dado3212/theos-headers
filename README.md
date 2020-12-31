# Theos Headers
These are the custom Theos headers that I use for building my tweaks.  I still develop all of my tweaks on-device, as a remnant of the days when I did my dev work on PC, and the Theos updated build wasn't in the state it's in today.

As such, my environment on my phone is pretty heavily customized and hard to replicate.  To help with building my tweaks, here's the header and include files that I use.

usbmuxd is included here b/c it's the version that my automatic scripts are synced up to use.  Don't use this for your own dev setup.

python ./usbmuxd-1.0.8/python-client/tcprelay.py -t 22:2222

I also had to change theos/makefiles/install/deb_remote.mk to have the install command explicitly set the PATH (like this). Otherwise I ran into `tar: unrecognized option --warning=no-timestamp'` errors, which was weird given that both tar versions installed on the device appeared to be v1.3.0.

```
$(ECHO_INSTALLING)install.exec "cat > /tmp/_theos_install.deb; export PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/bin/X11:/usr/games; $(_THEOS_SUDO_COMMAND) dpkg -i /tmp/_theos_install.deb && rm /tmp/_theos_install.deb" < "$(_THEOS_PACKAGE_LAST_FILENAME)"$(ECHO_END)
```
