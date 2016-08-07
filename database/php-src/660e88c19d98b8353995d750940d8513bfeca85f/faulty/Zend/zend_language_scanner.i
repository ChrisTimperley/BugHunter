# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.c"
# 1 "Zend/zend_language_scanner.l"
# 32 "Zend/zend_language_scanner.l"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner_defs.h" 1
# 3 "Zend/zend_language_scanner_defs.h"

enum YYCONDTYPE {
 yycST_IN_SCRIPTING,
 yycST_LOOKING_FOR_PROPERTY,
 yycST_BACKQUOTE,
 yycST_DOUBLE_QUOTES,
 yycST_HEREDOC,
 yycST_LOOKING_FOR_VARNAME,
 yycST_VAR_OFFSET,
 yycINITIAL,
 yycST_END_HEREDOC,
 yycST_NOWDOC,
};
# 33 "Zend/zend_language_scanner.l" 2

# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 35 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 1
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2474 "Zend/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 2475 "Zend/../main/php_config.h" 2
# 2490 "Zend/../main/php_config.h"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 282 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 644 "/usr/include/string.h" 3 4

# 2491 "Zend/../main/php_config.h" 2
# 2501 "Zend/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 488 "/usr/include/math.h" 3 4

# 2502 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 21 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 1
# 62 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 2






# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 70 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 2
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
typedef intptr_t tsrm_intptr_t;
typedef uintptr_t tsrm_uintptr_t;
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 55 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 28 "/usr/include/dlfcn.h" 2 3 4
# 52 "/usr/include/dlfcn.h" 3 4




extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 82 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));
# 188 "/usr/include/dlfcn.h" 3 4

# 67 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 81 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h" 1
# 34 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h"
typedef int64_t zend_long;
typedef uint64_t zend_ulong;
typedef int64_t zend_off_t;
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h"
static const char long_min_digits[] = "9223372036854775808";
# 23 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h" 2
# 82 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 2
# 46 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;

typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;
# 68 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef intptr_t zend_intptr_t;
typedef uintptr_t zend_uintptr_t;
# 79 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef struct _zend_object_handlers zend_object_handlers;
typedef struct _zend_class_entry zend_class_entry;
typedef union _zend_function zend_function;
typedef struct _zend_execute_data zend_execute_data;

typedef struct _zval_struct zval;

typedef struct _zend_refcounted zend_refcounted;
typedef struct _zend_string zend_string;
typedef struct _zend_array zend_array;
typedef struct _zend_object zend_object;
typedef struct _zend_resource zend_resource;
typedef struct _zend_reference zend_reference;
typedef struct _zend_ast_ref zend_ast_ref;
typedef struct _zend_ast zend_ast;

typedef int (*compare_func_t)(const void *, const void *);
typedef void (*swap_func_t)(void *, void *);
typedef void (*sort_func_t)(void *, size_t, size_t, compare_func_t, swap_func_t);
typedef void (*dtor_func_t)(zval *pDest);
typedef void (*copy_ctor_func_t)(zval *pElement);

typedef union _zend_value {
 zend_long lval;
 double dval;
 zend_refcounted *counted;
 zend_string *str;
 zend_array *arr;
 zend_object *obj;
 zend_resource *res;
 zend_reference *ref;
 zend_ast_ref *ast;
 zval *zv;
 void *ptr;
 zend_class_entry *ce;
 zend_function *func;
 struct {
  uint32_t w1;
  uint32_t w2;
 } ww;
} zend_value;

struct _zval_struct {
 zend_value value;
 union {
  struct {
   zend_uchar type; zend_uchar type_flags; zend_uchar const_flags; zend_uchar reserved;




  } v;
  uint32_t type_info;
 } u1;
 union {
  uint32_t next;
  uint32_t cache_slot;
  uint32_t lineno;
  uint32_t num_args;
  uint32_t fe_pos;
  uint32_t fe_iter_idx;
  uint32_t access_flags;
  uint32_t property_guard;
 } u2;
};

typedef struct _zend_refcounted_h {
 uint32_t refcount;
 union {
  struct {
   zend_uchar type; zend_uchar flags; uint16_t gc_info;



  } v;
  uint32_t type_info;
 } u;
} zend_refcounted_h;

struct _zend_refcounted {
 zend_refcounted_h gc;
};

struct _zend_string {
 zend_refcounted_h gc;
 zend_ulong h;
 size_t len;
 char val[1];
};

typedef struct _Bucket {
 zval val;
 zend_ulong h;
 zend_string *key;
} Bucket;

typedef struct _zend_array HashTable;

struct _zend_array {
 zend_refcounted_h gc;
 union {
  struct {
   zend_uchar flags; zend_uchar nApplyCount; zend_uchar nIteratorsCount; zend_uchar reserve;




  } v;
  uint32_t flags;
 } u;
 uint32_t nTableMask;
 Bucket *arData;
 uint32_t nNumUsed;
 uint32_t nNumOfElements;
 uint32_t nTableSize;
 uint32_t nInternalPointer;
 zend_long nNextFreeElement;
 dtor_func_t pDestructor;
};
# 269 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef uint32_t HashPosition;

typedef struct _HashTableIterator {
 HashTable *ht;
 HashPosition pos;
} HashTableIterator;

struct _zend_object {
 zend_refcounted_h gc;
 uint32_t handle;
 zend_class_entry *ce;
 const zend_object_handlers *handlers;
 HashTable *properties;
 zval properties_table[1];
};

struct _zend_resource {
 zend_refcounted_h gc;
 int handle;
 int type;
 void *ptr;
};

struct _zend_reference {
 zend_refcounted_h gc;
 zval val;
};

struct _zend_ast_ref {
 zend_refcounted_h gc;
 zend_ast *ast;
};
# 329 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 816 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) uint32_t zval_refcount_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0) || (((*(pz)).u1.v.type_flags & (1<<1)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ((*(pz)).value.counted)->gc.refcount;
}

static inline __attribute__((always_inline)) uint32_t zval_set_refcount_p(zval* pz, uint32_t rc) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ((*(pz)).value.counted)->gc.refcount = rc;
}

static inline __attribute__((always_inline)) uint32_t zval_addref_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ++((*(pz)).value.counted)->gc.refcount;
}

static inline __attribute__((always_inline)) uint32_t zval_delref_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return --((*(pz)).value.counted)->gc.refcount;
}
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_errors.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 const char *orig_filename;
 uint lineno;
 uint orig_lineno;
} zend_leak_info;
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"


__attribute__ ((visibility("default"))) char* zend_strndup(const char *s, size_t length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void* _emalloc(size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void* _safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void* _safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void* _ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1,2)));
__attribute__ ((visibility("default"))) void* _erealloc(void *ptr, size_t size ) __attribute__ ((alloc_size(2)));
__attribute__ ((visibility("default"))) void* _erealloc2(void *ptr, size_t size, size_t copy_size ) __attribute__ ((alloc_size(2)));
__attribute__ ((visibility("default"))) void* _safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void* _safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char* _estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char* _estrndup(const char *s, size_t length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc_sizes.h" 1
# 89 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2







__attribute__ ((visibility("default"))) void* _emalloc_8(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_16(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_24(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_32(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_40(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_48(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_56(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_64(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_80(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_96(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_112(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_128(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_160(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_192(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_224(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_256(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_320(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_384(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_448(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_512(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_640(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_768(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_896(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1024(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1280(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1536(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1792(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_2048(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_2560(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_3072(void) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void* _emalloc_large(size_t size) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void* _emalloc_huge(size_t size) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
# 121 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) void _efree_8(void *); __attribute__ ((visibility("default"))) void _efree_16(void *); __attribute__ ((visibility("default"))) void _efree_24(void *); __attribute__ ((visibility("default"))) void _efree_32(void *); __attribute__ ((visibility("default"))) void _efree_40(void *); __attribute__ ((visibility("default"))) void _efree_48(void *); __attribute__ ((visibility("default"))) void _efree_56(void *); __attribute__ ((visibility("default"))) void _efree_64(void *); __attribute__ ((visibility("default"))) void _efree_80(void *); __attribute__ ((visibility("default"))) void _efree_96(void *); __attribute__ ((visibility("default"))) void _efree_112(void *); __attribute__ ((visibility("default"))) void _efree_128(void *); __attribute__ ((visibility("default"))) void _efree_160(void *); __attribute__ ((visibility("default"))) void _efree_192(void *); __attribute__ ((visibility("default"))) void _efree_224(void *); __attribute__ ((visibility("default"))) void _efree_256(void *); __attribute__ ((visibility("default"))) void _efree_320(void *); __attribute__ ((visibility("default"))) void _efree_384(void *); __attribute__ ((visibility("default"))) void _efree_448(void *); __attribute__ ((visibility("default"))) void _efree_512(void *); __attribute__ ((visibility("default"))) void _efree_640(void *); __attribute__ ((visibility("default"))) void _efree_768(void *); __attribute__ ((visibility("default"))) void _efree_896(void *); __attribute__ ((visibility("default"))) void _efree_1024(void *); __attribute__ ((visibility("default"))) void _efree_1280(void *); __attribute__ ((visibility("default"))) void _efree_1536(void *); __attribute__ ((visibility("default"))) void _efree_1792(void *); __attribute__ ((visibility("default"))) void _efree_2048(void *); __attribute__ ((visibility("default"))) void _efree_2560(void *); __attribute__ ((visibility("default"))) void _efree_3072(void *);

__attribute__ ((visibility("default"))) void _efree_large(void *, size_t size);
__attribute__ ((visibility("default"))) void _efree_huge(void *, size_t size);
# 190 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) void * __zend_malloc(size_t len) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void * __zend_calloc(size_t nmemb, size_t len) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1,2)));
__attribute__ ((visibility("default"))) void * __zend_realloc(void *p, size_t len) __attribute__ ((alloc_size(2)));
# 217 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown);
__attribute__ ((visibility("default"))) int is_zend_mm(void);

__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage);
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage);
# 240 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent);
__attribute__ ((visibility("default"))) void* _zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void* _zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) void* _zend_mm_realloc2(zend_mm_heap *heap, void *p, size_t size, size_t copy_size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 262 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_get_heap(void);

__attribute__ ((visibility("default"))) size_t zend_mm_gc(zend_mm_heap *heap);





__attribute__ ((visibility("default"))) int zend_mm_is_custom_heap(zend_mm_heap *new_heap);
__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
__attribute__ ((visibility("default"))) void zend_mm_get_custom_handlers(zend_mm_heap *heap,
                                          void* (**_malloc)(size_t),
                                          void (**_free)(void*),
                                          void* (**_realloc)(void*, size_t));
# 288 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef void* (*zend_mm_chunk_alloc_t)(zend_mm_storage *storage, size_t size, size_t alignment);
typedef void (*zend_mm_chunk_free_t)(zend_mm_storage *storage, void *chunk, size_t size);
typedef int (*zend_mm_chunk_truncate_t)(zend_mm_storage *storage, void *chunk, size_t old_size, size_t new_size);
typedef int (*zend_mm_chunk_extend_t)(zend_mm_storage *storage, void *chunk, size_t old_size, size_t new_size);

typedef struct _zend_mm_handlers {
 zend_mm_chunk_alloc_t chunk_alloc;
 zend_mm_chunk_free_t chunk_free;
 zend_mm_chunk_truncate_t chunk_truncate;
 zend_mm_chunk_extend_t chunk_extend;
} zend_mm_handlers;

struct _zend_mm_storage {
 const zend_mm_handlers handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_handlers *handlers, void *data, size_t data_size);
# 395 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"

# 34 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element **);
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args);
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg);
typedef void (*llist_apply_func_t)(void *);

typedef struct _zend_llist {
 zend_llist_element *head;
 zend_llist_element *tail;
 size_t count;
 size_t size;
 llist_dtor_func_t dtor;
 unsigned char persistent;
 zend_llist_element *traverse_ptr;
} zend_llist;

typedef zend_llist_element* zend_llist_position;


__attribute__ ((visibility("default"))) void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
__attribute__ ((visibility("default"))) void zend_llist_add_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_prepend_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
__attribute__ ((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func);
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg);
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func, int num_args, ...);
__attribute__ ((visibility("default"))) size_t zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func);


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"


__attribute__ ((visibility("default"))) extern zend_string *(*zend_new_interned_string)(zend_string *str);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

__attribute__ ((visibility("default"))) zend_ulong zend_hash_func(const char *str, size_t len);
void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);


# 82 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_string_hash_val(zend_string *s)
{
 if (!(s)->h) {
  (s)->h = zend_hash_func((s)->val, (s)->len);
 }
 return (s)->h;
}

static inline __attribute__((always_inline)) void zend_string_forget_hash_val(zend_string *s)
{
 (s)->h = 0;
}

static inline __attribute__((always_inline)) uint32_t zend_string_refcount(const zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return (s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) uint32_t zend_string_addref(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return ++(s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) uint32_t zend_string_delref(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return --(s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) zend_string *zend_string_alloc(size_t len, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?__zend_malloc(((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))):(__builtin_constant_p((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) ) ? (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 8) ? _emalloc_8() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 16) ? _emalloc_16() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 24) ? _emalloc_24() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 32) ? _emalloc_32() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 40) ? _emalloc_40() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 48) ? _emalloc_48() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 56) ? _emalloc_56() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 64) ? _emalloc_64() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 80) ? _emalloc_80() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 96) ? _emalloc_96() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 112) ? _emalloc_112() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 128) ? _emalloc_128() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 160) ? _emalloc_160() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 192) ? _emalloc_192() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 224) ? _emalloc_224() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 256) ? _emalloc_256() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 320) ? _emalloc_320() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 384) ? _emalloc_384() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 448) ? _emalloc_448() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 512) ? _emalloc_512() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 640) ? _emalloc_640() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 768) ? _emalloc_768() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 896) ? _emalloc_896() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1024) ? _emalloc_1024() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1280) ? _emalloc_1280() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1536) ? _emalloc_1536() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1792) ? _emalloc_1792() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 2048) ? _emalloc_2048() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 2560) ? _emalloc_2560() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 3072) ? _emalloc_3072() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) : _emalloc_huge((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) ) ));

 (ret)->gc.refcount = 1;


 (ret)->gc.u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 zend_string_forget_hash_val(ret);
 (ret)->len = len;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_safe_alloc(size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?_safe_malloc(n, m, ((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L))):_safe_emalloc((n), (m), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L))) ));

 (ret)->gc.refcount = 1;


 (ret)->gc.u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 zend_string_forget_hash_val(ret);
 (ret)->len = (n * m) + l;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_init(const char *str, size_t len, int persistent)
{
 zend_string *ret = zend_string_alloc(len, persistent);

 memcpy((ret)->val, str, len);
 (ret)->val[len] = '\0';
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_copy(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  (s)->gc.refcount++;
 }
 return s;
}

static inline __attribute__((always_inline)) zend_string *zend_string_dup(zend_string *s, int persistent)
{
 if (((s)->gc.u.v.flags & (1<<1))) {
  return s;
 } else {
  return zend_string_init((s)->val, (s)->len, persistent);
 }
}

static inline __attribute__((always_inline)) zend_string *zend_string_realloc(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, (((len)<((s)->len))?(len):((s)->len)) + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_extend(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 do { if (__builtin_expect(!(len >= (s)->len), 0)) __builtin_unreachable(); } while (0);
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, (s)->len + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_truncate(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 do { if (__builtin_expect(!(len <= (s)->len), 0)) __builtin_unreachable(); } while (0);
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, len + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_safe_realloc(zend_string *s, size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret;

 if (!((s)->gc.u.v.flags & (1<<1))) {
  if ((s)->gc.refcount == 1) {
   ret = (zend_string *)((persistent)?_safe_realloc((s), (n), (m), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L)))):_safe_erealloc(((s)), ((n)), ((m)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = (n * m) + l;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_safe_alloc(n, m, l, persistent);
 memcpy((ret)->val, (s)->val, ((((n * m) + l)<((s)->len))?((n * m) + l):((s)->len)) + 1);
 return ret;
}

static inline __attribute__((always_inline)) void zend_string_free(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  do { if (__builtin_expect(!((s)->gc.refcount <= 1), 0)) __builtin_unreachable(); } while (0);
  (((s)->gc.u.v.flags & (1<<0))?free(s):_efree((s) ));
 }
}

static inline __attribute__((always_inline)) void zend_string_release(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (--(s)->gc.refcount == 0) {
   (((s)->gc.u.v.flags & (1<<0))?free(s):_efree((s) ));
  }
 }
}


static inline __attribute__((always_inline)) zend_bool zend_string_equals(zend_string *s1, zend_string *s2)
{
 return s1 == s2 || ((s1)->len == (s2)->len && !memcmp((s1)->val, (s2)->val, (s1)->len));
}
# 324 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_inline_hash_func(const char *str, size_t len)
{
 zend_ulong hash = 5381UL;


 for (; len >= 8; len -= 8) {
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
 }
 switch (len) {
  case 7: hash = ((hash << 5) + hash) + *str++;
  case 6: hash = ((hash << 5) + hash) + *str++;
  case 5: hash = ((hash << 5) + hash) + *str++;
  case 4: hash = ((hash << 5) + hash) + *str++;
  case 3: hash = ((hash << 5) + hash) + *str++;
  case 2: hash = ((hash << 5) + hash) + *str++;
  case 1: hash = ((hash << 5) + hash) + *str++; break;
  case 0: break;
default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }



 return hash | 0x8000000000000000UL;





}

static inline __attribute__((always_inline)) void zend_interned_empty_string_init(zend_string **s)
{
 zend_string *str;

 str = zend_string_alloc(sizeof("")-1, 1);
 (str)->val[0] = '\000';


 *s = zend_new_interned_string(str);





}

static inline __attribute__((always_inline)) void zend_interned_empty_string_free(zend_string **s)
{
 if (((void *)0) != *s) {
  free(*s);
  *s = ((void *)0);
 }
}
# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h" 1
# 47 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
typedef struct _zend_hash_key {
 zend_ulong h;
 zend_string *key;
} zend_hash_key;

typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, zval *source_data, zend_hash_key *hash_key, void *pParam);




__attribute__ ((visibility("default"))) void _zend_hash_init(HashTable *ht, uint32_t nSize, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) void _zend_hash_init_ex(HashTable *ht, uint32_t nSize, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);



__attribute__ ((visibility("default"))) void zend_hash_real_init(HashTable *ht, zend_bool packed);
__attribute__ ((visibility("default"))) void zend_hash_packed_to_hash(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_to_packed(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_extend(HashTable *ht, uint32_t nSize, zend_bool packed);


__attribute__ ((visibility("default"))) zval* _zend_hash_add_or_update(HashTable *ht, zend_string *key, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_update(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_update_ind(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_add(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_add_new(HashTable *ht, zend_string *key,zval *pData );
# 85 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add_or_update(HashTable *ht, const char *key, size_t len, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_update(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_update_ind(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add_new(HashTable *ht, const char *key, size_t len, zval *pData );
# 100 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add_or_update(HashTable *ht, zend_ulong h, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add_new(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_update(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_next_index_insert(HashTable *ht, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_next_index_insert_new(HashTable *ht, zval *pData );
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* zend_hash_index_add_empty_element(HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) zval* zend_hash_add_empty_element(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval* zend_hash_str_add_empty_element(HashTable *ht, const char *key, size_t len);





typedef int (*apply_func_t)(zval *pDest);
typedef int (*apply_func_arg_t)(zval *pDest, void *argument);
typedef int (*apply_func_args_t)(zval *pDest, int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func);
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void *);
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht, apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func);



__attribute__ ((visibility("default"))) int zend_hash_del(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_del_ind(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_del(HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) int zend_hash_str_del_ind(HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) int zend_hash_index_del(HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) void zend_hash_del_bucket(HashTable *ht, Bucket *p);


__attribute__ ((visibility("default"))) zval* zend_hash_find(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval* zend_hash_str_find(const HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) zval* zend_hash_index_find(const HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) zval* _zend_hash_index_find(const HashTable *ht, zend_ulong h);
# 179 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zend_bool zend_hash_exists(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zend_bool zend_hash_str_exists(const HashTable *ht, const char *str, size_t len);
__attribute__ ((visibility("default"))) zend_bool zend_hash_index_exists(const HashTable *ht, zend_ulong h);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index, zend_ulong *num_index, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) zval* zend_hash_get_current_data_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
# 215 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, zend_bool overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) void zend_hash_bucket_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_renum_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_packed_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered);
__attribute__ ((visibility("default"))) int zend_hash_sort_ex(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, zend_bool renumber);
__attribute__ ((visibility("default"))) zval* zend_hash_minmax(const HashTable *ht, compare_func_t compar, uint32_t flag);
# 237 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);

__attribute__ ((visibility("default"))) uint32_t zend_array_count(HashTable *ht);
__attribute__ ((visibility("default"))) HashTable* zend_array_dup(HashTable *source);
__attribute__ ((visibility("default"))) void zend_array_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_symtable_clean(HashTable *ht);

__attribute__ ((visibility("default"))) int _zend_handle_numeric_str_ex(const char *key, size_t length, zend_ulong *idx);

__attribute__ ((visibility("default"))) uint32_t zend_hash_iterator_add(HashTable *ht, HashPosition pos);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterator_pos(uint32_t idx, HashTable *ht);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterator_pos_ex(uint32_t idx, zval *array);
__attribute__ ((visibility("default"))) void zend_hash_iterator_del(uint32_t idx);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterators_lower_pos(HashTable *ht, HashPosition start);
__attribute__ ((visibility("default"))) void _zend_hash_iterators_update(HashTable *ht, HashPosition from, HashPosition to);

static inline __attribute__((always_inline)) void zend_hash_iterators_update(HashTable *ht, HashPosition from, HashPosition to)
{
 if (__builtin_expect(!!(ht->u.v.nIteratorsCount), 0)) {
  _zend_hash_iterators_update(ht, from, to);
 }
}










static inline __attribute__((always_inline)) int _zend_handle_numeric_str(const char *key, size_t length, zend_ulong *idx)
{
 const char *tmp = key;

 if (*tmp > '9') {
  return 0;
 } else if (*tmp < '0') {
  if (*tmp != '-') {
   return 0;
  }
  tmp++;
  if (*tmp > '9' || *tmp < '0') {
   return 0;
  }
 }
 return _zend_handle_numeric_str_ex(key, length, idx);
}
# 294 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline __attribute__((always_inline)) zval *zend_hash_find_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return (zv && zval_get_type(&(*(zv))) == 15) ?
  ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv : ((void *)0)) : zv;
}


static inline __attribute__((always_inline)) int zend_hash_exists_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return zv && (zval_get_type(&(*(zv))) != 15 ||
   zval_get_type(&(*((*(zv)).value.zv))) != 0);
}


static inline __attribute__((always_inline)) zval *zend_hash_str_find_ind(const HashTable *ht, const char *str, size_t len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 return (zv && zval_get_type(&(*(zv))) == 15) ?
  ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv : ((void *)0)) : zv;
}


static inline __attribute__((always_inline)) zval *zend_symtable_update(HashTable *ht, zend_string *key, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update(ht, key, pData );
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_update_ind(HashTable *ht, zend_string *key, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update_ind(ht, key, pData );
 }
}


static inline __attribute__((always_inline)) int zend_symtable_del(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_del_ind(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_find(const HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_find_ind(const HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_exists(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_exists_ind(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_update(HashTable *ht, const char *str, size_t len, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update(ht, str, len, pData );
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_update_ind(HashTable *ht, const char *str, size_t len, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update_ind(ht, str, len, pData );
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_del(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del(ht, str, len);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_del_ind(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del_ind(ht, str, len);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_find(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_str_find(ht, str, len);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_exists(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_str_exists(ht, str, len);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_new_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add_new(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_add(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_new_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_add_new(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_update_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_update(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_update_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_update(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_add(ht, key, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_mem(HashTable *ht, const char *str, size_t len, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_str_add(ht, str, len, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_update_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_update_ptr(ht, key, p);
}

static inline __attribute__((always_inline)) void *zend_hash_str_update_mem(HashTable *ht, const char *str, size_t len, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_str_update_ptr(ht, str, len, p);
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_add(ht, h, &tmp );
 return zv ? (*(zv)).value.ptr : ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_new_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_add_new(ht, h, &tmp );
 return zv ? (*(zv)).value.ptr : ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_index_update_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_update(ht, h, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_mem(HashTable *ht, zend_ulong h, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_index_add(ht, h, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_next_index_insert_ptr(HashTable *ht, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_next_index_insert(ht, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_update_mem(HashTable *ht, zend_ulong h, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_index_update_ptr(ht, h, p);
}

static inline __attribute__((always_inline)) void *zend_hash_next_index_insert_mem(HashTable *ht, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_next_index_insert(ht, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_find_ptr(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_find_ptr(const HashTable *ht, const char *str, size_t len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_find_ptr(const HashTable *ht, zend_ulong h)
{
 zval *zv;

 zv = zend_hash_index_find(ht, h);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_symtable_str_find_ptr(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find_ptr(ht, idx);
 } else {
  return zend_hash_str_find_ptr(ht, str, len);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_get_current_data_ptr_ex(HashTable *ht, HashPosition *pos)
{
 zval *zv;

 zv = zend_hash_get_current_data_ex(ht, pos);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}
# 926 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline __attribute__((always_inline)) zval *_zend_hash_append(HashTable *ht, zend_string *key, zval *zv)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { zval *_z1 = (&p->val); const zval *_z2 = (zv); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
 return &p->val;
}

static inline __attribute__((always_inline)) zval *_zend_hash_append_ptr(HashTable *ht, zend_string *key, void *ptr)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { (*(&p->val)).value.ptr = (ptr); (*(&p->val)).u1.type_info = 17; } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
 return &p->val;
}

static inline __attribute__((always_inline)) void _zend_hash_append_ind(HashTable *ht, zend_string *key, zval *ptr)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { (*(&p->val)).value.zv = (ptr); (*(&p->val)).u1.type_info = 15; } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
}
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ast.h" 1
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ast.h"
enum _zend_ast_kind {

 ZEND_AST_ZVAL = 1 << 6,
 ZEND_AST_ZNODE,


 ZEND_AST_FUNC_DECL,
 ZEND_AST_CLOSURE,
 ZEND_AST_METHOD,
 ZEND_AST_CLASS,


 ZEND_AST_ARG_LIST = 1 << 7,
 ZEND_AST_LIST,
 ZEND_AST_ARRAY,
 ZEND_AST_ENCAPS_LIST,
 ZEND_AST_EXPR_LIST,
 ZEND_AST_STMT_LIST,
 ZEND_AST_IF,
 ZEND_AST_SWITCH_LIST,
 ZEND_AST_CATCH_LIST,
 ZEND_AST_PARAM_LIST,
 ZEND_AST_CLOSURE_USES,
 ZEND_AST_PROP_DECL,
 ZEND_AST_CONST_DECL,
 ZEND_AST_CLASS_CONST_DECL,
 ZEND_AST_NAME_LIST,
 ZEND_AST_TRAIT_ADAPTATIONS,
 ZEND_AST_USE,


 ZEND_AST_MAGIC_CONST = 0 << 8,
 ZEND_AST_TYPE,


 ZEND_AST_VAR = 1 << 8,
 ZEND_AST_CONST,
 ZEND_AST_UNPACK,
 ZEND_AST_UNARY_PLUS,
 ZEND_AST_UNARY_MINUS,
 ZEND_AST_CAST,
 ZEND_AST_EMPTY,
 ZEND_AST_ISSET,
 ZEND_AST_SILENCE,
 ZEND_AST_SHELL_EXEC,
 ZEND_AST_CLONE,
 ZEND_AST_EXIT,
 ZEND_AST_PRINT,
 ZEND_AST_INCLUDE_OR_EVAL,
 ZEND_AST_UNARY_OP,
 ZEND_AST_PRE_INC,
 ZEND_AST_PRE_DEC,
 ZEND_AST_POST_INC,
 ZEND_AST_POST_DEC,
 ZEND_AST_YIELD_FROM,

 ZEND_AST_GLOBAL,
 ZEND_AST_UNSET,
 ZEND_AST_RETURN,
 ZEND_AST_LABEL,
 ZEND_AST_REF,
 ZEND_AST_HALT_COMPILER,
 ZEND_AST_ECHO,
 ZEND_AST_THROW,
 ZEND_AST_GOTO,
 ZEND_AST_BREAK,
 ZEND_AST_CONTINUE,


 ZEND_AST_DIM = 2 << 8,
 ZEND_AST_PROP,
 ZEND_AST_STATIC_PROP,
 ZEND_AST_CALL,
 ZEND_AST_CLASS_CONST,
 ZEND_AST_ASSIGN,
 ZEND_AST_ASSIGN_REF,
 ZEND_AST_ASSIGN_OP,
 ZEND_AST_BINARY_OP,
 ZEND_AST_GREATER,
 ZEND_AST_GREATER_EQUAL,
 ZEND_AST_AND,
 ZEND_AST_OR,
 ZEND_AST_ARRAY_ELEM,
 ZEND_AST_NEW,
 ZEND_AST_INSTANCEOF,
 ZEND_AST_YIELD,
 ZEND_AST_COALESCE,

 ZEND_AST_STATIC,
 ZEND_AST_WHILE,
 ZEND_AST_DO_WHILE,
 ZEND_AST_IF_ELEM,
 ZEND_AST_SWITCH,
 ZEND_AST_SWITCH_CASE,
 ZEND_AST_DECLARE,
 ZEND_AST_USE_TRAIT,
 ZEND_AST_TRAIT_PRECEDENCE,
 ZEND_AST_METHOD_REFERENCE,
 ZEND_AST_NAMESPACE,
 ZEND_AST_USE_ELEM,
 ZEND_AST_TRAIT_ALIAS,
 ZEND_AST_GROUP_USE,


 ZEND_AST_METHOD_CALL = 3 << 8,
 ZEND_AST_STATIC_CALL,
 ZEND_AST_CONDITIONAL,

 ZEND_AST_TRY,
 ZEND_AST_CATCH,
 ZEND_AST_PARAM,
 ZEND_AST_PROP_ELEM,
 ZEND_AST_CONST_ELEM,


 ZEND_AST_FOR = 4 << 8,
 ZEND_AST_FOREACH,
};

typedef uint16_t zend_ast_kind;
typedef uint16_t zend_ast_attr;

struct _zend_ast {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 zend_ast *child[1];
};


typedef struct _zend_ast_list {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 uint32_t children;
 zend_ast *child[1];
} zend_ast_list;


typedef struct _zend_ast_zval {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zval val;
} zend_ast_zval;


typedef struct _zend_ast_decl {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t start_lineno;
 uint32_t end_lineno;
 uint32_t flags;
 unsigned char *lex_pos;
 zend_string *doc_comment;
 zend_string *name;
 zend_ast *child[4];
} zend_ast_decl;

typedef void (*zend_ast_process_t)(zend_ast *ast);
extern __attribute__ ((visibility("default"))) zend_ast_process_t zend_ast_process;

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_zval_ex(zval *zv, zend_ast_attr attr);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_ex(zend_ast_kind kind, zend_ast_attr attr, ...);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create(zend_ast_kind kind, ...);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_decl(
 zend_ast_kind kind, uint32_t flags, uint32_t start_lineno, zend_string *doc_comment,
 zend_string *name, zend_ast *child0, zend_ast *child1, zend_ast *child2, zend_ast *child3
);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_list(uint32_t init_children, zend_ast_kind kind, ...);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_list_add(zend_ast *list, zend_ast *op);

__attribute__ ((visibility("default"))) int zend_ast_evaluate(zval *result, zend_ast *ast, zend_class_entry *scope);
__attribute__ ((visibility("default"))) zend_string *zend_ast_export(const char *prefix, zend_ast *ast, const char *suffix);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_copy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy_and_free(zend_ast *ast);

typedef void (*zend_ast_apply_func)(zend_ast **ast_ptr);
__attribute__ ((visibility("default"))) void zend_ast_apply(zend_ast *ast, zend_ast_apply_func fn);

static inline __attribute__((always_inline)) zend_bool zend_ast_is_list(zend_ast *ast) {
 return (ast->kind >> 7) & 1;
}
static inline __attribute__((always_inline)) zend_ast_list *zend_ast_get_list(zend_ast *ast) {
 do { if (__builtin_expect(!(zend_ast_is_list(ast)), 0)) __builtin_unreachable(); } while (0);
 return (zend_ast_list *) ast;
}

static inline __attribute__((always_inline)) zval *zend_ast_get_zval(zend_ast *ast) {
 do { if (__builtin_expect(!(ast->kind == ZEND_AST_ZVAL), 0)) __builtin_unreachable(); } while (0);
 return &((zend_ast_zval *) ast)->val;
}
static inline __attribute__((always_inline)) zend_string *zend_ast_get_str(zend_ast *ast) {
 zval *zv = zend_ast_get_zval(ast);
 do { if (__builtin_expect(!(zval_get_type(&(*(zv))) == 6), 0)) __builtin_unreachable(); } while (0);
 return (*(zv)).value.str;
}

static inline __attribute__((always_inline)) uint32_t zend_ast_get_num_children(zend_ast *ast) {
 do { if (__builtin_expect(!(!zend_ast_is_list(ast)), 0)) __builtin_unreachable(); } while (0);
 return ast->kind >> 8;
}
static inline __attribute__((always_inline)) uint32_t zend_ast_get_lineno(zend_ast *ast) {
 if (ast->kind == ZEND_AST_ZVAL) {
  zval *zv = zend_ast_get_zval(ast);
  return zv->u2.lineno;
 } else {
  return ast->lineno;
 }
}

static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval(zval *zv) {
 return zend_ast_create_zval_ex(zv, 0);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval_from_str(zend_string *str) {
 zval zv;
 do { zval *__z = (&zv); zend_string *__s = (str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 return zend_ast_create_zval(&zv);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval_from_long(zend_long lval) {
 zval zv;
 { zval *__z = (&zv); (*(__z)).value.lval = lval; (*(__z)).u1.type_info = 4; };
 return zend_ast_create_zval(&zv);
}

static inline __attribute__((always_inline)) zend_ast *zend_ast_create_binary_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_BINARY_OP, opcode, op0, op1);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_assign_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_ASSIGN_OP, opcode, op0, op1);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_cast(uint32_t type, zend_ast *op0) {
 return zend_ast_create_ex(ZEND_AST_CAST, type, op0);
}
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 zend_refcounted *ref;
 struct _gc_root_buffer *next;
 struct _gc_root_buffer *prev;
 uint32_t refcount;
} gc_root_buffer;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;
 zend_bool gc_full;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 gc_root_buffer to_free;
 gc_root_buffer *next_to_free;

 uint32_t gc_runs;
 uint32_t collected;
# 96 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
} zend_gc_globals;
# 105 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) extern int (*gc_collect_cycles)(void);

__attribute__ ((visibility("default"))) void gc_possible_root(zend_refcounted *ref);
__attribute__ ((visibility("default"))) void gc_remove_from_buffer(zend_refcounted *ref);
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);


__attribute__ ((visibility("default"))) int zend_gc_collect_cycles(void);

# 132 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_check_possible_root(zval *z)
{
 do { if (__builtin_expect(!!((zval_get_type(&(*(z))) == 10)), 0)) { (z) = &(*(z)).value.ref->val; } } while (0);
 if ((((*(z)).u1.v.type_flags & (1<<3)) != 0) && __builtin_expect(!!(!((*(z)).value.counted)->gc.u.v.gc_info), 0)) {
  gc_possible_root((*(z)).value.counted);
 }
}
# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"


__attribute__ ((visibility("default"))) void _zval_dtor_func(zend_refcounted *p );
__attribute__ ((visibility("default"))) void _zval_dtor_func_for_ptr(zend_refcounted *p );
__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );





static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (!(((*(zvalue)).u1.v.type_flags & (1<<2)) != 0)) {
  return;
 }
 _zval_dtor_func((*(zvalue)).value.counted );
}

static inline __attribute__((always_inline)) void _zval_ptr_dtor_nogc(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<2)) != 0) && !zval_delref_p(zval_ptr)) {
  _zval_dtor_func_for_ptr((*(zval_ptr)).value.counted );
 }
}

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<2)) != 0)) {
  if (!zval_delref_p(zval_ptr)) {
   _zval_dtor_func_for_ptr((*(zval_ptr)).value.counted );
  } else {
   gc_check_possible_root((zval_ptr));
  }
 }
}

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<2)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<4)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<2) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<2)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<4)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<2) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

__attribute__ ((visibility("default"))) size_t zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval *zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor_for_ptr(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 139 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval *p);
__attribute__ ((visibility("default"))) void zval_add_ref_unref(zval *p);


# 40 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter);


 int (*valid)(zend_object_iterator *iter);


 zval *(*get_current_data)(zend_object_iterator *iter);





 void (*get_current_key)(zend_object_iterator *iter, zval *key);


 void (*move_forward)(zend_object_iterator *iter);


 void (*rewind)(zend_object_iterator *iter);


 void (*invalidate_current)(zend_object_iterator *iter);
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 zend_object std;
 zval data;
 zend_object_iterator_funcs *funcs;
 zend_ulong index;
};

typedef struct _zend_class_iterator_funcs {
 zend_object_iterator_funcs *funcs;
 union _zend_function *zf_new_iterator;
 union _zend_function *zf_valid;
 union _zend_function *zf_current;
 union _zend_function *zf_key;
 union _zend_function *zf_next;
 union _zend_function *zf_rewind;
} zend_class_iterator_funcs;



__attribute__ ((visibility("default"))) zend_object_iterator* zend_iterator_unwrap(zval *array_ptr);


__attribute__ ((visibility("default"))) void zend_iterator_init(zend_object_iterator *iter);
__attribute__ ((visibility("default"))) void zend_iterator_dtor(zend_object_iterator *iter);

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);

# 41 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 2




typedef size_t (*zend_stream_fsizer_t)(void* handle);
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len);
typedef void (*zend_stream_closer_t)(void* handle);



typedef enum {
 ZEND_HANDLE_FILENAME,
 ZEND_HANDLE_FD,
 ZEND_HANDLE_FP,
 ZEND_HANDLE_STREAM,
 ZEND_HANDLE_MAPPED
} zend_stream_type;

typedef struct _zend_mmap {
 size_t len;
 size_t pos;
 void *map;
 char *buf;
 void *old_handle;
 zend_stream_closer_t old_closer;
} zend_mmap;

typedef struct _zend_stream {
 void *handle;
 int isatty;
 zend_mmap mmap;
 zend_stream_reader_t reader;
 zend_stream_fsizer_t fsizer;
 zend_stream_closer_t closer;
} zend_stream;

typedef struct _zend_file_handle {
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 const char *filename;
 zend_string *opened_path;
 zend_stream_type type;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle);
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len);
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh);
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);

# 97 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h"
typedef struct stat zend_stat_t;
# 42 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 80 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"






__attribute__ ((visibility("default"))) __attribute__((cold)) __attribute__((noreturn)) void zend_error_noreturn(int type, const char *format, ...);





struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

typedef struct _zend_trait_method_reference {
 zend_string *method_name;
 zend_class_entry *ce;
 zend_string *class_name;
} zend_trait_method_reference;

typedef struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;
 union {
  zend_class_entry *ce;
  zend_string *class_name;
 } *exclude_from_classes;
} zend_trait_precedence;

typedef struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 zend_string *alias;




 uint32_t modifiers;
} zend_trait_alias;

struct _zend_class_entry {
 char type;
 zend_string *name;
 struct _zend_class_entry *parent;
 int refcount;
 uint32_t ce_flags;

 int default_properties_count;
 int default_static_members_count;
 zval *default_properties_table;
 zval *default_static_members_table;
 zval *static_members_table;
 HashTable function_table;
 HashTable properties_info;
 HashTable constants_table;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__callstatic;
 union _zend_function *__tostring;
 union _zend_function *__debugInfo;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object* (*create_object)(zend_class_entry *class_type);
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref);
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type);
 union _zend_function *(*get_static_method)(zend_class_entry *ce, zend_string* method);


 int (*serialize)(zval *object, unsigned char **buffer, size_t *buf_len, zend_serialize_data *data);
 int (*unserialize)(zval *object, zend_class_entry *ce, const unsigned char *buf, size_t buf_len, zend_unserialize_data *data);

 uint32_t num_interfaces;
 uint32_t num_traits;
 zend_class_entry **interfaces;

 zend_class_entry **traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   zend_string *filename;
   uint32_t line_start;
   uint32_t line_end;
   zend_string *doc_comment;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) ;
 size_t (*printf_function)(const char *format, ...) ;
 size_t (*write_function)(const char *str, size_t str_length);
 FILE *(*fopen_function)(const char *filename, zend_string **opened_path);
 void (*message_handler)(zend_long message, const void *data);
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 zval *(*get_configuration_directive)(zend_string *name);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds);
 int (*stream_open_function)(const char *filename, zend_file_handle *handle);
 size_t (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 zend_string *(*vstrpprintf_function)(size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len);
 zend_string *(*resolve_path_function)(const char *filename, int filename_len);
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, size_t str_length);
# 234 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

int zend_startup(zend_utility_functions *utility_functions, char **extensions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);

__attribute__ ((visibility("default"))) __attribute__((cold)) void _zend_bailout(char *filename, uint lineno);

__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) int zend_make_printable_zval(zval *expr, zval *expr_copy);
__attribute__ ((visibility("default"))) size_t zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) size_t zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr);
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) ;

