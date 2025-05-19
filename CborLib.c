

#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>

typedef UINTN size_t;

void* malloc(size_t size) {
    void* ptr = NULL;
    gBS->AllocatePool(EfiBootServicesData, size, &ptr);
    return ptr;
}

void free(void* ptr) {
    gBS->FreePool(ptr);
}

