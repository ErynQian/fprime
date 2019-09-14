As of 9/14/2019, it is now possible to build the Ref application for a FreeRTOS-based Hercules target (TIR4). Note that not all of the Ref application will work as expected, because the Os/FreeRTOS/File.cpp and Os/FreeRTOS/FileSystem.cpp files are filled with stubbed out implementations, so calls to those functions will do nothing.

In order to build for the Hercules target, CCSV8 must be installed. Additionally, the TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH environment variable must be set before building. This can either be done by exporting it in the terminal you will be building from before running the build:
```
$ export TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH="/home/mschnur/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS"
```
or the same definition can be added to your `~/.bashrc` file so that you don't need to re-define the environment variable every time you want to build from a new terminal:
```
$ nano ~/.bashrc
  #
  # Add something similar to:
  #   export TI_CCSV8_TOOLS_COMPILER_TI_CGT_ARM_PATH="/home/mschnur/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS"
  # to the end of your .bashrc, then save and close it.
  #
$ source ~/.bashrc
```
Defining this environment variable allows this code to be build without modification no matter where CCSV8 was installed.

To build the Ref application, run the following commands (assuming the current working directory is the root of this repository):
```
cd Ref
make gen_make
make TIR4
```
If an error occurs while running one of the make commands, it may be possible that you have old versions of certain files that aren't being properly refreshed. If such an error occurs, first try to clean out any built files before retrying the build (assuming the current working directory is the `Ref` directory):
```
make clean
make gen_make
make TIR4
```


