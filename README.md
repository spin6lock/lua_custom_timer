# lua_custom_timer
add millisecond timer for lua
Lua provides os.time() and os.clock() for users. But os.clock() is pure CPU time, IO time is not included. And os.time() gives out seconds precise. It's too large for profiling. This timer gives out milliseconds precise with system-api gettimeofday. 

Prerequisites
==============
Works on Lua53, should be working on Lua52, too.

Not working on Windows, use [HiRes](http://lua-users.org/wiki/HiResTimer) library instead.
