#include <ntifs.h>
#define CTL_FORCEDELETE (DWORD32)CTL_CODE(FILE_DEVICE_UNKNOWN,0xDD0,METHOD_BUFFERED,FILE_ALL_ACCESS)
#define CTL_GETPATHBYPID (DWORD32)CTL_CODE(FILE_DEVICE_UNKNOWN,0xDD1,METHOD_BUFFERED,FILE_ALL_ACCESS)
void DriverUnload(IN PDRIVER_OBJECT DriverObject);
NTSTATUS IoControl(PDEVICE_OBJECT DriverObject, PIRP Irp);
NTSTATUS OnMaJor(PDEVICE_OBJECT device, PIRP irp);
BOOLEAN ForceDeleteFile(WCHAR *szFileName);
NTSTATUS GetProcessImagePath(ULONG dwProcessId, PUNICODE_STRING ProcessImagePath);