__attribute__ ((visibility("default"))) void zend_activate(void);
__attribute__ ((visibility("default"))) void zend_deactivate(void);
__attribute__ ((visibility("default"))) void zend_call_destructors(void);
__attribute__ ((visibility("default"))) void zend_activate_modules(void);
__attribute__ ((visibility("default"))) void zend_deactivate_modules(void);
__attribute__ ((visibility("default"))) void zend_post_deactivate_modules(void);

__attribute__ ((visibility("default"))) void free_estring(char **str_p);

# 269 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

extern __attribute__ ((visibility("default"))) size_t (*zend_printf)(const char *format, ...) ;
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, zend_string **opened_path);
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) ;
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds);
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle);
extern size_t (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern zend_string *(*zend_vstrpprintf)(size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len);
extern __attribute__ ((visibility("default"))) zend_string *(*zend_resolve_path)(const char *filename, int filename_len);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_error(int type, const char *format, ...) ;
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_error(zend_class_entry *exception_ce, const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_type_error(const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_internal_type_error(zend_bool throw_exception, const char *format, ...);

__attribute__((cold)) void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;






__attribute__ ((visibility("default"))) void zend_message_dispatcher(zend_long message, const void *data);

__attribute__ ((visibility("default"))) zval *zend_get_configuration_directive(zend_string *name);

# 316 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current);
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current);
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved);




# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
struct _zend_property_info;
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, void **cache_slot, zval *rv);


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type, zval *rv);
# 50 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, void **cache_slot);


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value);



typedef zval *(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, int type, void **cache_slot);



typedef void (*zend_object_set_t)(zval *object, zval *value);




typedef zval* (*zend_object_get_t)(zval *object, zval *rv);







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, void **cache_slot);


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty);


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, void **cache_slot);


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset);


typedef HashTable *(*zend_object_get_properties_t)(zval *object);

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp);





typedef int (*zend_object_call_method_t)(zend_string *method, zend_object *object, zend_execute_data *execute_data, zval *return_value);
typedef union _zend_function *(*zend_object_get_method_t)(zend_object **object, zend_string *method, const zval *key);
typedef union _zend_function *(*zend_object_get_constructor_t)(zend_object *object);


typedef void (*zend_object_dtor_obj_t)(zend_object *object);
typedef void (*zend_object_free_obj_t)(zend_object *object);
typedef zend_object* (*zend_object_clone_obj_t)(zval *object);



typedef zend_string *(*zend_object_get_class_name_t)(const zend_object *object);

typedef int (*zend_object_compare_t)(zval *object1, zval *object2);
typedef int (*zend_object_compare_zvals_t)(zval *resul, zval *op1, zval *op2);



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type);



typedef int (*zend_object_count_elements_t)(zval *object, zend_long *count);

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zend_object **obj_ptr);

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval **table, int *n);

typedef int (*zend_object_do_operation_t)(zend_uchar opcode, zval *result, zval *op1, zval *op2);

struct _zend_object_handlers {

 int offset;

 zend_object_free_obj_t free_obj;
 zend_object_dtor_obj_t dtor_obj;
 zend_object_clone_obj_t clone_obj;

 zend_object_read_property_t read_property;
 zend_object_write_property_t write_property;
 zend_object_read_dimension_t read_dimension;
 zend_object_write_dimension_t write_dimension;
 zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
 zend_object_get_t get;
 zend_object_set_t set;
 zend_object_has_property_t has_property;
 zend_object_unset_property_t unset_property;
 zend_object_has_dimension_t has_dimension;
 zend_object_unset_dimension_t unset_dimension;
 zend_object_get_properties_t get_properties;
 zend_object_get_method_t get_method;
 zend_object_call_method_t call_method;
 zend_object_get_constructor_t get_constructor;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
 zend_object_do_operation_t do_operation;
 zend_object_compare_zvals_t compare;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;





__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, zend_string *function_name_strval, const zval *key);
__attribute__ ((visibility("default"))) zval *zend_std_get_static_property(zend_class_entry *ce, zend_string *property_name, zend_bool silent);
__attribute__ ((visibility("default"))) __attribute__((cold)) zend_bool zend_std_unset_static_property(zend_class_entry *ce, zend_string *property_name);
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zend_object *object);
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zend_string *member, int silent);
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object);
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp);
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type);
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, void **cache_slot);
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);

__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, zend_string *function_name);

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, zend_string *prop_info_name);

__attribute__ ((visibility("default"))) zend_function *zend_get_call_trampoline_func(zend_class_entry *ce, zend_string *method_name, int is_static);

__attribute__ ((visibility("default"))) uint32_t *zend_get_property_guard(zend_object *zobj, zend_string *member);
# 193 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"

# 336 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2






# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multiply.h" 1
# 143 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multiply.h"
static inline __attribute__((always_inline)) size_t zend_safe_address(size_t nmemb, size_t size, size_t offset, int *overflow)
{
 size_t res = nmemb;
 zend_ulong m_overflow = 0;







 __asm__ ("mul" "q" " %3\n\t"
  "add %4,%0\n\t"
  "adc $0,%1"
  : "=&a"(res), "=&d" (m_overflow)
  : "%0"(res),
    "rm"(size),
    "rm"(offset));


 if (__builtin_expect(!!(m_overflow), 0)) {
  *overflow = 1;
  return 0;
 }
 *overflow = 0;
 return res;
}
# 40 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int pow_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1);
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1);
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int zend_is_identical(zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only);
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce);
# 91 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_uchar _is_numeric_string_ex(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors, int *oflow_info);

__attribute__ ((visibility("default"))) const char* zend_memnstr_ex(const char *haystack, const char *needle, size_t needle_len, const char *end);
__attribute__ ((visibility("default"))) const char* zend_memnrstr_ex(const char *haystack, const char *needle, size_t needle_len, const char *end);
# 113 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_long zend_dval_to_lval_slow(double d);

static inline __attribute__((always_inline)) zend_long zend_dval_to_lval(double d)
{
 if (__builtin_expect(!!(!(sizeof (d) == sizeof (float) ? __finitef (d) : sizeof (d) == sizeof (double) ? __finite (d) : __finitel (d))), 0) || __builtin_expect(!!((sizeof (d) == sizeof (float) ? __isnanf (d) : sizeof (d) == sizeof (double) ? __isnan (d) : __isnanl (d))), 0)) {
  return 0;
 } else if (!(!((d) >= (9223372036854775807L) || (d) < (-9223372036854775807L -1)))) {
  return zend_dval_to_lval_slow(d);
 }
 return (zend_long)d;
}


static inline __attribute__((always_inline)) zend_long zend_dval_to_lval_cap(double d)
{
 if (__builtin_expect(!!(!(sizeof (d) == sizeof (float) ? __finitef (d) : sizeof (d) == sizeof (double) ? __finite (d) : __finitel (d))), 0) || __builtin_expect(!!((sizeof (d) == sizeof (float) ? __isnanf (d) : sizeof (d) == sizeof (double) ? __isnan (d) : __isnanl (d))), 0)) {
  return 0;
 } else if (!(!((d) >= (9223372036854775807L) || (d) < (-9223372036854775807L -1)))) {
  return (d > 0 ? (9223372036854775807L) : (-9223372036854775807L -1));
 }
 return (zend_long)d;
}





static inline __attribute__((always_inline)) zend_uchar is_numeric_string_ex(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors, int *oflow_info)
{
 if (*str > '9') {
  return 0;
 }
 return _is_numeric_string_ex(str, length, lval, dval, allow_errors, oflow_info);
}

static inline __attribute__((always_inline)) zend_uchar is_numeric_string(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void *)0));
}

__attribute__ ((visibility("default"))) zend_uchar is_numeric_str_function(const zend_string *str, zend_long *lval, double *dval);

static inline __attribute__((always_inline)) const char *
zend_memnstr(const char *haystack, const char *needle, size_t needle_len, const char *end)
{
 const char *p = haystack;
 const char ne = needle[needle_len-1];
 ptrdiff_t off_p;
 size_t off_s;

 if (needle_len == 1) {
  return (const char *)memchr(p, *needle, (end-p));
 }

 off_p = end - haystack;
 off_s = (off_p > 0) ? (size_t)off_p : 0;

 if (needle_len > off_s) {
  return ((void *)0);
 }

 if (__builtin_expect(!!(off_s < 1024 || needle_len < 3), 1)) {
  end -= needle_len;

  while (p <= end) {
   if ((p = (const char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
    if (!memcmp(needle, p, needle_len-1)) {
     return p;
    }
   }

   if (p == ((void *)0)) {
    return ((void *)0);
   }

   p++;
  }

  return ((void *)0);
 } else {
  return zend_memnstr_ex(haystack, needle, needle_len, end);
 }
}

static inline __attribute__((always_inline)) const void *zend_memrchr(const void *s, int c, size_t n)
{
 const unsigned char *e;
 if (n <= 0) {
  return ((void *)0);
 }

 for (e = (const unsigned char *)s + n - 1; e >= (const unsigned char *)s; e--) {
  if (*e == (const unsigned char)c) {
   return (const void *)e;
  }
 }
 return ((void *)0);
}


static inline __attribute__((always_inline)) const char *
zend_memnrstr(const char *haystack, const char *needle, size_t needle_len, char *end)
{
    const char *p = end;
    const char ne = needle[needle_len-1];
    ptrdiff_t off_p;
    size_t off_s;

    if (needle_len == 1) {
        return (const char *)zend_memrchr(haystack, *needle, (p - haystack));
    }

    off_p = end - haystack;
    off_s = (off_p > 0) ? (size_t)off_p : 0;

    if (needle_len > off_s) {
        return ((void *)0);
    }

 if (__builtin_expect(!!(off_s < 1024 || needle_len < 3), 1)) {
  p -= needle_len;

  do {
   if ((p = (const char *)zend_memrchr(haystack, *needle, (p - haystack) + 1)) && ne == p[needle_len-1]) {
    if (!memcmp(needle, p, needle_len - 1)) {
     return p;
    }
   }
  } while (p-- >= haystack);

  return ((void *)0);
 } else {
  return zend_memnrstr_ex(haystack, needle, needle_len, end);
 }
}

__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op);
__attribute__ ((visibility("default"))) void _convert_to_cstring(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_string(zval *op );
__attribute__ ((visibility("default"))) void convert_to_long(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_long_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_long_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);

__attribute__ ((visibility("default"))) zend_long _zval_get_long_func(zval *op);
__attribute__ ((visibility("default"))) double _zval_get_double_func(zval *op);
__attribute__ ((visibility("default"))) zend_string* _zval_get_string_func(zval *op);

static inline __attribute__((always_inline)) zend_long _zval_get_long(zval *op) {
 return zval_get_type(&(*(op))) == 4 ? (*(op)).value.lval : _zval_get_long_func(op);
}
static inline __attribute__((always_inline)) double _zval_get_double(zval *op) {
 return zval_get_type(&(*(op))) == 5 ? (*(op)).value.dval : _zval_get_double_func(op);
}
static inline __attribute__((always_inline)) zend_string *_zval_get_string(zval *op) {
 return zval_get_type(&(*(op))) == 6 ? zend_string_copy((*(op)).value.str) : _zval_get_string_func(op);
}
# 287 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);
__attribute__ ((visibility("default"))) int zend_object_is_true(zval *op);




static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
{
 int result = 0;

again:
 switch (zval_get_type(&(*(op)))) {
  case 3:
   result = 1;
   break;
  case 4:
   if ((*(op)).value.lval) {
    result = 1;
   }
   break;
  case 5:
   if ((*(op)).value.dval) {
    result = 1;
   }
   break;
  case 6:
   if (((*(op)).value.str)->len > 1 || (((*(op)).value.str)->len && ((*(op)).value.str)->val[0] != '0')) {
    result = 1;
   }
   break;
  case 7:
   if (((*(op)).value.arr)->nNumOfElements) {
    result = 1;
   }
   break;
  case 8:
   result = zend_object_is_true(op);
   break;
  case 9:
   if (__builtin_expect(!!((*op).value.res->handle), 1)) {
    result = 1;
   }
   break;
  case 10:
   op = &(*(op)).value.ref->val;
   goto again;
   break;
  default:
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int numeric_compare_function(zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *op1, zval *op2, zend_bool case_insensitive);
__attribute__ ((visibility("default"))) int string_compare_function(zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *op1, zval *op2);


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_copy(char *dest, const char *source, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_dup(const char *source, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_dup_ex(const char *source, size_t length);
__attribute__ ((visibility("default"))) zend_string* zend_string_tolower(zend_string *str);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp_l(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);

__attribute__ ((visibility("default"))) zend_long zendi_smart_strcmp(zend_string *s1, zend_string *s2);
__attribute__ ((visibility("default"))) int zend_compare_symbol_tables(HashTable *ht1, HashTable *ht2);
__attribute__ ((visibility("default"))) int zend_compare_arrays(zval *a1, zval *a2);
__attribute__ ((visibility("default"))) int zend_compare_objects(zval *o1, zval *o2);

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) zend_long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 445 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) void fast_long_increment_function(zval *op1)
{
# 461 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "incq (%0)\n\t"
  "jno  0f\n\t"
  "movl $0x0, (%0)\n\t"
  "movl $0x43e00000, 0x4(%0)\n\t"
  "movl %1, %c2(%0)\n"
  "0:"
  :
  : "r"(&op1->value),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "cc");
# 481 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_decrement_function(zval *op1)
{
# 499 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "decq (%0)\n\t"
  "jno  0f\n\t"
  "movl $0x00000000, (%0)\n\t"
  "movl $0xc3e00000, 0x4(%0)\n\t"
  "movl %1,%c2(%0)\n"
  "0:"
  :
  : "r"(&op1->value),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "cc");
# 519 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_add_function(zval *result, zval *op1, zval *op2)
{
# 547 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "movq	(%1), %%rax\n\t"
  "addq   (%2), %%rax\n\t"
  "jo     0f\n\t"
  "movq   %%rax, (%0)\n\t"
  "movl   %3, %c5(%0)\n\t"
  "jmp    1f\n"
  "0:\n\t"
  "fildq	(%1)\n\t"
  "fildq	(%2)\n\t"
  "faddp	%%st, %%st(1)\n\t"
  "movl   %4, %c5(%0)\n\t"
  "fstpl	(%0)\n"
  "1:"
  :
  : "r"(&result->value),
    "r"(&op1->value),
    "r"(&op2->value),
    "n"(4),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "rax","cc");
# 583 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2)
{
 if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 4), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   fast_long_add_function(result, op1, op2);
   return SUCCESS;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = ((double)(*(op1)).value.lval) + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 5), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + ((double)(*(op2)).value.lval); (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 }
 return add_function(result, op1, op2);
}

static inline __attribute__((always_inline)) void fast_long_sub_function(zval *result, zval *op1, zval *op2)
{
# 637 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "movq	(%1), %%rax\n\t"
  "subq   (%2), %%rax\n\t"
  "jo     0f\n\t"
  "movq   %%rax, (%0)\n\t"
  "movl   %3, %c5(%0)\n\t"
  "jmp    1f\n"
  "0:\n\t"
  "fildq	(%2)\n\t"
  "fildq	(%1)\n\t"



  "fsubp	%%st, %%st(1)\n\t"

  "movl   %4, %c5(%0)\n\t"
  "fstpl	(%0)\n"
  "1:"
  :
  : "r"(&result->value),
    "r"(&op1->value),
    "r"(&op2->value),
    "n"(4),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "rax","cc");
# 671 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2)
{
 return div_function(result, op1, op2);
}

static inline __attribute__((always_inline)) int fast_equal_check_function(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 4), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   return (*(op1)).value.lval == (*(op2)).value.lval;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   return ((double)(*(op1)).value.lval) == (*(op2)).value.dval;
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 5), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   return (*(op1)).value.dval == (*(op2)).value.dval;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   return (*(op1)).value.dval == ((double)(*(op2)).value.lval);
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 6), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
   if ((*(op1)).value.str == (*(op2)).value.str) {
    return 1;
   } else if (((*(op1)).value.str)->val[0] > '9' || ((*(op2)).value.str)->val[0] > '9') {
    if (((*(op1)).value.str)->len != ((*(op2)).value.str)->len) {
     return 0;
    } else {
     return memcmp(((*(op1)).value.str)->val, ((*(op2)).value.str)->val, ((*(op1)).value.str)->len) == 0;
    }
   } else {
    return zendi_smart_strcmp((*(op1)).value.str, (*(op2)).value.str) == 0;
   }
  }
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_equal_check_long(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
  return (*(op1)).value.lval == (*(op2)).value.lval;
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_equal_check_string(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
  if ((*(op1)).value.str == (*(op2)).value.str) {
   return 1;
  } else if (((*(op1)).value.str)->val[0] > '9' || ((*(op2)).value.str)->val[0] > '9') {
   if (((*(op1)).value.str)->len != ((*(op2)).value.str)->len) {
    return 0;
   } else {
    return memcmp(((*(op1)).value.str)->val, ((*(op2)).value.str)->val, ((*(op1)).value.str)->len) == 0;
   }
  } else {
   return zendi_smart_strcmp((*(op1)).value.str, (*(op2)).value.str) == 0;
  }
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_is_identical_function(zval *op1, zval *op2)
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  return 0;
 } else if (zval_get_type(&(*(op1))) <= 3) {
  return 1;
 }
 return zend_is_identical(op1, op2);
}

static inline __attribute__((always_inline)) int fast_is_not_identical_function(zval *op1, zval *op2)
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  return 1;
 } else if (zval_get_type(&(*(op1))) <= 3) {
  return 0;
 }
 return !zend_is_identical(op1, op2);
}
# 802 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) char *zend_print_ulong_to_buf(char *buf, zend_ulong num) {
 *buf = '\0';
 do {
  *--buf = (char) (num % 10) + '0';
  num /= 10;
 } while (num > 0);
 return buf;
}


static inline __attribute__((always_inline)) char *zend_print_long_to_buf(char *buf, zend_long num) {
 if (num < 0) {
     char *result = zend_print_ulong_to_buf(buf, ~((zend_ulong) num) + 1);
     *--result = '-';
  return result;
 } else {
     return zend_print_ulong_to_buf(buf, num);
 }
}

__attribute__ ((visibility("default"))) zend_string* zend_long_to_str(zend_long num);

