
reset:
    ldr sp, =stack_top
    bl main

stop:
    b stop

#end of file