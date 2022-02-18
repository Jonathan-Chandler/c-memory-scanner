# 0 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
# 1 "C:\\work\\c\\memscan-dll\\lisp\\ecl-21.2.1\\build\\atomic\\tests//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 1
# 27 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/ao_version.h" 1
# 28 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 2



# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/assert.h" 1 3
# 15 "C:/msys64/mingw32/i686-w64-mingw32/include/assert.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_mac.h" 1 3
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_secapi.h" 1 3
# 12 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 287 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 1 3
# 9 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3
# 621 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 622 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 24 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3
  
# 24 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3
#pragma pack(pop)
# 288 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 584 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{

  __asm__ __volatile__("int {$}3":);







}




const char *__mingw_get_crt_info (void);
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 37 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef unsigned int size_t;
# 47 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int ssize_t;




typedef size_t rsize_t;
# 64 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int intptr_t;
# 77 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef unsigned int uintptr_t;
# 90 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int ptrdiff_t;







typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 136 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef __time32_t time_t;
# 430 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {





  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;

} threadlocinfo;
# 501 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt.h" 3
#pragma pack(pop)
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 2 3
# 16 "C:/msys64/mingw32/i686-w64-mingw32/include/assert.h" 2 3
# 24 "C:/msys64/mingw32/i686-w64-mingw32/include/assert.h" 3
__attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wassert(const wchar_t *_Message,const wchar_t *_File,unsigned _Line);
__attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _assert (const char *_Message, const char *_File, unsigned _Line);
# 32 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 2
# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include/stddef.h" 1 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stddef.h" 1 3 4
# 18 "C:/msys64/mingw32/i686-w64-mingw32/include/stddef.h" 3 4
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);


  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 424 "C:/msys64/mingw32/i686-w64-mingw32/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 2 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include/stddef.h" 2 3 4
# 33 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 2
# 288 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/x86.h" 1
# 423 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/x86.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/standard_ao_double_t.h" 1
# 53 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/standard_ao_double_t.h"
  
# 53 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/standard_ao_double_t.h"
 typedef unsigned long long double_ptr_storage
                                __attribute__((__aligned__(8)));





typedef union {
    struct { size_t AO_v1; size_t AO_v2; } AO_parts;


    double_ptr_storage AO_whole;




} AO_double_t;
# 78 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/standard_ao_double_t.h"
struct AO_double_t_size_static_assert {
    char dummy[sizeof(AO_double_t) == 2 * sizeof(size_t) ? 1 : -1];
};
# 424 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/x86.h" 2
# 597 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/x86.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h" 1
# 23 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/test_and_set_t_is_char.h" 1
# 38 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/test_and_set_t_is_char.h"
typedef enum {
  AO_BYTE_TS_clear = 0,
  AO_BYTE_TS_set = 1
} AO_BYTE_TS_val;
# 24 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h" 2
# 62 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h"
  static __inline void
  AO_nop_read(void)
  {
    __atomic_thread_fence(2);
  }



    static __inline void
    AO_nop_write(void)
    {
      __atomic_thread_fence(3);
    }



  static __inline void
  AO_nop_full(void)
  {

    __atomic_thread_fence(5);
  }



# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h" 1
# 20 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
static __inline unsigned char
AO_char_load(const volatile unsigned char *addr)
{
  return __atomic_load_n(addr, 0);
}


static __inline unsigned char
AO_char_load_acquire(const volatile unsigned char *addr)
{
  return __atomic_load_n(addr, 2);
}
# 50 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
  static __inline void
  AO_char_store(volatile unsigned char *addr, unsigned char value)
  {
    __atomic_store_n(addr, value, 0);
  }




  static __inline void
  AO_char_store_release(volatile unsigned char *addr, unsigned char value)
  {
    __atomic_store_n(addr, value, 3);
  }







  static __inline unsigned char
  AO_char_fetch_compare_and_swap(volatile unsigned char *addr,
                                  unsigned char old_val, unsigned char new_val)
  {
    (void)__atomic_compare_exchange_n(addr,
                                      &old_val ,
                                      new_val ,
                                      0 ,
                                      0 ,
                                      0 );
    return old_val;
  }


  static __inline unsigned char
  AO_char_fetch_compare_and_swap_acquire(volatile unsigned char *addr,
                                          unsigned char old_val, unsigned char new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      2, 2);
    return old_val;
  }


  static __inline unsigned char
  AO_char_fetch_compare_and_swap_release(volatile unsigned char *addr,
                                          unsigned char old_val, unsigned char new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      3,
                                      0 );
    return old_val;
  }


  static __inline unsigned char
  AO_char_fetch_compare_and_swap_full(volatile unsigned char *addr,
                                       unsigned char old_val, unsigned char new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      4,
                                      2 );
    return old_val;
  }



    static __inline int
    AO_char_compare_and_swap(volatile unsigned char *addr,
                              unsigned char old_val, unsigned char new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        0, 0);
    }


    static __inline int
    AO_char_compare_and_swap_acquire(volatile unsigned char *addr,
                                      unsigned char old_val, unsigned char new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        2, 2);
    }


    static __inline int
    AO_char_compare_and_swap_release(volatile unsigned char *addr,
                                      unsigned char old_val, unsigned char new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              3,
                                              0 );
    }


    static __inline int
    AO_char_compare_and_swap_full(volatile unsigned char *addr,
                                   unsigned char old_val, unsigned char new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              4,
                                              2 );
    }
# 178 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
static __inline unsigned short
AO_short_load(const volatile unsigned short *addr)
{
  return __atomic_load_n(addr, 0);
}


static __inline unsigned short
AO_short_load_acquire(const volatile unsigned short *addr)
{
  return __atomic_load_n(addr, 2);
}
# 208 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
  static __inline void
  AO_short_store(volatile unsigned short *addr, unsigned short value)
  {
    __atomic_store_n(addr, value, 0);
  }




  static __inline void
  AO_short_store_release(volatile unsigned short *addr, unsigned short value)
  {
    __atomic_store_n(addr, value, 3);
  }







  static __inline unsigned short
  AO_short_fetch_compare_and_swap(volatile unsigned short *addr,
                                  unsigned short old_val, unsigned short new_val)
  {
    (void)__atomic_compare_exchange_n(addr,
                                      &old_val ,
                                      new_val ,
                                      0 ,
                                      0 ,
                                      0 );
    return old_val;
  }


  static __inline unsigned short
  AO_short_fetch_compare_and_swap_acquire(volatile unsigned short *addr,
                                          unsigned short old_val, unsigned short new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      2, 2);
    return old_val;
  }


  static __inline unsigned short
  AO_short_fetch_compare_and_swap_release(volatile unsigned short *addr,
                                          unsigned short old_val, unsigned short new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      3,
                                      0 );
    return old_val;
  }


  static __inline unsigned short
  AO_short_fetch_compare_and_swap_full(volatile unsigned short *addr,
                                       unsigned short old_val, unsigned short new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      4,
                                      2 );
    return old_val;
  }



    static __inline int
    AO_short_compare_and_swap(volatile unsigned short *addr,
                              unsigned short old_val, unsigned short new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        0, 0);
    }


    static __inline int
    AO_short_compare_and_swap_acquire(volatile unsigned short *addr,
                                      unsigned short old_val, unsigned short new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        2, 2);
    }


    static __inline int
    AO_short_compare_and_swap_release(volatile unsigned short *addr,
                                      unsigned short old_val, unsigned short new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              3,
                                              0 );
    }


    static __inline int
    AO_short_compare_and_swap_full(volatile unsigned short *addr,
                                   unsigned short old_val, unsigned short new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              4,
                                              2 );
    }
# 336 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
static __inline unsigned
AO_int_load(const volatile unsigned *addr)
{
  return __atomic_load_n(addr, 0);
}


static __inline unsigned
AO_int_load_acquire(const volatile unsigned *addr)
{
  return __atomic_load_n(addr, 2);
}
# 366 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
  static __inline void
  AO_int_store(volatile unsigned *addr, unsigned value)
  {
    __atomic_store_n(addr, value, 0);
  }




  static __inline void
  AO_int_store_release(volatile unsigned *addr, unsigned value)
  {
    __atomic_store_n(addr, value, 3);
  }







  static __inline unsigned
  AO_int_fetch_compare_and_swap(volatile unsigned *addr,
                                  unsigned old_val, unsigned new_val)
  {
    (void)__atomic_compare_exchange_n(addr,
                                      &old_val ,
                                      new_val ,
                                      0 ,
                                      0 ,
                                      0 );
    return old_val;
  }


  static __inline unsigned
  AO_int_fetch_compare_and_swap_acquire(volatile unsigned *addr,
                                          unsigned old_val, unsigned new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      2, 2);
    return old_val;
  }


  static __inline unsigned
  AO_int_fetch_compare_and_swap_release(volatile unsigned *addr,
                                          unsigned old_val, unsigned new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      3,
                                      0 );
    return old_val;
  }


  static __inline unsigned
  AO_int_fetch_compare_and_swap_full(volatile unsigned *addr,
                                       unsigned old_val, unsigned new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      4,
                                      2 );
    return old_val;
  }



    static __inline int
    AO_int_compare_and_swap(volatile unsigned *addr,
                              unsigned old_val, unsigned new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        0, 0);
    }


    static __inline int
    AO_int_compare_and_swap_acquire(volatile unsigned *addr,
                                      unsigned old_val, unsigned new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        2, 2);
    }


    static __inline int
    AO_int_compare_and_swap_release(volatile unsigned *addr,
                                      unsigned old_val, unsigned new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              3,
                                              0 );
    }


    static __inline int
    AO_int_compare_and_swap_full(volatile unsigned *addr,
                                   unsigned old_val, unsigned new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              4,
                                              2 );
    }
# 494 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
static __inline size_t
AO_load(const volatile size_t *addr)
{
  return __atomic_load_n(addr, 0);
}