static inline __attribute__((always_inline)) void zend_unwrap_reference(zval *op)
{
 if (zval_refcount_p(op) == 1) {
  do { zval *_z = (op); zend_reference *ref; do { if (__builtin_expect(!((zval_get_type(&(*(_z))) == 10)), 0)) __builtin_unreachable(); } while (0); ref = (*(_z)).value.ref; do { zval *_z1 = (_z); const zval *_z2 = (&ref->val); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0); } while (0);
 } else {
  zval_delref_p(op);
  do { zval *_z1 = (op); const zval *_z2 = (&(*(op)).value.ref->val); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
 }
}




# 337 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 36 "Zend/zend_language_scanner.l" 2




# 1 "Zend/zend_language_parser.h" 1
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.y"
# 50 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.h"






   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_DOUBLE_ARROW = 268,
     T_YIELD_FROM = 269,
     T_POW_EQUAL = 270,
     T_SR_EQUAL = 271,
     T_SL_EQUAL = 272,
     T_XOR_EQUAL = 273,
     T_OR_EQUAL = 274,
     T_AND_EQUAL = 275,
     T_MOD_EQUAL = 276,
     T_CONCAT_EQUAL = 277,
     T_DIV_EQUAL = 278,
     T_MUL_EQUAL = 279,
     T_MINUS_EQUAL = 280,
     T_PLUS_EQUAL = 281,
     T_COALESCE = 282,
     T_BOOLEAN_OR = 283,
     T_BOOLEAN_AND = 284,
     T_SPACESHIP = 285,
     T_IS_NOT_IDENTICAL = 286,
     T_IS_IDENTICAL = 287,
     T_IS_NOT_EQUAL = 288,
     T_IS_EQUAL = 289,
     T_IS_GREATER_OR_EQUAL = 290,
     T_IS_SMALLER_OR_EQUAL = 291,
     T_SR = 292,
     T_SL = 293,
     T_INSTANCEOF = 294,
     T_UNSET_CAST = 295,
     T_BOOL_CAST = 296,
     T_OBJECT_CAST = 297,
     T_ARRAY_CAST = 298,
     T_STRING_CAST = 299,
     T_DOUBLE_CAST = 300,
     T_INT_CAST = 301,
     T_DEC = 302,
     T_INC = 303,
     T_POW = 304,
     T_CLONE = 305,
     T_NEW = 306,
     T_NOELSE = 307,
     T_ELSEIF = 308,
     T_ELSE = 309,
     T_ENDIF = 310,
     T_PUBLIC = 311,
     T_PROTECTED = 312,
     T_PRIVATE = 313,
     T_FINAL = 314,
     T_ABSTRACT = 315,
     T_STATIC = 316,
     T_LNUMBER = 317,
     T_DNUMBER = 318,
     T_STRING = 319,
     T_VARIABLE = 320,
     T_INLINE_HTML = 321,
     T_ENCAPSED_AND_WHITESPACE = 322,
     T_CONSTANT_ENCAPSED_STRING = 323,
     T_STRING_VARNAME = 324,
     T_NUM_STRING = 325,
     T_EXIT = 326,
     T_IF = 327,
     T_ECHO = 328,
     T_DO = 329,
     T_WHILE = 330,
     T_ENDWHILE = 331,
     T_FOR = 332,
     T_ENDFOR = 333,
     T_FOREACH = 334,
     T_ENDFOREACH = 335,
     T_DECLARE = 336,
     T_ENDDECLARE = 337,
     T_AS = 338,
     T_SWITCH = 339,
     T_ENDSWITCH = 340,
     T_CASE = 341,
     T_DEFAULT = 342,
     T_BREAK = 343,
     T_CONTINUE = 344,
     T_GOTO = 345,
     T_FUNCTION = 346,
     T_CONST = 347,
     T_RETURN = 348,
     T_TRY = 349,
     T_CATCH = 350,
     T_FINALLY = 351,
     T_THROW = 352,
     T_USE = 353,
     T_INSTEADOF = 354,
     T_GLOBAL = 355,
     T_VAR = 356,
     T_UNSET = 357,
     T_ISSET = 358,
     T_EMPTY = 359,
     T_HALT_COMPILER = 360,
     T_CLASS = 361,
     T_TRAIT = 362,
     T_INTERFACE = 363,
     T_EXTENDS = 364,
     T_IMPLEMENTS = 365,
     T_OBJECT_OPERATOR = 366,
     T_LIST = 367,
     T_ARRAY = 368,
     T_CALLABLE = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_DIR = 372,
     T_CLASS_C = 373,
     T_TRAIT_C = 374,
     T_METHOD_C = 375,
     T_FUNC_C = 376,
     T_COMMENT = 377,
     T_DOC_COMMENT = 378,
     T_OPEN_TAG = 379,
     T_OPEN_TAG_WITH_ECHO = 380,
     T_CLOSE_TAG = 381,
     T_WHITESPACE = 382,
     T_START_HEREDOC = 383,
     T_END_HEREDOC = 384,
     T_DOLLAR_OPEN_CURLY_BRACES = 385,
     T_CURLY_OPEN = 386,
     T_PAAMAYIM_NEKUDOTAYIM = 387,
     T_NAMESPACE = 388,
     T_NS_C = 389,
     T_NS_SEPARATOR = 390,
     T_ELLIPSIS = 391,
     T_ERROR = 392
   };
# 350 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.h"
int zendparse (void);
# 41 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef union _znode_op {
 uint32_t constant;
 uint32_t var;
 uint32_t num;
 uint32_t opline_num;



 uint32_t jmp_offset;




} znode_op;

typedef struct _znode {
 zend_uchar op_type;
 zend_uchar flag;
 union {
  znode_op op;
  zval constant;
 } u;
} znode;


typedef struct _zend_ast_znode {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 znode node;
} zend_ast_znode;
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_znode(znode *node);

static inline __attribute__((always_inline)) znode *zend_ast_get_znode(zend_ast *ast) {
 return &((zend_ast_znode *) ast)->node;
}

typedef struct _zend_declarables {
 zend_long ticks;
} zend_declarables;


typedef struct _zend_file_context {
 zend_declarables declarables;
 znode implementing_class;

 zend_string *current_namespace;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 HashTable *imports;
 HashTable *imports_function;
 HashTable *imports_const;
} zend_file_context;

typedef union _zend_parser_stack_elem {
 zend_ast *ast;
 zend_string *str;
 zend_ulong num;
} zend_parser_stack_elem;

void zend_compile_top_stmt(zend_ast *ast);
void zend_compile_stmt(zend_ast *ast);
void zend_compile_expr(znode *node, zend_ast *ast);
void zend_compile_var(znode *node, zend_ast *ast, uint32_t type);
void zend_eval_const_expr(zend_ast **ast_ptr);
void zend_const_expr_to_zval(zval *result, zend_ast *ast);

typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data);

struct _zend_op {
 const void *handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 uint32_t extended_value;
 uint32_t lineno;
 zend_uchar opcode;
 zend_uchar op1_type;
 zend_uchar op2_type;
 zend_uchar result_type;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;

typedef struct _zend_label {
 int brk_cont;
 uint32_t opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 uint32_t try_op;
 uint32_t catch_op;
 uint32_t finally_op;
 uint32_t finally_end;
} zend_try_catch_element;







typedef struct _zend_live_range {
 uint32_t var;
 uint32_t start;
 uint32_t end;
} zend_live_range;


typedef struct _zend_oparray_context {
 uint32_t opcodes_size;
 int vars_size;
 int literals_size;
 int backpatch_count;
 int in_finally;
 uint32_t fast_call_var;
 int current_brk_cont;
 int last_brk_cont;
 zend_brk_cont_element *brk_cont_array;
 HashTable *labels;
} zend_oparray_context;
# 291 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
char *zend_visibility_string(uint32_t fn_flags);

typedef struct _zend_property_info {
 uint32_t offset;

 uint32_t flags;
 zend_string *name;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_property_info;
# 311 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_class_constant {
 zval value;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_class_constant;


typedef struct _zend_internal_arg_info {
 const char *name;
 const char *class_name;
 zend_uchar type_hint;
 zend_uchar pass_by_reference;
 zend_bool allow_null;
 zend_bool is_variadic;
} zend_internal_arg_info;


typedef struct _zend_arg_info {
 zend_string *name;
 zend_string *class_name;
 zend_uchar type_hint;
 zend_uchar pass_by_reference;
 zend_bool allow_null;
 zend_bool is_variadic;
} zend_arg_info;






typedef struct _zend_internal_function_info {
 zend_uintptr_t required_num_args;
 const char *class_name;
 zend_uchar type_hint;
 zend_bool return_reference;
 zend_bool allow_null;
 zend_bool _is_variadic;
} zend_internal_function_info;

struct _zend_op_array {

 zend_uchar type;
 zend_uchar arg_flags[3];
 uint32_t fn_flags;
 zend_string *function_name;
 zend_class_entry *scope;
 zend_function *prototype;
 uint32_t num_args;
 uint32_t required_num_args;
 zend_arg_info *arg_info;


 uint32_t *refcount;

 uint32_t this_var;

 uint32_t last;
 zend_op *opcodes;

 int last_var;
 uint32_t T;
 zend_string **vars;

 int last_live_range;
 int last_try_catch;
 zend_live_range *live_range;
 zend_try_catch_element *try_catch_array;


 HashTable *static_variables;

 zend_string *filename;
 uint32_t line_start;
 uint32_t line_end;
 zend_string *doc_comment;
 uint32_t early_binding;

 int last_literal;
 zval *literals;

 int cache_size;
 void **run_time_cache;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 zend_uchar arg_flags[3];
 uint32_t fn_flags;
 zend_string* function_name;
 zend_class_entry *scope;
 zend_function *prototype;
 uint32_t num_args;
 uint32_t required_num_args;
 zend_internal_arg_info *arg_info;


 void (*handler)(zend_execute_data *execute_data, zval *return_value);
 struct _zend_module_entry *module;
 void *reserved[4];
} zend_internal_function;



union _zend_function {
 zend_uchar type;
 uint32_t quick_arg_flags;

 struct {
  zend_uchar type;
  zend_uchar arg_flags[3];
  uint32_t fn_flags;
  zend_string *function_name;
  zend_class_entry *scope;
  union _zend_function *prototype;
  uint32_t num_args;
  uint32_t required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
};

typedef enum _zend_call_kind {
 ZEND_CALL_NESTED_FUNCTION,
 ZEND_CALL_NESTED_CODE,
 ZEND_CALL_TOP_FUNCTION,
 ZEND_CALL_TOP_CODE
} zend_call_kind;

struct _zend_execute_data {
 const zend_op *opline;
 zend_execute_data *call;
 zval *return_value;
 zend_function *func;
 zval This;
 zend_execute_data *prev_execute_data;
 zend_array *symbol_table;

 void **run_time_cache;


 zval *literals;

};
# 684 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));










extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 102 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 112 "/usr/include/setjmp.h" 3 4

# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;








extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;

__attribute__ ((visibility("default"))) int zendparse(void);







extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 66 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h"
typedef struct _zend_stack {
 int size, top, max;
 void *elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack, int size);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element);
__attribute__ ((visibility("default"))) void *zend_stack_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void *zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);
__attribute__ ((visibility("default"))) void zend_stack_clean(zend_stack *stack, void (*func)(void *), zend_bool free_elements);

# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
 zend_bool persistent;
} zend_ptr_stack;





__attribute__ ((visibility("default"))) void zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_init_ex(zend_ptr_stack *stack, zend_bool persistent);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__ ((visibility("default"))) void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
__attribute__ ((visibility("default"))) int zend_ptr_stack_num_elements(zend_ptr_stack *stack);

# 58 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h"
static inline __attribute__((always_inline)) void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_top(zend_ptr_stack *stack)
{
    return stack->elements[stack->top - 1];
}
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object);
__attribute__ ((visibility("default"))) zend_object *zend_objects_new(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object *old_object);
__attribute__ ((visibility("default"))) zend_object *zend_objects_clone_obj(zval *object);

# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h" 2
# 43 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h"
typedef struct _zend_objects_store {
 zend_object **object_buckets;
 uint32_t top;
 uint32_t size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, uint32_t init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects);
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects);
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) void zend_objects_store_put(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_store_del(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_store_free(zend_object *object);


__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, zend_object *object);
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zend_object *object);

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects);



__attribute__ ((visibility("default"))) zend_object *zend_object_create_proxy(zval *object, zval *member);

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);


static inline __attribute__((always_inline)) void zend_object_release(zend_object *obj)
{
 if (--(obj)->gc.refcount == 0) {
  zend_objects_store_del(obj);
 } else if (__builtin_expect(!!(!(obj)->gc.u.v.gc_info), 0)) {
  gc_possible_root((zend_refcounted*)obj);
 }
}

static inline __attribute__((always_inline)) size_t zend_object_properties_size(zend_class_entry *ce)
{
 return sizeof(zval) *
  (ce->default_properties_count -
   ((ce->ce_flags & 0x1000000) ? 0 : 1));
}
# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_build.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 2
# 69 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 const struct _zend_ini_entry *ini_entry;
 const struct _zend_module_dep *deps;
 const char *name;
 const struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number);
 int (*module_shutdown_func)(int type, int module_number);
 int (*request_startup_func)(int type, int module_number);
 int (*request_shutdown_func)(int type, int module_number);
 void (*info_func)(zend_module_entry *zend_module);
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global);
 void (*globals_dtor)(void *global);
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
 const char *build_id;
};
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_request_startup(zend_module_entry *module);
int module_registry_unload_temp(const zend_module_entry *module);
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"





extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);


# 208 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 209 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 2
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length);

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name);
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size);
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from);
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent);
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding);

typedef struct _zend_multibyte_functions {
    const char *provider_name;
    zend_encoding_fetcher encoding_fetcher;
    zend_encoding_name_getter encoding_name_getter;
    zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
    zend_encoding_detector encoding_detector;
    zend_encoding_converter encoding_converter;
    zend_encoding_list_parser encoding_list_parser;
    zend_encoding_internal_encoding_getter internal_encoding_getter;
    zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;






__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions);
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name);
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size);
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from);
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size);
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length);


# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_arena.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_arena.h"
typedef struct _zend_arena zend_arena;

struct _zend_arena {
 char *ptr;
 char *end;
 zend_arena *prev;
};

static inline __attribute__((always_inline)) zend_arena* zend_arena_create(size_t size)
{
 zend_arena *arena = (zend_arena*)(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) );

 arena->ptr = (char*) arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L));
 arena->end = (char*) arena + size;
 arena->prev = ((void *)0);
 return arena;
}

static inline __attribute__((always_inline)) void zend_arena_destroy(zend_arena *arena)
{
 do {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  arena = prev;
 } while (arena);
}



static inline __attribute__((always_inline)) void* zend_arena_alloc(zend_arena **arena_ptr, size_t size)
{
 zend_arena *arena = *arena_ptr;
 char *ptr = arena->ptr;

 size = (((size) + 8 - 1L) & ~(8 - 1L));

 if (__builtin_expect(!!(size <= (size_t)(arena->end - ptr)), 1)) {
  arena->ptr = ptr + size;
 } else {
  size_t arena_size =
   __builtin_expect(!!((size + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L))) > (size_t)(arena->end - (char*) arena)), 0) ?
    (size + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L))) :
    (size_t)(arena->end - (char*) arena);
  zend_arena *new_arena = (zend_arena*)(__builtin_constant_p((arena_size) ) ? (((arena_size) <= 8) ? _emalloc_8() : (((arena_size) <= 16) ? _emalloc_16() : (((arena_size) <= 24) ? _emalloc_24() : (((arena_size) <= 32) ? _emalloc_32() : (((arena_size) <= 40) ? _emalloc_40() : (((arena_size) <= 48) ? _emalloc_48() : (((arena_size) <= 56) ? _emalloc_56() : (((arena_size) <= 64) ? _emalloc_64() : (((arena_size) <= 80) ? _emalloc_80() : (((arena_size) <= 96) ? _emalloc_96() : (((arena_size) <= 112) ? _emalloc_112() : (((arena_size) <= 128) ? _emalloc_128() : (((arena_size) <= 160) ? _emalloc_160() : (((arena_size) <= 192) ? _emalloc_192() : (((arena_size) <= 224) ? _emalloc_224() : (((arena_size) <= 256) ? _emalloc_256() : (((arena_size) <= 320) ? _emalloc_320() : (((arena_size) <= 384) ? _emalloc_384() : (((arena_size) <= 448) ? _emalloc_448() : (((arena_size) <= 512) ? _emalloc_512() : (((arena_size) <= 640) ? _emalloc_640() : (((arena_size) <= 768) ? _emalloc_768() : (((arena_size) <= 896) ? _emalloc_896() : (((arena_size) <= 1024) ? _emalloc_1024() : (((arena_size) <= 1280) ? _emalloc_1280() : (((arena_size) <= 1536) ? _emalloc_1536() : (((arena_size) <= 1792) ? _emalloc_1792() : (((arena_size) <= 2048) ? _emalloc_2048() : (((arena_size) <= 2560) ? _emalloc_2560() : (((arena_size) <= 3072) ? _emalloc_3072() : (((arena_size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((arena_size)) : _emalloc_huge((arena_size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((arena_size) ) );

  ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L));
  new_arena->ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L)) + size;
  new_arena->end = (char*) new_arena + arena_size;
  new_arena->prev = arena;
  *arena_ptr = new_arena;
 }

 return (void*) ptr;
}

static inline __attribute__((always_inline)) void* zend_arena_calloc(zend_arena **arena_ptr, size_t count, size_t unit_size)
{
 int overflow;
 size_t size;
 void *ret;

 size = zend_safe_address(unit_size, count, 0, &overflow);
 if (__builtin_expect(!!(overflow), 0)) {
  zend_error((1<<0L), "Possible integer overflow in zend_arena_calloc() (%zu * %zu)", unit_size, count);
 }
 ret = zend_arena_alloc(arena_ptr, size);
 memset(ret, 0, size);
 return ret;
}

static inline __attribute__((always_inline)) void* zend_arena_checkpoint(zend_arena *arena)
{
 return arena->ptr;
}

static inline __attribute__((always_inline)) void zend_arena_release(zend_arena **arena_ptr, void *checkpoint)
{
 zend_arena *arena = *arena_ptr;

 while (__builtin_expect(!!((char*)checkpoint > arena->end), 0) ||
        __builtin_expect(!!((char*)checkpoint <= (char*)arena), 0)) {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  *arena_ptr = arena = prev;
 }
 do { if (__builtin_expect(!((char*)checkpoint > (char*)arena && (char*)checkpoint <= arena->end), 0)) __builtin_unreachable(); } while (0);
 arena->ptr = (char*)checkpoint;
}
# 41 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 66 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack loop_var_stack;

 zend_class_entry *active_class_entry;

 zend_string *compiled_filename;

 int zend_lineno;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 struct _zend_ini_parser_param *ini_parser_param;

 uint32_t start_lineno;
 zend_bool increment_lineno;

 zend_string *doc_comment;

 uint32_t compiler_options;

 HashTable const_filenames;

 zend_oparray_context context;
 zend_file_context file_context;

 zend_arena *arena;

 zend_string *empty_string;
 zend_string *one_char_string[256];

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;

 zend_ast *ast;
 zend_arena *ast_arena;

 zend_stack delayed_oplines_stack;





};


struct _zend_executor_globals {
 zval uninitialized_zval;
 zval error_zval;


 zend_array *symtable_cache[32];
 zend_array **symtable_cache_limit;
 zend_array **symtable_cache_ptr;

 zend_array symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int exit_status;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zval *vm_stack_top;
 zval *vm_stack_end;
 zend_vm_stack vm_stack;

 struct _zend_execute_data *current_execute_data;
 zend_class_entry *fake_scope;

 zend_long precision;

 int ticks_count;

 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;

 zend_bool timed_out;
 zend_long hard_timeout;





 HashTable regular_list;
 HashTable persistent_list;

 int user_error_handler_error_reporting;
 zval user_error_handler;
 zval user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_stack user_error_handlers;
 zend_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 zend_long timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zend_object *exception, *prev_exception;
 const zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_module_entry *current_module;

 zend_bool active;
 zend_bool valid_symbol_table;

 zend_long assertions;

 uint32_t ht_iterators_count;
 uint32_t ht_iterators_used;
 HashTableIterator *ht_iterators;
 HashTableIterator ht_iterators_slots[16];

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


 zend_function trampoline;
 zend_op call_trampoline_op;

 void *reserved[4];
};

struct _zend_ini_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 char *filename;
 int lineno;


 int scanner_mode;
};

typedef enum {
 ON_TOKEN,
 ON_FEEDBACK,
 ON_STOP
} zend_php_scanner_event;

struct _zend_php_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;


 int scanned_string_len;


 void (* on_event)(zend_php_scanner_event event, int token, int line);
};
# 685 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);

void zend_oparray_context_begin(zend_oparray_context *prev_context);
void zend_oparray_context_end(zend_oparray_context *prev_context);
void zend_file_context_begin(zend_file_context *prev_context);
void zend_file_context_end(zend_file_context *prev_context);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type);
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename);

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval);
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) zend_string *zend_set_compiled_filename(zend_string *new_compiled_filename);
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(zend_string *original_compiled_filename);
__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, uint32_t var);






typedef int ( *unary_op_type)(zval *, zval *);
typedef int ( *binary_op_type)(zval *, zval *, zval *);

__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_stop_lexing(void);
void zend_emit_final_return(int return_one);
zend_ast *zend_ast_append_str(zend_ast *left, zend_ast *right);
uint32_t zend_add_class_modifier(uint32_t flags, uint32_t new_flag);
uint32_t zend_add_member_modifier(uint32_t flags, uint32_t new_flag);
void zend_handle_encoding_declaration(zend_ast *ast);


void zend_do_free(znode *op1);

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, const zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array);

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_verify_namespace(void);

void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline);

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);





__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type);
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename);
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename);
__attribute__ ((visibility("default"))) void zend_try_exception_handler();
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type, zval *retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle);
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size);
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array);
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle);
__attribute__ ((visibility("default"))) void zend_cleanup_user_class_data(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) void zend_cleanup_op_array_data(zend_op_array *op_array);
__attribute__ ((visibility("default"))) int clean_non_persistent_function_full(zval *zv);
__attribute__ ((visibility("default"))) int clean_non_persistent_class_full(zval *zv);

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function);
__attribute__ ((visibility("default"))) void zend_function_dtor(zval *zv);
__attribute__ ((visibility("default"))) void destroy_zend_class(zval *zv);
void zend_class_add_ref(zval *zv);

__attribute__ ((visibility("default"))) zend_string *zend_mangle_property_name(const char *src1, size_t src1_length, const char *src2, size_t src2_length, int internal);


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const zend_string *name, const char **class_name, const char **prop_name, size_t *prop_len);




zend_op *get_next_op(zend_op_array *op_array);
void init_op(zend_op *op);
int get_next_op_number(zend_op_array *op_array);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array);
zend_brk_cont_element *get_next_brk_cont_element(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name);
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers);
uint32_t zend_get_class_fetch_type(zend_string *name);
__attribute__ ((visibility("default"))) zend_uchar zend_get_call_op(const zend_op *init_op, zend_function *fbc);

typedef zend_bool (*zend_auto_global_callback)(zend_string *name);
typedef struct _zend_auto_global {
 zend_string *name;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(zend_string *name, zend_bool jit, zend_auto_global_callback auto_global_callback);
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(zend_string *name);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_str(char *name, size_t len);
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);
__attribute__ ((visibility("default"))) void zend_set_function_arg_flags(zend_function *func);

int zendlex(zend_parser_stack_elem *elem);

int zend_add_literal(zend_op_array *op_array, zval *zv);

__attribute__ ((visibility("default"))) void zend_assert_valid_class_name(const zend_string *const_name);



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h" 1
# 66 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h"


__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);
__attribute__ ((visibility("default"))) uint32_t zend_get_opcode_flags(zend_uchar opcode);


# 816 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2
# 902 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
static inline __attribute__((always_inline)) int zend_check_arg_send_type(const zend_function *zf, uint32_t arg_num, uint32_t mask)
{
 arg_num--;
 if (__builtin_expect(!!(arg_num >= zf->common.num_args), 0)) {
  if (__builtin_expect(!!((zf->common.fn_flags & 0x1000000) == 0), 1)) {
   return 0;
  }
  arg_num = zf->common.num_args;
 }
 return __builtin_expect(!!((zf->common.arg_info[arg_num].pass_by_reference & mask) != 0), 0);
}
# 971 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"

# 1031 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
__attribute__ ((visibility("default"))) zend_bool zend_binary_op_produces_numeric_string_error(uint32_t opcode, zval *op1, zval *op2);
# 42 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.h"
typedef struct _zend_lex_state {
 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;

 zend_file_handle *in;
 uint lineno;
 zend_string *filename;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;


 void (* on_event)(zend_php_scanner_event event, int token, int line);

 zend_ast *ast;
 zend_arena *ast_arena;
} zend_lex_state;

typedef struct _zend_heredoc_label {
 char *label;
 int length;
} zend_heredoc_label;


__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state);
__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state);
__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename);
__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding);
__attribute__ ((visibility("default"))) void zend_lex_tstring(zval *zv);


# 43 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_highlight.h" 1
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



__attribute__ ((visibility("default"))) void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini);
__attribute__ ((visibility("default"))) void zend_strip(void);
__attribute__ ((visibility("default"))) int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini);
__attribute__ ((visibility("default"))) int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name);
__attribute__ ((visibility("default"))) void zend_html_putc(char c);
__attribute__ ((visibility("default"))) void zend_html_puts(const char *s, size_t len);


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 44 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 zend_string *name;
 int flags;
 int module_number;
} zend_constant;
# 61 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"

void clean_module_constants(int module_number);
void free_zend_constant(zval *zv);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_verify_const_access(zend_class_constant *c, zend_class_entry *ce);
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name);
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, size_t name_len);
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, uint32_t flags);
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, size_t name_len, zend_bool bval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, size_t name_len, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, size_t name_len, zend_long lval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, size_t name_len, double dval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, size_t name_len, char *strval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, size_t name_len, char *strval, size_t strlen, int flags, int module_number);
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c);
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, uint32_t flags);

# 45 "Zend/zend_language_scanner.l" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h"


typedef void (*rsrc_dtor_func_t)(zend_resource *res);


typedef struct _zend_rsrc_list_dtors_entry {
 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
} zend_rsrc_list_dtors_entry;


__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(zval *ptr);
void plist_entry_destructor(zval *ptr);

void zend_clean_module_rsrc_dtors(int module_number);
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_close_rsrc_list(HashTable *ht);
void zend_destroy_rsrc_list(HashTable *ht);
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) zval *zend_list_insert(void *ptr, int type);
__attribute__ ((visibility("default"))) int zend_list_free(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_list_delete(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_list_close(zend_resource *res);

__attribute__ ((visibility("default"))) zend_resource *zend_register_resource(void *rsrc_pointer, int rsrc_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zend_resource *res, const char *resource_type_name, int resource_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource2(zend_resource *res, const char *resource_type_name, int resource_type, int resource_type2);
__attribute__ ((visibility("default"))) void *zend_fetch_resource_ex(zval *res, const char *resource_type_name, int resource_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource2_ex(zval *res, const char *resource_type_name, int resource_type, int resource_type2);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(const char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;


# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

struct _zend_fcall_info;
__attribute__ ((visibility("default"))) extern void (*zend_execute_ex)(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data, zval *return_value);

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void zend_init_execute_data(zend_execute_data *execute_data, zend_op_array *op_array, zval *return_value);
__attribute__ ((visibility("default"))) zend_execute_data *zend_create_generator_execute_data(zend_execute_data *call, zend_op_array *op_array, zval *return_value);
__attribute__ ((visibility("default"))) void zend_execute(zend_op_array *op_array, zval *return_value);
__attribute__ ((visibility("default"))) void execute_ex(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class(zend_string *name);
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class_ex(zend_string *name, const zval *key, int use_autoload);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_called_scope(zend_execute_data *ex);
__attribute__ ((visibility("default"))) zend_object *zend_get_this_object(zend_execute_data *ex);
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name);
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, size_t str_len, zval *retval_ptr, char *string_name);
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions);
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, size_t str_len, zval *retval_ptr, char *string_name, int handle_exceptions);


extern __attribute__ ((visibility("default"))) const zend_internal_function zend_pass_function;

__attribute__ ((visibility("default"))) void zend_check_internal_arg_type(zend_function *zf, uint32_t arg_num, zval *arg);
__attribute__ ((visibility("default"))) int zend_check_arg_type(zend_function *zf, uint32_t arg_num, zval *arg, zval *default_value, void **cache_slot);
__attribute__ ((visibility("default"))) void zend_check_missing_arg(zend_execute_data *execute_data, uint32_t arg_num, void **cache_slot);

static inline __attribute__((always_inline)) zval* zend_assign_to_variable(zval *variable_ptr, zval *value, zend_uchar value_type)
{
 zend_refcounted *ref = ((void *)0);

 if ((__builtin_constant_p(value_type & ((1<<2)|(1<<4))) ? (value_type & ((1<<2)|(1<<4))) : (1)) && (zval_get_type(&(*(value))) == 10)) {
  ref = (*(value)).value.counted;
  value = &(*(value)).value.ref->val;
 }

 do {
  if (__builtin_expect(!!((((*(variable_ptr)).u1.v.type_flags & (1<<2)) != 0)), 0)) {
   zend_refcounted *garbage;

   if ((zval_get_type(&(*(variable_ptr))) == 10)) {
    variable_ptr = &(*(variable_ptr)).value.ref->val;
    if (__builtin_expect(!!(!(((*(variable_ptr)).u1.v.type_flags & (1<<2)) != 0)), 1)) {
     break;
    }
   }
   if (zval_get_type(&(*(variable_ptr))) == 8 &&
       __builtin_expect(!!(((*(variable_ptr))).value.obj->handlers->set != ((void *)0)), 0)) {
    ((*(variable_ptr))).value.obj->handlers->set(variable_ptr, value);
    return variable_ptr;
   }
   if ((__builtin_constant_p(value_type & ((1<<2)|(1<<4))) ? (value_type & ((1<<2)|(1<<4))) : (1)) && variable_ptr == value) {
    return variable_ptr;
   }
   garbage = (*(variable_ptr)).value.counted;
   if (--(garbage)->gc.refcount == 0) {
    do { zval *_z1 = (variable_ptr); const zval *_z2 = (value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
    if (value_type & ((1<<0)|(1<<4))) {
     if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)), 0)) {
      zval_addref_p(variable_ptr);
     }
    } else if ((__builtin_constant_p(value_type == (1<<2)) ? (value_type == (1<<2)) : (1)) && __builtin_expect(!!(ref), 0)) {
     if (__builtin_expect(!!(--(ref)->gc.refcount == 0), 0)) {
      do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0);
     } else if ((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)) {
      zval_addref_p(variable_ptr);
     }
    }
    _zval_dtor_func_for_ptr(garbage );
    return variable_ptr;
   } else {

    if (((((*(variable_ptr)).u1.v.type_flags & (1<<3)) != 0)) &&
        __builtin_expect(!!(!(garbage)->gc.u.v.gc_info), 0)) {
     gc_possible_root(garbage);
    }
   }
  }
 } while (0);

 do { zval *_z1 = (variable_ptr); const zval *_z2 = (value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 if (value_type & ((1<<0)|(1<<4))) {
  if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)), 0)) {
   zval_addref_p(variable_ptr);
  }
 } else if ((__builtin_constant_p(value_type == (1<<2)) ? (value_type == (1<<2)) : (1)) && __builtin_expect(!!(ref), 0)) {
  if (__builtin_expect(!!(--(ref)->gc.refcount == 0), 0)) {
   do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0);
  } else if ((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)) {
   zval_addref_p(variable_ptr);
  }
 }
 return variable_ptr;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval *pp);
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval *pp, zend_class_entry *scope);


