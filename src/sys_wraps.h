#ifndef UNIT_TESTS
void __wrap_SYS_disableInts(void);
void __wrap_SYS_enableInts(void);
#endif
void sys_wraps_preventDisablingOfInts(void);