static __inline size_t
AO_load_acquire(const volatile size_t *addr)
{
  return __atomic_load_n(addr, 2);
}
# 524 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-small.h"
  static __inline void
  AO_store(volatile size_t *addr, size_t value)
  {
    __atomic_store_n(addr, value, 0);
  }




  static __inline void
  AO_store_release(volatile size_t *addr, size_t value)
  {
    __atomic_store_n(addr, value, 3);
  }







  static __inline size_t
  AO_fetch_compare_and_swap(volatile size_t *addr,
                                  size_t old_val, size_t new_val)
  {
    (void)__atomic_compare_exchange_n(addr,
                                      &old_val ,
                                      new_val ,
                                      0 ,
                                      0 ,
                                      0 );
    return old_val;
  }


  static __inline size_t
  AO_fetch_compare_and_swap_acquire(volatile size_t *addr,
                                          size_t old_val, size_t new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      2, 2);
    return old_val;
  }


  static __inline size_t
  AO_fetch_compare_and_swap_release(volatile size_t *addr,
                                          size_t old_val, size_t new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      3,
                                      0 );
    return old_val;
  }


  static __inline size_t
  AO_fetch_compare_and_swap_full(volatile size_t *addr,
                                       size_t old_val, size_t new_val)
  {
    (void)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                      4,
                                      2 );
    return old_val;
  }



    static __inline int
    AO_compare_and_swap(volatile size_t *addr,
                              size_t old_val, size_t new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        0, 0);
    }


    static __inline int
    AO_compare_and_swap_acquire(volatile size_t *addr,
                                      size_t old_val, size_t new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                        2, 2);
    }


    static __inline int
    AO_compare_and_swap_release(volatile size_t *addr,
                                      size_t old_val, size_t new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              3,
                                              0 );
    }


    static __inline int
    AO_compare_and_swap_full(volatile size_t *addr,
                                   size_t old_val, size_t new_val)
    {
      return (int)__atomic_compare_exchange_n(addr, &old_val, new_val, 0,
                                              4,
                                              2 );
    }
# 88 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h" 2


# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h" 1
# 18 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned char
AO_char_fetch_and_add(volatile unsigned char *addr, unsigned char incr)
{
  return __atomic_fetch_add(addr, incr, 0);
}



  static __inline void
  AO_char_and(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_and_fetch(addr, value, 0);
  }




  static __inline void
  AO_char_or(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_or_fetch(addr, value, 0);
  }




  static __inline void
  AO_char_xor(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_xor_fetch(addr, value, 0);
  }
# 68 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned short
AO_short_fetch_and_add(volatile unsigned short *addr, unsigned short incr)
{
  return __atomic_fetch_add(addr, incr, 0);
}



  static __inline void
  AO_short_and(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_and_fetch(addr, value, 0);
  }




  static __inline void
  AO_short_or(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_or_fetch(addr, value, 0);
  }




  static __inline void
  AO_short_xor(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_xor_fetch(addr, value, 0);
  }
# 118 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned
AO_int_fetch_and_add(volatile unsigned *addr, unsigned incr)
{
  return __atomic_fetch_add(addr, incr, 0);
}



  static __inline void
  AO_int_and(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_and_fetch(addr, value, 0);
  }




  static __inline void
  AO_int_or(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_or_fetch(addr, value, 0);
  }




  static __inline void
  AO_int_xor(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_xor_fetch(addr, value, 0);
  }
# 168 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline size_t
AO_fetch_and_add(volatile size_t *addr, size_t incr)
{
  return __atomic_fetch_add(addr, incr, 0);
}



  static __inline void
  AO_and(volatile size_t *addr, size_t value)
  {
    (void)__atomic_and_fetch(addr, value, 0);
  }




  static __inline void
  AO_or(volatile size_t *addr, size_t value)
  {
    (void)__atomic_or_fetch(addr, value, 0);
  }




  static __inline void
  AO_xor(volatile size_t *addr, size_t value)
  {
    (void)__atomic_xor_fetch(addr, value, 0);
  }
# 218 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned char
AO_char_fetch_and_add_acquire(volatile unsigned char *addr, unsigned char incr)
{
  return __atomic_fetch_add(addr, incr, 2);
}



  static __inline void
  AO_char_and_acquire(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_and_fetch(addr, value, 2);
  }




  static __inline void
  AO_char_or_acquire(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_or_fetch(addr, value, 2);
  }




  static __inline void
  AO_char_xor_acquire(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_xor_fetch(addr, value, 2);
  }
# 268 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned short
AO_short_fetch_and_add_acquire(volatile unsigned short *addr, unsigned short incr)
{
  return __atomic_fetch_add(addr, incr, 2);
}



  static __inline void
  AO_short_and_acquire(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_and_fetch(addr, value, 2);
  }




  static __inline void
  AO_short_or_acquire(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_or_fetch(addr, value, 2);
  }




  static __inline void
  AO_short_xor_acquire(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_xor_fetch(addr, value, 2);
  }
# 318 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned
AO_int_fetch_and_add_acquire(volatile unsigned *addr, unsigned incr)
{
  return __atomic_fetch_add(addr, incr, 2);
}



  static __inline void
  AO_int_and_acquire(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_and_fetch(addr, value, 2);
  }




  static __inline void
  AO_int_or_acquire(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_or_fetch(addr, value, 2);
  }




  static __inline void
  AO_int_xor_acquire(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_xor_fetch(addr, value, 2);
  }
# 368 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline size_t
AO_fetch_and_add_acquire(volatile size_t *addr, size_t incr)
{
  return __atomic_fetch_add(addr, incr, 2);
}



  static __inline void
  AO_and_acquire(volatile size_t *addr, size_t value)
  {
    (void)__atomic_and_fetch(addr, value, 2);
  }




  static __inline void
  AO_or_acquire(volatile size_t *addr, size_t value)
  {
    (void)__atomic_or_fetch(addr, value, 2);
  }




  static __inline void
  AO_xor_acquire(volatile size_t *addr, size_t value)
  {
    (void)__atomic_xor_fetch(addr, value, 2);
  }
# 418 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned char
AO_char_fetch_and_add_release(volatile unsigned char *addr, unsigned char incr)
{
  return __atomic_fetch_add(addr, incr, 3);
}



  static __inline void
  AO_char_and_release(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_and_fetch(addr, value, 3);
  }




  static __inline void
  AO_char_or_release(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_or_fetch(addr, value, 3);
  }




  static __inline void
  AO_char_xor_release(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_xor_fetch(addr, value, 3);
  }
# 468 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned short
AO_short_fetch_and_add_release(volatile unsigned short *addr, unsigned short incr)
{
  return __atomic_fetch_add(addr, incr, 3);
}



  static __inline void
  AO_short_and_release(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_and_fetch(addr, value, 3);
  }




  static __inline void
  AO_short_or_release(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_or_fetch(addr, value, 3);
  }




  static __inline void
  AO_short_xor_release(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_xor_fetch(addr, value, 3);
  }
# 518 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned
AO_int_fetch_and_add_release(volatile unsigned *addr, unsigned incr)
{
  return __atomic_fetch_add(addr, incr, 3);
}



  static __inline void
  AO_int_and_release(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_and_fetch(addr, value, 3);
  }




  static __inline void
  AO_int_or_release(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_or_fetch(addr, value, 3);
  }




  static __inline void
  AO_int_xor_release(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_xor_fetch(addr, value, 3);
  }
# 568 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline size_t
AO_fetch_and_add_release(volatile size_t *addr, size_t incr)
{
  return __atomic_fetch_add(addr, incr, 3);
}



  static __inline void
  AO_and_release(volatile size_t *addr, size_t value)
  {
    (void)__atomic_and_fetch(addr, value, 3);
  }




  static __inline void
  AO_or_release(volatile size_t *addr, size_t value)
  {
    (void)__atomic_or_fetch(addr, value, 3);
  }




  static __inline void
  AO_xor_release(volatile size_t *addr, size_t value)
  {
    (void)__atomic_xor_fetch(addr, value, 3);
  }
# 618 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned char
AO_char_fetch_and_add_full(volatile unsigned char *addr, unsigned char incr)
{
  return __atomic_fetch_add(addr, incr, 5);
}



  static __inline void
  AO_char_and_full(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_and_fetch(addr, value, 5);
  }




  static __inline void
  AO_char_or_full(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_or_fetch(addr, value, 5);
  }




  static __inline void
  AO_char_xor_full(volatile unsigned char *addr, unsigned char value)
  {
    (void)__atomic_xor_fetch(addr, value, 5);
  }
# 668 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned short
AO_short_fetch_and_add_full(volatile unsigned short *addr, unsigned short incr)
{
  return __atomic_fetch_add(addr, incr, 5);
}



  static __inline void
  AO_short_and_full(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_and_fetch(addr, value, 5);
  }




  static __inline void
  AO_short_or_full(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_or_fetch(addr, value, 5);
  }




  static __inline void
  AO_short_xor_full(volatile unsigned short *addr, unsigned short value)
  {
    (void)__atomic_xor_fetch(addr, value, 5);
  }
# 718 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline unsigned
AO_int_fetch_and_add_full(volatile unsigned *addr, unsigned incr)
{
  return __atomic_fetch_add(addr, incr, 5);
}



  static __inline void
  AO_int_and_full(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_and_fetch(addr, value, 5);
  }




  static __inline void
  AO_int_or_full(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_or_fetch(addr, value, 5);
  }




  static __inline void
  AO_int_xor_full(volatile unsigned *addr, unsigned value)
  {
    (void)__atomic_xor_fetch(addr, value, 5);
  }
# 768 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic-arithm.h"
static __inline size_t
AO_fetch_and_add_full(volatile size_t *addr, size_t incr)
{
  return __atomic_fetch_add(addr, incr, 5);
}



  static __inline void
  AO_and_full(volatile size_t *addr, size_t value)
  {
    (void)__atomic_and_fetch(addr, value, 5);
  }




  static __inline void
  AO_or_full(volatile size_t *addr, size_t value)
  {
    (void)__atomic_or_fetch(addr, value, 5);
  }




  static __inline void
  AO_xor_full(volatile size_t *addr, size_t value)
  {
    (void)__atomic_xor_fetch(addr, value, 5);
  }
# 91 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h" 2




  static __inline AO_BYTE_TS_val
  AO_test_and_set(volatile unsigned char *addr)
  {
    return (AO_BYTE_TS_val)__atomic_test_and_set(addr, 0);
  }


  static __inline AO_BYTE_TS_val
  AO_test_and_set_acquire(volatile unsigned char *addr)
  {
    return (AO_BYTE_TS_val)__atomic_test_and_set(addr, 2);
  }


  static __inline AO_BYTE_TS_val
  AO_test_and_set_release(volatile unsigned char *addr)
  {
    return (AO_BYTE_TS_val)__atomic_test_and_set(addr, 3);
  }


  static __inline AO_BYTE_TS_val
  AO_test_and_set_full(volatile unsigned char *addr)
  {
    return (AO_BYTE_TS_val)__atomic_test_and_set(addr, 5);
  }