struct _zend_vm_stack {
 zval *top;
 zval *end;
 zend_vm_stack prev;
};
# 159 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) void zend_vm_stack_init(void);
__attribute__ ((visibility("default"))) void zend_vm_stack_destroy(void);
__attribute__ ((visibility("default"))) void* zend_vm_stack_extend(size_t size);

static inline __attribute__((always_inline)) void zend_vm_init_call_frame(zend_execute_data *call, uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 call->func = func;
 if (object) {
  (call->This).value.obj = object;
  do { ((call)->This).u1.type_info = ((1) ? (8 | (( (1<<2) | (1<<3) ) << 8)) : 0) | ((call_info) << 24); } while (0);
 } else {
  (call->This).value.ce = called_scope;
  do { ((call)->This).u1.type_info = ((0) ? (8 | (( (1<<2) | (1<<3) ) << 8)) : 0) | ((call_info) << 24); } while (0);
 }
 (call)->This.u2.num_args = num_args;
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame_ex(uint32_t used_stack, uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 zend_execute_data *call = (zend_execute_data*)(executor_globals.vm_stack_top);

 ;

 if (__builtin_expect(!!(used_stack > (size_t)(((char*)(executor_globals.vm_stack_end)) - (char*)call)), 0)) {
  call = (zend_execute_data*)zend_vm_stack_extend(used_stack);
  ;
  zend_vm_init_call_frame(call, call_info | (1 << 7), func, num_args, called_scope, object);
  return call;
 } else {
  (executor_globals.vm_stack_top) = (zval*)((char*)call + used_stack);
  zend_vm_init_call_frame(call, call_info, func, num_args, called_scope, object);
  return call;
 }
}

static inline __attribute__((always_inline)) uint32_t zend_vm_calc_used_stack(uint32_t num_args, zend_function *func)
{
 uint32_t used_stack = ((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + num_args;

 if (__builtin_expect(!!(((func->type & 1) == 0)), 1)) {
  used_stack += func->op_array.last_var + func->op_array.T - (((func->op_array.num_args)<(num_args))?(func->op_array.num_args):(num_args));
 }
 return used_stack * sizeof(zval);
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame(uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 uint32_t used_stack = zend_vm_calc_used_stack(num_args, func);

 return zend_vm_stack_push_call_frame_ex(used_stack, call_info,
  func, num_args, called_scope, object);
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_extra_args_ex(uint32_t call_info, zend_execute_data *call)
{
 if (__builtin_expect(!!(call_info & (1 << 2)), 0)) {
  zval *end = (((zval*)(call)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(call->func->op_array.last_var + call->func->op_array.T))));
   zval *p = end + ((call)->This.u2.num_args - call->func->op_array.num_args);
  do {
   p--;
   if ((((*(p)).u1.v.type_flags & (1<<2)) != 0)) {
    if (!zval_delref_p(p)) {
     zend_refcounted *r = (*(p)).value.counted;
     do { (*(p)).u1.type_info = 1; } while (0);
     _zval_dtor_func_for_ptr(r );
    } else {
     gc_check_possible_root((p));
    }
   }
  } while (p != end);
  }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_extra_args(zend_execute_data *call)
{
 zend_vm_stack_free_extra_args_ex((((call)->This).u1.type_info >> 24), call);
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_args(zend_execute_data *call)
{
 uint32_t num_args = (call)->This.u2.num_args;

 if (__builtin_expect(!!(num_args > 0), 1)) {
  zval *end = (((zval*)(call)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(1)) - 1))));
  zval *p = end + num_args;

  do {
   p--;
   if ((((*(p)).u1.v.type_flags & (1<<2)) != 0)) {
    if (!zval_delref_p(p)) {
     zend_refcounted *r = (*(p)).value.counted;
     do { (*(p)).u1.type_info = 1; } while (0);
     _zval_dtor_func_for_ptr(r );
    }
   }
  } while (p != end);
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame_ex(uint32_t call_info, zend_execute_data *call)
{
 ;

 if (__builtin_expect(!!(call_info & (1 << 7)), 0)) {
  zend_vm_stack p = (executor_globals.vm_stack);

  zend_vm_stack prev = p->prev;

  (executor_globals.vm_stack_top) = prev->top;
  (executor_globals.vm_stack_end) = prev->end;
  (executor_globals.vm_stack) = prev;
  _efree((p) );

 } else {
  (executor_globals.vm_stack_top) = (zval*)call;
 }

 ;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame(zend_execute_data *call)
{
 zend_vm_stack_free_call_frame_ex((((call)->This).u1.type_info >> 24), call);
}


__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space);
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) zend_string *zend_get_executed_filename_ex(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_executed_scope(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(zend_long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) __attribute__((noreturn)) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type);
void zend_verify_abstract_class(zend_class_entry *ce);

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim);
__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval_is(zval *result, zval *container, zval *dim, int dim_type);

__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, uint32_t var);
# 313 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef zval* zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type);

__attribute__ ((visibility("default"))) void zend_clean_and_cache_symbol_table(zend_array *symbol_table);
void zend_free_compiled_variables(zend_execute_data *execute_data);
void zend_cleanup_unfinished_execution(zend_execute_data *execute_data, uint32_t op_num, uint32_t catch_op_num);
# 368 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(zend_execute_data *execute_data, zval *return_value);
 const struct _zend_internal_arg_info *arg_info;
 uint32_t num_args;
 uint32_t flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 zval function_name;
 zval *retval;
 zval *params;
 zend_object *object;
 zend_bool no_separation;
 uint32_t param_count;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zend_object *object;
} zend_fcall_info_cache;
# 243 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array);


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array);
# 264 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_throw(int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args, zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args, zval *this_ptr, const char *type_spec, ...);

__attribute__ ((visibility("default"))) int zend_parse_parameter(int flags, int arg_num, zval *arg, const char *spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type);
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table);
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module);
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module);
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type);

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry);
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce);
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry);
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry, int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, size_t name_len, zend_class_entry *ce);






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, size_t function_name_length);
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, size_t class_name_length);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_param_count(void);
# 311 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zend_object *object, uint check_flags, zend_string **callable_name, zend_fcall_info_cache *fcc, char **error);
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, zend_string **callable_name);
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, zend_string **callable_name);
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, zend_string *name, zval *property, int access_type, zend_string *doc_comment);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, size_t name_length, zval *property, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, size_t name_length, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_long value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, size_t name_length, zend_long value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, size_t name_length, double value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_len, int access_type);

__attribute__ ((visibility("default"))) int zend_declare_class_constant_ex(zend_class_entry *ce, zend_string *name, zval *value, int access_type, zend_string *doc_comment);
__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value);

__attribute__ ((visibility("default"))) int zend_update_class_constants(zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_update_property_ex(zend_class_entry *scope, zval *object, zend_string *name, zval *value);
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) void zend_update_property_str(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_string *value);
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, size_t name_length, const char *value);
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, size_t name_length, const char *value, size_t value_length);

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, size_t name_length, const char *value);
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, size_t name_length, const char *value, size_t value_length);

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_bool silent, zval *rv);

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, size_t name_length, zend_bool silent);

__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 379 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint32_t size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__ ((visibility("default"))) void object_properties_init_ex(zend_object *object, HashTable *properties);
__attribute__ ((visibility("default"))) void object_properties_load(zend_object *object, HashTable *properties);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties);

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, size_t key_len, zend_long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, size_t key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, size_t key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_str_ex(zval *arg, const char *key, size_t key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, size_t key_len, char *str);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, size_t key_len, char *str, size_t length);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
# 415 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, zend_ulong idx, zend_long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, zend_ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, zend_ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, zend_ulong idx, zend_resource *r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, zend_ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_str(zval *arg, zend_ulong idx, zend_string *str);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, zend_ulong idx, const char *str);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, zend_ulong idx, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, zend_ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, zend_long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, zend_resource *r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_str(zval *arg, zend_string *str);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) zval *add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, size_t length);




__attribute__ ((visibility("default"))) zval *add_get_index_long(zval *arg, zend_ulong idx, zend_long l);
__attribute__ ((visibility("default"))) zval *add_get_index_double(zval *arg, zend_ulong idx, double d);
__attribute__ ((visibility("default"))) zval *add_get_index_str(zval *arg, zend_ulong index, zend_string *str);
__attribute__ ((visibility("default"))) zval *add_get_index_string(zval *arg, zend_ulong idx, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_index_stringl(zval *arg, zend_ulong idx, const char *str, size_t length);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, size_t key_len, zend_long l);
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, size_t key_len, zend_long b);
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, size_t key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__ ((visibility("default"))) int add_property_str_ex(zval *arg, const char *key, size_t key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, size_t key_len, const char *str);
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, size_t key_len, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
# 470 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _call_user_function_ex(zval *object, zval *function_name, zval *retval_ptr, uint32_t param_count, zval params[], int no_separation);






__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 489 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, zend_string **callable_name, char **error);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval **params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval *params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args);
__attribute__ ((visibility("default"))) int zend_fcall_info_args_ex(zend_fcall_info *fci, zend_function *func, zval *args);





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci, int argc, zval *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci, int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci, int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval *retval, zval *args);

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache);

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) int zend_delete_global_variable(zend_string *name);

__attribute__ ((visibility("default"))) zend_array *zend_rebuild_symbol_table(void);
__attribute__ ((visibility("default"))) void zend_attach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) void zend_detach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) int zend_set_local_var(zend_string *name, zval *value, int force);
__attribute__ ((visibility("default"))) int zend_set_local_var_str(const char *name, size_t len, zval *value, int force);

__attribute__ ((visibility("default"))) zend_string *zend_find_alias_name(zend_class_entry *ce, zend_string *name);
__attribute__ ((visibility("default"))) zend_string *zend_resolve_method_name(zend_class_entry *ce, zend_function *f);

__attribute__ ((visibility("default"))) const char *zend_get_object_type(const zend_class_entry *ce);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_display_disabled_class(zend_execute_data *execute_data, zval *return_value);

# 692 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
typedef enum _zend_expected_type {
 Z_EXPECTED_LONG, Z_EXPECTED_BOOL, Z_EXPECTED_STRING, Z_EXPECTED_ARRAY, Z_EXPECTED_FUNC, Z_EXPECTED_RESOURCE, Z_EXPECTED_PATH, Z_EXPECTED_OBJECT, Z_EXPECTED_DOUBLE,
 Z_EXPECTED_LAST
} zend_expected_type;

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameters_count_error(int num_args, int min_num_args, int max_num_args);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameter_type_error(int num, zend_expected_type expected_type, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameter_class_error(int num, char *name, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_callback_error(int severity, int num, char *error);
# 1046 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_arg_class(zval *arg, zend_class_entry **pce, int num, int check_null);
__attribute__ ((visibility("default"))) int zend_parse_arg_bool_slow(zval *arg, zend_bool *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_bool_weak(zval *arg, zend_bool *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_slow(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_weak(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_cap_slow(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_cap_weak(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_double_slow(zval *arg, double *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_double_weak(zval *arg, double *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_str_slow(zval *arg, zend_string **dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_str_weak(zval *arg, zend_string **dest);

static inline __attribute__((always_inline)) int zend_parse_arg_bool(zval *arg, zend_bool *dest, zend_bool *is_null, int check_null)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 3), 1)) {
  *dest = 1;
 } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 2), 1)) {
  *dest = 0;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0;
 } else {
  return zend_parse_arg_bool_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_long(zval *arg, zend_long *dest, zend_bool *is_null, int check_null, int cap)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
  *dest = (*(arg)).value.lval;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0;
 } else if (cap) {
  return zend_parse_arg_long_cap_slow(arg, dest);
 } else {
  return zend_parse_arg_long_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_double(zval *arg, double *dest, zend_bool *is_null, int check_null)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 5), 1)) {
  *dest = (*(arg)).value.dval;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0.0;
 } else {
  return zend_parse_arg_double_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_str(zval *arg, zend_string **dest, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
  *dest = (*(arg)).value.str;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *dest = ((void *)0);
 } else {
  return zend_parse_arg_str_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_string(zval *arg, char **dest, size_t *dest_len, int check_null)
{
 zend_string *str;

 if (!zend_parse_arg_str(arg, &str, check_null)) {
  return 0;
 }
 if (check_null && __builtin_expect(!!(!str), 0)) {
  *dest = ((void *)0);
  *dest_len = 0;
 } else {
  *dest = (str)->val;
  *dest_len = (str)->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_path_str(zval *arg, zend_string **dest, int check_null)
{
 if (!zend_parse_arg_str(arg, dest, check_null) ||
     (*dest && __builtin_expect(!!((strlen((*dest)->val) != (*dest)->len)), 0))) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_path(zval *arg, char **dest, size_t *dest_len, int check_null)
{
 zend_string *str;

 if (!zend_parse_arg_path_str(arg, &str, check_null)) {
  return 0;
 }
 if (check_null && __builtin_expect(!!(!str), 0)) {
  *dest = ((void *)0);
  *dest_len = 0;
 } else {
  *dest = (str)->val;
  *dest_len = (str)->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_array(zval *arg, zval **dest, int check_null, int or_object)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1) ||
  (or_object && __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_array_ht(zval *arg, HashTable **dest, int check_null, int or_object)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1)) {
  *dest = (*(arg)).value.arr;
 } else if (or_object && __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1)) {
  *dest = (*(arg)).value.obj->handlers->get_properties(arg);
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_object(zval *arg, zval **dest, zend_class_entry *ce, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1) &&
     (!ce || __builtin_expect(!!(instanceof_function(((*(arg)).value.obj->ce), ce) != 0), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_resource(zval *arg, zval **dest, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 9), 1)) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_func(zval *arg, zend_fcall_info *dest_fci, zend_fcall_info_cache *dest_fcc, int check_null, char **error)
{
 if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0)) {
  dest_fci->size = 0;
  dest_fcc->initialized = 0;
  *error = ((void *)0);
 } else if (__builtin_expect(!!(zend_fcall_info_init(arg, 0, dest_fci, dest_fcc, ((void *)0), error) != SUCCESS), 0)) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) void zend_parse_arg_zval(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null &&
     (__builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0) ||
      (__builtin_expect(!!((zval_get_type(&(*(arg))) == 10)), 0) &&
       __builtin_expect(!!(zval_get_type(&(*(&(*(arg)).value.ref->val))) == 1), 0)))) ? ((void *)0) : arg;
}

static inline __attribute__((always_inline)) void zend_parse_arg_zval_deref(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0)) ? ((void *)0) : arg;
}


# 48 "Zend/zend_language_scanner.l" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h"


extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_throwable;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_exception;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_error_exception;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_parse_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_type_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_arithmetic_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_division_by_zero_error;

__attribute__ ((visibility("default"))) void zend_exception_set_previous(zend_object *exception, zend_object *add_previous);
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_exception_internal(zval *exception);

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_exception_base(zval *object);


__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);


__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);

__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) __attribute__((cold)) zend_object *zend_throw_exception(zend_class_entry *exception_ce, const char *message, zend_long code);
__attribute__ ((visibility("default"))) __attribute__((cold)) zend_object *zend_throw_exception_ex(zend_class_entry *exception_ce, zend_long code, const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_exception_object(zval *exception);
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zend_object *zend_throw_error_exception(zend_class_entry *exception_ce, const char *message, zend_long code, int severity);

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex);


__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_exception_error(zend_object *exception, int severity);


size_t zend_spprintf(char **message, size_t max_len, const char *format, ...);
zend_string *zend_strpprintf(size_t max_len, const char *format, ...);


# 50 "Zend/zend_language_scanner.l" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/TSRM.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 1
# 13 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 14 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4

# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 153 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 307 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4

# 127 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);




extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 209 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 246 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 327 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 333 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 343 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 350 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];
# 92 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 353 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
# 388 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 29 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 15 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 700 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 756 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 969 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4

# 38 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 42 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2



# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2


# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4






# 1 "/usr/include/time.h" 1 3 4
# 34 "/usr/include/utime.h" 2 3 4



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 90 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 208 "/usr/include/dirent.h" 3 4
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 254 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 324 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 401 "/usr/include/dirent.h" 3 4

# 91 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 145 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) int virtual_cwd_activate(void);
__attribute__ ((visibility("default"))) int virtual_cwd_deactivate(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length);
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size);
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path);
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path));
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath);
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path);
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path);
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode);
__attribute__ ((visibility("default"))) int virtual_open(const char *path, int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode);
__attribute__ ((visibility("default"))) int virtual_rename(const char *oldname, const char *newname);
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, zend_stat_t *buf);
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, zend_stat_t *buf);
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path);
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode);
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname);
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname);
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type);
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode);
# 192 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf);

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode);

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link);
# 206 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath);

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path);




typedef struct _realpath_cache_bucket {
 zend_ulong key;
 char *path;
 char *realpath;
 struct _realpath_cache_bucket *next;
 time_t expires;
 int path_len;
 int realpath_len;
 int is_dir;






} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 zend_long realpath_cache_size;
 zend_long realpath_cache_size_limit;
 zend_long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len);
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t);
__attribute__ ((visibility("default"))) zend_long realpath_cache_size(void);
__attribute__ ((visibility("default"))) zend_long realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 51 "Zend/zend_language_scanner.l" 2
# 93 "Zend/zend_language_scanner.l"
__attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 124 "Zend/zend_language_scanner.l"


static size_t encoding_filter_script_to_internal(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length)
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 do { if (__builtin_expect(!(internal_encoding), 0)) __builtin_unreachable(); } while (0);
 return zend_multibyte_encoding_converter(to, to_length, from, from_length, internal_encoding, (language_scanner_globals.script_encoding));
}

static size_t encoding_filter_script_to_intermediate(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length)
{
 return zend_multibyte_encoding_converter(to, to_length, from, from_length, zend_multibyte_encoding_utf8, (language_scanner_globals.script_encoding));
}

static size_t encoding_filter_intermediate_to_script(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length)
{
 return zend_multibyte_encoding_converter(to, to_length, from, from_length,
(language_scanner_globals.script_encoding), zend_multibyte_encoding_utf8);
}

static size_t encoding_filter_intermediate_to_internal(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length)
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 do { if (__builtin_expect(!(internal_encoding), 0)) __builtin_unreachable(); } while (0);
 return zend_multibyte_encoding_converter(to, to_length, from, from_length,
internal_encoding, zend_multibyte_encoding_utf8);
}


static void _yy_push_state(int new_state)
{
 zend_stack_push(&(language_scanner_globals.state_stack), (void *) &(language_scanner_globals.yy_state));
 (language_scanner_globals.yy_state) = new_state;
}



static void yy_pop_state(void)
{
 int *stack_state = zend_stack_top(&(language_scanner_globals.state_stack));
 (language_scanner_globals.yy_state) = *stack_state;
 zend_stack_del_top(&(language_scanner_globals.state_stack));
}

static void yy_scan_buffer(char *str, unsigned int len)
{
 (language_scanner_globals.yy_cursor) = (unsigned char*)str;
 (language_scanner_globals.yy_limit) = (language_scanner_globals.yy_cursor) + len;
 if (!(language_scanner_globals.yy_start)) {
  (language_scanner_globals.yy_start) = (language_scanner_globals.yy_cursor);
 }
}

void startup_scanner(void)
{
 (compiler_globals.parse_error) = 0;
 (compiler_globals.doc_comment) = ((void *)0);
 zend_stack_init(&(language_scanner_globals.state_stack), sizeof(int));
 zend_ptr_stack_init(&(language_scanner_globals.heredoc_label_stack));
}

static void heredoc_label_dtor(zend_heredoc_label *heredoc_label) {
    _efree((heredoc_label->label) );
}

void shutdown_scanner(void)
{
 (compiler_globals.parse_error) = 0;
 do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
 zend_stack_destroy(&(language_scanner_globals.state_stack));
 zend_ptr_stack_clean(&(language_scanner_globals.heredoc_label_stack), (void (*)(void *)) &heredoc_label_dtor, 1);
 zend_ptr_stack_destroy(&(language_scanner_globals.heredoc_label_stack));
 (language_scanner_globals.on_event) = ((void *)0);
}

__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state)
{
 lex_state->yy_leng = (language_scanner_globals.yy_leng);
 lex_state->yy_start = (language_scanner_globals.yy_start);
 lex_state->yy_text = (language_scanner_globals.yy_text);
 lex_state->yy_cursor = (language_scanner_globals.yy_cursor);
 lex_state->yy_marker = (language_scanner_globals.yy_marker);
 lex_state->yy_limit = (language_scanner_globals.yy_limit);

 lex_state->state_stack = (language_scanner_globals.state_stack);
 zend_stack_init(&(language_scanner_globals.state_stack), sizeof(int));

 lex_state->heredoc_label_stack = (language_scanner_globals.heredoc_label_stack);
 zend_ptr_stack_init(&(language_scanner_globals.heredoc_label_stack));

 lex_state->in = (language_scanner_globals.yy_in);
 lex_state->yy_state = (language_scanner_globals.yy_state);
 lex_state->filename = zend_get_compiled_filename();
 lex_state->lineno = (compiler_globals.zend_lineno);

 lex_state->script_org = (language_scanner_globals.script_org);
 lex_state->script_org_size = (language_scanner_globals.script_org_size);
 lex_state->script_filtered = (language_scanner_globals.script_filtered);
 lex_state->script_filtered_size = (language_scanner_globals.script_filtered_size);
 lex_state->input_filter = (language_scanner_globals.input_filter);
 lex_state->output_filter = (language_scanner_globals.output_filter);
 lex_state->script_encoding = (language_scanner_globals.script_encoding);

 lex_state->on_event = (language_scanner_globals.on_event);

 lex_state->ast = (compiler_globals.ast);
 lex_state->ast_arena = (compiler_globals.ast_arena);
}

__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state)
{
 (language_scanner_globals.yy_leng) = lex_state->yy_leng;
 (language_scanner_globals.yy_start) = lex_state->yy_start;
 (language_scanner_globals.yy_text) = lex_state->yy_text;
 (language_scanner_globals.yy_cursor) = lex_state->yy_cursor;
 (language_scanner_globals.yy_marker) = lex_state->yy_marker;
 (language_scanner_globals.yy_limit) = lex_state->yy_limit;

 zend_stack_destroy(&(language_scanner_globals.state_stack));
 (language_scanner_globals.state_stack) = lex_state->state_stack;

 zend_ptr_stack_clean(&(language_scanner_globals.heredoc_label_stack), (void (*)(void *)) &heredoc_label_dtor, 1);
 zend_ptr_stack_destroy(&(language_scanner_globals.heredoc_label_stack));
 (language_scanner_globals.heredoc_label_stack) = lex_state->heredoc_label_stack;

 (language_scanner_globals.yy_in) = lex_state->in;
 (language_scanner_globals.yy_state) = lex_state->yy_state;
 (compiler_globals.zend_lineno) = lex_state->lineno;
 zend_restore_compiled_filename(lex_state->filename);

 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 (language_scanner_globals.script_org) = lex_state->script_org;
 (language_scanner_globals.script_org_size) = lex_state->script_org_size;
 (language_scanner_globals.script_filtered) = lex_state->script_filtered;
 (language_scanner_globals.script_filtered_size) = lex_state->script_filtered_size;
 (language_scanner_globals.input_filter) = lex_state->input_filter;
 (language_scanner_globals.output_filter) = lex_state->output_filter;
 (language_scanner_globals.script_encoding) = lex_state->script_encoding;

 (language_scanner_globals.on_event) = lex_state->on_event;

 (compiler_globals.ast) = lex_state->ast;
 (compiler_globals.ast_arena) = lex_state->ast_arena;

 do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
}

__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle)
{
 zend_llist_del_element(&(compiler_globals.open_files), file_handle, (int (*)(void *, void *)) zend_compare_file_handles);

 file_handle->opened_path = ((void *)0);
 if (file_handle->free_filename) {
  file_handle->filename = ((void *)0);
 }
}

