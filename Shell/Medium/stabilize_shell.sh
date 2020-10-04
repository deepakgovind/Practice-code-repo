#!/bin/bash

# Run this Script to Stabilize a broken (reverse) shell 
source "/opt/pmp/functions.sh"

hide_guake
call_cmd "python -c 'import pty; pty.spawn(\"/bin/bash\")'"
ctrl Z
call_cmd "stty raw -echo"
call_cmd "fg"
# if you get error of "xterm-256color:Unknown terminal type" then change this: 
# TERM=xterm
call_cmd "export TERM=xterm-256color"