# 137 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h"
    static __inline AO_double_t
    AO_double_load(const volatile AO_double_t *addr)
    {
      AO_double_t result;

      result.AO_whole = __atomic_load_n(&addr->AO_whole, 0);
      return result;
    }





    static __inline AO_double_t
    AO_double_load_acquire(const volatile AO_double_t *addr)
    {
      AO_double_t result;

      result.AO_whole = __atomic_load_n(&addr->AO_whole, 2);
      return result;
    }




    static __inline void
    AO_double_store(volatile AO_double_t *addr, AO_double_t value)
    {
      __atomic_store_n(&addr->AO_whole, value.AO_whole, 0);
    }





    static __inline void
    AO_double_store_release(volatile AO_double_t *addr, AO_double_t value)
    {
      __atomic_store_n(&addr->AO_whole, value.AO_whole, 3);
    }
# 186 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/generic.h"
    static __inline int
    AO_double_compare_and_swap(volatile AO_double_t *addr,
                               AO_double_t old_val, AO_double_t new_val)
    {
      return (int)__atomic_compare_exchange_n(&addr->AO_whole,
                                &old_val.AO_whole ,
                                new_val.AO_whole ,
                                0 ,
                                0 ,
                                0 );
    }




    static __inline int
    AO_double_compare_and_swap_acquire(volatile AO_double_t *addr,
                                       AO_double_t old_val,
                                       AO_double_t new_val)
    {
      return (int)__atomic_compare_exchange_n(&addr->AO_whole,
                                &old_val.AO_whole, new_val.AO_whole, 0,
                                2, 2);
    }




    static __inline int
    AO_double_compare_and_swap_release(volatile AO_double_t *addr,
                                       AO_double_t old_val,
                                       AO_double_t new_val)
    {
      return (int)__atomic_compare_exchange_n(&addr->AO_whole,
                                &old_val.AO_whole, new_val.AO_whole, 0,
                                3,
                                0 );
    }




    static __inline int
    AO_double_compare_and_swap_full(volatile AO_double_t *addr,
                                    AO_double_t old_val, AO_double_t new_val)
    {
      return (int)__atomic_compare_exchange_n(&addr->AO_whole,
                                &old_val.AO_whole, new_val.AO_whole, 0,
                                4,
                                2 );
    }
# 598 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/sysdeps/gcc/x86.h" 2
# 289 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 2
# 440 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize.h" 1
# 176 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize.h"
  static __inline void AO_nop(void) {}
# 304 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize.h"
# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h" 1
# 295 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h"
  static __inline unsigned char
  AO_char_load_read(const volatile unsigned char *addr)
  {
    unsigned char result = AO_char_load(addr);

    AO_nop_read();
    return result;
  }
# 823 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h"
  static __inline unsigned short
  AO_short_load_read(const volatile unsigned short *addr)
  {
    unsigned short result = AO_short_load(addr);

    AO_nop_read();
    return result;
  }
# 1351 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h"
  static __inline unsigned
  AO_int_load_read(const volatile unsigned *addr)
  {
    unsigned result = AO_int_load(addr);

    AO_nop_read();
    return result;
  }
# 1879 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h"
  static __inline size_t
  AO_load_read(const volatile size_t *addr)
  {
    size_t result = AO_load(addr);

    AO_nop_read();
    return result;
  }
# 2407 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-small.h"
  static __inline AO_double_t
  AO_double_load_read(const volatile AO_double_t *addr)
  {
    AO_double_t result = AO_double_load(addr);

    AO_nop_read();
    return result;
  }
# 305 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize.h" 2

# 1 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize-arithm.h" 1
# 307 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops/generalize.h" 2





   static __inline int
   AO_compare_double_and_swap_double(volatile AO_double_t *addr,
                                     size_t old_val1, size_t old_val2,
                                     size_t new_val1, size_t new_val2)
   {
     AO_double_t old_w;
     AO_double_t new_w;
     old_w.AO_parts.AO_v1 = old_val1;
     old_w.AO_parts.AO_v2 = old_val2;
     new_w.AO_parts.AO_v1 = new_val1;
     new_w.AO_parts.AO_v2 = new_val2;
     return AO_double_compare_and_swap(addr, old_w, new_w);
   }




    static __inline int
    AO_compare_double_and_swap_double_acquire(volatile AO_double_t *addr,
                                              size_t old_val1, size_t old_val2,
                                              size_t new_val1, size_t new_val2)
    {
      AO_double_t old_w;
      AO_double_t new_w;
      old_w.AO_parts.AO_v1 = old_val1;
      old_w.AO_parts.AO_v2 = old_val2;
      new_w.AO_parts.AO_v1 = new_val1;
      new_w.AO_parts.AO_v2 = new_val2;
      return AO_double_compare_and_swap_acquire(addr, old_w, new_w);
    }




    static __inline int
    AO_compare_double_and_swap_double_release(volatile AO_double_t *addr,
                                              size_t old_val1, size_t old_val2,
                                              size_t new_val1, size_t new_val2)
    {
      AO_double_t old_w;
      AO_double_t new_w;
      old_w.AO_parts.AO_v1 = old_val1;
      old_w.AO_parts.AO_v2 = old_val2;
      new_w.AO_parts.AO_v1 = new_val1;
      new_w.AO_parts.AO_v2 = new_val2;
      return AO_double_compare_and_swap_release(addr, old_w, new_w);
    }




    static __inline int
    AO_compare_double_and_swap_double_full(volatile AO_double_t *addr,
                                           size_t old_val1, size_t old_val2,
                                           size_t new_val1, size_t new_val2)
    {
      AO_double_t old_w;
      AO_double_t new_w;
      old_w.AO_parts.AO_v1 = old_val1;
      old_w.AO_parts.AO_v2 = old_val2;
      new_w.AO_parts.AO_v1 = new_val1;
      new_w.AO_parts.AO_v2 = new_val2;
      return AO_double_compare_and_swap_full(addr, old_w, new_w);
    }
# 441 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/src/atomic_ops.h" 2
# 2 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c" 2
# 15 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt_wstdlib.h" 1 3
# 15 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt_wstdlib.h" 3
  
# 15 "C:/msys64/mingw32/i686-w64-mingw32/include/corecrt_wstdlib.h" 3
 __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itow_s (int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltow_s (long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultow_s (unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,const wchar_t *_VarName);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wdupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64tow_s(long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64tow_s(unsigned long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wmakepath_s(wchar_t *_PathResult,size_t _SizeInWords,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wputenv_s(const wchar_t *_Name,const wchar_t *_Value);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsearchenv_s(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath,size_t _SizeInWords);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsplitpath_s(const wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSizeInWords,wchar_t *_Dir,size_t _DirSizeInWords,wchar_t *_Filename,size_t _FilenameSizeInWords,wchar_t *_Ext,size_t _ExtSizeInWords);
 
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 1 3 4
# 34 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 3 4
# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/syslimits.h" 1 3 4






# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 1 3 4
# 203 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/limits.h" 1 3 4
# 204 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 2 3 4
# 8 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/syslimits.h" 2 3 4
# 35 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include-fixed/limits.h" 2 3 4
# 12 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 26 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
#pragma pack(push,_CRT_PACKING)
# 50 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef int (__attribute__((__cdecl__)) *_onexit_t)(void);
# 60 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



  typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;

       


  typedef struct {
    long double x;
  } _LONGDOUBLE;

       

#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 116 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern int * _imp____mb_cur_max;




__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ___mb_cur_max_func(void);
# 143 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef void (__attribute__((__cdecl__)) *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _get_purecall_handler(void);

  typedef void (__attribute__((__cdecl__)) *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _get_invalid_parameter_handler(void);
# 159 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  __attribute__ ((__dllimport__)) unsigned long *__attribute__((__cdecl__)) __doserrno(void);

  errno_t __attribute__((__cdecl__)) _set_doserrno(unsigned long _Value);
  errno_t __attribute__((__cdecl__)) _get_doserrno(unsigned long *_Value);
# 173 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern __attribute__((dllimport)) char *_sys_errlist[1];
  extern __attribute__((dllimport)) int _sys_nerr;





  __attribute__ ((__dllimport__)) char ***__attribute__((__cdecl__)) __p___argv(void);
  __attribute__ ((__dllimport__)) int *__attribute__((__cdecl__)) __p__fmode(void);

  __attribute__ ((__dllimport__)) int *__attribute__((__cdecl__)) __p___argc(void);
  __attribute__ ((__dllimport__)) wchar_t ***__attribute__((__cdecl__)) __p___wargv(void);
  __attribute__ ((__dllimport__)) char ***__attribute__((__cdecl__)) __p__environ(void);
  __attribute__ ((__dllimport__)) wchar_t ***__attribute__((__cdecl__)) __p__wenviron(void);
  __attribute__ ((__dllimport__)) char **__attribute__((__cdecl__)) __p__pgmptr(void);
  __attribute__ ((__dllimport__)) wchar_t **__attribute__((__cdecl__)) __p__wpgmptr(void);


  errno_t __attribute__((__cdecl__)) _get_pgmptr(char **_Value);
  errno_t __attribute__((__cdecl__)) _get_wpgmptr(wchar_t **_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_fmode(int *_PMode);
# 282 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern int * _imp____argc;



  extern char *** _imp____argv;



  extern wchar_t *** _imp____wargv;
# 322 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern char *** _imp___environ;




  extern wchar_t *** _imp___wenviron;






  extern char ** _imp___pgmptr;




  extern wchar_t ** _imp___wpgmptr;




  extern unsigned int * _imp___osplatform;




  extern unsigned int * _imp___osver;




  extern unsigned int * _imp___winver;




  extern unsigned int * _imp___winmajor;




  extern unsigned int * _imp___winminor;





  errno_t __attribute__((__cdecl__)) _get_osplatform(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_osver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winmajor(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winminor(unsigned int *_Value);
# 388 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));






  void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((__noreturn__));

  extern inline __attribute__((__gnu_inline__)) __attribute__ ((__noreturn__)) void __attribute__((__cdecl__)) _Exit(int status)
  { _exit(status); }



       

  void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) abort(void);
       



  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);


  __extension__ long long __attribute__((__cdecl__)) _abs64(long long);

  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) long long __attribute__((__cdecl__)) _abs64(long long x) {
    return __builtin_llabs(x);
  }


  int __attribute__((__cdecl__)) atexit(void (__attribute__((__cdecl__)) *)(void));





  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);

  int __attribute__((__cdecl__)) atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoi_l(const char *_Str,_locale_t _Locale);
  long __attribute__((__cdecl__)) atol(const char *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atol_l(const char *_Str,_locale_t _Locale);


  void *__attribute__((__cdecl__)) bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));
  void __attribute__((__cdecl__)) qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));

  unsigned short __attribute__((__cdecl__)) _byteswap_ushort(unsigned short _Short);
  unsigned long __attribute__((__cdecl__)) _byteswap_ulong (unsigned long _Long);
  __extension__ unsigned long long __attribute__((__cdecl__)) _byteswap_uint64(unsigned long long _Int64);
  div_t __attribute__((__cdecl__)) div(int _Numerator,int _Denominator);
  char *__attribute__((__cdecl__)) getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __attribute__((__cdecl__)) ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ltoa(long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mkstemp(char *template_name);
  int __attribute__((__cdecl__)) rand(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_error_mode(int _Mode);
  void __attribute__((__cdecl__)) srand(unsigned int _Seed);
# 483 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}






  long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);







  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __attribute__((__cdecl__)) __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int __attribute__((__cdecl__)) system(const char *_Command);

  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void *__attribute__((__cdecl__)) calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __attribute__((__cdecl__)) free(void *_Memory);
  void *__attribute__((__cdecl__)) malloc(size_t _Size);
  void *__attribute__((__cdecl__)) realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _recalloc(void *_Memory,size_t _Count,size_t _Size);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_malloc(size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;

  double __attribute__((__cdecl__)) __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  double __attribute__((__cdecl__)) wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  float __attribute__((__cdecl__)) wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }






  long double __attribute__((__cdecl__)) wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putenv(const char *_EnvString);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wputenv(const wchar_t *_EnvString);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
# 634 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long,int);
unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long,int);





  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __attribute__((__cdecl__)) _onexit(_onexit_t _Func);



  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);

       
       


  __extension__ unsigned long long __attribute__((__cdecl__)) _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long Value,int Shift);
       
       
       
       


  unsigned int __attribute__((__cdecl__)) _rotr(unsigned int _Val,int _Shift);
  unsigned int __attribute__((__cdecl__)) _rotl(unsigned int _Val,int _Shift);
       
       
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 705 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  char *__attribute__((__cdecl__)) ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char *__attribute__((__cdecl__)) itoa(int _Val,char *_DstBuf,int _Radix) ;
  char *__attribute__((__cdecl__)) ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int __attribute__((__cdecl__)) putenv(const char *_EnvString) ;



  void __attribute__((__cdecl__)) swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;


  char *__attribute__((__cdecl__)) ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t __attribute__((__cdecl__)) onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t __attribute__((__cdecl__)) lldiv(long long, long long);

  __extension__ long long __attribute__((__cdecl__)) llabs(long long);

  __extension__ extern inline __attribute__((__gnu_inline__)) long long __attribute__((__cdecl__)) llabs(long long _j) { return (_j >= 0 ? _j : -_j); }


  __extension__ long long __attribute__((__cdecl__)) strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long __attribute__((__cdecl__)) strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long __attribute__((__cdecl__)) atoll (const char *);


  __extension__ long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
  __extension__ char *__attribute__((__cdecl__)) lltoa (long long, char *, int);
  __extension__ char *__attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);



  __extension__ extern inline __attribute__((__gnu_inline__)) long long __attribute__((__cdecl__)) atoll (const char * _c) { return _atoi64 (_c); }
  __extension__ extern inline __attribute__((__gnu_inline__)) char *__attribute__((__cdecl__)) lltoa (long long _n, char * _c, int _i) { return _i64toa (_n, _c, _i); }
  __extension__ extern inline __attribute__((__gnu_inline__)) char *__attribute__((__cdecl__)) ulltoa (unsigned long long _n, char * _c, int _i) { return _ui64toa (_n, _c, _i); }
  __extension__ extern inline __attribute__((__gnu_inline__)) long long __attribute__((__cdecl__)) wtoll (const wchar_t * _w) { return _wtoi64 (_w); }
  __extension__ extern inline __attribute__((__gnu_inline__)) wchar_t *__attribute__((__cdecl__)) lltow (long long _n, wchar_t * _w, int _i) { return _i64tow (_n, _w, _i); }
  __extension__ extern inline __attribute__((__gnu_inline__)) wchar_t *__attribute__((__cdecl__)) ulltow (unsigned long long _n, wchar_t * _w, int _i) { return _ui64tow (_n, _w, _i); }