__attribute__ ((visibility("default"))) void zend_lex_tstring(zval *zv)
{
 if ((language_scanner_globals.on_event)) (language_scanner_globals.on_event)(ON_FEEDBACK, 319, 0);

 do { do { zval *__z = (zv); zend_string *__s = (zend_string_init((char*)(language_scanner_globals.yy_text), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
}







static const zend_encoding *zend_multibyte_detect_utf_encoding(const unsigned char *script, size_t script_size)
{
 const unsigned char *p;
 int wchar_size = 2;
 int le = 0;


 p = script;
 ((p >= script) ? (void) (0) : __assert_fail ("p >= script", "Zend/zend_language_scanner.l", 305, __PRETTY_FUNCTION__));
 while ((size_t)(p-script) < script_size) {
  p = memchr(p, 0, script_size-(p-script)-2);
  if (!p) {
   break;
  }
  if (*(p+1) == '\0' && *(p+2) == '\0') {
   wchar_size = 4;
   break;
  }


  p += 4;
 }


 p = script;
 ((p >= script) ? (void) (0) : __assert_fail ("p >= script", "Zend/zend_language_scanner.l", 322, __PRETTY_FUNCTION__));
 while ((size_t)(p-script) < script_size) {
  if (*p == '\0' && *(p+wchar_size-1) != '\0') {

   le = 0;
   break;
  } else if (*p != '\0' && *(p+wchar_size-1) == '\0') {

   le = 1;
   break;
  }
  p += wchar_size;
 }

 if (wchar_size == 2) {
  return le ? zend_multibyte_encoding_utf16le : zend_multibyte_encoding_utf16be;
 } else {
  return le ? zend_multibyte_encoding_utf32le : zend_multibyte_encoding_utf32be;
 }

 return ((void *)0);
}

static const zend_encoding* zend_multibyte_detect_unicode(void)
{
 const zend_encoding *script_encoding = ((void *)0);
 int bom_size;
 unsigned char *pos1, *pos2;

 if ((language_scanner_globals.script_org_size) < sizeof("\xff\xfe\x00\x00")-1) {
  return ((void *)0);
 }


 if (!memcmp((language_scanner_globals.script_org), "\x00\x00\xfe\xff", sizeof("\x00\x00\xfe\xff")-1)) {
  script_encoding = zend_multibyte_encoding_utf32be;
  bom_size = sizeof("\x00\x00\xfe\xff")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xff\xfe\x00\x00", sizeof("\xff\xfe\x00\x00")-1)) {
  script_encoding = zend_multibyte_encoding_utf32le;
  bom_size = sizeof("\xff\xfe\x00\x00")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xfe\xff", sizeof("\xfe\xff")-1)) {
  script_encoding = zend_multibyte_encoding_utf16be;
  bom_size = sizeof("\xfe\xff")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xff\xfe", sizeof("\xff\xfe")-1)) {
  script_encoding = zend_multibyte_encoding_utf16le;
  bom_size = sizeof("\xff\xfe")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xef\xbb\xbf", sizeof("\xef\xbb\xbf")-1)) {
  script_encoding = zend_multibyte_encoding_utf8;
  bom_size = sizeof("\xef\xbb\xbf")-1;
 }

 if (script_encoding) {

  (language_scanner_globals.script_org) += bom_size;
  (language_scanner_globals.script_org_size) -= bom_size;

  return script_encoding;
 }


 if ((pos1 = memchr((language_scanner_globals.script_org), 0, (language_scanner_globals.script_org_size)))) {

  pos2 = (language_scanner_globals.script_org);

  while (pos1 - pos2 >= sizeof("__HALT_COMPILER();")-1) {
   pos2 = memchr(pos2, '_', pos1 - pos2);
   if (!pos2) break;
   pos2++;
   if (strncasecmp((char*)pos2, "_HALT_COMPILER", sizeof("_HALT_COMPILER")-1) == 0) {
    pos2 += sizeof("_HALT_COMPILER")-1;
    while (*pos2 == ' ' ||
        *pos2 == '\t' ||
        *pos2 == '\r' ||
        *pos2 == '\n') {
     pos2++;
    }
    if (*pos2 == '(') {
     pos2++;
     while (*pos2 == ' ' ||
         *pos2 == '\t' ||
         *pos2 == '\r' ||
         *pos2 == '\n') {
      pos2++;
     }
     if (*pos2 == ')') {
      pos2++;
      while (*pos2 == ' ' ||
          *pos2 == '\t' ||
          *pos2 == '\r' ||
          *pos2 == '\n') {
       pos2++;
      }
      if (*pos2 == ';') {
       return ((void *)0);
      }
     }
    }
   }
  }

  return zend_multibyte_detect_utf_encoding((language_scanner_globals.script_org), (language_scanner_globals.script_org_size));
 }

 return ((void *)0);
}

static const zend_encoding* zend_multibyte_find_script_encoding(void)
{
 const zend_encoding *script_encoding;

 if ((compiler_globals.detect_unicode)) {

  script_encoding = zend_multibyte_detect_unicode();
  if (script_encoding != ((void *)0)) {

   return script_encoding;
  }
 }


 if (!(compiler_globals.script_encoding_list) || !(compiler_globals.script_encoding_list_size)) {
  return ((void *)0);
 }


 if ((compiler_globals.script_encoding_list_size) > 1) {
  return zend_multibyte_encoding_detector((language_scanner_globals.script_org), (language_scanner_globals.script_org_size), (compiler_globals.script_encoding_list), (compiler_globals.script_encoding_list_size));
 }

 return (compiler_globals.script_encoding_list)[0];
}

__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding)
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 const zend_encoding *script_encoding = onetime_encoding ? onetime_encoding: zend_multibyte_find_script_encoding();

 if (!script_encoding) {
  return FAILURE;
 }


 (language_scanner_globals.script_encoding) = script_encoding;
 (language_scanner_globals.input_filter) = ((void *)0);
 (language_scanner_globals.output_filter) = ((void *)0);

 if (!internal_encoding || (language_scanner_globals.script_encoding) == internal_encoding) {
  if (!zend_multibyte_check_lexer_compatibility((language_scanner_globals.script_encoding))) {

   (language_scanner_globals.input_filter) = encoding_filter_script_to_intermediate;
   (language_scanner_globals.output_filter) = encoding_filter_intermediate_to_script;
  } else {
   (language_scanner_globals.input_filter) = ((void *)0);
   (language_scanner_globals.output_filter) = ((void *)0);
  }
  return SUCCESS;
 }

 if (zend_multibyte_check_lexer_compatibility(internal_encoding)) {
  (language_scanner_globals.input_filter) = encoding_filter_script_to_internal;
  (language_scanner_globals.output_filter) = ((void *)0);
 } else if (zend_multibyte_check_lexer_compatibility((language_scanner_globals.script_encoding))) {
  (language_scanner_globals.input_filter) = ((void *)0);
  (language_scanner_globals.output_filter) = encoding_filter_script_to_internal;
 } else {

  (language_scanner_globals.input_filter) = encoding_filter_script_to_intermediate;
  (language_scanner_globals.output_filter) = encoding_filter_intermediate_to_internal;
 }

 return 0;
}

__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle)
{
 char *buf;
 size_t size, offset = 0;
 zend_string *compiled_filename;


 if ((compiler_globals.start_lineno) == 2 && file_handle->type == ZEND_HANDLE_FP && file_handle->handle.fp) {
  if ((offset = ftell(file_handle->handle.fp)) == -1) {
   offset = 0;
  }
 }

 if (zend_stream_fixup(file_handle, &buf, &size) == FAILURE) {
  return FAILURE;
 }

 zend_llist_add_element(&(compiler_globals.open_files), file_handle);
 if (file_handle->handle.stream.handle >= (void*)file_handle && file_handle->handle.stream.handle <= (void*)(file_handle+1)) {
  zend_file_handle *fh = (zend_file_handle*)zend_llist_get_last_ex(&(compiler_globals.open_files), ((void *)0));
  size_t diff = (char*)file_handle->handle.stream.handle - (char*)file_handle;
  fh->handle.stream.handle = (void*)(((char*)fh) + diff);
  file_handle->handle.stream.handle = fh->handle.stream.handle;
 }


 (language_scanner_globals.yy_in) = file_handle;
 (language_scanner_globals.yy_start) = ((void *)0);

 if (size != -1) {
  if ((compiler_globals.multibyte)) {
   (language_scanner_globals.script_org) = (unsigned char*)buf;
   (language_scanner_globals.script_org_size) = size;
   (language_scanner_globals.script_filtered) = ((void *)0);

   zend_multibyte_set_filter(((void *)0));

   if ((language_scanner_globals.input_filter)) {
    if ((size_t)-1 == (language_scanner_globals.input_filter)(&(language_scanner_globals.script_filtered), &(language_scanner_globals.script_filtered_size), (language_scanner_globals.script_org), (language_scanner_globals.script_org_size))) {
     zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
       "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
    }
    buf = (char*)(language_scanner_globals.script_filtered);
    size = (language_scanner_globals.script_filtered_size);
   }
  }
  (language_scanner_globals.yy_start) = (unsigned char *)buf - offset;
  yy_scan_buffer(buf, (unsigned int)size);
 } else {
  zend_error_noreturn((1<<6L), "zend_stream_mmap() failed");
 }

 (language_scanner_globals.yy_state) = yycINITIAL;

 if (file_handle->opened_path) {
  compiled_filename = zend_string_copy(file_handle->opened_path);
 } else {
  compiled_filename = zend_string_init(file_handle->filename, strlen(file_handle->filename), 0);
 }

 zend_set_compiled_filename(compiled_filename);
 zend_string_release(compiled_filename);

 if ((compiler_globals.start_lineno)) {
  (compiler_globals.zend_lineno) = (compiler_globals.start_lineno);
  (compiler_globals.start_lineno) = 0;
 } else {
  (compiler_globals.zend_lineno) = 1;
 }

 do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
 (compiler_globals.increment_lineno) = 0;
 return SUCCESS;
}


static zend_op_array *zend_compile(int type)
{
 zend_op_array *op_array = ((void *)0);
 zend_bool original_in_compilation = (compiler_globals.in_compilation);

 (compiler_globals.in_compilation) = 1;
 (compiler_globals.ast) = ((void *)0);
 (compiler_globals.ast_arena) = zend_arena_create(1024 * 32);

 if (!zendparse()) {
  zend_file_context original_file_context;
  zend_oparray_context original_oparray_context;
  zend_op_array *original_active_op_array = (compiler_globals.active_op_array);

  op_array = (__builtin_constant_p((sizeof(zend_op_array)) ) ? (((sizeof(zend_op_array)) <= 8) ? _emalloc_8() : (((sizeof(zend_op_array)) <= 16) ? _emalloc_16() : (((sizeof(zend_op_array)) <= 24) ? _emalloc_24() : (((sizeof(zend_op_array)) <= 32) ? _emalloc_32() : (((sizeof(zend_op_array)) <= 40) ? _emalloc_40() : (((sizeof(zend_op_array)) <= 48) ? _emalloc_48() : (((sizeof(zend_op_array)) <= 56) ? _emalloc_56() : (((sizeof(zend_op_array)) <= 64) ? _emalloc_64() : (((sizeof(zend_op_array)) <= 80) ? _emalloc_80() : (((sizeof(zend_op_array)) <= 96) ? _emalloc_96() : (((sizeof(zend_op_array)) <= 112) ? _emalloc_112() : (((sizeof(zend_op_array)) <= 128) ? _emalloc_128() : (((sizeof(zend_op_array)) <= 160) ? _emalloc_160() : (((sizeof(zend_op_array)) <= 192) ? _emalloc_192() : (((sizeof(zend_op_array)) <= 224) ? _emalloc_224() : (((sizeof(zend_op_array)) <= 256) ? _emalloc_256() : (((sizeof(zend_op_array)) <= 320) ? _emalloc_320() : (((sizeof(zend_op_array)) <= 384) ? _emalloc_384() : (((sizeof(zend_op_array)) <= 448) ? _emalloc_448() : (((sizeof(zend_op_array)) <= 512) ? _emalloc_512() : (((sizeof(zend_op_array)) <= 640) ? _emalloc_640() : (((sizeof(zend_op_array)) <= 768) ? _emalloc_768() : (((sizeof(zend_op_array)) <= 896) ? _emalloc_896() : (((sizeof(zend_op_array)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_op_array)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_op_array)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_op_array)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_op_array)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_op_array)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_op_array)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_op_array)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_op_array))) : _emalloc_huge((sizeof(zend_op_array)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_op_array)) ) );
  init_op_array(op_array, type, 64);
  (compiler_globals.active_op_array) = op_array;

  if (zend_ast_process) {
   zend_ast_process((compiler_globals.ast));
  }

  zend_file_context_begin(&original_file_context);
  zend_oparray_context_begin(&original_oparray_context);
  zend_compile_top_stmt((compiler_globals.ast));
  zend_emit_final_return(type == 2);
  op_array->line_start = 1;
  op_array->line_end = (compiler_globals.zend_lineno);
  pass_two(op_array);
  zend_oparray_context_end(&original_oparray_context);
  zend_file_context_end(&original_file_context);

  (compiler_globals.active_op_array) = original_active_op_array;
 }

 zend_ast_destroy((compiler_globals.ast));
 zend_arena_destroy((compiler_globals.ast_arena));

 (compiler_globals.in_compilation) = original_in_compilation;

 return op_array;
}

__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type)
{
 zend_lex_state original_lex_state;
 zend_op_array *op_array = ((void *)0);
 zend_save_lexical_state(&original_lex_state);

 if (open_file_for_scanning(file_handle)==FAILURE) {
  if (type==(1<<3)) {
   zend_message_dispatcher(2L, file_handle->filename);
   _zend_bailout("Zend/zend_language_scanner.l", 623);
  } else {
   zend_message_dispatcher(1L, file_handle->filename);
  }
 } else {
  op_array = zend_compile(2);
 }

 zend_restore_lexical_state(&original_lex_state);
 return op_array;
}


zend_op_array *compile_filename(int type, zval *filename)
{
 zend_file_handle file_handle;
 zval tmp;
 zend_op_array *retval;
 zend_string *opened_path = ((void *)0);

 if (zval_get_type(&(*(filename))) != 6) {
  tmp = *filename;
  _zval_copy_ctor((&tmp) );
  if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); };
  filename = &tmp;
 }
 file_handle.filename = ((*(filename)).value.str)->val;
 file_handle.free_filename = 0;
 file_handle.type = ZEND_HANDLE_FILENAME;
 file_handle.opened_path = ((void *)0);
 file_handle.handle.fp = ((void *)0);

 retval = zend_compile_file(&file_handle, type);
 if (retval && file_handle.handle.stream.handle) {
  if (!file_handle.opened_path) {
   file_handle.opened_path = opened_path = zend_string_copy((*(filename)).value.str);
  }

  zend_hash_add_empty_element(&(executor_globals.included_files), file_handle.opened_path);

  if (opened_path) {
   zend_string_release(opened_path);
  }
 }
 zend_destroy_file_handle(&file_handle);

 if (filename==&tmp) {
  _zval_dtor((&tmp) );
 }
 return retval;
}

__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename)
{
 char *buf;
 size_t size, old_len;
 zend_string *new_compiled_filename;


 old_len = ((*(str)).value.str)->len;
 (*(str)).value.str = zend_string_extend((*(str)).value.str, old_len + 32, 0);
 (*(str)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8));
 memset(((*(str)).value.str)->val + old_len, 0, 32 + 1);

 (language_scanner_globals.yy_in) = ((void *)0);
 (language_scanner_globals.yy_start) = ((void *)0);

 buf = ((*(str)).value.str)->val;
 size = old_len;

 if ((compiler_globals.multibyte)) {
  (language_scanner_globals.script_org) = (unsigned char*)buf;
  (language_scanner_globals.script_org_size) = size;
  (language_scanner_globals.script_filtered) = ((void *)0);

  zend_multibyte_set_filter(zend_multibyte_get_internal_encoding());

  if ((language_scanner_globals.input_filter)) {
   if ((size_t)-1 == (language_scanner_globals.input_filter)(&(language_scanner_globals.script_filtered), &(language_scanner_globals.script_filtered_size), (language_scanner_globals.script_org), (language_scanner_globals.script_org_size))) {
    zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
      "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
   }
   buf = (char*)(language_scanner_globals.script_filtered);
   size = (language_scanner_globals.script_filtered_size);
  }
 }

 yy_scan_buffer(buf, (unsigned int)size);

 new_compiled_filename = zend_string_init(filename, strlen(filename), 0);
 zend_set_compiled_filename(new_compiled_filename);
 zend_string_release(new_compiled_filename);
 (compiler_globals.zend_lineno) = 1;
 (compiler_globals.increment_lineno) = 0;
 do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
 return SUCCESS;
}


__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void)
{
 size_t offset = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_start);
 if ((language_scanner_globals.input_filter)) {
  size_t original_offset = offset, length = 0;
  do {
   unsigned char *p = ((void *)0);
   if ((size_t)-1 == (language_scanner_globals.input_filter)(&p, &length, (language_scanner_globals.script_org), offset)) {
    return (size_t)-1;
   }
   _efree((p) );
   if (length > original_offset) {
    offset--;
   } else if (length < original_offset) {
    offset++;
   }
  } while (original_offset != length);
 }
 return offset;
}

zend_op_array *compile_string(zval *source_string, char *filename)
{
 zend_lex_state original_lex_state;
 zend_op_array *op_array = ((void *)0);
 zval tmp;

 if (((*(source_string)).value.str)->len==0) {
  return ((void *)0);
 }

 do { zval *_z1 = (&tmp); const zval *_z2 = (source_string); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & (((1<<2)|(1<<1)) << 8)) != 0) { if ((_t & (((1<<4)|(1<<1)) << 8)) != 0) { _zval_copy_ctor_func(_z1 ); } else { (_gc)->gc.refcount++; } } } while (0);
 if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); };
 source_string = &tmp;

 zend_save_lexical_state(&original_lex_state);
 if (zend_prepare_string_for_scanning(source_string, filename) == SUCCESS) {
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  op_array = zend_compile(4);
 }

 zend_restore_lexical_state(&original_lex_state);
 _zval_dtor((&tmp) );

 return op_array;
}



int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini)
{
 zend_lex_state original_lex_state;
 zend_file_handle file_handle;

 file_handle.type = ZEND_HANDLE_FILENAME;
 file_handle.filename = filename;
 file_handle.free_filename = 0;
 file_handle.opened_path = ((void *)0);
 zend_save_lexical_state(&original_lex_state);
 if (open_file_for_scanning(&file_handle)==FAILURE) {
  zend_message_dispatcher(3L, filename);
  zend_restore_lexical_state(&original_lex_state);
  return FAILURE;
 }
 zend_highlight(syntax_highlighter_ini);
 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 zend_destroy_file_handle(&file_handle);
 zend_restore_lexical_state(&original_lex_state);
 return SUCCESS;
}

int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name)
{
 zend_lex_state original_lex_state;
 zval tmp = *str;

 str = &tmp;
 _zval_copy_ctor((str) );
 zend_save_lexical_state(&original_lex_state);
 if (zend_prepare_string_for_scanning(str, str_name)==FAILURE) {
  zend_restore_lexical_state(&original_lex_state);
  return FAILURE;
 }
 (language_scanner_globals.yy_state) = yycINITIAL;
 zend_highlight(syntax_highlighter_ini);
 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 zend_restore_lexical_state(&original_lex_state);
 _zval_dtor((str) );
 return SUCCESS;
}

__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding)
{
 size_t length;
 unsigned char *new_yy_start;


 if (!(language_scanner_globals.input_filter)) {
  if ((language_scanner_globals.script_filtered)) {
   _efree(((language_scanner_globals.script_filtered)) );
   (language_scanner_globals.script_filtered) = ((void *)0);
  }
  (language_scanner_globals.script_filtered_size) = 0;
  length = (language_scanner_globals.script_org_size);
  new_yy_start = (language_scanner_globals.script_org);
 } else {
  if ((size_t)-1 == (language_scanner_globals.input_filter)(&new_yy_start, &length, (language_scanner_globals.script_org), (language_scanner_globals.script_org_size))) {
   zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
     "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
  }
  if ((language_scanner_globals.script_filtered)) {
   _efree(((language_scanner_globals.script_filtered)) );
  }
  (language_scanner_globals.script_filtered) = new_yy_start;
  (language_scanner_globals.script_filtered_size) = length;
 }

 (language_scanner_globals.yy_cursor) = new_yy_start + ((language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_marker) = new_yy_start + ((language_scanner_globals.yy_marker) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_text) = new_yy_start + ((language_scanner_globals.yy_text) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_limit) = new_yy_start + length;

 (language_scanner_globals.yy_start) = new_yy_start;
}
# 866 "Zend/zend_language_scanner.l"
static int zend_scan_escape_string(zval *zendlval, char *str, int len, char quote_type)
{
 register char *s, *t;
 char *end;

 do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(str, len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);


 s = t = ((*(zendlval)).value.str)->val;
 end = s+((*(zendlval)).value.str)->len;
 while (s<end) {
  if (*s=='\\') {
   s++;
   if (s >= end) {
    *t++ = '\\';
    break;
   }

   switch(*s) {
    case 'n':
     *t++ = '\n';
     ((*(zendlval)).value.str)->len--;
     break;
    case 'r':
     *t++ = '\r';
     ((*(zendlval)).value.str)->len--;
     break;
    case 't':
     *t++ = '\t';
     ((*(zendlval)).value.str)->len--;
     break;
    case 'f':
     *t++ = '\f';
     ((*(zendlval)).value.str)->len--;
     break;
    case 'v':
     *t++ = '\v';
     ((*(zendlval)).value.str)->len--;
     break;
    case 'e':



     *t++ = '\e';

     ((*(zendlval)).value.str)->len--;
     break;
    case '"':
    case '`':
     if (*s != quote_type) {
      *t++ = '\\';
      *t++ = *s;
      break;
     }
    case '\\':
    case '$':
     *t++ = *s;
     ((*(zendlval)).value.str)->len--;
     break;
    case 'x':
    case 'X':
     if ((((*(s+1))>='0' && (*(s+1))<='9') || ((*(s+1))>='a' && (*(s+1))<='f') || ((*(s+1))>='A' && (*(s+1))<='F'))) {
      char hex_buf[3] = { 0, 0, 0 };

      ((*(zendlval)).value.str)->len--;

      hex_buf[0] = *(++s);
      ((*(zendlval)).value.str)->len--;
      if ((((*(s+1))>='0' && (*(s+1))<='9') || ((*(s+1))>='a' && (*(s+1))<='f') || ((*(s+1))>='A' && (*(s+1))<='F'))) {
       hex_buf[1] = *(++s);
       ((*(zendlval)).value.str)->len--;
      }
      *t++ = (char) strtoll((hex_buf), (((void *)0)), (16));
     } else {
      *t++ = '\\';
      *t++ = *s;
     }
     break;

    case 'u':
     {

      char *start = s + 1;
      size_t len = 0;
      zend_bool valid = 1;
      unsigned long codepoint;
      size_t byte_len = 0;

      if (*start != '{') {



       *t++ = '\\';
       *t++ = 'u';
       break;
      } else {

       s++;
       len++;
       s++;
       while (*s != '}') {
        if (!(((*s)>='0' && (*s)<='9') || ((*s)>='a' && (*s)<='f') || ((*s)>='A' && (*s)<='F'))) {
         valid = 0;
         break;
        } else {
         len++;
        }
        s++;
       }
       if (*s == '}') {
        valid = 1;
        len++;
       }
      }


      if (len <= 2) {
       valid = 0;
      }

      if (!valid) {
       zend_throw_exception(zend_ce_parse_error,
        "Invalid UTF-8 codepoint escape sequence", 0);
       _zval_ptr_dtor((zendlval) );
       do { (*(zendlval)).u1.type_info = 0; } while (0);
       return FAILURE;
      }

      (*__errno_location ()) = 0;
      codepoint = strtoul(start + 1, ((void *)0), 16);


      if (codepoint > 0x10FFFF || (*__errno_location ())) {
       zend_throw_exception(zend_ce_parse_error,
        "Invalid UTF-8 codepoint escape sequence: Codepoint too large", 0);
       _zval_ptr_dtor((zendlval) );
       do { (*(zendlval)).u1.type_info = 0; } while (0);
       return FAILURE;
      }


      if (codepoint < 0x80) {
       byte_len = 1;
       *t++ = codepoint;
      } else if (codepoint <= 0x7FF) {
       byte_len = 2;
       *t++ = (codepoint >> 6) + 0xC0;
       *t++ = (codepoint & 0x3F) + 0x80;
      } else if (codepoint <= 0xFFFF) {
       byte_len = 3;
       *t++ = (codepoint >> 12) + 0xE0;
       *t++ = ((codepoint >> 6) & 0x3F) + 0x80;
       *t++ = (codepoint & 0x3F) + 0x80;
      } else if (codepoint <= 0x10FFFF) {
       byte_len = 4;
       *t++ = (codepoint >> 18) + 0xF0;
       *t++ = ((codepoint >> 12) & 0x3F) + 0x80;
       *t++ = ((codepoint >> 6) & 0x3F) + 0x80;
       *t++ = (codepoint & 0x3F) + 0x80;
      }

      ((*(zendlval)).value.str)->len -= 2;
      ((*(zendlval)).value.str)->len -= (len - byte_len);
     }
     break;
    default:

     if (((*s)>='0' && (*s)<='7')) {
      char octal_buf[4] = { 0, 0, 0, 0 };

      octal_buf[0] = *s;
      ((*(zendlval)).value.str)->len--;
      if (((*(s+1))>='0' && (*(s+1))<='7')) {
       octal_buf[1] = *(++s);
       ((*(zendlval)).value.str)->len--;
       if (((*(s+1))>='0' && (*(s+1))<='7')) {
        octal_buf[2] = *(++s);
        ((*(zendlval)).value.str)->len--;
       }
      }
      *t++ = (char) strtoll((octal_buf), (((void *)0)), (8));
     } else {
      *t++ = '\\';
      *t++ = *s;
     }
     break;
   }
  } else {
   *t++ = *s;
  }

  if (*s == '\n' || (*s == '\r' && (*(s+1) != '\n'))) {
   (compiler_globals.zend_lineno)++;
  }
  s++;
 }
 *t = 0;
 if ((language_scanner_globals.output_filter)) {
  size_t sz = 0;
  unsigned char *str;

  s = ((*(zendlval)).value.str)->val;
  (language_scanner_globals.output_filter)(&str, &sz, (unsigned char *)s, (size_t)((*(zendlval)).value.str)->len);
  _zval_ptr_dtor((zendlval) );
  do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((char *) str, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  _efree((str) );
 }
 return SUCCESS;
}

static inline __attribute__((always_inline)) int emit_token(int token, int token_line)
{
 if((language_scanner_globals.on_event)) (language_scanner_globals.on_event)(ON_TOKEN, token, token_line);

 return token;
}



int lex_scan(zval *zendlval)
{

int start_line = (compiler_globals.zend_lineno);

restart:
 (language_scanner_globals.yy_text) = (language_scanner_globals.yy_cursor);
# 1097 "Zend/zend_language_scanner.c"
{
 unsigned char yych;
 unsigned int yyaccept = 0;
 if ((language_scanner_globals.yy_state) < 5) {
  if ((language_scanner_globals.yy_state) < 2) {
   if ((language_scanner_globals.yy_state) < 1) {
    goto yyc_ST_IN_SCRIPTING;
   } else {
    goto yyc_ST_LOOKING_FOR_PROPERTY;
   }
  } else {
   if ((language_scanner_globals.yy_state) < 3) {
    goto yyc_ST_BACKQUOTE;
   } else {
    if ((language_scanner_globals.yy_state) < 4) {
     goto yyc_ST_DOUBLE_QUOTES;
    } else {
     goto yyc_ST_HEREDOC;
    }
   }
  }
 } else {
  if ((language_scanner_globals.yy_state) < 7) {
   if ((language_scanner_globals.yy_state) < 6) {
    goto yyc_ST_LOOKING_FOR_VARNAME;
   } else {
    goto yyc_ST_VAR_OFFSET;
   }
  } else {
   if ((language_scanner_globals.yy_state) < 8) {
    goto yyc_INITIAL;
   } else {
    if ((language_scanner_globals.yy_state) < 9) {
     goto yyc_ST_END_HEREDOC;
    } else {
     goto yyc_ST_NOWDOC;
    }
   }
  }
 }

yyc_INITIAL:

 ;
 { if (((language_scanner_globals.yy_cursor) + 7) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
 yych = *(language_scanner_globals.yy_cursor);
 if (yych != '<') goto yy4;
 ;
 ++(language_scanner_globals.yy_cursor);
 if ((yych = *(language_scanner_globals.yy_cursor)) == '?') goto yy5;
yy3:
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1789 "Zend/zend_language_scanner.l"
 {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }

inline_char_handler:

 while (1) {
  unsigned char *ptr = memchr((language_scanner_globals.yy_cursor), '<', (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor));

  (language_scanner_globals.yy_cursor) = ptr ? ptr + 1 : (language_scanner_globals.yy_limit);

  if ((language_scanner_globals.yy_cursor) >= (language_scanner_globals.yy_limit)) {
   break;
  }

  if (*(language_scanner_globals.yy_cursor) == '?') {
   if ((compiler_globals.short_tags) || !strncasecmp((char*)(language_scanner_globals.yy_cursor) + 1, "php", 3) || (*((language_scanner_globals.yy_cursor) + 1) == '=')) {

    (language_scanner_globals.yy_cursor)--;
    break;
   }
  }
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 if ((language_scanner_globals.output_filter)) {
  size_t readsize;
  char *s = ((void *)0);
  size_t sz = 0;

  readsize = (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng));
  do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  _efree((s) );
  if (readsize < (language_scanner_globals.yy_leng)) {
   do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + readsize; (language_scanner_globals.yy_leng) = (unsigned int)readsize; } while(0);
  }
 } else {
   do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 }
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return emit_token(321, start_line);;
}
# 1196 "Zend/zend_language_scanner.c"
yy4:
 ;
 yych = *++(language_scanner_globals.yy_cursor);
 goto yy3;
yy5:
 ;
 yyaccept = 0;
 yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
 if (yych <= 'O') {
  if (yych == '=') goto yy7;
 } else {
  if (yych <= 'P') goto yy9;
  if (yych == 'p') goto yy9;
 }
yy6:
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1780 "Zend/zend_language_scanner.l"
 {
 if ((compiler_globals.short_tags)) {
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  return emit_token(379, start_line);;
 } else {
  goto inline_char_handler;
 }
}
# 1223 "Zend/zend_language_scanner.c"
yy7:
 ;
 ++(language_scanner_globals.yy_cursor);
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1767 "Zend/zend_language_scanner.l"
 {
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return emit_token(380, start_line);;
}
# 1234 "Zend/zend_language_scanner.c"
yy9:
 ;
 yych = *++(language_scanner_globals.yy_cursor);
 if (yych == 'H') goto yy11;
 if (yych == 'h') goto yy11;
yy10:
 ;
 (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
 goto yy6;
yy11:
 ;
 yych = *++(language_scanner_globals.yy_cursor);
 if (yych == 'P') goto yy12;
 if (yych != 'p') goto yy10;
yy12:
 ;
 yych = *++(language_scanner_globals.yy_cursor);
 if (yych <= '\f') {
  if (yych <= 0x08) goto yy10;
  if (yych >= '\v') goto yy10;
 } else {
  if (yych <= '\r') goto yy15;
  if (yych != ' ') goto yy10;
 }
yy13:
 ;
 ++(language_scanner_globals.yy_cursor);
yy14:
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1773 "Zend/zend_language_scanner.l"
 {
 { if (((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-1] == '\n' || ((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-1] == '\r') { (compiler_globals.zend_lineno)++; } };
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return emit_token(379, start_line);;
}
# 1271 "Zend/zend_language_scanner.c"
yy15:
 ;
 ++(language_scanner_globals.yy_cursor);
 if ((yych = *(language_scanner_globals.yy_cursor)) == '\n') goto yy13;
 goto yy14;

yyc_ST_BACKQUOTE:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych != '$') goto yy23;
  } else {
   if (yych <= '`') goto yy21;
   if (yych == '{') goto yy20;
   goto yy23;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy19;
   if (yych <= 'Z') goto yy26;
   if (yych >= '_') goto yy26;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy26;
   } else {
    if (yych <= '{') goto yy29;
    if (yych >= 0x7F) goto yy26;
   }
  }
yy19:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2199 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }
 if (((char*)(language_scanner_globals.yy_text))[0] == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '`':
    break;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), '`');
 return emit_token(322, start_line);;
}
# 1382 "Zend/zend_language_scanner.c"
yy20:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy24;
  goto yy19;
yy21:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2143 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return emit_token('`', start_line);;
}
# 1398 "Zend/zend_language_scanner.c"
yy23:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy19;
yy24:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2130 "Zend/zend_language_scanner.l"
  {
 (*(zendlval)).value.lval = (zend_long) '{';
 _yy_push_state(yycST_IN_SCRIPTING);
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return emit_token(386, start_line);;
}
# 1415 "Zend/zend_language_scanner.c"
yy26:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy26;
  }
  if (yych == '-') goto yy31;
  if (yych == '[') goto yy33;
yy28:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1854 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1436 "Zend/zend_language_scanner.c"
yy29:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1572 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME);
 return emit_token(385, start_line);;
}
# 1447 "Zend/zend_language_scanner.c"
yy31:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy35;
yy32:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy28;
yy33:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1847 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1468 "Zend/zend_language_scanner.c"
yy35:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy32;
   if (yych <= 'Z') goto yy36;
   if (yych <= '^') goto yy32;
  } else {
   if (yych <= '`') goto yy32;
   if (yych <= 'z') goto yy36;
   if (yych <= '~') goto yy32;
  }
yy36:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1838 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1493 "Zend/zend_language_scanner.c"
 }

yyc_ST_DOUBLE_QUOTES:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '#') {
   if (yych == '"') goto yy43;
   goto yy45;
  } else {
   if (yych <= '$') goto yy40;
   if (yych == '{') goto yy42;
   goto yy45;
  }
yy40:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy41;
   if (yych <= 'Z') goto yy48;
   if (yych >= '_') goto yy48;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy48;
   } else {
    if (yych <= '{') goto yy51;
    if (yych >= 0x7F) goto yy48;
   }
  }
yy41:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2149 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.scanned_string_len)) {
  (language_scanner_globals.yy_cursor) += (language_scanner_globals.scanned_string_len) - 1;
  (language_scanner_globals.scanned_string_len) = (0);

  goto double_quotes_scan_done;
 }

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }
 if (((char*)(language_scanner_globals.yy_text))[0] == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '"':
    break;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

double_quotes_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), '"');
 return emit_token(322, start_line);;
}
# 1610 "Zend/zend_language_scanner.c"
yy42:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy46;
  goto yy41;
yy43:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2138 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return emit_token('"', start_line);;
}
# 1626 "Zend/zend_language_scanner.c"
yy45:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy41;
yy46:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2130 "Zend/zend_language_scanner.l"
  {
 (*(zendlval)).value.lval = (zend_long) '{';
 _yy_push_state(yycST_IN_SCRIPTING);
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return emit_token(386, start_line);;
}
# 1643 "Zend/zend_language_scanner.c"
yy48:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy48;
  }
  if (yych == '-') goto yy53;
  if (yych == '[') goto yy55;
yy50:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1854 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1664 "Zend/zend_language_scanner.c"
yy51:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1572 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME);
 return emit_token(385, start_line);;
}
# 1675 "Zend/zend_language_scanner.c"
yy53:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy57;
yy54:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy50;
yy55:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1847 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1696 "Zend/zend_language_scanner.c"
yy57:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy54;
   if (yych <= 'Z') goto yy58;
   if (yych <= '^') goto yy54;
  } else {
   if (yych <= '`') goto yy54;
   if (yych <= 'z') goto yy58;
   if (yych <= '~') goto yy54;
  }
yy58:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1838 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1721 "Zend/zend_language_scanner.c"
 }

yyc_ST_END_HEREDOC:
 ;
 { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
 yych = *(language_scanner_globals.yy_cursor);
 ;
 ++(language_scanner_globals.yy_cursor);
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2116 "Zend/zend_language_scanner.l"
 {
 zend_heredoc_label *heredoc_label = zend_ptr_stack_pop(&(language_scanner_globals.heredoc_label_stack));

 (language_scanner_globals.yy_cursor) += heredoc_label->length - 1;
 (language_scanner_globals.yy_leng) = heredoc_label->length;

 heredoc_label_dtor(heredoc_label);
 _efree((heredoc_label) );

 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return emit_token(384, start_line);;
}
# 1745 "Zend/zend_language_scanner.c"

yyc_ST_HEREDOC:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy66;
  if (yych == '{') goto yy68;
  goto yy69;
yy66:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy67;
   if (yych <= 'Z') goto yy72;
   if (yych >= '_') goto yy72;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy72;
   } else {
    if (yych <= '{') goto yy75;
    if (yych >= 0x7F) goto yy72;
   }
  }
