# PointersInC
Weekly Source Code #201801 


This project contains two separate code examples:
pointers_main.c
static_main.c, also uses counter.c to demo static functions file scope

Turn the "target membership" from the File Inspector of each file
(one at a time) on or off to include it in the build.

Easy way to find the build target is to:
    - Click on target in Products folder
    - If file inspector (right-sidebar) isn't visible, show it.
    - Full path will be visible in file Identity and Type info.

Note:
This path does not change through subsequent builds.
Build clean removes the target, keeps other files/folders in output path.
Build after a clean puts the file back in the same spot.

Slighty longer way to find the build target:
    - Right-click on target in Products folder
    - Choose 'Show in Finder'
    - From the finder window see wicked long path, skip that and run the target (double-click)
    - In the console window that opens, the path is available for copying, copy it.

Easy way to create a symbolic link to the build target:
    - Do the above and copy the path.
    - Open a new terminal window
    - Navigate to the project folder being worked
    - Make a bin folder (just for cleanliness) and navigate inside it
    - Create a link via ln -s {target full path} {shortname, e.g. _ProductName}

Next:
    Nothing planned.  This project can serve as a stub for many experiments.