# 763 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 3
#pragma pack(pop)

# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 1 3
# 9 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 2 3





  __attribute__ ((__dllimport__)) void * __attribute__((__cdecl__)) bsearch_s(const void *_Key,const void *_Base,rsize_t _NumOfElements,rsize_t _SizeOfElements,int (__attribute__((__cdecl__)) * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,const char *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) getenv_s(size_t *_ReturnSize,char *_DstBuf,rsize_t _DstSize,const char *_VarName);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64toa_s(long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64toa_s(unsigned long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultoa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);
 


  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ecvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDights,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _fcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDec,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _makepath_s(char *_PathResult,size_t _Size,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _putenv_s(const char *_Name,const char *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _searchenv_s(const char *_Filename,const char *_EnvVar,char *_ResultPath,size_t _SizeInBytes);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _splitpath_s(const char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
 



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) qsort_s(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(void *,const void *,const void *),void *_Context);
# 766 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 1 3
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
#pragma pack(push,_CRT_PACKING)
# 46 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 74 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);


# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include/mm_malloc.h" 1 3 4
# 29 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include/mm_malloc.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/errno.h" 1 3 4
# 30 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/11.2.0/include/mm_malloc.h" 2 3 4


static __inline__ void *
_mm_malloc (size_t __size, size_t __align)
{
  void * __malloc_ptr;
  void * __aligned_ptr;


  if (__align & (__align - 1))
    {

      (*_errno()) = 22;

      return ((void *) 0);
    }

  if (__size == 0)
    return ((void *) 0);





    if (__align < 2 * sizeof (void *))
      __align = 2 * sizeof (void *);

  __malloc_ptr = malloc (__size + __align);
  if (!__malloc_ptr)
    return ((void *) 0);


  __aligned_ptr = (void *) (((size_t) __malloc_ptr + __align)
       & ~((size_t) (__align) - 1));


  ((void **) __aligned_ptr)[-1] = __malloc_ptr;

  return __aligned_ptr;
}

static __inline__ void
_mm_free (void *__aligned_ptr)
{
  if (__aligned_ptr)
    free (((void **) __aligned_ptr)[-1]);
}
# 81 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 2 3




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _resetstkoflw (void);

  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapchk(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapmin(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _get_heap_handle(void);
# 120 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 8;
    }
    return _Ptr;
  }
# 139 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
  static __inline void __attribute__((__cdecl__)) _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 8;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 185 "C:/msys64/mingw32/i686-w64-mingw32/include/malloc.h" 3
#pragma pack(pop)
# 767 "C:/msys64/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 16 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c" 2


# 17 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;



    (void)"AO_nop(): ";
    AO_nop();





    (void)"AO_load(&val):";
    (void)AO_load(&val);




    (void)"AO_store(&val, newval):";
    AO_store(&val, newval);




    (void)"AO_fetch_and_add(&val, incr):";
    (void)AO_fetch_and_add(&val, incr);




    (void)"AO_fetch_and_add1(&val):";
    (void)AO_fetch_and_add(&val, 1);




    (void)"AO_fetch_and_sub1(&val):";
    (void)AO_fetch_and_add(&val, (size_t)(-1));




    (void)"AO_and(&val, incr):";
    AO_and(&val, incr);




    (void)"AO_or(&val, incr):";
    AO_or(&val, incr);




    (void)"AO_xor(&val, incr):";
    AO_xor(&val, incr);




    (void)"AO_compare_and_swap(&val, oldval, newval):";
    if (!AO_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set(&ts):";
    (void)AO_test_and_set(&ts);



}
# 138 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_release(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;






    (void)"No AO_nop_release";






    (void)"No AO_load_release";


    (void)"AO_store_release(&val, newval):";
    AO_store_release(&val, newval);




    (void)"AO_fetch_and_add_release(&val, incr):";
    (void)AO_fetch_and_add_release(&val, incr);




    (void)"AO_fetch_and_add1_release(&val):";
    (void)AO_fetch_and_add_release(&val, 1);




    (void)"AO_fetch_and_sub1_release(&val):";
    (void)AO_fetch_and_add_release(&val, (size_t)(-1));




    (void)"AO_and_release(&val, incr):";
    AO_and_release(&val, incr);




    (void)"AO_or_release(&val, incr):";
    AO_or_release(&val, incr);




    (void)"AO_xor_release(&val, incr):";
    AO_xor_release(&val, incr);




    (void)"AO_compare_and_swap_release(&val, oldval, newval):";
    if (!AO_compare_and_swap_release(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_release(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_release(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release(&ts):";
    (void)AO_test_and_set_release(&ts);



}
# 259 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_acquire(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;






    (void)"No AO_nop_acquire";



    (void)"AO_load_acquire(&val):";
    (void)AO_load_acquire(&val);







    (void)"No AO_store_acquire";


    (void)"AO_fetch_and_add_acquire(&val, incr):";
    (void)AO_fetch_and_add_acquire(&val, incr);




    (void)"AO_fetch_and_add1_acquire(&val):";
    (void)AO_fetch_and_add_acquire(&val, 1);




    (void)"AO_fetch_and_sub1_acquire(&val):";
    (void)AO_fetch_and_add_acquire(&val, (size_t)(-1));




    (void)"AO_and_acquire(&val, incr):";
    AO_and_acquire(&val, incr);




    (void)"AO_or_acquire(&val, incr):";
    AO_or_acquire(&val, incr);




    (void)"AO_xor_acquire(&val, incr):";
    AO_xor_acquire(&val, incr);




    (void)"AO_compare_and_swap_acquire(&val, oldval, newval):";
    if (!AO_compare_and_swap_acquire(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_acquire(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_acquire(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire(&ts):";
    (void)AO_test_and_set_acquire(&ts);



}
# 380 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_read(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;



    (void)"AO_nop_read(): ";
    AO_nop_read();





    (void)"AO_load_read(&val):";
    (void)AO_load_read(&val);







    (void)"No AO_store_read";


    (void)"AO_fetch_and_add_read(&val, incr):";
    (void)AO_fetch_and_add_full(&val, incr);




    (void)"AO_fetch_and_add1_read(&val):";
    (void)AO_fetch_and_add_full(&val, 1);




    (void)"AO_fetch_and_sub1_read(&val):";
    (void)AO_fetch_and_add_full(&val, (size_t)(-1));




    (void)"AO_and_read(&val, incr):";
    AO_and_full(&val, incr);




    (void)"AO_or_read(&val, incr):";
    AO_or_full(&val, incr);




    (void)"AO_xor_read(&val, incr):";
    AO_xor_full(&val, incr);




    (void)"AO_compare_and_swap_read(&val, oldval, newval):";
    if (!AO_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_read(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 501 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_write(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;



    (void)"AO_nop_write(): ";
    AO_nop_write();
# 539 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_load_write";


    (void)"AO_store_write(&val, newval):";
    (AO_nop_write(), AO_store(&val, newval));




    (void)"AO_fetch_and_add_write(&val, incr):";
    (void)AO_fetch_and_add_full(&val, incr);




    (void)"AO_fetch_and_add1_write(&val):";
    (void)AO_fetch_and_add_full(&val, 1);




    (void)"AO_fetch_and_sub1_write(&val):";
    (void)AO_fetch_and_add_full(&val, (size_t)(-1));




    (void)"AO_and_write(&val, incr):";
    AO_and_full(&val, incr);




    (void)"AO_or_write(&val, incr):";
    AO_or_full(&val, incr);




    (void)"AO_xor_write(&val, incr):";
    AO_xor_full(&val, incr);




    (void)"AO_compare_and_swap_write(&val, oldval, newval):";
    if (!AO_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_write(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 622 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_full(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;



    (void)"AO_nop_full(): ";
    AO_nop_full();





    (void)"AO_load_full(&val):";
    (void)(AO_nop_full(), AO_load_acquire(&val));




    (void)"AO_store_full(&val, newval):";
    (AO_store_release(&val, newval), AO_nop_full());




    (void)"AO_fetch_and_add_full(&val, incr):";
    (void)AO_fetch_and_add_full(&val, incr);




    (void)"AO_fetch_and_add1_full(&val):";
    (void)AO_fetch_and_add_full(&val, 1);




    (void)"AO_fetch_and_sub1_full(&val):";
    (void)AO_fetch_and_add_full(&val, (size_t)(-1));




    (void)"AO_and_full(&val, incr):";
    AO_and_full(&val, incr);




    (void)"AO_or_full(&val, incr):";
    AO_or_full(&val, incr);




    (void)"AO_xor_full(&val, incr):";
    AO_xor_full(&val, incr);




    (void)"AO_compare_and_swap_full(&val, oldval, newval):";
    if (!AO_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_full(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_full(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 743 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_release_write(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;






    (void)"No AO_nop_release_write";






    (void)"No AO_load_release_write";


    (void)"AO_store_release_write(&val, newval):";
    AO_store_release(&val, newval);




    (void)"AO_fetch_and_add_release_write(&val, incr):";
    (void)AO_fetch_and_add_full(&val, incr);




    (void)"AO_fetch_and_add1_release_write(&val):";
    (void)AO_fetch_and_add_full(&val, 1);




    (void)"AO_fetch_and_sub1_release_write(&val):";
    (void)AO_fetch_and_add_full(&val, (size_t)(-1));




    (void)"AO_and_release_write(&val, incr):";
    AO_and_full(&val, incr);




    (void)"AO_or_release_write(&val, incr):";
    AO_or_full(&val, incr);




    (void)"AO_xor_release_write(&val, incr):";
    AO_xor_full(&val, incr);




    (void)"AO_compare_and_swap_release_write(&val, oldval, newval):";
    if (!AO_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_release_write(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 864 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_acquire_read(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;






    (void)"No AO_nop_acquire_read";



    (void)"AO_load_acquire_read(&val):";
    (void)AO_load_acquire(&val);







    (void)"No AO_store_acquire_read";


    (void)"AO_fetch_and_add_acquire_read(&val, incr):";
    (void)AO_fetch_and_add_full(&val, incr);




    (void)"AO_fetch_and_add1_acquire_read(&val):";
    (void)AO_fetch_and_add_full(&val, 1);




    (void)"AO_fetch_and_sub1_acquire_read(&val):";
    (void)AO_fetch_and_add_full(&val, (size_t)(-1));




    (void)"AO_and_acquire_read(&val, incr):";
    AO_and_full(&val, incr);




    (void)"AO_or_acquire_read(&val, incr):";
    AO_or_full(&val, incr);




    (void)"AO_xor_acquire_read(&val, incr):";
    AO_xor_full(&val, incr);




    (void)"AO_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (!AO_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 985 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void list_atomic_dd_acquire_read(void)
{






    static volatile size_t val ;



    static size_t oldval ;




    static size_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static size_t incr ;






    (void)"No AO_nop_dd_acquire_read";



    (void)"AO_load_dd_acquire_read(&val):";
    (void)AO_load(&val);







    (void)"No AO_store_dd_acquire_read";


    (void)"AO_fetch_and_add_dd_acquire_read(&val, incr):";
    (void)AO_fetch_and_add(&val, incr);




    (void)"AO_fetch_and_add1_dd_acquire_read(&val):";
    (void)AO_fetch_and_add(&val, 1);




    (void)"AO_fetch_and_sub1_dd_acquire_read(&val):";
    (void)AO_fetch_and_add(&val, (size_t)(-1));







    (void)"No AO_and_dd_acquire_read";





    (void)"No AO_or_dd_acquire_read";





    (void)"No AO_xor_dd_acquire_read";


    (void)"AO_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (!AO_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_fetch_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (AO_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_dd_acquire_read(&ts):";
    (void)AO_test_and_set(&ts);



}
# 1106 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;



    (void)"AO_nop(): ";
    AO_nop();





    (void)"AO_char_load(&val):";
    (void)AO_char_load(&val);




    (void)"AO_char_store(&val, newval):";
    AO_char_store(&val, newval);




    (void)"AO_char_fetch_and_add(&val, incr):";
    (void)AO_char_fetch_and_add(&val, incr);




    (void)"AO_char_fetch_and_add1(&val):";
    (void)AO_char_fetch_and_add(&val, 1);




    (void)"AO_char_fetch_and_sub1(&val):";
    (void)AO_char_fetch_and_add(&val, (unsigned char)(-1));




    (void)"AO_char_and(&val, incr):";
    AO_char_and(&val, incr);




    (void)"AO_char_or(&val, incr):";
    AO_char_or(&val, incr);




    (void)"AO_char_xor(&val, incr):";
    AO_char_xor(&val, incr);




    (void)"AO_char_compare_and_swap(&val, oldval, newval):";
    if (!AO_char_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set(&ts):";
    (void)AO_test_and_set(&ts);



}
# 1227 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_release(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;






    (void)"No AO_nop_release";






    (void)"No AO_char_load_release";


    (void)"AO_char_store_release(&val, newval):";
    AO_char_store_release(&val, newval);




    (void)"AO_char_fetch_and_add_release(&val, incr):";
    (void)AO_char_fetch_and_add_release(&val, incr);




    (void)"AO_char_fetch_and_add1_release(&val):";
    (void)AO_char_fetch_and_add_release(&val, 1);




    (void)"AO_char_fetch_and_sub1_release(&val):";
    (void)AO_char_fetch_and_add_release(&val, (unsigned char)(-1));




    (void)"AO_char_and_release(&val, incr):";
    AO_char_and_release(&val, incr);




    (void)"AO_char_or_release(&val, incr):";
    AO_char_or_release(&val, incr);




    (void)"AO_char_xor_release(&val, incr):";
    AO_char_xor_release(&val, incr);




    (void)"AO_char_compare_and_swap_release(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_release(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_release(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_release(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release(&ts):";
    (void)AO_test_and_set_release(&ts);



}
# 1348 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_acquire(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;






    (void)"No AO_nop_acquire";



    (void)"AO_char_load_acquire(&val):";
    (void)AO_char_load_acquire(&val);







    (void)"No AO_char_store_acquire";


    (void)"AO_char_fetch_and_add_acquire(&val, incr):";
    (void)AO_char_fetch_and_add_acquire(&val, incr);




    (void)"AO_char_fetch_and_add1_acquire(&val):";
    (void)AO_char_fetch_and_add_acquire(&val, 1);




    (void)"AO_char_fetch_and_sub1_acquire(&val):";
    (void)AO_char_fetch_and_add_acquire(&val, (unsigned char)(-1));




    (void)"AO_char_and_acquire(&val, incr):";
    AO_char_and_acquire(&val, incr);




    (void)"AO_char_or_acquire(&val, incr):";
    AO_char_or_acquire(&val, incr);




    (void)"AO_char_xor_acquire(&val, incr):";
    AO_char_xor_acquire(&val, incr);




    (void)"AO_char_compare_and_swap_acquire(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_acquire(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_acquire(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_acquire(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire(&ts):";
    (void)AO_test_and_set_acquire(&ts);



}
# 1469 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_read(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;



    (void)"AO_nop_read(): ";
    AO_nop_read();





    (void)"AO_char_load_read(&val):";
    (void)AO_char_load_read(&val);







    (void)"No AO_char_store_read";


    (void)"AO_char_fetch_and_add_read(&val, incr):";
    (void)AO_char_fetch_and_add_full(&val, incr);




    (void)"AO_char_fetch_and_add1_read(&val):";
    (void)AO_char_fetch_and_add_full(&val, 1);




    (void)"AO_char_fetch_and_sub1_read(&val):";
    (void)AO_char_fetch_and_add_full(&val, (unsigned char)(-1));




    (void)"AO_char_and_read(&val, incr):";
    AO_char_and_full(&val, incr);




    (void)"AO_char_or_read(&val, incr):";
    AO_char_or_full(&val, incr);




    (void)"AO_char_xor_read(&val, incr):";
    AO_char_xor_full(&val, incr);




    (void)"AO_char_compare_and_swap_read(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_read(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 1590 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_write(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;



    (void)"AO_nop_write(): ";
    AO_nop_write();
# 1628 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_char_load_write";


    (void)"AO_char_store_write(&val, newval):";
    (AO_nop_write(), AO_char_store(&val, newval));




    (void)"AO_char_fetch_and_add_write(&val, incr):";
    (void)AO_char_fetch_and_add_full(&val, incr);




    (void)"AO_char_fetch_and_add1_write(&val):";
    (void)AO_char_fetch_and_add_full(&val, 1);




    (void)"AO_char_fetch_and_sub1_write(&val):";
    (void)AO_char_fetch_and_add_full(&val, (unsigned char)(-1));




    (void)"AO_char_and_write(&val, incr):";
    AO_char_and_full(&val, incr);




    (void)"AO_char_or_write(&val, incr):";
    AO_char_or_full(&val, incr);




    (void)"AO_char_xor_write(&val, incr):";
    AO_char_xor_full(&val, incr);




    (void)"AO_char_compare_and_swap_write(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_write(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 1711 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_full(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;



    (void)"AO_nop_full(): ";
    AO_nop_full();





    (void)"AO_char_load_full(&val):";
    (void)(AO_nop_full(), AO_char_load_acquire(&val));




    (void)"AO_char_store_full(&val, newval):";
    (AO_char_store_release(&val, newval), AO_nop_full());




    (void)"AO_char_fetch_and_add_full(&val, incr):";
    (void)AO_char_fetch_and_add_full(&val, incr);




    (void)"AO_char_fetch_and_add1_full(&val):";
    (void)AO_char_fetch_and_add_full(&val, 1);




    (void)"AO_char_fetch_and_sub1_full(&val):";
    (void)AO_char_fetch_and_add_full(&val, (unsigned char)(-1));




    (void)"AO_char_and_full(&val, incr):";
    AO_char_and_full(&val, incr);




    (void)"AO_char_or_full(&val, incr):";
    AO_char_or_full(&val, incr);




    (void)"AO_char_xor_full(&val, incr):";
    AO_char_xor_full(&val, incr);




    (void)"AO_char_compare_and_swap_full(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_full(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_full(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 1832 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_release_write(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;






    (void)"No AO_nop_release_write";






    (void)"No AO_char_load_release_write";


    (void)"AO_char_store_release_write(&val, newval):";
    AO_char_store_release(&val, newval);




    (void)"AO_char_fetch_and_add_release_write(&val, incr):";
    (void)AO_char_fetch_and_add_full(&val, incr);




    (void)"AO_char_fetch_and_add1_release_write(&val):";
    (void)AO_char_fetch_and_add_full(&val, 1);




    (void)"AO_char_fetch_and_sub1_release_write(&val):";
    (void)AO_char_fetch_and_add_full(&val, (unsigned char)(-1));




    (void)"AO_char_and_release_write(&val, incr):";
    AO_char_and_full(&val, incr);




    (void)"AO_char_or_release_write(&val, incr):";
    AO_char_or_full(&val, incr);




    (void)"AO_char_xor_release_write(&val, incr):";
    AO_char_xor_full(&val, incr);




    (void)"AO_char_compare_and_swap_release_write(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_release_write(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 1953 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_acquire_read(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;






    (void)"No AO_nop_acquire_read";



    (void)"AO_char_load_acquire_read(&val):";
    (void)AO_char_load_acquire(&val);







    (void)"No AO_char_store_acquire_read";


    (void)"AO_char_fetch_and_add_acquire_read(&val, incr):";
    (void)AO_char_fetch_and_add_full(&val, incr);




    (void)"AO_char_fetch_and_add1_acquire_read(&val):";
    (void)AO_char_fetch_and_add_full(&val, 1);




    (void)"AO_char_fetch_and_sub1_acquire_read(&val):";
    (void)AO_char_fetch_and_add_full(&val, (unsigned char)(-1));




    (void)"AO_char_and_acquire_read(&val, incr):";
    AO_char_and_full(&val, incr);




    (void)"AO_char_or_acquire_read(&val, incr):";
    AO_char_or_full(&val, incr);




    (void)"AO_char_xor_acquire_read(&val, incr):";
    AO_char_xor_full(&val, incr);




    (void)"AO_char_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (!AO_char_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 2074 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void char_list_atomic_dd_acquire_read(void)
{






    static volatile unsigned char val ;



    static unsigned char oldval ;




    static unsigned char newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned char incr ;






    (void)"No AO_nop_dd_acquire_read";



    (void)"AO_char_load_dd_acquire_read(&val):";
    (void)AO_char_load(&val);







    (void)"No AO_char_store_dd_acquire_read";


    (void)"AO_char_fetch_and_add_dd_acquire_read(&val, incr):";
    (void)AO_char_fetch_and_add(&val, incr);




    (void)"AO_char_fetch_and_add1_dd_acquire_read(&val):";
    (void)AO_char_fetch_and_add(&val, 1);




    (void)"AO_char_fetch_and_sub1_dd_acquire_read(&val):";
    (void)AO_char_fetch_and_add(&val, (unsigned char)(-1));







    (void)"No AO_char_and_dd_acquire_read";





    (void)"No AO_char_or_dd_acquire_read";





    (void)"No AO_char_xor_dd_acquire_read";


    (void)"AO_char_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (!AO_char_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_char_fetch_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (AO_char_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_dd_acquire_read(&ts):";
    (void)AO_test_and_set(&ts);



}
# 2195 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;



    (void)"AO_nop(): ";
    AO_nop();





    (void)"AO_short_load(&val):";
    (void)AO_short_load(&val);




    (void)"AO_short_store(&val, newval):";
    AO_short_store(&val, newval);




    (void)"AO_short_fetch_and_add(&val, incr):";
    (void)AO_short_fetch_and_add(&val, incr);




    (void)"AO_short_fetch_and_add1(&val):";
    (void)AO_short_fetch_and_add(&val, 1);




    (void)"AO_short_fetch_and_sub1(&val):";
    (void)AO_short_fetch_and_add(&val, (unsigned short)(-1));




    (void)"AO_short_and(&val, incr):";
    AO_short_and(&val, incr);




    (void)"AO_short_or(&val, incr):";
    AO_short_or(&val, incr);




    (void)"AO_short_xor(&val, incr):";
    AO_short_xor(&val, incr);




    (void)"AO_short_compare_and_swap(&val, oldval, newval):";
    if (!AO_short_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set(&ts):";
    (void)AO_test_and_set(&ts);



}
# 2316 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_release(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;






    (void)"No AO_nop_release";






    (void)"No AO_short_load_release";


    (void)"AO_short_store_release(&val, newval):";
    AO_short_store_release(&val, newval);




    (void)"AO_short_fetch_and_add_release(&val, incr):";
    (void)AO_short_fetch_and_add_release(&val, incr);




    (void)"AO_short_fetch_and_add1_release(&val):";
    (void)AO_short_fetch_and_add_release(&val, 1);




    (void)"AO_short_fetch_and_sub1_release(&val):";
    (void)AO_short_fetch_and_add_release(&val, (unsigned short)(-1));




    (void)"AO_short_and_release(&val, incr):";
    AO_short_and_release(&val, incr);




    (void)"AO_short_or_release(&val, incr):";
    AO_short_or_release(&val, incr);




    (void)"AO_short_xor_release(&val, incr):";
    AO_short_xor_release(&val, incr);




    (void)"AO_short_compare_and_swap_release(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_release(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_release(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_release(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release(&ts):";
    (void)AO_test_and_set_release(&ts);



}
# 2437 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_acquire(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;






    (void)"No AO_nop_acquire";



    (void)"AO_short_load_acquire(&val):";
    (void)AO_short_load_acquire(&val);







    (void)"No AO_short_store_acquire";


    (void)"AO_short_fetch_and_add_acquire(&val, incr):";
    (void)AO_short_fetch_and_add_acquire(&val, incr);




    (void)"AO_short_fetch_and_add1_acquire(&val):";
    (void)AO_short_fetch_and_add_acquire(&val, 1);




    (void)"AO_short_fetch_and_sub1_acquire(&val):";
    (void)AO_short_fetch_and_add_acquire(&val, (unsigned short)(-1));




    (void)"AO_short_and_acquire(&val, incr):";
    AO_short_and_acquire(&val, incr);




    (void)"AO_short_or_acquire(&val, incr):";
    AO_short_or_acquire(&val, incr);




    (void)"AO_short_xor_acquire(&val, incr):";
    AO_short_xor_acquire(&val, incr);




    (void)"AO_short_compare_and_swap_acquire(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_acquire(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_acquire(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_acquire(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire(&ts):";
    (void)AO_test_and_set_acquire(&ts);



}
# 2558 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_read(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;



    (void)"AO_nop_read(): ";
    AO_nop_read();





    (void)"AO_short_load_read(&val):";
    (void)AO_short_load_read(&val);







    (void)"No AO_short_store_read";


    (void)"AO_short_fetch_and_add_read(&val, incr):";
    (void)AO_short_fetch_and_add_full(&val, incr);




    (void)"AO_short_fetch_and_add1_read(&val):";
    (void)AO_short_fetch_and_add_full(&val, 1);




    (void)"AO_short_fetch_and_sub1_read(&val):";
    (void)AO_short_fetch_and_add_full(&val, (unsigned short)(-1));




    (void)"AO_short_and_read(&val, incr):";
    AO_short_and_full(&val, incr);




    (void)"AO_short_or_read(&val, incr):";
    AO_short_or_full(&val, incr);




    (void)"AO_short_xor_read(&val, incr):";
    AO_short_xor_full(&val, incr);




    (void)"AO_short_compare_and_swap_read(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_read(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 2679 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_write(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;



    (void)"AO_nop_write(): ";
    AO_nop_write();
# 2717 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_short_load_write";


    (void)"AO_short_store_write(&val, newval):";
    (AO_nop_write(), AO_short_store(&val, newval));




    (void)"AO_short_fetch_and_add_write(&val, incr):";
    (void)AO_short_fetch_and_add_full(&val, incr);




    (void)"AO_short_fetch_and_add1_write(&val):";
    (void)AO_short_fetch_and_add_full(&val, 1);




    (void)"AO_short_fetch_and_sub1_write(&val):";
    (void)AO_short_fetch_and_add_full(&val, (unsigned short)(-1));




    (void)"AO_short_and_write(&val, incr):";
    AO_short_and_full(&val, incr);




    (void)"AO_short_or_write(&val, incr):";
    AO_short_or_full(&val, incr);




    (void)"AO_short_xor_write(&val, incr):";
    AO_short_xor_full(&val, incr);




    (void)"AO_short_compare_and_swap_write(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_write(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 2800 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_full(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;



    (void)"AO_nop_full(): ";
    AO_nop_full();





    (void)"AO_short_load_full(&val):";
    (void)(AO_nop_full(), AO_short_load_acquire(&val));




    (void)"AO_short_store_full(&val, newval):";
    (AO_short_store_release(&val, newval), AO_nop_full());




    (void)"AO_short_fetch_and_add_full(&val, incr):";
    (void)AO_short_fetch_and_add_full(&val, incr);




    (void)"AO_short_fetch_and_add1_full(&val):";
    (void)AO_short_fetch_and_add_full(&val, 1);




    (void)"AO_short_fetch_and_sub1_full(&val):";
    (void)AO_short_fetch_and_add_full(&val, (unsigned short)(-1));




    (void)"AO_short_and_full(&val, incr):";
    AO_short_and_full(&val, incr);




    (void)"AO_short_or_full(&val, incr):";
    AO_short_or_full(&val, incr);




    (void)"AO_short_xor_full(&val, incr):";
    AO_short_xor_full(&val, incr);




    (void)"AO_short_compare_and_swap_full(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_full(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_full(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 2921 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_release_write(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;






    (void)"No AO_nop_release_write";






    (void)"No AO_short_load_release_write";


    (void)"AO_short_store_release_write(&val, newval):";
    AO_short_store_release(&val, newval);




    (void)"AO_short_fetch_and_add_release_write(&val, incr):";
    (void)AO_short_fetch_and_add_full(&val, incr);




    (void)"AO_short_fetch_and_add1_release_write(&val):";
    (void)AO_short_fetch_and_add_full(&val, 1);




    (void)"AO_short_fetch_and_sub1_release_write(&val):";
    (void)AO_short_fetch_and_add_full(&val, (unsigned short)(-1));




    (void)"AO_short_and_release_write(&val, incr):";
    AO_short_and_full(&val, incr);




    (void)"AO_short_or_release_write(&val, incr):";
    AO_short_or_full(&val, incr);




    (void)"AO_short_xor_release_write(&val, incr):";
    AO_short_xor_full(&val, incr);




    (void)"AO_short_compare_and_swap_release_write(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_release_write(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 3042 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_acquire_read(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;






    (void)"No AO_nop_acquire_read";



    (void)"AO_short_load_acquire_read(&val):";
    (void)AO_short_load_acquire(&val);







    (void)"No AO_short_store_acquire_read";


    (void)"AO_short_fetch_and_add_acquire_read(&val, incr):";
    (void)AO_short_fetch_and_add_full(&val, incr);




    (void)"AO_short_fetch_and_add1_acquire_read(&val):";
    (void)AO_short_fetch_and_add_full(&val, 1);




    (void)"AO_short_fetch_and_sub1_acquire_read(&val):";
    (void)AO_short_fetch_and_add_full(&val, (unsigned short)(-1));




    (void)"AO_short_and_acquire_read(&val, incr):";
    AO_short_and_full(&val, incr);




    (void)"AO_short_or_acquire_read(&val, incr):";
    AO_short_or_full(&val, incr);




    (void)"AO_short_xor_acquire_read(&val, incr):";
    AO_short_xor_full(&val, incr);




    (void)"AO_short_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (!AO_short_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 3163 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void short_list_atomic_dd_acquire_read(void)
{






    static volatile unsigned short val ;



    static unsigned short oldval ;




    static unsigned short newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned short incr ;






    (void)"No AO_nop_dd_acquire_read";



    (void)"AO_short_load_dd_acquire_read(&val):";
    (void)AO_short_load(&val);







    (void)"No AO_short_store_dd_acquire_read";


    (void)"AO_short_fetch_and_add_dd_acquire_read(&val, incr):";
    (void)AO_short_fetch_and_add(&val, incr);




    (void)"AO_short_fetch_and_add1_dd_acquire_read(&val):";
    (void)AO_short_fetch_and_add(&val, 1);




    (void)"AO_short_fetch_and_sub1_dd_acquire_read(&val):";
    (void)AO_short_fetch_and_add(&val, (unsigned short)(-1));







    (void)"No AO_short_and_dd_acquire_read";





    (void)"No AO_short_or_dd_acquire_read";





    (void)"No AO_short_xor_dd_acquire_read";


    (void)"AO_short_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (!AO_short_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_short_fetch_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (AO_short_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_dd_acquire_read(&ts):";
    (void)AO_test_and_set(&ts);



}
# 3284 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;



    (void)"AO_nop(): ";
    AO_nop();





    (void)"AO_int_load(&val):";
    (void)AO_int_load(&val);




    (void)"AO_int_store(&val, newval):";
    AO_int_store(&val, newval);




    (void)"AO_int_fetch_and_add(&val, incr):";
    (void)AO_int_fetch_and_add(&val, incr);




    (void)"AO_int_fetch_and_add1(&val):";
    (void)AO_int_fetch_and_add(&val, 1);




    (void)"AO_int_fetch_and_sub1(&val):";
    (void)AO_int_fetch_and_add(&val, (unsigned)(-1));




    (void)"AO_int_and(&val, incr):";
    AO_int_and(&val, incr);




    (void)"AO_int_or(&val, incr):";
    AO_int_or(&val, incr);




    (void)"AO_int_xor(&val, incr):";
    AO_int_xor(&val, incr);




    (void)"AO_int_compare_and_swap(&val, oldval, newval):";
    if (!AO_int_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set(&ts):";
    (void)AO_test_and_set(&ts);



}
# 3405 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_release(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;






    (void)"No AO_nop_release";






    (void)"No AO_int_load_release";


    (void)"AO_int_store_release(&val, newval):";
    AO_int_store_release(&val, newval);




    (void)"AO_int_fetch_and_add_release(&val, incr):";
    (void)AO_int_fetch_and_add_release(&val, incr);




    (void)"AO_int_fetch_and_add1_release(&val):";
    (void)AO_int_fetch_and_add_release(&val, 1);




    (void)"AO_int_fetch_and_sub1_release(&val):";
    (void)AO_int_fetch_and_add_release(&val, (unsigned)(-1));




    (void)"AO_int_and_release(&val, incr):";
    AO_int_and_release(&val, incr);




    (void)"AO_int_or_release(&val, incr):";
    AO_int_or_release(&val, incr);




    (void)"AO_int_xor_release(&val, incr):";
    AO_int_xor_release(&val, incr);




    (void)"AO_int_compare_and_swap_release(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_release(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_release(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_release(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release(&ts):";
    (void)AO_test_and_set_release(&ts);



}
# 3526 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_acquire(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;






    (void)"No AO_nop_acquire";



    (void)"AO_int_load_acquire(&val):";
    (void)AO_int_load_acquire(&val);







    (void)"No AO_int_store_acquire";


    (void)"AO_int_fetch_and_add_acquire(&val, incr):";
    (void)AO_int_fetch_and_add_acquire(&val, incr);




    (void)"AO_int_fetch_and_add1_acquire(&val):";
    (void)AO_int_fetch_and_add_acquire(&val, 1);




    (void)"AO_int_fetch_and_sub1_acquire(&val):";
    (void)AO_int_fetch_and_add_acquire(&val, (unsigned)(-1));




    (void)"AO_int_and_acquire(&val, incr):";
    AO_int_and_acquire(&val, incr);




    (void)"AO_int_or_acquire(&val, incr):";
    AO_int_or_acquire(&val, incr);




    (void)"AO_int_xor_acquire(&val, incr):";
    AO_int_xor_acquire(&val, incr);




    (void)"AO_int_compare_and_swap_acquire(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_acquire(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_acquire(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_acquire(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire(&ts):";
    (void)AO_test_and_set_acquire(&ts);



}
# 3647 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_read(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;



    (void)"AO_nop_read(): ";
    AO_nop_read();





    (void)"AO_int_load_read(&val):";
    (void)AO_int_load_read(&val);







    (void)"No AO_int_store_read";


    (void)"AO_int_fetch_and_add_read(&val, incr):";
    (void)AO_int_fetch_and_add_full(&val, incr);




    (void)"AO_int_fetch_and_add1_read(&val):";
    (void)AO_int_fetch_and_add_full(&val, 1);




    (void)"AO_int_fetch_and_sub1_read(&val):";
    (void)AO_int_fetch_and_add_full(&val, (unsigned)(-1));




    (void)"AO_int_and_read(&val, incr):";
    AO_int_and_full(&val, incr);




    (void)"AO_int_or_read(&val, incr):";
    AO_int_or_full(&val, incr);




    (void)"AO_int_xor_read(&val, incr):";
    AO_int_xor_full(&val, incr);




    (void)"AO_int_compare_and_swap_read(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_read(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 3768 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_write(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;



    (void)"AO_nop_write(): ";
    AO_nop_write();
# 3806 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_int_load_write";


    (void)"AO_int_store_write(&val, newval):";
    (AO_nop_write(), AO_int_store(&val, newval));




    (void)"AO_int_fetch_and_add_write(&val, incr):";
    (void)AO_int_fetch_and_add_full(&val, incr);




    (void)"AO_int_fetch_and_add1_write(&val):";
    (void)AO_int_fetch_and_add_full(&val, 1);




    (void)"AO_int_fetch_and_sub1_write(&val):";
    (void)AO_int_fetch_and_add_full(&val, (unsigned)(-1));




    (void)"AO_int_and_write(&val, incr):";
    AO_int_and_full(&val, incr);




    (void)"AO_int_or_write(&val, incr):";
    AO_int_or_full(&val, incr);




    (void)"AO_int_xor_write(&val, incr):";
    AO_int_xor_full(&val, incr);




    (void)"AO_int_compare_and_swap_write(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_write(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 3889 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_full(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;



    (void)"AO_nop_full(): ";
    AO_nop_full();





    (void)"AO_int_load_full(&val):";
    (void)(AO_nop_full(), AO_int_load_acquire(&val));




    (void)"AO_int_store_full(&val, newval):";
    (AO_int_store_release(&val, newval), AO_nop_full());




    (void)"AO_int_fetch_and_add_full(&val, incr):";
    (void)AO_int_fetch_and_add_full(&val, incr);




    (void)"AO_int_fetch_and_add1_full(&val):";
    (void)AO_int_fetch_and_add_full(&val, 1);




    (void)"AO_int_fetch_and_sub1_full(&val):";
    (void)AO_int_fetch_and_add_full(&val, (unsigned)(-1));




    (void)"AO_int_and_full(&val, incr):";
    AO_int_and_full(&val, incr);




    (void)"AO_int_or_full(&val, incr):";
    AO_int_or_full(&val, incr);




    (void)"AO_int_xor_full(&val, incr):";
    AO_int_xor_full(&val, incr);




    (void)"AO_int_compare_and_swap_full(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_full(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_full(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 4010 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_release_write(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;






    (void)"No AO_nop_release_write";






    (void)"No AO_int_load_release_write";


    (void)"AO_int_store_release_write(&val, newval):";
    AO_int_store_release(&val, newval);




    (void)"AO_int_fetch_and_add_release_write(&val, incr):";
    (void)AO_int_fetch_and_add_full(&val, incr);




    (void)"AO_int_fetch_and_add1_release_write(&val):";
    (void)AO_int_fetch_and_add_full(&val, 1);




    (void)"AO_int_fetch_and_sub1_release_write(&val):";
    (void)AO_int_fetch_and_add_full(&val, (unsigned)(-1));




    (void)"AO_int_and_release_write(&val, incr):";
    AO_int_and_full(&val, incr);




    (void)"AO_int_or_release_write(&val, incr):";
    AO_int_or_full(&val, incr);




    (void)"AO_int_xor_release_write(&val, incr):";
    AO_int_xor_full(&val, incr);




    (void)"AO_int_compare_and_swap_release_write(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_release_write(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_release_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 4131 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_acquire_read(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;






    (void)"No AO_nop_acquire_read";



    (void)"AO_int_load_acquire_read(&val):";
    (void)AO_int_load_acquire(&val);







    (void)"No AO_int_store_acquire_read";


    (void)"AO_int_fetch_and_add_acquire_read(&val, incr):";
    (void)AO_int_fetch_and_add_full(&val, incr);




    (void)"AO_int_fetch_and_add1_acquire_read(&val):";
    (void)AO_int_fetch_and_add_full(&val, 1);




    (void)"AO_int_fetch_and_sub1_acquire_read(&val):";
    (void)AO_int_fetch_and_add_full(&val, (unsigned)(-1));




    (void)"AO_int_and_acquire_read(&val, incr):";
    AO_int_and_full(&val, incr);




    (void)"AO_int_or_acquire_read(&val, incr):";
    AO_int_or_full(&val, incr);




    (void)"AO_int_xor_acquire_read(&val, incr):";
    AO_int_xor_full(&val, incr);




    (void)"AO_int_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (!AO_int_compare_and_swap_full(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap_full(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_acquire_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 4252 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void int_list_atomic_dd_acquire_read(void)
{






    static volatile unsigned val ;



    static unsigned oldval ;




    static unsigned newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);



    static unsigned incr ;






    (void)"No AO_nop_dd_acquire_read";



    (void)"AO_int_load_dd_acquire_read(&val):";
    (void)AO_int_load(&val);







    (void)"No AO_int_store_dd_acquire_read";


    (void)"AO_int_fetch_and_add_dd_acquire_read(&val, incr):";
    (void)AO_int_fetch_and_add(&val, incr);




    (void)"AO_int_fetch_and_add1_dd_acquire_read(&val):";
    (void)AO_int_fetch_and_add(&val, 1);




    (void)"AO_int_fetch_and_sub1_dd_acquire_read(&val):";
    (void)AO_int_fetch_and_add(&val, (unsigned)(-1));







    (void)"No AO_int_and_dd_acquire_read";





    (void)"No AO_int_or_dd_acquire_read";





    (void)"No AO_int_xor_dd_acquire_read";


    (void)"AO_int_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (!AO_int_compare_and_swap(&val, oldval, newval))
      exit(1);






    (void)"AO_int_fetch_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (AO_int_fetch_compare_and_swap(&val, oldval, newval) != oldval)
      exit(1);





    (void)"AO_test_and_set_dd_acquire_read(&ts):";
    (void)AO_test_and_set(&ts);



}
# 4373 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);







    (void)"AO_nop(): ";
    AO_nop();





    (void)"AO_double_load(&val):";
    (void)AO_double_load(&val);




    (void)"AO_double_store(&val, newval):";
    AO_double_store(&val, newval);







    (void)"No AO_double_fetch_and_add";





    (void)"No AO_double_fetch_and_add1";





    (void)"No AO_double_fetch_and_sub1";





    (void)"No AO_double_and";





    (void)"No AO_double_or";





    (void)"No AO_double_xor";


    (void)"AO_double_compare_and_swap(&val, oldval, newval):";
    if (!AO_double_compare_and_swap(&val, oldval, newval))
      exit(1);
# 4469 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap";



    (void)"AO_test_and_set(&ts):";
    (void)AO_test_and_set(&ts);



}
# 4494 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_release(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);
# 4525 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_nop_release";






    (void)"No AO_double_load_release";


    (void)"AO_double_store_release(&val, newval):";
    AO_double_store_release(&val, newval);







    (void)"No AO_double_fetch_and_add_release";





    (void)"No AO_double_fetch_and_add1_release";





    (void)"No AO_double_fetch_and_sub1_release";





    (void)"No AO_double_and_release";





    (void)"No AO_double_or_release";





    (void)"No AO_double_xor_release";


    (void)"AO_double_compare_and_swap_release(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_release(&val, oldval, newval))
      exit(1);
# 4590 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_release";



    (void)"AO_test_and_set_release(&ts):";
    (void)AO_test_and_set_release(&ts);



}
# 4615 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_acquire(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);
# 4646 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_nop_acquire";



    (void)"AO_double_load_acquire(&val):";
    (void)AO_double_load_acquire(&val);







    (void)"No AO_double_store_acquire";





    (void)"No AO_double_fetch_and_add_acquire";





    (void)"No AO_double_fetch_and_add1_acquire";





    (void)"No AO_double_fetch_and_sub1_acquire";





    (void)"No AO_double_and_acquire";





    (void)"No AO_double_or_acquire";





    (void)"No AO_double_xor_acquire";


    (void)"AO_double_compare_and_swap_acquire(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_acquire(&val, oldval, newval))
      exit(1);
# 4711 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_acquire";



    (void)"AO_test_and_set_acquire(&ts):";
    (void)AO_test_and_set_acquire(&ts);



}
# 4736 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_read(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);







    (void)"AO_nop_read(): ";
    AO_nop_read();





    (void)"AO_double_load_read(&val):";
    (void)AO_double_load_read(&val);







    (void)"No AO_double_store_read";





    (void)"No AO_double_fetch_and_add_read";





    (void)"No AO_double_fetch_and_add1_read";





    (void)"No AO_double_fetch_and_sub1_read";





    (void)"No AO_double_and_read";





    (void)"No AO_double_or_read";





    (void)"No AO_double_xor_read";


    (void)"AO_double_compare_and_swap_read(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_full(&val, oldval, newval))
      exit(1);
# 4832 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_read";



    (void)"AO_test_and_set_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 4857 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_write(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);







    (void)"AO_nop_write(): ";
    AO_nop_write();
# 4895 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_load_write";


    (void)"AO_double_store_write(&val, newval):";
    (AO_nop_write(), AO_double_store(&val, newval));







    (void)"No AO_double_fetch_and_add_write";





    (void)"No AO_double_fetch_and_add1_write";





    (void)"No AO_double_fetch_and_sub1_write";





    (void)"No AO_double_and_write";





    (void)"No AO_double_or_write";





    (void)"No AO_double_xor_write";


    (void)"AO_double_compare_and_swap_write(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_full(&val, oldval, newval))
      exit(1);
# 4953 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_write";



    (void)"AO_test_and_set_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 4978 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_full(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);







    (void)"AO_nop_full(): ";
    AO_nop_full();





    (void)"AO_double_load_full(&val):";
    (void)(AO_nop_full(), AO_double_load_acquire(&val));




    (void)"AO_double_store_full(&val, newval):";
    (AO_double_store_release(&val, newval), AO_nop_full());







    (void)"No AO_double_fetch_and_add_full";





    (void)"No AO_double_fetch_and_add1_full";





    (void)"No AO_double_fetch_and_sub1_full";





    (void)"No AO_double_and_full";





    (void)"No AO_double_or_full";





    (void)"No AO_double_xor_full";


    (void)"AO_double_compare_and_swap_full(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_full(&val, oldval, newval))
      exit(1);
# 5074 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_full";



    (void)"AO_test_and_set_full(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 5099 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_release_write(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);
# 5130 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_nop_release_write";






    (void)"No AO_double_load_release_write";


    (void)"AO_double_store_release_write(&val, newval):";
    AO_double_store_release(&val, newval);







    (void)"No AO_double_fetch_and_add_release_write";





    (void)"No AO_double_fetch_and_add1_release_write";





    (void)"No AO_double_fetch_and_sub1_release_write";





    (void)"No AO_double_and_release_write";





    (void)"No AO_double_or_release_write";





    (void)"No AO_double_xor_release_write";


    (void)"AO_double_compare_and_swap_release_write(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_full(&val, oldval, newval))
      exit(1);
# 5195 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_release_write";



    (void)"AO_test_and_set_release_write(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 5220 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_acquire_read(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);
# 5251 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_nop_acquire_read";



    (void)"AO_double_load_acquire_read(&val):";
    (void)AO_double_load_acquire(&val);







    (void)"No AO_double_store_acquire_read";





    (void)"No AO_double_fetch_and_add_acquire_read";





    (void)"No AO_double_fetch_and_add1_acquire_read";





    (void)"No AO_double_fetch_and_sub1_acquire_read";





    (void)"No AO_double_and_acquire_read";





    (void)"No AO_double_or_acquire_read";





    (void)"No AO_double_xor_acquire_read";


    (void)"AO_double_compare_and_swap_acquire_read(&val, oldval, newval):";
    if (!AO_double_compare_and_swap_full(&val, oldval, newval))
      exit(1);
# 5316 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_acquire_read";



    (void)"AO_test_and_set_acquire_read(&ts):";
    (void)AO_test_and_set_full(&ts);



}
# 5341 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
void double_list_atomic_dd_acquire_read(void)
{






    static volatile AO_double_t val ;



    static AO_double_t oldval ;




    static AO_double_t newval ;


    unsigned char ts = ((unsigned char)AO_BYTE_TS_clear);
# 5372 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_nop_dd_acquire_read";



    (void)"AO_double_load_dd_acquire_read(&val):";
    (void)AO_double_load(&val);







    (void)"No AO_double_store_dd_acquire_read";





    (void)"No AO_double_fetch_and_add_dd_acquire_read";





    (void)"No AO_double_fetch_and_add1_dd_acquire_read";





    (void)"No AO_double_fetch_and_sub1_dd_acquire_read";





    (void)"No AO_double_and_dd_acquire_read";





    (void)"No AO_double_or_dd_acquire_read";





    (void)"No AO_double_xor_dd_acquire_read";


    (void)"AO_double_compare_and_swap_dd_acquire_read(&val, oldval, newval):";
    if (!AO_double_compare_and_swap(&val, oldval, newval))
      exit(1);
# 5437 "C:/work/c/memscan-dll/lisp/ecl-21.2.1/src/bdwgc/libatomic_ops/tests/list_atomic.c"
    (void)"No AO_double_fetch_compare_and_swap_dd_acquire_read";



    (void)"AO_test_and_set_dd_acquire_read(&ts):";
    (void)AO_test_and_set(&ts);



}