yy67:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2241 "Zend/zend_language_scanner.l"
  {
 int newline = 0;

 zend_heredoc_label *heredoc_label = zend_ptr_stack_top(&(language_scanner_globals.heredoc_label_stack));

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }

 (language_scanner_globals.yy_cursor)--;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':

    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) && heredoc_label->length < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), heredoc_label->label, heredoc_label->length)) {
     unsigned char *end = (language_scanner_globals.yy_cursor) + heredoc_label->length;

     if (*end == ';') {
      end++;
     }

     if (*end == '\n' || *end == '\r') {


      if ((language_scanner_globals.yy_cursor)[-2] == '\r' && (language_scanner_globals.yy_cursor)[-1] == '\n') {
       newline = 2;
      } else {
       newline = 1;
      }

      (compiler_globals.increment_lineno) = 1;
      (language_scanner_globals.yy_state) = yycST_END_HEREDOC;

      goto heredoc_scan_done;
     }
    }
    continue;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit) && *(language_scanner_globals.yy_cursor) != '\n' && *(language_scanner_globals.yy_cursor) != '\r') {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

heredoc_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng) - newline, 0);
 return emit_token(322, start_line);;
}
# 1880 "Zend/zend_language_scanner.c"
yy68:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy70;
  goto yy67;
yy69:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy67;
yy70:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2130 "Zend/zend_language_scanner.l"
  {
 (*(zendlval)).value.lval = (zend_long) '{';
 _yy_push_state(yycST_IN_SCRIPTING);
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return emit_token(386, start_line);;
}
# 1902 "Zend/zend_language_scanner.c"
yy72:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy72;
  }
  if (yych == '-') goto yy77;
  if (yych == '[') goto yy79;
yy74:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1854 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1923 "Zend/zend_language_scanner.c"
yy75:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1572 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME);
 return emit_token(385, start_line);;
}
# 1934 "Zend/zend_language_scanner.c"
yy77:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy81;
yy78:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy74;
yy79:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1847 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1955 "Zend/zend_language_scanner.c"
yy81:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy78;
   if (yych <= 'Z') goto yy82;
   if (yych <= '^') goto yy78;
  } else {
   if (yych <= '`') goto yy78;
   if (yych <= 'z') goto yy82;
   if (yych <= '~') goto yy78;
  }
yy82:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1838 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 1980 "Zend/zend_language_scanner.c"
 }

yyc_ST_IN_SCRIPTING:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 192, 64, 0, 0, 64, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   192, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
    60, 60, 44, 44, 44, 44, 44, 44,
    44, 44, 0, 0, 0, 0, 0, 0,
     0, 36, 36, 36, 36, 36, 36, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 0, 0, 0, 0, 4,
     0, 36, 36, 36, 36, 36, 36, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 0, 0, 0, 0, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 16) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 0x00:
  case 0x01:
  case 0x02:
  case 0x03:
  case 0x04:
  case 0x05:
  case 0x06:
  case 0x07:
  case 0x08:
  case '\v':
  case '\f':
  case 0x0E:
  case 0x0F:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1A:
  case 0x1B:
  case 0x1C:
  case 0x1D:
  case 0x1E:
  case 0x1F: goto yy147;
  case '\t':
  case '\n':
  case '\r':
  case ' ': goto yy103;
  case '!': goto yy118;
  case '"': goto yy143;
  case '#': goto yy139;
  case '$': goto yy129;
  case '%': goto yy123;
  case '&': goto yy124;
  case '\'': goto yy141;
  case '(': goto yy112;
  case ')':
  case ',':
  case ';':
  case '@':
  case '[':
  case ']':
  case '~': goto yy130;
  case '*': goto yy121;
  case '+': goto yy117;
  case '-': goto yy101;
  case '.': goto yy108;
  case '/': goto yy122;
  case '0': goto yy135;
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9': goto yy137;
  case ':': goto yy105;
  case '<': goto yy119;
  case '=': goto yy115;
  case '>': goto yy120;
  case '?': goto yy109;
  case 'A':
  case 'a': goto yy96;
  case 'B':
  case 'b': goto yy98;
  case 'C':
  case 'c': goto yy90;
  case 'D':
  case 'd': goto yy88;
  case 'E':
  case 'e': goto yy86;
  case 'F':
  case 'f': goto yy89;
  case 'G':
  case 'g': goto yy99;
  case 'I':
  case 'i': goto yy94;
  case 'L':
  case 'l': goto yy116;
  case 'N':
  case 'n': goto yy110;
  case 'O':
  case 'o': goto yy127;
  case 'P':
  case 'p': goto yy100;
  case 'R':
  case 'r': goto yy91;
  case 'S':
  case 's': goto yy97;
  case 'T':
  case 't': goto yy93;
  case 'U':
  case 'u': goto yy113;
  case 'V':
  case 'v': goto yy111;
  case 'W':
  case 'w': goto yy95;
  case 'X':
  case 'x': goto yy128;
  case 'Y':
  case 'y': goto yy92;
  case '\\': goto yy106;
  case '^': goto yy126;
  case '_': goto yy114;
  case '`': goto yy145;
  case '{': goto yy131;
  case '|': goto yy125;
  case '}': goto yy133;
  default: goto yy138;
  }
yy86:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  switch ((yych = *(language_scanner_globals.yy_cursor))) {
  case 'C':
  case 'c': goto yy704;
  case 'L':
  case 'l': goto yy705;
  case 'M':
  case 'm': goto yy706;
  case 'N':
  case 'n': goto yy707;
  case 'V':
  case 'v': goto yy708;
  case 'X':
  case 'x': goto yy709;
  default: goto yy150;
  }
yy87:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1877 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(319, start_line);;
}
# 2168 "Zend/zend_language_scanner.c"
yy88:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych <= 'H') {
    if (yych == 'E') goto yy686;
    goto yy150;
   } else {
    if (yych <= 'I') goto yy687;
    if (yych <= 'N') goto yy150;
    goto yy688;
   }
  } else {
   if (yych <= 'h') {
    if (yych == 'e') goto yy686;
    goto yy150;
   } else {
    if (yych <= 'i') goto yy687;
    if (yych == 'o') goto yy688;
    goto yy150;
   }
  }
yy89:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych <= 'N') {
    if (yych == 'I') goto yy662;
    goto yy150;
   } else {
    if (yych <= 'O') goto yy663;
    if (yych <= 'T') goto yy150;
    goto yy664;
   }
  } else {
   if (yych <= 'n') {
    if (yych == 'i') goto yy662;
    goto yy150;
   } else {
    if (yych <= 'o') goto yy663;
    if (yych == 'u') goto yy664;
    goto yy150;
   }
  }
yy90:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych <= 'K') {
    if (yych == 'A') goto yy627;
    goto yy150;
   } else {
    if (yych <= 'L') goto yy628;
    if (yych <= 'N') goto yy150;
    goto yy629;
   }
  } else {
   if (yych <= 'k') {
    if (yych == 'a') goto yy627;
    goto yy150;
   } else {
    if (yych <= 'l') goto yy628;
    if (yych == 'o') goto yy629;
    goto yy150;
   }
  }
yy91:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy609;
  if (yych == 'e') goto yy609;
  goto yy150;
yy92:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy597;
  if (yych == 'i') goto yy597;
  goto yy150;
yy93:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'R') {
   if (yych == 'H') goto yy585;
   if (yych <= 'Q') goto yy150;
   goto yy586;
  } else {
   if (yych <= 'h') {
    if (yych <= 'g') goto yy150;
    goto yy585;
   } else {
    if (yych == 'r') goto yy586;
    goto yy150;
   }
  }
yy94:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych <= 'L') {
    if (yych == 'F') goto yy532;
    goto yy150;
   } else {
    if (yych <= 'M') goto yy534;
    if (yych <= 'N') goto yy535;
    if (yych <= 'R') goto yy150;
    goto yy536;
   }
  } else {
   if (yych <= 'm') {
    if (yych == 'f') goto yy532;
    if (yych <= 'l') goto yy150;
    goto yy534;
   } else {
    if (yych <= 'n') goto yy535;
    if (yych == 's') goto yy536;
    goto yy150;
   }
  }
yy95:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy527;
  if (yych == 'h') goto yy527;
  goto yy150;
yy96:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych <= 'M') {
    if (yych == 'B') goto yy509;
    goto yy150;
   } else {
    if (yych <= 'N') goto yy510;
    if (yych <= 'Q') goto yy150;
    if (yych <= 'R') goto yy511;
    goto yy512;
   }
  } else {
   if (yych <= 'n') {
    if (yych == 'b') goto yy509;
    if (yych <= 'm') goto yy150;
    goto yy510;
   } else {
    if (yych <= 'q') goto yy150;
    if (yych <= 'r') goto yy511;
    if (yych <= 's') goto yy512;
    goto yy150;
   }
  }
yy97:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'W') {
   if (yych == 'T') goto yy497;
   if (yych <= 'V') goto yy150;
   goto yy498;
  } else {
   if (yych <= 't') {
    if (yych <= 's') goto yy150;
    goto yy497;
   } else {
    if (yych == 'w') goto yy498;
    goto yy150;
   }
  }
yy98:
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= ';') {
   if (yych <= '"') {
    if (yych <= '!') goto yy150;
    goto yy489;
   } else {
    if (yych == '\'') goto yy490;
    goto yy150;
   }
  } else {
   if (yych <= 'R') {
    if (yych <= '<') goto yy488;
    if (yych <= 'Q') goto yy150;
    goto yy491;
   } else {
    if (yych == 'r') goto yy491;
    goto yy150;
   }
  }
yy99:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'L') goto yy478;
   if (yych <= 'N') goto yy150;
   goto yy479;
  } else {
   if (yych <= 'l') {
    if (yych <= 'k') goto yy150;
    goto yy478;
   } else {
    if (yych == 'o') goto yy479;
    goto yy150;
   }
  }
yy100:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych == 'R') goto yy454;
   if (yych <= 'T') goto yy150;
   goto yy455;
  } else {
   if (yych <= 'r') {
    if (yych <= 'q') goto yy150;
    goto yy454;
   } else {
    if (yych == 'u') goto yy455;
    goto yy150;
   }
  }
yy101:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '<') {
   if (yych == '-') goto yy450;
  } else {
   if (yych <= '=') goto yy448;
   if (yych <= '>') goto yy452;
  }
yy102:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1561 "Zend/zend_language_scanner.l"
  {
 return emit_token(((char*)(language_scanner_globals.yy_text))[0], start_line);;
}
# 2404 "Zend/zend_language_scanner.c"
yy103:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy447;
yy104:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1276 "Zend/zend_language_scanner.l"
  {
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return emit_token(382, start_line);;
}
# 2418 "Zend/zend_language_scanner.c"
yy105:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == ':') goto yy444;
  goto yy102;
yy106:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1301 "Zend/zend_language_scanner.l"
  {
 return emit_token(390, start_line);;
}
# 2433 "Zend/zend_language_scanner.c"
yy108:
  ;
  yyaccept = 1;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= '/') {
   if (yych == '.') goto yy441;
   goto yy102;
  } else {
   if (yych <= '9') goto yy437;
   if (yych == '=') goto yy439;
   goto yy102;
  }
yy109:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '=') goto yy102;
  if (yych <= '>') goto yy431;
  if (yych <= '?') goto yy433;
  goto yy102;
yy110:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'E') {
   if (yych == 'A') goto yy419;
   if (yych <= 'D') goto yy150;
   goto yy420;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy150;
    goto yy419;
   } else {
    if (yych == 'e') goto yy420;
    goto yy150;
   }
  }
yy111:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy416;
  if (yych == 'a') goto yy416;
  goto yy150;
yy112:
  ;
  yyaccept = 1;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'S') {
   if (yych <= 'D') {
    if (yych <= ' ') {
     if (yych == '\t') goto yy341;
     if (yych <= 0x1F) goto yy102;
     goto yy341;
    } else {
     if (yych <= '@') goto yy102;
     if (yych == 'C') goto yy102;
     goto yy341;
    }
   } else {
    if (yych <= 'I') {
     if (yych == 'F') goto yy341;
     if (yych <= 'H') goto yy102;
     goto yy341;
    } else {
     if (yych == 'O') goto yy341;
     if (yych <= 'Q') goto yy102;
     goto yy341;
    }
   }
  } else {
   if (yych <= 'f') {
    if (yych <= 'b') {
     if (yych == 'U') goto yy341;
     if (yych <= '`') goto yy102;
     goto yy341;
    } else {
     if (yych == 'd') goto yy341;
     if (yych <= 'e') goto yy102;
     goto yy341;
    }
   } else {
    if (yych <= 'o') {
     if (yych == 'i') goto yy341;
     if (yych <= 'n') goto yy102;
     goto yy341;
    } else {
     if (yych <= 's') {
      if (yych <= 'q') goto yy102;
      goto yy341;
     } else {
      if (yych == 'u') goto yy341;
      goto yy102;
     }
    }
   }
  }
yy113:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych == 'N') goto yy332;
   if (yych <= 'R') goto yy150;
   goto yy333;
  } else {
   if (yych <= 'n') {
    if (yych <= 'm') goto yy150;
    goto yy332;
   } else {
    if (yych == 's') goto yy333;
    goto yy150;
   }
  }
yy114:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '_') goto yy250;
  goto yy150;
yy115:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '<') goto yy102;
  if (yych <= '=') goto yy244;
  if (yych <= '>') goto yy246;
  goto yy102;
yy116:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy240;
  if (yych == 'i') goto yy240;
  goto yy150;
yy117:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '+') goto yy238;
  if (yych == '=') goto yy236;
  goto yy102;
yy118:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy233;
  goto yy102;
yy119:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= ';') goto yy102;
  if (yych <= '<') goto yy209;
  if (yych <= '=') goto yy211;
  if (yych <= '>') goto yy213;
  goto yy102;
yy120:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '<') goto yy102;
  if (yych <= '=') goto yy205;
  if (yych <= '>') goto yy203;
  goto yy102;
yy121:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '*') goto yy197;
  if (yych == '=') goto yy199;
  goto yy102;
yy122:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '.') {
   if (yych == '*') goto yy189;
   goto yy102;
  } else {
   if (yych <= '/') goto yy191;
   if (yych == '=') goto yy192;
   goto yy102;
  }
yy123:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy187;
  goto yy102;
yy124:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '&') goto yy183;
  if (yych == '=') goto yy185;
  goto yy102;
yy125:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy181;
  if (yych == '|') goto yy179;
  goto yy102;
yy126:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy177;
  goto yy102;
yy127:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy175;
  if (yych == 'r') goto yy175;
  goto yy150;
yy128:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy172;
  if (yych == 'o') goto yy172;
  goto yy150;
yy129:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy102;
   if (yych <= 'Z') goto yy169;
   if (yych <= '^') goto yy102;
   goto yy169;
  } else {
   if (yych <= '`') goto yy102;
   if (yych <= 'z') goto yy169;
   if (yych <= '~') goto yy102;
   goto yy169;
  }
yy130:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy102;
yy131:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1566 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_IN_SCRIPTING);
 return emit_token('{', start_line);;
}
# 2667 "Zend/zend_language_scanner.c"
yy133:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1578 "Zend/zend_language_scanner.l"
  {
 do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
 if (!zend_stack_is_empty(&(language_scanner_globals.state_stack))) {
  yy_pop_state();
 }
 return emit_token('}', start_line);;
}
# 2681 "Zend/zend_language_scanner.c"
yy135:
  ;
  yyaccept = 2;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'E') {
   if (yych <= '9') {
    if (yych == '.') goto yy151;
    if (yych >= '0') goto yy154;
   } else {
    if (yych == 'B') goto yy162;
    if (yych >= 'E') goto yy156;
   }
  } else {
   if (yych <= 'b') {
    if (yych == 'X') goto yy161;
    if (yych >= 'b') goto yy162;
   } else {
    if (yych <= 'e') {
     if (yych >= 'e') goto yy156;
    } else {
     if (yych == 'x') goto yy161;
    }
   }
  }
yy136:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1631 "Zend/zend_language_scanner.l"
  {
 char *end;
 if ((language_scanner_globals.yy_leng) < 20 - 1) {
  (*__errno_location ()) = 0;
  { zval *__z = (zendlval); (*(__z)).value.lval = strtoll((((char*)(language_scanner_globals.yy_text))), (&end), (0)); (*(__z)).u1.type_info = 4; };



  if (end != ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)) {
   zend_throw_exception(zend_ce_parse_error, "Invalid numeric literal", 0);
   do { (*(zendlval)).u1.type_info = 0; } while (0);
   return emit_token(317, start_line);;
  }
 } else {
  (*__errno_location ()) = 0;
  { zval *__z = (zendlval); (*(__z)).value.lval = strtoll((((char*)(language_scanner_globals.yy_text))), (&end), (0)); (*(__z)).u1.type_info = 4; };
  if ((*__errno_location ()) == 34) {
   (*__errno_location ()) = 0;
   if (((char*)(language_scanner_globals.yy_text))[0] == '0') {
    (*__errno_location ()) = 0;
    { zval *__z = (zendlval); (*(__z)).value.dval = zend_oct_strtod(((char*)(language_scanner_globals.yy_text)), (const char **)&end); (*(__z)).u1.type_info = 5; };
   } else {
    { zval *__z = (zendlval); (*(__z)).value.dval = zend_strtod(((char*)(language_scanner_globals.yy_text)), (const char **)&end); (*(__z)).u1.type_info = 5; };
   }

   if (end != ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)) {
    zend_throw_exception(zend_ce_parse_error,
     "Invalid numeric literal", 0);
    do { (*(zendlval)).u1.type_info = 0; } while (0);
    return emit_token(318, start_line);;
   }
   do { if (__builtin_expect(!(!(*__errno_location ())), 0)) __builtin_unreachable(); } while (0);
   return emit_token(318, start_line);;
  }

  if (end != ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)) {
   zend_throw_exception(zend_ce_parse_error, "Invalid numeric literal", 0);
   do { (*(zendlval)).u1.type_info = 0; } while (0);
   return emit_token(318, start_line);;
  }
 }
 do { if (__builtin_expect(!(!(*__errno_location ())), 0)) __builtin_unreachable(); } while (0);
 return emit_token(317, start_line);;
}
# 2754 "Zend/zend_language_scanner.c"
yy137:
  ;
  yyaccept = 2;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= '9') {
   if (yych == '.') goto yy151;
   if (yych <= '/') goto yy136;
   goto yy154;
  } else {
   if (yych <= 'E') {
    if (yych <= 'D') goto yy136;
    goto yy156;
   } else {
    if (yych == 'e') goto yy156;
    goto yy136;
   }
  }
yy138:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy150;
yy139:
  ;
  ++(language_scanner_globals.yy_cursor);
yy140:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1883 "Zend/zend_language_scanner.l"
  {
 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':
    (compiler_globals.zend_lineno)++;
    break;
   case '?':
    if (*(language_scanner_globals.yy_cursor) == '>') {
     (language_scanner_globals.yy_cursor)--;
     break;
    }

   default:
    continue;
  }

  break;
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 return emit_token(377, start_line);;
}
# 2811 "Zend/zend_language_scanner.c"
yy141:
  ;
  ++(language_scanner_globals.yy_cursor);
yy142:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1951 "Zend/zend_language_scanner.l"
  {
 register char *s, *t;
 char *end;
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '\'') ? 1 : 0;

 while (1) {
  if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
   if (*(language_scanner_globals.yy_cursor) == '\'') {
    (language_scanner_globals.yy_cursor)++;
    (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

    break;
   } else if (*(language_scanner_globals.yy_cursor)++ == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
    (language_scanner_globals.yy_cursor)++;
   }
  } else {
   (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_text);




   do { (*(zendlval)).u1.type_info = 1; } while (0);
   return emit_token(322, start_line);;
  }
 }

 do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text))+bprefix+1, (language_scanner_globals.yy_leng)-bprefix-2, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);


 s = t = ((*(zendlval)).value.str)->val;
 end = s+((*(zendlval)).value.str)->len;
 while (s<end) {
  if (*s=='\\') {
   s++;

   switch(*s) {
    case '\\':
    case '\'':
     *t++ = *s;
     ((*(zendlval)).value.str)->len--;
     break;
    default:
     *t++ = '\\';
     *t++ = *s;
     break;
   }
  } else {
   *t++ = *s;
  }

  if (*s == '\n' || (*s == '\r' && (*(s+1) != '\n'))) {
   (compiler_globals.zend_lineno)++;
  }
  s++;
 }
 *t = 0;

 if ((language_scanner_globals.output_filter)) {
  size_t sz = 0;
  char *str = ((void *)0);
  s = ((*(zendlval)).value.str)->val;

  (language_scanner_globals.output_filter)((unsigned char **)&str, &sz, (unsigned char *)s, (size_t)((*(zendlval)).value.str)->len);
  do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(str, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 }
 return emit_token(323, start_line);;
}
# 2886 "Zend/zend_language_scanner.c"
yy143:
  ;
  ++(language_scanner_globals.yy_cursor);
yy144:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2020 "Zend/zend_language_scanner.l"
  {
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '"') ? 1 : 0;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '"':
    (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
    zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text))+bprefix+1, (language_scanner_globals.yy_leng)-bprefix-2, '"');
    return emit_token(323, start_line);;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }


 (language_scanner_globals.scanned_string_len) = ((language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text) - (language_scanner_globals.yy_leng));

 (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_text) + (language_scanner_globals.yy_leng);

 (language_scanner_globals.yy_state) = yycST_DOUBLE_QUOTES;
 return emit_token('"', start_line);;
}
# 2934 "Zend/zend_language_scanner.c"
yy145:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2110 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_BACKQUOTE;
 return emit_token('`', start_line);;
}
# 2945 "Zend/zend_language_scanner.c"
yy147:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2372 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }

 zend_error((1<<7L),"Unexpected character in input:  '%c' (ASCII=%d) state=%d", ((char*)(language_scanner_globals.yy_text))[0], ((char*)(language_scanner_globals.yy_text))[0], (language_scanner_globals.yy_state));
 goto restart;
}
# 2960 "Zend/zend_language_scanner.c"
yy149:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy150:
  ;
  if (yybm[0+yych] & 4) {
   goto yy149;
  }
  goto yy87;
yy151:
  ;
  yyaccept = 3;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 8) {
   goto yy151;
  }
  if (yych == 'E') goto yy156;
  if (yych == 'e') goto yy156;
yy153:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1725 "Zend/zend_language_scanner.l"
  {
 const char *end;

 { zval *__z = (zendlval); (*(__z)).value.dval = zend_strtod(((char*)(language_scanner_globals.yy_text)), &end); (*(__z)).u1.type_info = 5; };

 do { if (__builtin_expect(!(end == ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)), 0)) __builtin_unreachable(); } while (0);
 return emit_token(318, start_line);;
}
# 2996 "Zend/zend_language_scanner.c"
yy154:
  ;
  yyaccept = 2;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '9') {
   if (yych == '.') goto yy151;
   if (yych <= '/') goto yy136;
   goto yy154;
  } else {
   if (yych <= 'E') {
    if (yych <= 'D') goto yy136;
   } else {
    if (yych != 'e') goto yy136;
   }
  }
yy156:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= ',') {
   if (yych == '+') goto yy158;
  } else {
   if (yych <= '-') goto yy158;
   if (yych <= '/') goto yy157;
   if (yych <= '9') goto yy159;
  }
yy157:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  if (yyaccept <= 3) {
   if (yyaccept <= 1) {
    if (yyaccept <= 0) {
     goto yy87;
    } else {
     goto yy102;
    }
   } else {
    if (yyaccept <= 2) {
     goto yy136;
    } else {
     goto yy153;
    }
   }
  } else {
   if (yyaccept <= 5) {
    if (yyaccept <= 4) {
     goto yy190;
    } else {
     goto yy210;
    }
   } else {
    goto yy601;
   }
  }
yy158:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '/') goto yy157;
  if (yych >= ':') goto yy157;
yy159:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '/') goto yy153;
  if (yych <= '9') goto yy159;
  goto yy153;
yy161:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 32) {
   goto yy166;
  }
  goto yy157;
yy162:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 16) {
   goto yy163;
  }
  goto yy157;
yy163:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 16) {
   goto yy163;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1603 "Zend/zend_language_scanner.l"
  {
 char *bin = ((char*)(language_scanner_globals.yy_text)) + 2;
 int len = (language_scanner_globals.yy_leng) - 2;
 char *end;


 while (*bin == '0') {
  ++bin;
  --len;
 }

 if (len < 8 * 8) {
  if (len == 0) {
   { zval *__z = (zendlval); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };
  } else {
   (*__errno_location ()) = 0;
   { zval *__z = (zendlval); (*(__z)).value.lval = strtoll((bin), (&end), (2)); (*(__z)).u1.type_info = 4; };
   do { if (__builtin_expect(!(!(*__errno_location ()) && end == ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)), 0)) __builtin_unreachable(); } while (0);
  }
  return emit_token(317, start_line);;
 } else {
  { zval *__z = (zendlval); (*(__z)).value.dval = zend_bin_strtod(bin, (const char **)&end); (*(__z)).u1.type_info = 5; };

  do { if (__builtin_expect(!(end == ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)), 0)) __builtin_unreachable(); } while (0);
  return emit_token(318, start_line);;
 }
}
# 3120 "Zend/zend_language_scanner.c"
yy166:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 32) {
   goto yy166;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1676 "Zend/zend_language_scanner.l"
  {
 char *hex = ((char*)(language_scanner_globals.yy_text)) + 2;
 int len = (language_scanner_globals.yy_leng) - 2;
 char *end;


 while (*hex == '0') {
  hex++;
  len--;
 }

 if (len < 8 * 2 || (len == 8 * 2 && *hex <= '7')) {
  if (len == 0) {
   { zval *__z = (zendlval); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };
  } else {
   (*__errno_location ()) = 0;
   { zval *__z = (zendlval); (*(__z)).value.lval = strtoll((hex), (&end), (16)); (*(__z)).u1.type_info = 4; };
   do { if (__builtin_expect(!(!(*__errno_location ()) && end == hex + len), 0)) __builtin_unreachable(); } while (0);
  }
  return emit_token(317, start_line);;
 } else {
  { zval *__z = (zendlval); (*(__z)).value.dval = zend_hex_strtod(hex, (const char **)&end); (*(__z)).u1.type_info = 5; };

  do { if (__builtin_expect(!(end == hex + len), 0)) __builtin_unreachable(); } while (0);
  return emit_token(318, start_line);;
 }
}
# 3160 "Zend/zend_language_scanner.c"
yy169:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy169;
   } else {
    if (yych <= '@') goto yy171;
    if (yych <= 'Z') goto yy169;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy169;
   } else {
    if (yych <= 'z') goto yy169;
    if (yych >= 0x7F) goto yy169;
   }
  }
yy171:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1854 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 3190 "Zend/zend_language_scanner.c"
yy172:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy173;
  if (yych != 'r') goto yy150;
yy173:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1549 "Zend/zend_language_scanner.l"
  {
 return emit_token(264, start_line);;
}
# 3208 "Zend/zend_language_scanner.c"
yy175:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1541 "Zend/zend_language_scanner.l"
  {
 return emit_token(263, start_line);;
}
# 3221 "Zend/zend_language_scanner.c"
yy177:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1529 "Zend/zend_language_scanner.l"
  {
 return emit_token(273, start_line);;
}
# 3231 "Zend/zend_language_scanner.c"
yy179:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1533 "Zend/zend_language_scanner.l"
  {
 return emit_token(283, start_line);;
}
# 3241 "Zend/zend_language_scanner.c"
yy181:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1525 "Zend/zend_language_scanner.l"
  {
 return emit_token(274, start_line);;
}
# 3251 "Zend/zend_language_scanner.c"
yy183:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1537 "Zend/zend_language_scanner.l"
  {
 return emit_token(284, start_line);;
}
# 3261 "Zend/zend_language_scanner.c"
yy185:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1521 "Zend/zend_language_scanner.l"
  {
 return emit_token(275, start_line);;
}
# 3271 "Zend/zend_language_scanner.c"
yy187:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1509 "Zend/zend_language_scanner.l"
  {
 return emit_token(276, start_line);;
}
# 3281 "Zend/zend_language_scanner.c"
yy189:
  ;
  yyaccept = 4;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych == '*') goto yy194;
yy190:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1912 "Zend/zend_language_scanner.l"
  {
 int doc_com;

 if ((language_scanner_globals.yy_leng) > 2) {
  doc_com = 1;
  do { if ((compiler_globals.doc_comment)) { zend_string_release((compiler_globals.doc_comment)); (compiler_globals.doc_comment) = ((void *)0); } } while (0);
 } else {
  doc_com = 0;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  if (*(language_scanner_globals.yy_cursor)++ == '*' && *(language_scanner_globals.yy_cursor) == '/') {
   break;
  }
 }

 if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 } else {
  zend_error((1<<7L), "Unterminated comment starting line %d", (compiler_globals.zend_lineno));
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);

 if (doc_com) {
  (compiler_globals.doc_comment) = zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0);
  return emit_token(378, start_line);;
 }

 return emit_token(377, start_line);;
}
# 3323 "Zend/zend_language_scanner.c"
yy191:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy140;
yy192:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1501 "Zend/zend_language_scanner.l"
  {
 return emit_token(278, start_line);;
}
# 3337 "Zend/zend_language_scanner.c"
yy194:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 64) {
   goto yy195;
  }
  goto yy157;
yy195:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 64) {
   goto yy195;
  }
  goto yy190;
yy197:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy201;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1493 "Zend/zend_language_scanner.l"
  {
 return emit_token(304, start_line);;
}
# 3365 "Zend/zend_language_scanner.c"
yy199:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1489 "Zend/zend_language_scanner.l"
  {
 return emit_token(279, start_line);;
}
# 3375 "Zend/zend_language_scanner.c"
yy201:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1497 "Zend/zend_language_scanner.l"
  {
 return emit_token(270, start_line);;
}
# 3385 "Zend/zend_language_scanner.c"
yy203:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy207;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1557 "Zend/zend_language_scanner.l"
  {
 return emit_token(292, start_line);;
}
# 3396 "Zend/zend_language_scanner.c"
yy205:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1477 "Zend/zend_language_scanner.l"
  {
 return emit_token(290, start_line);;
}
# 3406 "Zend/zend_language_scanner.c"
yy207:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1517 "Zend/zend_language_scanner.l"
  {
 return emit_token(271, start_line);;
}
# 3416 "Zend/zend_language_scanner.c"
yy209:
  ;
  yyaccept = 5;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= ';') goto yy210;
  if (yych <= '<') goto yy219;
  if (yych <= '=') goto yy217;
