
This file is to get to know the following things.
  The purpose of every commit
  what are the changes made in every commit.
  why these changes are required
  End result
  Any Issues

1st Commit for Heap Memory driver.
  This commit is to create a Heap memory Dxe driver
  Changes:
    1. Since we are using ENTRY_POINT in INF Defines, Added a UefiDriverEntryPoint in LibraryClasses
       because _ModuleEntryPoint function definition is available in UefiDriverEntryPoint library.
    2. Since we are creating a Dxe driver. MODULE_TYPE = DXE_DRIVER.
    3. Sources section contains what are the source files associated with this INF.
    4. Inorder to dispatch Dxe driver, In Depex section, need to pass some expression or TRUE to dispatch this driver.
    5. In C File, created a EntryPoint function which will directly return the Success.
    6. Since entry point function is used here, added the UefiDriverEntryPoint.h using #include to get function declaration.
    7. Since UefiDriverEntryPoint.h is available in MdePkg. So, MdePkg.dec is added under INF packages section.
    8. Since this driver is part of EmulatorPkg. So, EmulatorPkg.dec is also added under INF section.
    9. Added this driver entry in .dsc file to build this module in the build process.
    10. Added this driver entry in .fdf file to add this driver in bootable file. 
  As per the Boot.log
    we see that HeapMemory driver got dispatched in the boot process.

2nd Commit for Heap Memory driver.
  This commit is to add a debug message in Heap memory Dxe driver
  Changes:
    1. Added a debug msg in entry point function.
    2. So, added a #include for DebugLib.h to get the declaration. 
    3. Since DebugLib is available in MdeModulePkg added it's dec file under packages section in INF.
    4. Added DebugLib under library classes to get the definition.
  As per the Boot.log
    we see that driver got dispatched and no debug message got printed.
  The above issue is due to no debug libraries available for HeapMemoryDriver.

3rd Commit for Heap Memory driver.
  This commit is to add debug libraries for our driver.
  Changes:
    1. added debug libraries in .fdf
  As per the Boot.log
    Able to see debug message printed. 
