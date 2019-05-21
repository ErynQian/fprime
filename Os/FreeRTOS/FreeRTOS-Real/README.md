# CubeRover Single Board Computer (SBC) Firmware

This repository contains the bulk of the firmware developed to run the single board computer (SBC) that operates the CubeRover Lunar rover. This includes software run on the system's main MCU, a TI Hercules series MCU.

## Repo setup notes:

This repo uses Cuberover-Comms as a submodule, so after cloning, ensure that you run `>git submodule update --recursive` in the root directory of the repo. You can use `git pull` and other git operations from within the cuberover-comms subdirectory to update/push to that repository.

## Style Guide and Requirements

Writing software for space applications involves following standards and rules that ensure the development of robust and safe software. The main standard that shall be followed is the [JPL Institutional Coding Standard for the C Programming Language](https://lars-lab.jpl.nasa.gov/JPL_Coding_Standard_C.pdf). Please review this document and ensure that it's rules are followed.


### Doxygen Usage:

In order to generate basic documentation of the software codebase, the use of [Doxygen](http://www.stack.nl/~dimitri/doxygen/) is mandatory in all new files. Please become familiar with its implementation, generic file types will be available soon.

Doxygen's configuration file is located in Docs/doxyfile. To recuce commit size and to make sure everything is up to date, doxygen outputs are not tracked. To generate docs, open Doxywizard, go to file->open, and navigate to the doxyfile in the Docs folder. To create the docs, navigate to the "Run" tab and click "Run Doxygen." Docs are exported as html and latex in their respective folders. To view them, open html/index.html or the "Documentation" shortcut in the Docs folder.

## Requirements

Windows 7/8/10

[Code Composer Studio 7.0](http://www.ti.com/tool/CCSTUDIO)

[HALCoGen 4.07](http://www.ti.com/tool/HALCOGEN)

[GitHub Desktop](https://desktop.github.com/)
