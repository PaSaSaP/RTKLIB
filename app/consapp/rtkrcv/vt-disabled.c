#include "vt.h"

extern vt_t *vt_open(int sock, const char *dev)
{
    static vt_t vt;
    vt.state=0;
    vt.type=1;
    return &vt;
}

extern void vt_close(vt_t *vt)
{
}

extern int vt_getc(vt_t *vt, char *c)
{
    return 1;
}

extern int vt_gets(vt_t *vt, char *buff, int n)
{
    return 1;
}

extern int vt_putc(vt_t *vt, char c)
{
    return 1;
}

extern int vt_puts(vt_t *vt, const char *buff)
{
    return 1;
}

extern int vt_printf(vt_t *vt, const char *format, ...)
{
    return 1;
}

extern int vt_chkbrk(vt_t *vt)
{
    return 0;
}

extern int vt_openlog(vt_t *vt, const char *file)
{
    return 1;
}

extern void vt_closelog(vt_t *vt)
{
}