yy210:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1553 "Zend/zend_language_scanner.l"
  {
 return emit_token(293, start_line);;
}
# 3431 "Zend/zend_language_scanner.c"
yy211:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '>') goto yy215;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1473 "Zend/zend_language_scanner.l"
  {
 return emit_token(291, start_line);;
}
# 3442 "Zend/zend_language_scanner.c"
yy213:
  ;
  ++(language_scanner_globals.yy_cursor);
yy214:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1465 "Zend/zend_language_scanner.l"
  {
 return emit_token(288, start_line);;
}
# 3453 "Zend/zend_language_scanner.c"
yy215:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1469 "Zend/zend_language_scanner.l"
  {
 return emit_token(285, start_line);;
}
# 3463 "Zend/zend_language_scanner.c"
yy217:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1513 "Zend/zend_language_scanner.l"
  {
 return emit_token(272, start_line);;
}
# 3473 "Zend/zend_language_scanner.c"
yy219:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy219;
  }
  if (yych <= 'Z') {
   if (yych <= '&') {
    if (yych == '"') goto yy224;
    goto yy157;
   } else {
    if (yych <= '\'') goto yy223;
    if (yych <= '@') goto yy157;
   }
  } else {
   if (yych <= '`') {
    if (yych != '_') goto yy157;
   } else {
    if (yych <= 'z') goto yy221;
    if (yych <= '~') goto yy157;
   }
  }
yy221:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '@') {
   if (yych <= '\f') {
    if (yych == '\n') goto yy228;
    goto yy157;
   } else {
    if (yych <= '\r') goto yy230;
    if (yych <= '/') goto yy157;
    if (yych <= '9') goto yy221;
    goto yy157;
   }
  } else {
   if (yych <= '_') {
    if (yych <= 'Z') goto yy221;
    if (yych <= '^') goto yy157;
    goto yy221;
   } else {
    if (yych <= '`') goto yy157;
    if (yych <= 'z') goto yy221;
    if (yych <= '~') goto yy157;
    goto yy221;
   }
  }
yy223:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\'') goto yy157;
  if (yych <= '/') goto yy232;
  if (yych <= '9') goto yy157;
  goto yy232;
yy224:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '"') goto yy157;
  if (yych <= '/') goto yy226;
  if (yych <= '9') goto yy157;
  goto yy226;
yy225:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy226:
  ;
  if (yych <= 'Z') {
   if (yych <= '/') {
    if (yych != '"') goto yy157;
   } else {
    if (yych <= '9') goto yy225;
    if (yych <= '@') goto yy157;
    goto yy225;
   }
  } else {
   if (yych <= '`') {
    if (yych == '_') goto yy225;
    goto yy157;
   } else {
    if (yych <= 'z') goto yy225;
    if (yych <= '~') goto yy157;
    goto yy225;
   }
  }
yy227:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy228;
  if (yych == '\r') goto yy230;
  goto yy157;
yy228:
  ;
  ++(language_scanner_globals.yy_cursor);
yy229:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2062 "Zend/zend_language_scanner.l"
  {
 char *s;
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '<') ? 1 : 0;
 zend_heredoc_label *heredoc_label = (__builtin_constant_p((sizeof(zend_heredoc_label)) ) ? (((sizeof(zend_heredoc_label)) <= 8) ? _emalloc_8() : (((sizeof(zend_heredoc_label)) <= 16) ? _emalloc_16() : (((sizeof(zend_heredoc_label)) <= 24) ? _emalloc_24() : (((sizeof(zend_heredoc_label)) <= 32) ? _emalloc_32() : (((sizeof(zend_heredoc_label)) <= 40) ? _emalloc_40() : (((sizeof(zend_heredoc_label)) <= 48) ? _emalloc_48() : (((sizeof(zend_heredoc_label)) <= 56) ? _emalloc_56() : (((sizeof(zend_heredoc_label)) <= 64) ? _emalloc_64() : (((sizeof(zend_heredoc_label)) <= 80) ? _emalloc_80() : (((sizeof(zend_heredoc_label)) <= 96) ? _emalloc_96() : (((sizeof(zend_heredoc_label)) <= 112) ? _emalloc_112() : (((sizeof(zend_heredoc_label)) <= 128) ? _emalloc_128() : (((sizeof(zend_heredoc_label)) <= 160) ? _emalloc_160() : (((sizeof(zend_heredoc_label)) <= 192) ? _emalloc_192() : (((sizeof(zend_heredoc_label)) <= 224) ? _emalloc_224() : (((sizeof(zend_heredoc_label)) <= 256) ? _emalloc_256() : (((sizeof(zend_heredoc_label)) <= 320) ? _emalloc_320() : (((sizeof(zend_heredoc_label)) <= 384) ? _emalloc_384() : (((sizeof(zend_heredoc_label)) <= 448) ? _emalloc_448() : (((sizeof(zend_heredoc_label)) <= 512) ? _emalloc_512() : (((sizeof(zend_heredoc_label)) <= 640) ? _emalloc_640() : (((sizeof(zend_heredoc_label)) <= 768) ? _emalloc_768() : (((sizeof(zend_heredoc_label)) <= 896) ? _emalloc_896() : (((sizeof(zend_heredoc_label)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_heredoc_label)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_heredoc_label)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_heredoc_label)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_heredoc_label)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_heredoc_label)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_heredoc_label)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_heredoc_label)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_heredoc_label))) : _emalloc_huge((sizeof(zend_heredoc_label)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_heredoc_label)) ) );

 (compiler_globals.zend_lineno)++;
 heredoc_label->length = (language_scanner_globals.yy_leng)-bprefix-3-1-(((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-2]=='\r'?1:0);
 s = ((char*)(language_scanner_globals.yy_text))+bprefix+3;
 while ((*s == ' ') || (*s == '\t')) {
  s++;
  heredoc_label->length--;
 }

 if (*s == '\'') {
  s++;
  heredoc_label->length -= 2;

  (language_scanner_globals.yy_state) = yycST_NOWDOC;
 } else {
  if (*s == '"') {
   s++;
   heredoc_label->length -= 2;
  }

  (language_scanner_globals.yy_state) = yycST_HEREDOC;
 }

 heredoc_label->label = _estrndup((s), (heredoc_label->length) );


 if (heredoc_label->length < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), s, heredoc_label->length)) {
  unsigned char *end = (language_scanner_globals.yy_cursor) + heredoc_label->length;

  if (*end == ';') {
   end++;
  }

  if (*end == '\n' || *end == '\r') {
   (language_scanner_globals.yy_state) = yycST_END_HEREDOC;
  }
 }

 zend_ptr_stack_push(&(language_scanner_globals.heredoc_label_stack), (void *) heredoc_label);

 return emit_token(383, start_line);;
}
# 3625 "Zend/zend_language_scanner.c"
yy230:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy228;
  goto yy229;
yy231:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy232:
  ;
  if (yych <= 'Z') {
   if (yych <= '/') {
    if (yych == '\'') goto yy227;
    goto yy157;
   } else {
    if (yych <= '9') goto yy231;
    if (yych <= '@') goto yy157;
    goto yy231;
   }
  } else {
   if (yych <= '`') {
    if (yych == '_') goto yy231;
    goto yy157;
   } else {
    if (yych <= 'z') goto yy231;
    if (yych <= '~') goto yy157;
    goto yy231;
   }
  }
yy233:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '=') goto yy214;
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1457 "Zend/zend_language_scanner.l"
  {
 return emit_token(286, start_line);;
}
# 3669 "Zend/zend_language_scanner.c"
yy236:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1481 "Zend/zend_language_scanner.l"
  {
 return emit_token(281, start_line);;
}
# 3679 "Zend/zend_language_scanner.c"
yy238:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1445 "Zend/zend_language_scanner.l"
  {
 return emit_token(303, start_line);;
}
# 3689 "Zend/zend_language_scanner.c"
yy240:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy241;
  if (yych != 's') goto yy150;
yy241:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy242;
  if (yych != 't') goto yy150;
yy242:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1433 "Zend/zend_language_scanner.l"
  {
 return emit_token(367, start_line);;
}
# 3712 "Zend/zend_language_scanner.c"
yy244:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy248;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1461 "Zend/zend_language_scanner.l"
  {
 return emit_token(289, start_line);;
}
# 3723 "Zend/zend_language_scanner.c"
yy246:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1429 "Zend/zend_language_scanner.l"
  {
 return emit_token(268, start_line);;
}
# 3733 "Zend/zend_language_scanner.c"
yy248:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1453 "Zend/zend_language_scanner.l"
  {
 return emit_token(287, start_line);;
}
# 3743 "Zend/zend_language_scanner.c"
yy250:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 'C':
  case 'c': goto yy252;
  case 'D':
  case 'd': goto yy257;
  case 'F':
  case 'f': goto yy254;
  case 'H':
  case 'h': goto yy251;
  case 'L':
  case 'l': goto yy256;
  case 'M':
  case 'm': goto yy255;
  case 'N':
  case 'n': goto yy258;
  case 'T':
  case 't': goto yy253;
  default: goto yy150;
  }
yy251:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy319;
  if (yych == 'a') goto yy319;
  goto yy150;
yy252:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy312;
  if (yych == 'l') goto yy312;
  goto yy150;
yy253:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy305;
  if (yych == 'r') goto yy305;
  goto yy150;
yy254:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych == 'I') goto yy289;
   if (yych <= 'T') goto yy150;
   goto yy290;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy150;
    goto yy289;
   } else {
    if (yych == 'u') goto yy290;
    goto yy150;
   }
  }
yy255:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy281;
  if (yych == 'e') goto yy281;
  goto yy150;
yy256:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy275;
  if (yych == 'i') goto yy275;
  goto yy150;
yy257:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy270;
  if (yych == 'i') goto yy270;
  goto yy150;
yy258:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy259;
  if (yych != 'a') goto yy150;
yy259:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy260;
  if (yych != 'm') goto yy150;
yy260:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy261;
  if (yych != 'e') goto yy150;
yy261:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy262;
  if (yych != 's') goto yy150;
yy262:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy263;
  if (yych != 'p') goto yy150;
yy263:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy264;
  if (yych != 'a') goto yy150;
yy264:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy265;
  if (yych != 'c') goto yy150;
yy265:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy266;
  if (yych != 'e') goto yy150;
yy266:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1762 "Zend/zend_language_scanner.l"
  {
 return emit_token(389, start_line);;
}
# 3877 "Zend/zend_language_scanner.c"
yy270:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy271;
  if (yych != 'r') goto yy150;
yy271:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1758 "Zend/zend_language_scanner.l"
  {
 return emit_token(372, start_line);;
}
# 3901 "Zend/zend_language_scanner.c"
yy275:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy276;
  if (yych != 'n') goto yy150;
yy276:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy277;
  if (yych != 'e') goto yy150;
yy277:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1750 "Zend/zend_language_scanner.l"
  {
 return emit_token(370, start_line);;
}
# 3930 "Zend/zend_language_scanner.c"
yy281:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy282;
  if (yych != 't') goto yy150;
yy282:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy283;
  if (yych != 'h') goto yy150;
yy283:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy284;
  if (yych != 'o') goto yy150;
yy284:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy285;
  if (yych != 'd') goto yy150;
yy285:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1746 "Zend/zend_language_scanner.l"
  {
 return emit_token(375, start_line);;
}
# 3969 "Zend/zend_language_scanner.c"
yy289:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy300;
  if (yych == 'l') goto yy300;
  goto yy150;
yy290:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy291;
  if (yych != 'n') goto yy150;
yy291:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy292;
  if (yych != 'c') goto yy150;
yy292:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy293;
  if (yych != 't') goto yy150;
yy293:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy294;
  if (yych != 'i') goto yy150;
yy294:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy295;
  if (yych != 'o') goto yy150;
yy295:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy296;
  if (yych != 'n') goto yy150;
yy296:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1742 "Zend/zend_language_scanner.l"
  {
 return emit_token(376, start_line);;
}
# 4024 "Zend/zend_language_scanner.c"
yy300:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy301;
  if (yych != 'e') goto yy150;
yy301:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1754 "Zend/zend_language_scanner.l"
  {
 return emit_token(371, start_line);;
}
# 4048 "Zend/zend_language_scanner.c"
yy305:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy306;
  if (yych != 'a') goto yy150;
yy306:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy307;
  if (yych != 'i') goto yy150;
yy307:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy308;
  if (yych != 't') goto yy150;
yy308:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1738 "Zend/zend_language_scanner.l"
  {
 return emit_token(374, start_line);;
}
# 4082 "Zend/zend_language_scanner.c"
yy312:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy313;
  if (yych != 'a') goto yy150;
yy313:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy314;
  if (yych != 's') goto yy150;
yy314:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy315;
  if (yych != 's') goto yy150;
yy315:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1734 "Zend/zend_language_scanner.l"
  {
 return emit_token(373, start_line);;
}
# 4116 "Zend/zend_language_scanner.c"
yy319:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy320;
  if (yych != 'l') goto yy150;
yy320:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy321;
  if (yych != 't') goto yy150;
yy321:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy150;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy323;
  if (yych != 'c') goto yy150;
yy323:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy324;
  if (yych != 'o') goto yy150;
yy324:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy325;
  if (yych != 'm') goto yy150;
yy325:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy326;
  if (yych != 'p') goto yy150;
yy326:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy327;
  if (yych != 'i') goto yy150;
yy327:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy328;
  if (yych != 'l') goto yy150;
yy328:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy329;
  if (yych != 'e') goto yy150;
yy329:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy330;
  if (yych != 'r') goto yy150;
yy330:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1397 "Zend/zend_language_scanner.l"
  {
 return emit_token(360, start_line);;
}
# 4182 "Zend/zend_language_scanner.c"
yy332:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy336;
  if (yych == 's') goto yy336;
  goto yy150;
yy333:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy334;
  if (yych != 'e') goto yy150;
yy334:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1377 "Zend/zend_language_scanner.l"
  {
 return emit_token(353, start_line);;
}
# 4206 "Zend/zend_language_scanner.c"
yy336:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy337;
  if (yych != 'e') goto yy150;
yy337:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy338;
  if (yych != 't') goto yy150;
yy338:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1425 "Zend/zend_language_scanner.l"
  {
 return emit_token(357, start_line);;
}
# 4229 "Zend/zend_language_scanner.c"
yy340:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 7) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy341:
  ;
  if (yych <= 'S') {
   if (yych <= 'D') {
    if (yych <= ' ') {
     if (yych == '\t') goto yy340;
     if (yych <= 0x1F) goto yy157;
     goto yy340;
    } else {
     if (yych <= 'A') {
      if (yych <= '@') goto yy157;
      goto yy345;
     } else {
      if (yych <= 'B') goto yy343;
      if (yych <= 'C') goto yy157;
      goto yy348;
     }
    }
   } else {
    if (yych <= 'I') {
     if (yych == 'F') goto yy349;
     if (yych <= 'H') goto yy157;
     goto yy350;
    } else {
     if (yych <= 'O') {
      if (yych <= 'N') goto yy157;
      goto yy344;
     } else {
      if (yych <= 'Q') goto yy157;
      if (yych <= 'R') goto yy347;
      goto yy346;
     }
    }
   }
  } else {
   if (yych <= 'f') {
    if (yych <= 'a') {
     if (yych == 'U') goto yy342;
     if (yych <= '`') goto yy157;
     goto yy345;
    } else {
     if (yych <= 'c') {
      if (yych <= 'b') goto yy343;
      goto yy157;
     } else {
      if (yych <= 'd') goto yy348;
      if (yych <= 'e') goto yy157;
      goto yy349;
     }
    }
   } else {
    if (yych <= 'q') {
     if (yych <= 'i') {
      if (yych <= 'h') goto yy157;
      goto yy350;
     } else {
      if (yych == 'o') goto yy344;
      goto yy157;
     }
    } else {
     if (yych <= 's') {
      if (yych <= 'r') goto yy347;
      goto yy346;
     } else {
      if (yych != 'u') goto yy157;
     }
    }
   }
  }
yy342:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy409;
  if (yych == 'n') goto yy409;
  goto yy157;
yy343:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'I') goto yy396;
   if (yych <= 'N') goto yy157;
   goto yy397;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy157;
    goto yy396;
   } else {
    if (yych == 'o') goto yy397;
    goto yy157;
   }
  }
yy344:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy388;
  if (yych == 'b') goto yy388;
  goto yy157;
yy345:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy381;
  if (yych == 'r') goto yy381;
  goto yy157;
yy346:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy373;
  if (yych == 't') goto yy373;
  goto yy157;
yy347:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy371;
  if (yych == 'e') goto yy371;
  goto yy157;
yy348:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy367;
  if (yych == 'o') goto yy367;
  goto yy157;
yy349:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy360;
  if (yych == 'l') goto yy360;
  goto yy157;
yy350:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy351;
  if (yych != 'n') goto yy157;
yy351:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy352;
  if (yych != 't') goto yy157;
yy352:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy353;
  if (yych != 'e') goto yy355;
yy353:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy358;
  if (yych == 'g') goto yy358;
  goto yy157;
yy354:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy355:
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy354;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy354;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1325 "Zend/zend_language_scanner.l"
  {
 return emit_token(301, start_line);;
}
# 4405 "Zend/zend_language_scanner.c"
yy358:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy359;
  if (yych != 'e') goto yy157;
yy359:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy354;
  if (yych == 'r') goto yy354;
  goto yy157;
yy360:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy361;
  if (yych != 'o') goto yy157;
yy361:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy362;
  if (yych != 'a') goto yy157;
yy362:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy363;
  if (yych != 't') goto yy157;
yy363:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy363;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy363;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1329 "Zend/zend_language_scanner.l"
  {
 return emit_token(300, start_line);;
}
# 4453 "Zend/zend_language_scanner.c"
yy367:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy368;
  if (yych != 'u') goto yy157;
yy368:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy369;
  if (yych != 'b') goto yy157;
yy369:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy370;
  if (yych != 'l') goto yy157;
yy370:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy363;
  if (yych == 'e') goto yy363;
  goto yy157;
yy371:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy372;
  if (yych != 'a') goto yy157;
yy372:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy363;
  if (yych == 'l') goto yy363;
  goto yy157;
yy373:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy374;
  if (yych != 'r') goto yy157;
yy374:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy375;
  if (yych != 'i') goto yy157;
yy375:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy376;
  if (yych != 'n') goto yy157;
yy376:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy377;
  if (yych != 'g') goto yy157;
yy377:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy377;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy377;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1333 "Zend/zend_language_scanner.l"
  {
 return emit_token(299, start_line);;
}
# 4527 "Zend/zend_language_scanner.c"
yy381:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy382;
  if (yych != 'r') goto yy157;
yy382:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy383;
  if (yych != 'a') goto yy157;
yy383:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy384;
  if (yych != 'y') goto yy157;
yy384:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy384;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy384;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1337 "Zend/zend_language_scanner.l"
  {
 return emit_token(298, start_line);;
}
# 4564 "Zend/zend_language_scanner.c"
yy388:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'J') goto yy389;
  if (yych != 'j') goto yy157;
yy389:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy390;
  if (yych != 'e') goto yy157;
yy390:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy391;
  if (yych != 'c') goto yy157;
yy391:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy392;
  if (yych != 't') goto yy157;
yy392:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy392;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy392;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1341 "Zend/zend_language_scanner.l"
  {
 return emit_token(297, start_line);;
}
# 4606 "Zend/zend_language_scanner.c"
yy396:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy406;
  if (yych == 'n') goto yy406;
  goto yy157;
yy397:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy398;
  if (yych != 'o') goto yy157;
yy398:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy399;
  if (yych != 'l') goto yy157;
yy399:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy404;
  if (yych == 'e') goto yy404;
  goto yy401;
yy400:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy401:
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy400;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy400;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1345 "Zend/zend_language_scanner.l"
  {
 return emit_token(296, start_line);;
}
# 4651 "Zend/zend_language_scanner.c"
yy404:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy405;
  if (yych != 'a') goto yy157;
yy405:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy400;
  if (yych == 'n') goto yy400;
  goto yy157;
yy406:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy407;
  if (yych != 'a') goto yy157;
yy407:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy408;
  if (yych != 'r') goto yy157;
yy408:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy377;
  if (yych == 'y') goto yy377;
  goto yy157;
yy409:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy410;
  if (yych != 's') goto yy157;
yy410:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy411;
  if (yych != 'e') goto yy157;
yy411:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy412;
  if (yych != 't') goto yy157;
yy412:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy412;
   goto yy157;
  } else {
   if (yych <= ' ') goto yy412;
   if (yych != ')') goto yy157;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1349 "Zend/zend_language_scanner.l"
  {
 return emit_token(295, start_line);;
}
# 4715 "Zend/zend_language_scanner.c"
yy416:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy417;
  if (yych != 'r') goto yy150;
yy417:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1321 "Zend/zend_language_scanner.l"
  {
 return emit_token(356, start_line);;
}
# 4733 "Zend/zend_language_scanner.c"
yy419:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy423;
  if (yych == 'm') goto yy423;
  goto yy150;
yy420:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy421;
  if (yych != 'w') goto yy150;
yy421:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1313 "Zend/zend_language_scanner.l"
  {
 return emit_token(306, start_line);;
}
# 4757 "Zend/zend_language_scanner.c"
yy423:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy424;
  if (yych != 'e') goto yy150;
yy424:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy425;
  if (yych != 's') goto yy150;
yy425:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy426;
  if (yych != 'p') goto yy150;
yy426:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy427;
  if (yych != 'a') goto yy150;
yy427:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy428;
  if (yych != 'c') goto yy150;
yy428:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy429;
  if (yych != 'e') goto yy150;
yy429:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1373 "Zend/zend_language_scanner.l"
  {
 return emit_token(388, start_line);;
}
# 4800 "Zend/zend_language_scanner.c"
yy431:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '\n') goto yy435;
  if (yych == '\r') goto yy436;
yy432:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1945 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycINITIAL;
 return emit_token(381, start_line);;
}
# 4814 "Zend/zend_language_scanner.c"
yy433:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1309 "Zend/zend_language_scanner.l"
  {
 return emit_token(282, start_line);;
}
# 4824 "Zend/zend_language_scanner.c"
yy435:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy432;
yy436:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy435;
  goto yy432;
yy437:
  ;
  yyaccept = 3;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 'D') {
   if (yych <= '/') goto yy153;
   if (yych <= '9') goto yy437;
   goto yy153;
  } else {
   if (yych <= 'E') goto yy156;
   if (yych == 'e') goto yy156;
   goto yy153;
  }
yy439:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1505 "Zend/zend_language_scanner.l"
  {
 return emit_token(277, start_line);;
}
# 4859 "Zend/zend_language_scanner.c"
yy441:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '.') goto yy157;
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1305 "Zend/zend_language_scanner.l"
  {
 return emit_token(391, start_line);;
}
# 4872 "Zend/zend_language_scanner.c"
yy444:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1297 "Zend/zend_language_scanner.l"
  {
 return emit_token(387, start_line);;
}
# 4882 "Zend/zend_language_scanner.c"
yy446:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy447:
  ;
  if (yych <= '\f') {
   if (yych <= 0x08) goto yy104;
   if (yych <= '\n') goto yy446;
   goto yy104;
  } else {
   if (yych <= '\r') goto yy446;
   if (yych == ' ') goto yy446;
   goto yy104;
  }
yy448:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1485 "Zend/zend_language_scanner.l"
  {
 return emit_token(280, start_line);;
}
# 4908 "Zend/zend_language_scanner.c"
yy450:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1449 "Zend/zend_language_scanner.l"
  {
 return emit_token(302, start_line);;
}
# 4918 "Zend/zend_language_scanner.c"
yy452:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1271 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY);
 return emit_token(366, start_line);;
}
# 4929 "Zend/zend_language_scanner.c"
yy454:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'I') goto yy461;
   if (yych <= 'N') goto yy150;
   goto yy462;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy150;
    goto yy461;
   } else {
    if (yych == 'o') goto yy462;
    goto yy150;
   }
  }
yy455:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy456;
  if (yych != 'b') goto yy150;
yy456:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy457;
  if (yych != 'l') goto yy150;
yy457:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy458;
  if (yych != 'i') goto yy150;
yy458:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy459;
  if (yych != 'c') goto yy150;
yy459:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1421 "Zend/zend_language_scanner.l"
  {
 return emit_token(311, start_line);;
}
# 4978 "Zend/zend_language_scanner.c"
yy461:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'V') {
   if (yych == 'N') goto yy470;
   if (yych <= 'U') goto yy150;
   goto yy471;
  } else {
   if (yych <= 'n') {
    if (yych <= 'm') goto yy150;
    goto yy470;
   } else {
    if (yych == 'v') goto yy471;
    goto yy150;
   }
  }
yy462:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy463;
  if (yych != 't') goto yy150;
yy463:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy464;
  if (yych != 'e') goto yy150;
yy464:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy465;
  if (yych != 'c') goto yy150;
yy465:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy466;
  if (yych != 't') goto yy150;
yy466:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy467;
  if (yych != 'e') goto yy150;
yy467:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy468;
  if (yych != 'd') goto yy150;
yy468:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1417 "Zend/zend_language_scanner.l"
  {
 return emit_token(312, start_line);;
}
# 5037 "Zend/zend_language_scanner.c"
yy470:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy476;
  if (yych == 't') goto yy476;
  goto yy150;
yy471:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy472;
  if (yych != 'a') goto yy150;
yy472:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy473;
  if (yych != 't') goto yy150;
yy473:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy474;
  if (yych != 'e') goto yy150;
yy474:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1413 "Zend/zend_language_scanner.l"
  {
 return emit_token(313, start_line);;
}
# 5071 "Zend/zend_language_scanner.c"
yy476:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1247 "Zend/zend_language_scanner.l"
  {
 return emit_token(266, start_line);;
}
# 5084 "Zend/zend_language_scanner.c"
yy478:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy483;
  if (yych == 'o') goto yy483;
  goto yy150;
yy479:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy480;
  if (yych != 't') goto yy150;
yy480:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy481;
  if (yych != 'o') goto yy150;
yy481:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1239 "Zend/zend_language_scanner.l"
  {
 return emit_token(345, start_line);;
}
# 5113 "Zend/zend_language_scanner.c"
yy483:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy484;
  if (yych != 'b') goto yy150;
yy484:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy485;
  if (yych != 'a') goto yy150;
yy485:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy486;
  if (yych != 'l') goto yy150;
yy486:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1385 "Zend/zend_language_scanner.l"
  {
 return emit_token(355, start_line);;
}
# 5141 "Zend/zend_language_scanner.c"
yy488:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '<') goto yy496;
  goto yy157;
yy489:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy144;
yy490:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy142;
yy491:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy492;
  if (yych != 'e') goto yy150;
yy492:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy493;
  if (yych != 'a') goto yy150;
yy493:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'K') goto yy494;
  if (yych != 'k') goto yy150;
yy494:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1231 "Zend/zend_language_scanner.l"
  {
 return emit_token(343, start_line);;
}
# 5182 "Zend/zend_language_scanner.c"
yy496:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '<') goto yy219;
  goto yy157;
yy497:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy504;
  if (yych == 'a') goto yy504;
  goto yy150;
yy498:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy499;
  if (yych != 'i') goto yy150;
yy499:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy500;
  if (yych != 't') goto yy150;
yy500:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy501;
  if (yych != 'c') goto yy150;
yy501:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy502;
  if (yych != 'h') goto yy150;
yy502:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1215 "Zend/zend_language_scanner.l"
  {
 return emit_token(339, start_line);;
}
# 5226 "Zend/zend_language_scanner.c"
yy504:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy505;
  if (yych != 't') goto yy150;
yy505:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy506;
  if (yych != 'i') goto yy150;
yy506:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy507;
  if (yych != 'c') goto yy150;
yy507:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1401 "Zend/zend_language_scanner.l"
  {
 return emit_token(316, start_line);;
}
# 5254 "Zend/zend_language_scanner.c"
yy509:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy520;
  if (yych == 's') goto yy520;
  goto yy150;
yy510:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy518;
  if (yych == 'd') goto yy518;
  goto yy150;
yy511:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy514;
  if (yych == 'r') goto yy514;
  goto yy150;
yy512:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1211 "Zend/zend_language_scanner.l"
  {
 return emit_token(338, start_line);;
}
# 5285 "Zend/zend_language_scanner.c"
yy514:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy515;
  if (yych != 'a') goto yy150;
yy515:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy516;
  if (yych != 'y') goto yy150;
yy516:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1437 "Zend/zend_language_scanner.l"
  {
 return emit_token(368, start_line);;
}
# 5308 "Zend/zend_language_scanner.c"
yy518:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1545 "Zend/zend_language_scanner.l"
  {
 return emit_token(265, start_line);;
}
# 5321 "Zend/zend_language_scanner.c"
yy520:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy521;
  if (yych != 't') goto yy150;
yy521:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy522;
  if (yych != 'r') goto yy150;
yy522:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy523;
  if (yych != 'a') goto yy150;
yy523:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy524;
  if (yych != 'c') goto yy150;
yy524:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy525;
  if (yych != 't') goto yy150;
yy525:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1405 "Zend/zend_language_scanner.l"
  {
 return emit_token(315, start_line);;
}
# 5359 "Zend/zend_language_scanner.c"
yy527:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy528;
  if (yych != 'i') goto yy150;
yy528:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy529;
  if (yych != 'l') goto yy150;
yy529:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy530;
  if (yych != 'e') goto yy150;
yy530:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1171 "Zend/zend_language_scanner.l"
  {
 return emit_token(330, start_line);;
}
# 5387 "Zend/zend_language_scanner.c"
yy532:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1155 "Zend/zend_language_scanner.l"
  {
 return emit_token(327, start_line);;
}
# 5400 "Zend/zend_language_scanner.c"
yy534:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy576;
  if (yych == 'p') goto yy576;
  goto yy150;
yy535:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'C') {
    if (yych <= 'B') goto yy150;
    goto yy543;
   } else {
    if (yych <= 'R') goto yy150;
    if (yych <= 'S') goto yy541;
    goto yy542;
   }
  } else {
   if (yych <= 'r') {
    if (yych == 'c') goto yy543;
    goto yy150;
   } else {
    if (yych <= 's') goto yy541;
    if (yych <= 't') goto yy542;
    goto yy150;
   }
  }
yy536:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy537;
  if (yych != 's') goto yy150;
