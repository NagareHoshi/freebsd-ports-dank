--- src/ws.cpp.orig	2020-01-30 14:29:49 UTC
+++ src/ws.cpp
@@ -27,6 +27,7 @@
 
 #include <EGL/egl.h>
 #include <EGL/eglext.h>
+#include <EGL/eglmesaext.h>
 #include "linux-dmabuf/linux-dmabuf.h"
 #include "bridge/wpe-bridge-server-protocol.h"
 #include <cassert>
@@ -111,7 +112,7 @@ GSourceFuncs ServerSource::s_sourceFuncs = {
 
         if (source.pfd.revents & G_IO_IN) {
             struct wl_event_loop* eventLoop = wl_display_get_event_loop(source.display);
-            wl_event_loop_dispatch(eventLoop, -1);
+            wl_event_loop_dispatch(eventLoop, 0);
             wl_display_flush_clients(source.display);
         }
 
