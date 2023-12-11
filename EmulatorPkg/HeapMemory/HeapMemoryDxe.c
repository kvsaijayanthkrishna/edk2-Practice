/*
This driver is to allocate heap memory and use it for debug purposes.

Copyright ...
*/

#include <Library/UefiDriverEntryPoint.h>
#include <Library/DebugLib.h>

EFI_STATUS
EFIAPI
HeapMemoryEntryPoint(
  EFI_HANDLE        ImageHandle,
  EFI_SYSTEM_TABLE* SystemTable
) {
  EFI_STATUS        Status;

  DEBUG((DEBUG_INFO, "%a.() Entry\n", __FUNCTION__));
  Status = EFI_SUCCESS;

  return Status;
}
