//
// CrashDrv driver/test constants
//

#define FILE_DEVICE_CRASHDRV              0x00008000


#define TEST_CHECK_REQUEST              0
#define TEST_BUGCHECK                   1
#define TEST_STACK_OVERFLOW             2
#define TEST_SIMPLE                     3
#define TEST_EXCEPTION                  4
#define TEST_HARDERR                    5
#define TEST_SPECIAL                    6

#define IOCTL_CRASHDRV_CHECK_REQUEST      CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_CHECK_REQUEST,  METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_BUGCHECK           CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_BUGCHECK,       METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_STACK_OVERFLOW     CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_STACK_OVERFLOW, METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_SIMPLE             CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_SIMPLE,         METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_EXCEPTION          CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_EXCEPTION,      METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_HARDERR            CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_HARDERR,        METHOD_OUT_DIRECT,FILE_ANY_ACCESS)
#define IOCTL_CRASHDRV_SPECIAL            CTL_CODE(FILE_DEVICE_CRASHDRV, TEST_SPECIAL,        METHOD_OUT_DIRECT,FILE_ANY_ACCESS)


//
// prototypes
//

VOID
CrashDrvStackOverFlow(
    PULONG ub
    );

VOID
CrashDrvBugCheck(
    PULONG ub
    );

VOID
CrashDrvSimpleTest(
    PULONG ub
    );

VOID
CrashDrvExceptionTest(
    PULONG ub
    );

VOID
CrashDrvHardError(
    PULONG ub
    );

VOID
CrashSpecial(
    PULONG ub
    );
