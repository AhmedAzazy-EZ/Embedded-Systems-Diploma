#
#	startup.s
#
#  Created on: Oct 31, 2021
#      Author: Ahmed Azazy
#

reset:
    ldr sp, =stack_top
    bl main

stop:
    b stop

#end of file