yy537:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy538;
  if (yych != 'e') goto yy150;
yy538:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy539;
  if (yych != 't') goto yy150;
yy539:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1389 "Zend/zend_language_scanner.l"
  {
 return emit_token(358, start_line);;
}
# 5456 "Zend/zend_language_scanner.c"
yy541:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy562;
  if (yych == 't') goto yy562;
  goto yy150;
yy542:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy555;
  if (yych == 'e') goto yy555;
  goto yy150;
yy543:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy544;
  if (yych != 'l') goto yy150;
yy544:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy545;
  if (yych != 'u') goto yy150;
yy545:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy546;
  if (yych != 'd') goto yy150;
yy546:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy547;
  if (yych != 'e') goto yy150;
yy547:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy149;
   } else {
    if (yych <= '@') goto yy548;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy549;
   } else {
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy548:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1357 "Zend/zend_language_scanner.l"
  {
 return emit_token(262, start_line);;
}
# 5514 "Zend/zend_language_scanner.c"
yy549:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy550;
  if (yych != 'o') goto yy150;
yy550:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy551;
  if (yych != 'n') goto yy150;
yy551:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy552;
  if (yych != 'c') goto yy150;
yy552:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy553;
  if (yych != 'e') goto yy150;
yy553:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1361 "Zend/zend_language_scanner.l"
  {
 return emit_token(261, start_line);;
}
# 5547 "Zend/zend_language_scanner.c"
yy555:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy556;
  if (yych != 'r') goto yy150;
yy556:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy557;
  if (yych != 'f') goto yy150;
yy557:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy558;
  if (yych != 'a') goto yy150;
yy558:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy559;
  if (yych != 'c') goto yy150;
yy559:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy560;
  if (yych != 'e') goto yy150;
yy560:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1255 "Zend/zend_language_scanner.l"
  {
 return emit_token(363, start_line);;
}
# 5585 "Zend/zend_language_scanner.c"
yy562:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'E') {
   if (yych == 'A') goto yy563;
   if (yych <= 'D') goto yy150;
   goto yy564;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy150;
   } else {
    if (yych == 'e') goto yy564;
    goto yy150;
   }
  }
yy563:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy570;
  if (yych == 'n') goto yy570;
  goto yy150;
yy564:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy565;
  if (yych != 'a') goto yy150;
yy565:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy566;
  if (yych != 'd') goto yy150;
yy566:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy567;
  if (yych != 'o') goto yy150;
yy567:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy568;
  if (yych != 'f') goto yy150;
yy568:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1381 "Zend/zend_language_scanner.l"
  {
    return emit_token(354, start_line);;
}
# 5639 "Zend/zend_language_scanner.c"
yy570:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy571;
  if (yych != 'c') goto yy150;
yy571:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy572;
  if (yych != 'e') goto yy150;
yy572:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy573;
  if (yych != 'o') goto yy150;
yy573:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy574;
  if (yych != 'f') goto yy150;
yy574:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1207 "Zend/zend_language_scanner.l"
  {
 return emit_token(294, start_line);;
}
# 5672 "Zend/zend_language_scanner.c"
yy576:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy577;
  if (yych != 'l') goto yy150;
yy577:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy578;
  if (yych != 'e') goto yy150;
yy578:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy579;
  if (yych != 'm') goto yy150;
yy579:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy580;
  if (yych != 'e') goto yy150;
yy580:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy581;
  if (yych != 'n') goto yy150;
yy581:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy582;
  if (yych != 't') goto yy150;
yy582:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy583;
  if (yych != 's') goto yy150;
yy583:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1267 "Zend/zend_language_scanner.l"
  {
 return emit_token(365, start_line);;
}
# 5720 "Zend/zend_language_scanner.c"
yy585:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy593;
  if (yych == 'r') goto yy593;
  goto yy150;
yy586:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'Y') {
   if (yych == 'A') goto yy589;
   if (yych <= 'X') goto yy150;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy150;
    goto yy589;
   } else {
    if (yych != 'y') goto yy150;
   }
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1139 "Zend/zend_language_scanner.l"
  {
 return emit_token(349, start_line);;
}
# 5752 "Zend/zend_language_scanner.c"
yy589:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy590;
  if (yych != 'i') goto yy150;
yy590:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy591;
  if (yych != 't') goto yy150;
yy591:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1259 "Zend/zend_language_scanner.l"
  {
 return emit_token(362, start_line);;
}
# 5775 "Zend/zend_language_scanner.c"
yy593:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy594;
  if (yych != 'o') goto yy150;
yy594:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy595;
  if (yych != 'w') goto yy150;
yy595:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1151 "Zend/zend_language_scanner.l"
  {
 return emit_token(352, start_line);;
}
# 5798 "Zend/zend_language_scanner.c"
yy597:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy598;
  if (yych != 'e') goto yy150;
yy598:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy599;
  if (yych != 'l') goto yy150;
yy599:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy600;
  if (yych != 'd') goto yy150;
yy600:
  ;
  yyaccept = 6;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yybm[0+yych] & 4) {
   goto yy149;
  }
  if (yych <= '\f') {
   if (yych <= 0x08) goto yy601;
   if (yych <= '\n') goto yy602;
  } else {
   if (yych <= '\r') goto yy602;
   if (yych == ' ') goto yy602;
  }
yy601:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1135 "Zend/zend_language_scanner.l"
  {
 return emit_token(267, start_line);;
}
# 5835 "Zend/zend_language_scanner.c"
yy602:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 4) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych <= '\n') {
    if (yych <= 0x08) goto yy157;
    goto yy602;
   } else {
    if (yych == '\r') goto yy602;
    goto yy157;
   }
  } else {
   if (yych <= 'F') {
    if (yych <= ' ') goto yy602;
    if (yych <= 'E') goto yy157;
   } else {
    if (yych != 'f') goto yy157;
   }
  }
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy605;
  if (yych != 'r') goto yy157;
yy605:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy606;
  if (yych != 'o') goto yy157;
yy606:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy607;
  if (yych != 'm') goto yy157;
yy607:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1130 "Zend/zend_language_scanner.l"
  {
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return emit_token(269, start_line);;
}
# 5882 "Zend/zend_language_scanner.c"
yy609:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych == 'Q') goto yy611;
   if (yych <= 'S') goto yy150;
  } else {
   if (yych <= 'q') {
    if (yych <= 'p') goto yy150;
    goto yy611;
   } else {
    if (yych != 't') goto yy150;
   }
  }
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy623;
  if (yych == 'u') goto yy623;
  goto yy150;
yy611:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy612;
  if (yych != 'u') goto yy150;
yy612:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy613;
  if (yych != 'i') goto yy150;
yy613:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy614;
  if (yych != 'r') goto yy150;
yy614:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy615;
  if (yych != 'e') goto yy150;
yy615:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy149;
   } else {
    if (yych <= '@') goto yy616;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy617;
   } else {
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy616:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1365 "Zend/zend_language_scanner.l"
  {
 return emit_token(259, start_line);;
}
# 5947 "Zend/zend_language_scanner.c"
yy617:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy618;
  if (yych != 'o') goto yy150;
yy618:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy619;
  if (yych != 'n') goto yy150;
yy619:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy620;
  if (yych != 'c') goto yy150;
yy620:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy621;
  if (yych != 'e') goto yy150;
yy621:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1369 "Zend/zend_language_scanner.l"
  {
 return emit_token(258, start_line);;
}
# 5980 "Zend/zend_language_scanner.c"
yy623:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy624;
  if (yych != 'r') goto yy150;
yy624:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy625;
  if (yych != 'n') goto yy150;
yy625:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1126 "Zend/zend_language_scanner.l"
  {
 return emit_token(348, start_line);;
}
# 6003 "Zend/zend_language_scanner.c"
yy627:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'L') {
    if (yych <= 'K') goto yy150;
    goto yy650;
   } else {
    if (yych <= 'R') goto yy150;
    if (yych <= 'S') goto yy649;
    goto yy648;
   }
  } else {
   if (yych <= 'r') {
    if (yych == 'l') goto yy650;
    goto yy150;
   } else {
    if (yych <= 's') goto yy649;
    if (yych <= 't') goto yy648;
    goto yy150;
   }
  }
yy628:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'A') goto yy640;
   if (yych <= 'N') goto yy150;
   goto yy641;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy150;
    goto yy640;
   } else {
    if (yych == 'o') goto yy641;
    goto yy150;
   }
  }
yy629:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy630;
  if (yych != 'n') goto yy150;
yy630:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'R') goto yy150;
   if (yych >= 'T') goto yy632;
  } else {
   if (yych <= 'r') goto yy150;
   if (yych <= 's') goto yy631;
   if (yych <= 't') goto yy632;
   goto yy150;
  }
yy631:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy638;
  if (yych == 't') goto yy638;
  goto yy150;
yy632:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy633;
  if (yych != 'i') goto yy150;
yy633:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy634;
  if (yych != 'n') goto yy150;
yy634:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy635;
  if (yych != 'u') goto yy150;
yy635:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy636;
  if (yych != 'e') goto yy150;
yy636:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1235 "Zend/zend_language_scanner.l"
  {
 return emit_token(344, start_line);;
}
# 6097 "Zend/zend_language_scanner.c"
yy638:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1122 "Zend/zend_language_scanner.l"
  {
 return emit_token(347, start_line);;
}
# 6110 "Zend/zend_language_scanner.c"
yy640:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy645;
  if (yych == 's') goto yy645;
  goto yy150;
yy641:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy642;
  if (yych != 'n') goto yy150;
yy642:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy643;
  if (yych != 'e') goto yy150;
yy643:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1317 "Zend/zend_language_scanner.l"
  {
 return emit_token(305, start_line);;
}
# 6139 "Zend/zend_language_scanner.c"
yy645:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy646;
  if (yych != 's') goto yy150;
yy646:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1251 "Zend/zend_language_scanner.l"
  {
 return emit_token(361, start_line);;
}
# 6157 "Zend/zend_language_scanner.c"
yy648:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy659;
  if (yych == 'c') goto yy659;
  goto yy150;
yy649:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy657;
  if (yych == 'e') goto yy657;
  goto yy150;
yy650:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy651;
  if (yych != 'l') goto yy150;
yy651:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy652;
  if (yych != 'a') goto yy150;
yy652:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy653;
  if (yych != 'b') goto yy150;
yy653:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy654;
  if (yych != 'l') goto yy150;
yy654:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy655;
  if (yych != 'e') goto yy150;
yy655:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1441 "Zend/zend_language_scanner.l"
  {
 return emit_token(369, start_line);;
}
# 6207 "Zend/zend_language_scanner.c"
yy657:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1223 "Zend/zend_language_scanner.l"
  {
 return emit_token(341, start_line);;
}
# 6220 "Zend/zend_language_scanner.c"
yy659:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy660;
  if (yych != 'h') goto yy150;
yy660:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1143 "Zend/zend_language_scanner.l"
  {
 return emit_token(350, start_line);;
}
# 6238 "Zend/zend_language_scanner.c"
yy662:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy679;
  if (yych == 'n') goto yy679;
  goto yy150;
yy663:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy672;
  if (yych == 'r') goto yy672;
  goto yy150;
yy664:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy665;
  if (yych != 'n') goto yy150;
yy665:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy666;
  if (yych != 'c') goto yy150;
yy666:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy667;
  if (yych != 't') goto yy150;
yy667:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy668;
  if (yych != 'i') goto yy150;
yy668:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy669;
  if (yych != 'o') goto yy150;
yy669:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy670;
  if (yych != 'n') goto yy150;
yy670:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1118 "Zend/zend_language_scanner.l"
  {
 return emit_token(346, start_line);;
}
# 6293 "Zend/zend_language_scanner.c"
yy672:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy673;
    if (yych <= '9') goto yy149;
   } else {
    if (yych == 'E') goto yy674;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= 'd') {
    if (yych != '`') goto yy149;
   } else {
    if (yych <= 'e') goto yy674;
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy673:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1183 "Zend/zend_language_scanner.l"
  {
 return emit_token(332, start_line);;
}
# 6321 "Zend/zend_language_scanner.c"
yy674:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy675;
  if (yych != 'a') goto yy150;
yy675:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy676;
  if (yych != 'c') goto yy150;
yy676:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy677;
  if (yych != 'h') goto yy150;
yy677:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1191 "Zend/zend_language_scanner.l"
  {
 return emit_token(334, start_line);;
}
# 6349 "Zend/zend_language_scanner.c"
yy679:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy680;
  if (yych != 'a') goto yy150;
yy680:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy681;
  if (yych != 'l') goto yy150;
yy681:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy682;
    if (yych <= '9') goto yy149;
   } else {
    if (yych == 'L') goto yy683;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= 'k') {
    if (yych != '`') goto yy149;
   } else {
    if (yych <= 'l') goto yy683;
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy682:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1409 "Zend/zend_language_scanner.l"
  {
 return emit_token(314, start_line);;
}
# 6387 "Zend/zend_language_scanner.c"
yy683:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy684;
  if (yych != 'y') goto yy150;
yy684:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1147 "Zend/zend_language_scanner.l"
  {
 return emit_token(351, start_line);;
}
# 6405 "Zend/zend_language_scanner.c"
yy686:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'F') {
   if (yych == 'C') goto yy692;
   if (yych <= 'E') goto yy150;
   goto yy693;
  } else {
   if (yych <= 'c') {
    if (yych <= 'b') goto yy150;
    goto yy692;
   } else {
    if (yych == 'f') goto yy693;
    goto yy150;
   }
  }
yy687:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy690;
  if (yych == 'e') goto yy690;
  goto yy150;
yy688:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1179 "Zend/zend_language_scanner.l"
  {
 return emit_token(329, start_line);;
}
# 6440 "Zend/zend_language_scanner.c"
yy690:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1114 "Zend/zend_language_scanner.l"
  {
 return emit_token(326, start_line);;
}
# 6453 "Zend/zend_language_scanner.c"
yy692:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy699;
  if (yych == 'l') goto yy699;
  goto yy150;
yy693:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy694;
  if (yych != 'a') goto yy150;
yy694:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy695;
  if (yych != 'u') goto yy150;
yy695:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy696;
  if (yych != 'l') goto yy150;
yy696:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy697;
  if (yych != 't') goto yy150;
yy697:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1227 "Zend/zend_language_scanner.l"
  {
 return emit_token(342, start_line);;
}
# 6492 "Zend/zend_language_scanner.c"
yy699:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy700;
  if (yych != 'a') goto yy150;
yy700:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy701;
  if (yych != 'r') goto yy150;
yy701:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy702;
  if (yych != 'e') goto yy150;
yy702:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1199 "Zend/zend_language_scanner.l"
  {
 return emit_token(336, start_line);;
}
# 6520 "Zend/zend_language_scanner.c"
yy704:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy766;
  if (yych == 'h') goto yy766;
  goto yy150;
yy705:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy760;
  if (yych == 's') goto yy760;
  goto yy150;
yy706:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy756;
  if (yych == 'p') goto yy756;
  goto yy150;
yy707:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy722;
  if (yych == 'd') goto yy722;
  goto yy150;
yy708:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy719;
  if (yych == 'a') goto yy719;
  goto yy150;
yy709:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych == 'I') goto yy710;
   if (yych <= 'S') goto yy150;
   goto yy711;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy150;
   } else {
    if (yych == 't') goto yy711;
    goto yy150;
   }
  }
yy710:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy717;
  if (yych == 't') goto yy717;
  goto yy150;
yy711:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy712;
  if (yych != 'e') goto yy150;
yy712:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy713;
  if (yych != 'n') goto yy150;
yy713:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy714;
  if (yych != 'd') goto yy150;
yy714:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy715;
  if (yych != 's') goto yy150;
yy715:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1263 "Zend/zend_language_scanner.l"
  {
 return emit_token(364, start_line);;
}
# 6604 "Zend/zend_language_scanner.c"
yy717:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1110 "Zend/zend_language_scanner.l"
  {
 return emit_token(326, start_line);;
}
# 6617 "Zend/zend_language_scanner.c"
yy719:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy720;
  if (yych != 'l') goto yy150;
yy720:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1353 "Zend/zend_language_scanner.l"
  {
 return emit_token(260, start_line);;
}
# 6635 "Zend/zend_language_scanner.c"
yy722:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 'D':
  case 'd': goto yy723;
  case 'F':
  case 'f': goto yy724;
  case 'I':
  case 'i': goto yy725;
  case 'S':
  case 's': goto yy726;
  case 'W':
  case 'w': goto yy727;
  default: goto yy150;
  }
yy723:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy749;
  if (yych == 'e') goto yy749;
  goto yy150;
yy724:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy741;
  if (yych == 'o') goto yy741;
  goto yy150;
yy725:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy739;
  if (yych == 'f') goto yy739;
  goto yy150;
yy726:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy733;
  if (yych == 'w') goto yy733;
  goto yy150;
yy727:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy728;
  if (yych != 'h') goto yy150;
yy728:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy729;
  if (yych != 'i') goto yy150;
yy729:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy730;
  if (yych != 'l') goto yy150;
yy730:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy731;
  if (yych != 'e') goto yy150;
yy731:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1175 "Zend/zend_language_scanner.l"
  {
 return emit_token(331, start_line);;
}
# 6709 "Zend/zend_language_scanner.c"
yy733:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy734;
  if (yych != 'i') goto yy150;
yy734:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy735;
  if (yych != 't') goto yy150;
yy735:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy736;
  if (yych != 'c') goto yy150;
yy736:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy737;
  if (yych != 'h') goto yy150;
yy737:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1219 "Zend/zend_language_scanner.l"
  {
 return emit_token(340, start_line);;
}
# 6742 "Zend/zend_language_scanner.c"
yy739:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1163 "Zend/zend_language_scanner.l"
  {
 return emit_token(310, start_line);;
}
# 6755 "Zend/zend_language_scanner.c"
yy741:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy742;
  if (yych != 'r') goto yy150;
yy742:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy743;
    if (yych <= '9') goto yy149;
   } else {
    if (yych == 'E') goto yy744;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= 'd') {
    if (yych != '`') goto yy149;
   } else {
    if (yych <= 'e') goto yy744;
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy743:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1187 "Zend/zend_language_scanner.l"
  {
 return emit_token(333, start_line);;
}
# 6788 "Zend/zend_language_scanner.c"
yy744:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy745;
  if (yych != 'a') goto yy150;
yy745:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy746;
  if (yych != 'c') goto yy150;
yy746:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy747;
  if (yych != 'h') goto yy150;
yy747:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1195 "Zend/zend_language_scanner.l"
  {
 return emit_token(335, start_line);;
}
# 6816 "Zend/zend_language_scanner.c"
yy749:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy750;
  if (yych != 'c') goto yy150;
yy750:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy751;
  if (yych != 'l') goto yy150;
yy751:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy752;
  if (yych != 'a') goto yy150;
yy752:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy753;
  if (yych != 'r') goto yy150;
yy753:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy754;
  if (yych != 'e') goto yy150;
yy754:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1203 "Zend/zend_language_scanner.l"
  {
 return emit_token(337, start_line);;
}
# 6854 "Zend/zend_language_scanner.c"
yy756:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy757;
  if (yych != 't') goto yy150;
yy757:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy758;
  if (yych != 'y') goto yy150;
yy758:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1393 "Zend/zend_language_scanner.l"
  {
 return emit_token(359, start_line);;
}
# 6877 "Zend/zend_language_scanner.c"
yy760:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy761;
  if (yych != 'e') goto yy150;
yy761:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy762;
    if (yych <= '9') goto yy149;
   } else {
    if (yych == 'I') goto yy763;
    if (yych <= 'Z') goto yy149;
   }
  } else {
   if (yych <= 'h') {
    if (yych != '`') goto yy149;
   } else {
    if (yych <= 'i') goto yy763;
    if (yych <= 'z') goto yy149;
    if (yych >= 0x7F) goto yy149;
   }
  }
yy762:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1167 "Zend/zend_language_scanner.l"
  {
 return emit_token(309, start_line);;
}
# 6910 "Zend/zend_language_scanner.c"
yy763:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy764;
  if (yych != 'f') goto yy150;
yy764:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1159 "Zend/zend_language_scanner.l"
  {
 return emit_token(308, start_line);;
}
# 6928 "Zend/zend_language_scanner.c"
yy766:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy767;
  if (yych != 'o') goto yy150;
yy767:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy149;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1243 "Zend/zend_language_scanner.l"
  {
 return emit_token(328, start_line);;
}
# 6946 "Zend/zend_language_scanner.c"
 }

yyc_ST_LOOKING_FOR_PROPERTY:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 0, 0, 128, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 0, 0, 0, 0, 0, 0,
     0, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 0, 0, 0, 0, 64,
     0, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 0, 0, 0, 0, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '-') {
   if (yych <= '\r') {
    if (yych <= 0x08) goto yy777;
    if (yych <= '\n') goto yy771;
    if (yych <= '\f') goto yy777;
   } else {
    if (yych == ' ') goto yy771;
    if (yych <= ',') goto yy777;
    goto yy773;
   }
  } else {
   if (yych <= '_') {
    if (yych <= '@') goto yy777;
    if (yych <= 'Z') goto yy775;
    if (yych <= '^') goto yy777;
    goto yy775;
   } else {
    if (yych <= '`') goto yy777;
    if (yych <= 'z') goto yy775;
    if (yych <= '~') goto yy777;
    goto yy775;
   }
  }
yy771:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy783;
yy772:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1276 "Zend/zend_language_scanner.l"
  {
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return emit_token(382, start_line);;
}
# 7024 "Zend/zend_language_scanner.c"
yy773:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '>') goto yy780;
yy774:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1291 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 goto restart;
}
# 7038 "Zend/zend_language_scanner.c"
yy775:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy779;
yy776:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1285 "Zend/zend_language_scanner.l"
  {
 yy_pop_state();
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(319, start_line);;
}
# 7053 "Zend/zend_language_scanner.c"
yy777:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy774;
yy778:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy779:
  ;
  if (yybm[0+yych] & 64) {
   goto yy778;
  }
  goto yy776;
yy780:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1281 "Zend/zend_language_scanner.l"
  {
 return emit_token(366, start_line);;
}
# 7078 "Zend/zend_language_scanner.c"
yy782:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy783:
  ;
  if (yybm[0+yych] & 128) {
   goto yy782;
  }
  goto yy772;
 }

yyc_ST_LOOKING_FOR_VARNAME:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy788;
   if (yych <= 'Z') goto yy786;
   if (yych <= '^') goto yy788;
  } else {
   if (yych <= '`') goto yy788;
   if (yych <= 'z') goto yy786;
   if (yych <= '~') goto yy788;
  }
yy786:
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= '_') {
   if (yych <= '@') {
    if (yych <= '/') goto yy787;
    if (yych <= '9') goto yy790;
   } else {
    if (yych <= '[') goto yy790;
    if (yych >= '_') goto yy790;
   }
  } else {
   if (yych <= '|') {
    if (yych <= '`') goto yy787;
    if (yych <= 'z') goto yy790;
   } else {
    if (yych != '~') goto yy790;
   }
  }
yy787:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1596 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 _yy_push_state(yycST_IN_SCRIPTING);
 goto restart;
}
# 7170 "Zend/zend_language_scanner.c"
yy788:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy787;
yy789:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy790:
  ;
  if (yybm[0+yych] & 128) {
   goto yy789;
  }
  if (yych == '[') goto yy792;
  if (yych == '}') goto yy792;
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy787;
yy792:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1587 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 yy_pop_state();
 _yy_push_state(yycST_IN_SCRIPTING);
 return emit_token(324, start_line);;
}
# 7203 "Zend/zend_language_scanner.c"
 }

yyc_ST_NOWDOC:
 ;
 { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
 yych = *(language_scanner_globals.yy_cursor);
 ;
 ++(language_scanner_globals.yy_cursor);
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2315 "Zend/zend_language_scanner.l"
 {
 int newline = 0;

 zend_heredoc_label *heredoc_label = zend_ptr_stack_top(&(language_scanner_globals.heredoc_label_stack));

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }

 (language_scanner_globals.yy_cursor)--;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':

    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) && heredoc_label->length < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), heredoc_label->label, heredoc_label->length)) {
     unsigned char *end = (language_scanner_globals.yy_cursor) + heredoc_label->length;

     if (*end == ';') {
      end++;
     }

     if (*end == '\n' || *end == '\r') {


      if ((language_scanner_globals.yy_cursor)[-2] == '\r' && (language_scanner_globals.yy_cursor)[-1] == '\n') {
       newline = 2;
      } else {
       newline = 1;
      }

      (compiler_globals.increment_lineno) = 1;
      (language_scanner_globals.yy_state) = yycST_END_HEREDOC;

      goto nowdoc_scan_done;
     }
    }

   default:
    continue;
  }
 }

nowdoc_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) - newline); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng) - newline, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng) - newline); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return emit_token(322, start_line);;
}
# 7270 "Zend/zend_language_scanner.c"

yyc_ST_VAR_OFFSET:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   240, 240, 112, 112, 112, 112, 112, 112,
   112, 112, 0, 0, 0, 0, 0, 0,
     0, 80, 80, 80, 80, 80, 80, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 0, 0, 0, 0, 16,
     0, 80, 80, 80, 80, 80, 80, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 0, 0, 0, 0, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '/') {
   if (yych <= ' ') {
    if (yych <= '\f') {
     if (yych <= 0x08) goto yy812;
     if (yych <= '\n') goto yy808;
     goto yy812;
    } else {
     if (yych <= '\r') goto yy808;
     if (yych <= 0x1F) goto yy812;
     goto yy808;
    }
   } else {
    if (yych <= '$') {
     if (yych <= '"') goto yy807;
     if (yych <= '#') goto yy808;
     goto yy803;
    } else {
     if (yych == '\'') goto yy808;
     goto yy807;
    }
   }
  } else {
   if (yych <= '\\') {
    if (yych <= '@') {
     if (yych <= '0') goto yy800;
     if (yych <= '9') goto yy802;
     goto yy807;
    } else {
     if (yych <= 'Z') goto yy810;
     if (yych <= '[') goto yy807;
     goto yy808;
    }
   } else {
    if (yych <= '_') {
     if (yych <= ']') goto yy805;
     if (yych <= '^') goto yy807;
     goto yy810;
    } else {
     if (yych <= '`') goto yy807;
     if (yych <= 'z') goto yy810;
     if (yych <= '~') goto yy807;
     goto yy810;
    }
   }
  }
yy800:
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'W') {
   if (yych <= '9') {
    if (yych >= '0') goto yy824;
   } else {
    if (yych == 'B') goto yy821;
   }
  } else {
   if (yych <= 'b') {
    if (yych <= 'X') goto yy823;
    if (yych >= 'b') goto yy821;
   } else {
    if (yych == 'x') goto yy823;
   }
  }
yy801:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1704 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_leng) < 20 - 1 || ((language_scanner_globals.yy_leng) == 20 - 1 && strcmp(((char*)(language_scanner_globals.yy_text)), long_min_digits) < 0)) {
  char *end;
  (*__errno_location ()) = 0;
  { zval *__z = (zendlval); (*(__z)).value.lval = strtoll((((char*)(language_scanner_globals.yy_text))), (&end), (10)); (*(__z)).u1.type_info = 4; };
  if ((*__errno_location ()) == 34) {
   goto string;
  }
  do { if (__builtin_expect(!(end == ((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng)), 0)) __builtin_unreachable(); } while (0);
 } else {
string:
  do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 }
 return emit_token(325, start_line);;
}
# 7393 "Zend/zend_language_scanner.c"
yy802:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy820;
yy803:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy804;
   if (yych <= 'Z') goto yy816;
   if (yych >= '_') goto yy816;
  } else {
   if (yych <= '`') goto yy804;
   if (yych <= 'z') goto yy816;
   if (yych >= 0x7F) goto yy816;
  }
yy804:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1864 "Zend/zend_language_scanner.l"
  {

 return emit_token(((char*)(language_scanner_globals.yy_text))[0], start_line);;
}
# 7418 "Zend/zend_language_scanner.c"
yy805:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1859 "Zend/zend_language_scanner.l"
  {
 yy_pop_state();
 return emit_token(']', start_line);;
}
# 7429 "Zend/zend_language_scanner.c"
yy807:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy804;
yy808:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1869 "Zend/zend_language_scanner.l"
  {

 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 do { (*(zendlval)).u1.type_info = 1; } while (0);
 return emit_token(322, start_line);;
}
# 7447 "Zend/zend_language_scanner.c"
yy810:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy815;
yy811:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1877 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(319, start_line);;
}
# 7461 "Zend/zend_language_scanner.c"
yy812:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2372 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return emit_token(0, start_line);;
 }

 zend_error((1<<7L),"Unexpected character in input:  '%c' (ASCII=%d) state=%d", ((char*)(language_scanner_globals.yy_text))[0], ((char*)(language_scanner_globals.yy_text))[0], (language_scanner_globals.yy_state));
 goto restart;
}
# 7476 "Zend/zend_language_scanner.c"
yy814:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy815:
  ;
  if (yybm[0+yych] & 16) {
   goto yy814;
  }
  goto yy811;
yy816:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy816;
   } else {
    if (yych <= '@') goto yy818;
    if (yych <= 'Z') goto yy816;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy816;
   } else {
    if (yych <= 'z') goto yy816;
    if (yych >= 0x7F) goto yy816;
   }
  }
yy818:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1854 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; char *s = ((void *)0); (language_scanner_globals.output_filter)((unsigned char **)&s, &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1)); do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(s, sz, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); _efree((s) ); } else { do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init((((char*)(language_scanner_globals.yy_text))+1), ((language_scanner_globals.yy_leng)-1), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); };
 return emit_token(320, start_line);;
}
# 7517 "Zend/zend_language_scanner.c"
yy819:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy820:
  ;
  if (yybm[0+yych] & 32) {
   goto yy819;
  }
  goto yy801;
yy821:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 128) {
   goto yy829;
  }
yy822:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy801;
yy823:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 64) {
   goto yy827;
  }
  goto yy822;
yy824:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '/') goto yy826;
  if (yych <= '9') goto yy824;
yy826:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1720 "Zend/zend_language_scanner.l"
  {
 do { do { zval *__z = (zendlval); zend_string *__s = (zend_string_init(((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 return emit_token(325, start_line);;
}
# 7562 "Zend/zend_language_scanner.c"
yy827:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 64) {
   goto yy827;
  }
  goto yy826;
yy829:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy829;
  }
  goto yy826;
 }
}
# 2381 "Zend/zend_language_scanner.l"

}
