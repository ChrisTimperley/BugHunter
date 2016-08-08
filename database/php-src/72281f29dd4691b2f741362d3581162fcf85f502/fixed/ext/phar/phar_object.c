# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
# 22 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h"
# 1 "/usr/include/time.h" 1 3 4
# 27 "/usr/include/time.h" 3 4
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
# 28 "/usr/include/time.h" 2 3 4









# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 55 "/usr/include/time.h" 3 4
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
# 56 "/usr/include/time.h" 2 3 4



typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };








struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 221 "/usr/include/time.h" 3 4
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
# 222 "/usr/include/time.h" 2 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
# 430 "/usr/include/time.h" 3 4

# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_version.h" 1
# 34 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 51 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
# 2423 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
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
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
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
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
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

# 2424 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
# 2439 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
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

# 166 "/usr/include/string.h" 3 4
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

# 2440 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
# 2450 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
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

# 2451 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
# 2 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_config.h" 2
# 52 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 68 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
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

# 69 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 76 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2



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

# 80 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 251 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_errors.h" 1
# 252 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 21 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2
# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2
# 44 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1,2)));
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure ) __attribute__ ((alloc_size(2)));
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
inline static void * __zend_malloc(size_t len)
{
 void *tmp = malloc(len);
 if (tmp) {
  return tmp;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}

inline static void * __zend_calloc(size_t nmemb, size_t len)
{
 void *tmp = _safe_malloc(nmemb, len, 0);
 memset(tmp, 0, nmemb * len);
 return tmp;
}

inline static void * __zend_realloc(void *p, size_t len)
{
 p = realloc(p, len);
 if (p) {
  return p;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}
# 142 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 void (*compact)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, size_t reserve_size, int internal, void *params);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);

__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
# 253 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;
typedef struct _zval_struct zval;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 255 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"

__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);

# 256 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2


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
# 259 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 274 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";






typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h" 1
# 46 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(const char *arKey, uint nKeyLength);
typedef int (*compare_func_t)(const void *, const void * );
typedef void (*sort_func_t)(void *, size_t, register size_t, compare_func_t );
typedef void (*dtor_func_t)(void *pDest);
typedef void (*copy_ctor_func_t)(void *pElement);
typedef void (*copy_ctor_param_func_t)(void *pElement, void *pParam);

struct _hashtable;

typedef struct bucket {
 ulong h;
 uint nKeyLength;
 void *pData;
 void *pDataPtr;
 struct bucket *pListNext;
 struct bucket *pListLast;
 struct bucket *pNext;
 struct bucket *pLast;
 const char *arKey;
} Bucket;

typedef struct _hashtable {
 uint nTableSize;
 uint nTableMask;
 uint nNumOfElements;
 ulong nNextFreeElement;
 Bucket *pInternalPointer;
 Bucket *pListHead;
 Bucket *pListTail;
 Bucket **arBuckets;
 dtor_func_t pDestructor;
 zend_bool persistent;
 unsigned char nApplyCount;
 zend_bool bApplyProtection;



} HashTable;


typedef struct _zend_hash_key {
 const char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




__attribute__ ((visibility("default"))) int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);




__attribute__ ((visibility("default"))) int _zend_hash_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_quick_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_hash_add_empty_element(HashTable *ht, const char *arKey, uint nKeyLength);






typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht , apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_hash_del_key_or_index(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, int flag);







__attribute__ ((visibility("default"))) ulong zend_get_hash_value(const char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_hash_find(const HashTable *ht, const char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_quick_find(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_index_find(const HashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, const char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_hash_quick_exists(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);
__attribute__ ((visibility("default"))) ulong zend_hash_next_free_element(const HashTable *ht);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_update_current_key_ex(HashTable *ht, int key_type, const char *str_index, uint str_length, ulong num_index, int mode, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 217 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 264 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(const char *arKey, uint nKeyLength)
{
 register ulong hash = 5381;


 for (; nKeyLength >= 8; nKeyLength -= 8) {
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
 }
 switch (nKeyLength) {
  case 7: hash = ((hash << 5) + hash) + *arKey++;
  case 6: hash = ((hash << 5) + hash) + *arKey++;
  case 5: hash = ((hash << 5) + hash) + *arKey++;
  case 4: hash = ((hash << 5) + hash) + *arKey++;
  case 3: hash = ((hash << 5) + hash) + *arKey++;
  case 2: hash = ((hash << 5) + hash) + *arKey++;
  case 1: hash = ((hash << 5) + hash) + *arKey++; break;
  case 0: break;

 }
 return hash;
}


__attribute__ ((visibility("default"))) ulong zend_hash_func(const char *arKey, uint nKeyLength);








# 351 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest)
 {
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = 0 - idx; } else if (idx > 9223372036854775807L) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0); } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = 0 - idx; } else if (idx > 9223372036854775807L) { break; } return zend_hash_del_key_or_index(ht, ((void *)0), 0, idx, 1); } } } while (0); } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, const char *arKey, uint nKeyLength, void **pData)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = 0 - idx; } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0); } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = 0 - idx; } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_exists(ht, idx); } } } while (0); } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key_ex(HashTable *ht, const char *arKey, uint nKeyLength, int mode, HashPosition *pos)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = 0 - idx; } else if (idx > 9223372036854775807L) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void *)0), 0, idx, mode, pos); } } } while (0); } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, mode, pos);
}
# 287 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ts_hash.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ts_hash.h"
__attribute__ ((visibility("default"))) int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

__attribute__ ((visibility("default"))) void zend_ts_hash_graceful_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_arguments(TsHashTable *ht , apply_func_args_t apply_func, int, ...);

__attribute__ ((visibility("default"))) void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





__attribute__ ((visibility("default"))) ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


__attribute__ ((visibility("default"))) void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_copy_to_hash(HashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

__attribute__ ((visibility("default"))) int zend_ts_hash_num_elements(TsHashTable *ht);

__attribute__ ((visibility("default"))) int zend_ts_hash_rehash(TsHashTable *ht);

__attribute__ ((visibility("default"))) ulong zend_ts_hash_func(char *arKey, uint nKeyLength);








# 288 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element ** );
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg );
typedef void (*llist_apply_func_t)(void * );

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
__attribute__ ((visibility("default"))) void *zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
__attribute__ ((visibility("default"))) int zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 289 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2





void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));







typedef struct _zend_class_entry zend_class_entry;

typedef struct _zend_guard {
 zend_bool in_get;
 zend_bool in_set;
 zend_bool in_unset;
 zend_bool in_isset;
 zend_bool dummy;
} zend_guard;

typedef struct _zend_object {
 zend_class_entry *ce;
 HashTable *properties;
 zval **properties_table;
 HashTable *guards;
} zend_object;

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, const struct _zend_literal *key );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, int type, const struct _zend_literal *key );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, const struct _zend_literal *key );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, const struct _zend_literal *key );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp );





typedef int (*zend_object_call_method_t)(const char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len, const struct _zend_literal *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zval *object );
typedef int (*zend_object_get_class_name_t)(const zval *object, const char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zval **zobj_ptr );

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval ***table, int *n );

struct _zend_object_handlers {

 zend_object_add_ref_t add_ref;
 zend_object_del_ref_t del_ref;
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
 zend_object_get_class_entry_t get_class_entry;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;





__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, const char *function_name_strval, int function_name_strlen, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zval **zend_std_get_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, zend_bool silent, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zval *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, const char *prop_info_name, int prop_info_name_len );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 320 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2

typedef union _zvalue_value {
 long lval;
 double dval;
 struct {
  char *val;
  int len;
 } str;
 HashTable *ht;
 zend_object_value obj;
} zvalue_value;

struct _zval_struct {

 zvalue_value value;
 zend_uint refcount__gc;
 zend_uchar type;
 zend_uchar is_ref__gc;
};
# 396 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
static inline __attribute__((always_inline)) zend_uint zval_refcount_p(zval* pz) {
 return pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_set_refcount_p(zval* pz, zend_uint rc) {
 return pz->refcount__gc = rc;
}

static inline __attribute__((always_inline)) zend_uint zval_addref_p(zval* pz) {
 return ++pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_delref_p(zval* pz) {
 return --pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_isref_p(zval* pz) {
 return pz->is_ref__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_p(zval* pz) {
 return pz->is_ref__gc = 1;
}

static inline __attribute__((always_inline)) zend_bool zval_unset_isref_p(zval* pz) {
 return pz->is_ref__gc = 0;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_to_p(zval* pz, zend_bool isref) {
 return pz->is_ref__gc = isref;
}





union _zend_function;

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter );


 int (*valid)(zend_object_iterator *iter );


 void (*get_current_data)(zend_object_iterator *iter, zval ***data );





 void (*get_current_key)(zend_object_iterator *iter, zval *key );


 void (*move_forward)(zend_object_iterator *iter );


 void (*rewind)(zend_object_iterator *iter );


 void (*invalidate_current)(zend_object_iterator *iter );
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 void *data;
 zend_object_iterator_funcs *funcs;
 ulong index;
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

enum zend_object_iterator_kind {
 ZEND_ITER_INVALID,
 ZEND_ITER_PLAIN_ARRAY,
 ZEND_ITER_PLAIN_OBJECT,
 ZEND_ITER_OBJECT
};



__attribute__ ((visibility("default"))) enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


__attribute__ ((visibility("default"))) zval *zend_iterator_wrap(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);

# 435 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 const char* method_name;
 unsigned int mname_len;

 zend_class_entry *ce;

 const char* class_name;
 unsigned int cname_len;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;

struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;

 zend_class_entry** exclude_from_classes;
};
typedef struct _zend_trait_precedence zend_trait_precedence;

struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 const char* alias;
 unsigned int alias_len;




 zend_uint modifiers;
};
typedef struct _zend_trait_alias zend_trait_alias;

struct _zend_class_entry {
 char type;
 const char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable properties_info;
 zval **default_properties_table;
 zval **default_static_members_table;
 zval **static_members_table;
 HashTable constants_table;
 int default_properties_count;
 int default_static_members_count;

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
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );
 union _zend_function *(*get_static_method)(zend_class_entry *ce, char* method, int method_len );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 zend_class_entry **traits;
 zend_uint num_traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   const char *filename;
   zend_uint line_start;
   zend_uint line_end;
   const char *doc_comment;
   zend_uint doc_comment_len;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h"
typedef size_t (*zend_stream_fsizer_t)(void* handle );
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void* handle );



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
 zend_stream_type type;
 const char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle );
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len );
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh );
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);

# 542 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
 char *(*resolve_path_function)(const char *filename, int filename_len );
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 605 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 643 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
__attribute__ ((visibility("default"))) int zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr );
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);








__attribute__ ((visibility("default"))) void free_estring(char **str_p);

# 688 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;


# 726 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 839 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h" 1
# 81 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 struct _gc_root_buffer *prev;
 struct _gc_root_buffer *next;
 zend_object_handle handle;
 union {
  zval *pz;
  const zend_object_handlers *handlers;
 } u;
} gc_root_buffer;

typedef struct _zval_gc_info {
 zval z;
 union {
  gc_root_buffer *buffered;
  struct _zval_gc_info *next;
 } u;
} zval_gc_info;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 zval_gc_info *zval_to_free;
 zval_gc_info *free_list;
 zval_gc_info *next_to_free;

 zend_uint gc_runs;
 zend_uint collected;
# 129 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_zval_check_possible_root(zval *z )
{
 if (z->type == 4 || z->type == 5) {
  gc_zval_possible_root(z );
 }
}

static inline __attribute__((always_inline)) void gc_remove_from_buffer(gc_root_buffer *root )
{
 root->next->prev = root->prev;
 root->prev->next = root->next;
 root->prev = (gc_globals.unused);
 (gc_globals.unused) = root;
 ;
}
# 840 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




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

# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2

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



# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2






# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multiply.h" 1
# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only );
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce );

# 93 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{

 if (d >= 9223372036854775807L || d < (-9223372036854775807L - 1L)) {
  double two_pow_64 = pow(2., 64.),
    dmod;

  dmod = fmod(d, two_pow_64);
  if (dmod < 0) {


   dmod += two_pow_64;
  }
  return (long)(unsigned long)dmod;
 }
 return (long)d;
}
# 131 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string_ex(const char *str, int length, long *lval, double *dval, int allow_errors, int *oflow_info)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval = 0.0;
 zend_uchar type;

 if (!length) {
  return 0;
 }

 if (oflow_info != ((void *)0)) {
  *oflow_info = 0;
 }



 while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f') {
  str++;
  length--;
 }
 ptr = str;

 if (*ptr == '-' || *ptr == '+') {
  ptr++;
 }

 if (((*ptr) >= '0' && (*ptr) <= '9')) {


  if (length > 2 && *str == '0' && (str[1] == 'x' || str[1] == 'X')) {
   base = 16;
   ptr += 2;
  }


  while (*ptr == '0') {
   ptr++;
  }




  for (type = 1; !(digits >= 20 && (dval || allow_errors == 1)); digits++, ptr++) {
check_digits:
   if (((*ptr) >= '0' && (*ptr) <= '9') || (base == 16 && (((*ptr) >= 'A' && (*ptr) <= 'F') || ((*ptr) >= 'a' && (*ptr) <= 'f')))) {
    continue;
   } else if (base == 10) {
    if (*ptr == '.' && dp_or_e < 1) {
     goto process_double;
    } else if ((*ptr == 'e' || *ptr == 'E') && dp_or_e < 2) {
     const char *e = ptr + 1;

     if (*e == '-' || *e == '+') {
      ptr = e++;
     }
     if (((*e) >= '0' && (*e) <= '9')) {
      goto process_double;
     }
    }
   }

   break;
  }

  if (base == 10) {
   if (digits >= 20) {
    if (oflow_info != ((void *)0)) {
     *oflow_info = *str == '-' ? -1 : 1;
    }
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 8 * 2 || (digits == 8 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, &ptr);
   }
   if (oflow_info != ((void *)0)) {
    *oflow_info = 1;
   }
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



  if (dval) {
   local_dval = zend_strtod(str, &ptr);
  } else if (allow_errors != 1 && dp_or_e != -1) {
   dp_or_e = (*ptr++ == '.') ? 1 : 2;
   goto check_digits;
  }
 } else {
  return 0;
 }

 if (ptr != str + length) {
  if (!allow_errors) {
   return 0;
  }
  if (allow_errors == -1) {
   zend_error((1<<3L), "A non well formed numeric value encountered");
  }
 }

 if (type == 1) {
  if (digits == 20 - 1) {
   int cmp = strcmp(&ptr[-digits], long_min_digits);

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, ((void *)0));
    }
    if (oflow_info != ((void *)0)) {
     *oflow_info = *str == '-' ? -1 : 1;
    }

    return 2;
   }
  }

  if (lval) {
   *lval = strtol(str, ((void *)0), base);
  }

  return 1;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 2;
 }
}

static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void *)0));
}

static inline char *
zend_memnstr(char *haystack, char *needle, int needle_len, char *end)
{
 char *p = haystack;
 char ne = needle[needle_len-1];

 if (needle_len == 1) {
  return (char *)memchr(p, *needle, (end-p));
 }

 if (needle_len > end-haystack) {
  return ((void *)0);
 }

 end -= needle_len;

 while (p <= end) {
  if ((p = (char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
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
}

static inline const void *zend_memrchr(const void *s, int c, size_t n)
{
 register const unsigned char *e;

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


__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op );
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
__attribute__ ((visibility("default"))) int add_char_to_string(zval *result, const zval *op1, const zval *op2);
__attribute__ ((visibility("default"))) int add_string_to_string(zval *result, const zval *op1, const zval *op2);



__attribute__ ((visibility("default"))) double zend_string_to_double(const char *number, zend_uint length);

__attribute__ ((visibility("default"))) int zval_is_true(zval *op);
__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int numeric_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_dup(const char *source, unsigned int length);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, uint len1, const char *s2, uint len2, uint length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );

# 506 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {
# 523 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  __asm__(
   "incq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x0, (%0)\n\t"
   "movl $0x43e00000, 0x4(%0)\n\t"
   "movb %1, %c2(%0)\n"
   "0:"
   :
   : "r"(&op1->value),
     "n"(2),
     "n"((__builtin_offsetof (zval, type) - __builtin_offsetof (zval, value)))
   : "cc");
# 544 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  return SUCCESS;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {
# 566 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  __asm__(
   "decq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x00000000, (%0)\n\t"
   "movl $0xc3e00000, 0x4(%0)\n\t"
   "movb %1,%c2(%0)\n"
   "0:"
   :
   : "r"(&op1->value),
     "n"(2),
     "n"((__builtin_offsetof (zval, type) - __builtin_offsetof (zval, value)))
   : "cc");
# 587 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  return SUCCESS;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
# 620 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "addq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movb   %3, %c5(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%1)\n\t"
   "fildq	(%2)\n\t"
   "faddp	%%st, %%st(1)\n\t"
   "movb   %4, %c5(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(&result->value),
     "r"(&op1->value),
     "r"(&op2->value),
     "n"(1),
     "n"(2),
     "n"((__builtin_offsetof (zval, type) - __builtin_offsetof (zval, value)))
   : "rax","cc");
# 658 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) + (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval + (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval + ((double)(*op2).value.lval);
   (*result).type = 2;
   return SUCCESS;
  }
 }
 return add_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_sub_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
# 710 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "subq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movb   %3, %c5(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%2)\n\t"
   "fildq	(%1)\n\t"



   "fsubp	%%st, %%st(1)\n\t"

   "movb   %4, %c5(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(&result->value),
     "r"(&op1->value),
     "r"(&op2->value),
     "n"(1),
     "n"(2),
     "n"((__builtin_offsetof (zval, type) - __builtin_offsetof (zval, value)))
   : "rax","cc");
# 747 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) - (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval - (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval - ((double)(*op2).value.lval);
   (*result).type = 2;
   return SUCCESS;
  }
 }
 return sub_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mul_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   long overflow;

   do { long __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*op1).value.lval), "r"((*op2).value.lval), "1"(0)); if (overflow) ((*result).value.dval) = (double) ((*op1).value.lval) * (double) ((*op2).value.lval); else ((*result).value.lval) = __tmpvar; } while (0);
   (*result).type = overflow ? 2 : 1;
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) * (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval * (*op2).value.dval;
   (*result).type = 2;
   return SUCCESS;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval * ((double)(*op2).value.lval);
   (*result).type = 2;
   return SUCCESS;
  }
 }
 return mul_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2 )
{
# 853 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 return div_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mod_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return FAILURE;
   } else if (__builtin_expect((*op2).value.lval == -1, 0)) {

    (*result).value.lval = 0;
    (*result).type = 1;
    return SUCCESS;
   }
   (*result).value.lval = (*op1).value.lval % (*op2).value.lval;
   (*result).type = 1;
   return SUCCESS;
  }
 }
 return mod_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval == (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) == (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval == (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval == ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_not_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval != (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) != (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval != (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval != ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval != 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval < (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) < (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval < (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval < ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval < 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval <= (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) <= (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval <= (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval <= ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval <= 0;
}
# 841 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"


__attribute__ ((visibility("default"))) void _zval_dtor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_dtor_func(zvalue );
}

__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_copy_ctor_func(zvalue );
}

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval **p , int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) int zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval **zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval **zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 78 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 842 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2

typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval *user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved );
# 35 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_qsort.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_qsort.h"

typedef int (*compare_r_func_t)(const void *, const void * , void *);
__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );
__attribute__ ((visibility("default"))) void zend_qsort_r(void *base, size_t nmemb, size_t siz, compare_r_func_t compare, void *arg );

# 36 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _zend_compiler_context {
 zend_uint opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 int nested_calls;
 int used_stack;
 int in_finally;
 HashTable *labels;
} zend_compiler_context;

typedef struct _zend_literal {
 zval constant;
 zend_ulong hash_value;
 zend_uint cache_slot;
} zend_literal;




typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_ulong hash;
 zend_uint opline_num;
 zend_op *jmp_addr;
 zval *zv;
 zend_literal *literal;
 void *ptr;
} znode_op;

typedef struct _znode {
 int op_type;
 union {
  znode_op op;
  zval constant;
  zend_op_array *op_array;
 } u;
 zend_uint EA;
} znode;

typedef struct _zend_execute_data zend_execute_data;




typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data );
typedef int ( *opcode_handler_t) (zend_execute_data *execute_data );

extern __attribute__ ((visibility("default"))) opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 ulong extended_value;
 uint lineno;
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
 zend_uint opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
 zend_uint finally_op;
 zend_uint finally_end;
} zend_try_catch_element;
# 216 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 const char *name;
 int name_length;
 ulong h;
 int offset;
 const char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 const char *name;
 zend_uint name_len;
 const char *class_name;
 zend_uint class_name_len;
 zend_uchar type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
} zend_arg_info;





typedef struct _zend_internal_function_info {
 const char *_name;
 zend_uint _name_len;
 const char *_class_name;
 zend_uint required_num_args;
 zend_uchar _type_hint;
 zend_bool return_reference;
 zend_bool pass_rest_by_reference;
} zend_internal_function_info;

typedef struct _zend_compiled_variable {
 const char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 const char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last;

 zend_compiled_variable *vars;
 int last_var;

 zend_uint T;

 zend_uint nested_calls;
 zend_uint used_stack;

 zend_brk_cont_element *brk_cont_array;
 int last_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;
 zend_bool has_finally_block;


 HashTable *static_variables;

 zend_uint this_var;

 const char *filename;
 zend_uint line_start;
 zend_uint line_end;
 const char *doc_comment;
 zend_uint doc_comment_len;
 zend_uint early_binding;

 zend_literal *literals;
 int last_literal;

 void **run_time_cache;
 int last_cache_slot;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 const char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  const char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 zend_function *function;
 void **arguments;
} zend_function_state;


typedef struct _zend_switch_entry {
 znode cond;
 int default_case;
 int control_var;
} zend_switch_entry;


typedef struct _list_llist_element {
 znode var;
 zend_llist dimensions;
 znode value;
} list_llist_element;

union _temp_variable;

typedef struct _call_slot {
 zend_function *fbc;
 zval *object;
 zend_class_entry *called_scope;
 zend_bool is_ctor_call;
 zend_bool is_ctor_result_used;
} call_slot;

struct _zend_execute_data {
 struct _zend_op *opline;
 zend_function_state function_state;
 zend_op_array *op_array;
 zval *object;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
 zend_bool nested;
 zval **original_return_value;
 zend_class_entry *current_scope;
 zend_class_entry *current_called_scope;
 zval *current_this;
 struct _zend_op *fast_ret;
 call_slot *call_slots;
 call_slot *call;
};
# 418 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
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
int zendparse(void);
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element, int size);
__attribute__ ((visibility("default"))) int zend_stack_top(const zend_stack *stack, void **element);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void **zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);

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


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

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
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}

static inline void *zend_ptr_stack_top(zend_ptr_stack *stack)
{
    return stack->elements[stack->top - 1];
}
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h"
typedef void (*zend_objects_store_dtor_t)(void *object, zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object, void **object_clone );

typedef struct _zend_object_store_bucket {
 zend_bool destructor_called;
 zend_bool valid;
 zend_uchar apply_count;
 union _store_bucket {
  struct _store_object {
   void *object;
   zend_objects_store_dtor_t dtor;
   zend_objects_free_object_storage_t free_storage;
   zend_objects_store_clone_t clone;
   const zend_object_handlers *handlers;
   zend_uint refcount;
   gc_root_buffer *buffered;
  } obj;
  struct {
   int next;
  } free_list;
 } bucket;
} zend_object_store_bucket;

typedef struct _zend_objects_store {
 zend_object_store_bucket *object_buckets;
 zend_uint top;
 zend_uint size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

__attribute__ ((visibility("default"))) void zend_objects_store_add_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle, const zend_object_handlers *handlers );
static inline __attribute__((always_inline)) void zend_objects_store_del_ref_by_handle(zend_object_handle handle ) {
 zend_objects_store_del_ref_by_handle_ex(handle, ((void *)0) );
}
__attribute__ ((visibility("default"))) zend_uint zend_objects_store_get_refcount(zval *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_store_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object(const zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object_by_handle(zend_object_handle handle );

__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, void *object );
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zval *zobject );

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects );



__attribute__ ((visibility("default"))) zval *zend_object_create_proxy(zval *object, zval *member );

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);

# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"





extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);


# 218 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 219 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 2
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length );

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name );
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding );

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


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions );
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name );
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size );
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length );


# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 55 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 64 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;

typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack bp_stack;
 zend_stack switch_cond_stack;
 zend_stack foreach_copy_stack;
 zend_stack object_stack;
 zend_stack declare_stack;

 zend_class_entry *active_class_entry;


 zend_llist list_llist;
 zend_llist dimension_llist;
 zend_stack list_stack;

 zend_stack function_call_stack;

 char *compiled_filename;

 int zend_lineno;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;

 zend_declarables declarables;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 long catch_begin;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_uint access_type;

 char *doc_comment;
 zend_uint doc_comment_len;

 zend_uint compiler_options;

 zval *current_namespace;
 HashTable *current_import;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 zend_compiler_context context;
 zend_stack context_stack;


 char *interned_strings_start;
 char *interned_strings_end;
 char *interned_strings_top;
 char *interned_strings_snapshot_top;

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;





};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;


 HashTable *symtable_cache[32];
 HashTable **symtable_cache_limit;
 HashTable **symtable_cache_ptr;

 zend_op **opline_ptr;

 HashTable *active_symbol_table;
 HashTable symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int orig_error_reporting;
 int exit_status;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zend_class_entry *scope;
 zend_class_entry *called_scope;

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






 HashTable regular_list;
 HashTable persistent_list;

 zend_vm_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zval *exception, *prev_exception;
 zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

 zend_op *start_op;

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


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
};
# 419 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_init_compiler_context(void);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) char *zend_set_compiled_filename(const char *new_compiled_filename );
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(char *original_compiled_filename );
__attribute__ ((visibility("default"))) char *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

void zend_resolve_non_class_name(znode *element_name, zend_bool check_namespace );
void zend_resolve_class_name(znode *class_name, ulong fetch_type, int check_ns_name );
__attribute__ ((visibility("default"))) const char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len);
# 451 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, const znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, const znode *lvar, const znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, const znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, const znode *parent, const znode *dim );
void fetch_string_offset(znode *result, const znode *parent, const znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, const znode *arg );
void zend_do_echo(const znode *arg );
typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_do_while_cond(const znode *expr, znode *close_bracket_token );
void zend_do_while_end(const znode *while_token, const znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, const znode *expr );


void zend_do_if_cond(const znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(const znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token );
void zend_do_for_end(const znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, const znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, const znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(znode *variable, int type, int arg_offset );

void zend_check_writable_variable(const znode *variable);

void zend_do_free(znode *op1 );

void zend_do_add_string(znode *result, const znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, const znode *op1, const znode *op2 );

int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(const znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *varname, const znode *offset, const znode *initialization, znode *class_type, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, const znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name, int prefix_len );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member );
int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, const znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_yield(znode *result, znode *value, const znode *key, zend_bool is_variable );
void zend_do_handle_exception(void);

void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static );
void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref );

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, znode *first_catch );
void zend_do_bind_catch(znode *try_token, znode *catch_token );
void zend_do_end_catch(znode *catch_token );
void zend_do_finally(znode *finally_token );
void zend_do_end_finally(znode *try_token, znode* catch_token, znode *finally_token );
void zend_do_throw(const znode *expr );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );


void zend_do_use_trait(znode *trait_znode );
void zend_prepare_reference(znode *result, znode *class_name, znode *method_name );
void zend_add_trait_precedence(znode *method_reference, znode *trait_list );
void zend_add_trait_alias(znode *method_reference, znode *modifiers, znode *alias );

__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, const znode *expr1, const znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, const znode *expr1, const znode *expr2, const znode *op_token );

void zend_do_brk_cont(zend_uchar op, const znode *expr );

void zend_do_switch_cond(const znode *cond );
void zend_do_switch_end(const znode *case_list );
void zend_do_case_before_statement(const znode *case_list, znode *case_token, const znode *case_expr );
void zend_do_case_after_statement(znode *result, const znode *case_token );
void zend_do_default_before_statement(const znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name );
void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token );
void zend_do_declare_property(const znode *var_name, const znode *value, zend_uint access_type );
void zend_do_declare_class_constant(znode *var_name, const znode *value );

void zend_do_fetch_property(znode *result, znode *object, const znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(const znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, const znode *new_token, const znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace );

void zend_do_shell_exec(znode *result, const znode *cmd );

void zend_do_init_array(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, const znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(const znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );


void zend_do_cast(znode *result, const znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, const znode *op1 );

void zend_do_unset(const znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, const znode *expr, const znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(const znode *foreach_token, const znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(const znode *declare_token );

void zend_do_exit(znode *result, const znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(const znode *strudel_token );

void zend_do_jmp_set(const znode *value, znode *jmp_token, znode *colon_token );
void zend_do_jmp_set_else(znode *result, const znode *false_value, const znode *jmp_token, const znode *colon_token );

void zend_do_begin_qm_op(const znode *cond, znode *qm_token );
void zend_do_qm_true(const znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, const znode *false_value, const znode *qm_token, const znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body );

void zend_do_declare_constant(znode *name, znode *value );
void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name );
void zend_do_begin_namespace(const znode *name, zend_bool with_brackets );
void zend_do_end_namespace(void);
void zend_verify_namespace(void);
void zend_do_use(znode *name, znode *new_name );
void zend_do_end_compilation(void);

void zend_do_resolve_class_name(znode *result, znode *class_name, int is_static );

void zend_do_label(znode *label );
void zend_do_goto(const znode *label );
void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 );
void zend_release_labels(int temporary );

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);






__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename );
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename );
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type , zval **retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) int zend_cleanup_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_cleanup_user_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) int zend_cleanup_function_data(zend_function *function );
__attribute__ ((visibility("default"))) int zend_cleanup_function_data_full(zend_function *function );
__attribute__ ((visibility("default"))) int clean_non_persistent_function_full(zend_function *function );
__attribute__ ((visibility("default"))) int clean_non_persistent_class_full(zend_class_entry **ce );

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function );
__attribute__ ((visibility("default"))) void zend_function_dtor(zend_function *function);
__attribute__ ((visibility("default"))) void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

__attribute__ ((visibility("default"))) void zend_mangle_property_name(char **dest, int *dest_length, const char *src1, int src1_length, const char *src2, int src2_length, int internal);


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const char *mangled_property, int mangled_property_len, const char **class_name, const char **prop_name, int *prop_len);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(znode *catch_token );
void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch );
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(const char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(const char *name, uint name_len );
typedef struct _zend_auto_global {
 const char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_quick(const char *name, uint name_len, ulong hashval );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, const zval *zv );



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h"


__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);


# 722 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2
# 851 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"

# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 2
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
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
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
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h"





typedef struct _zend_rsrc_list_entry {
 void *ptr;
 int type;
 int refcount;
} zend_rsrc_list_entry;

typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );


typedef struct _zend_rsrc_list_dtors_entry {

 void (*list_dtor)(void *);
 void (*plist_dtor)(void *);


 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



__attribute__ ((visibility("default"))) int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) int zend_list_insert(void *ptr, int type );
__attribute__ ((visibility("default"))) int _zend_list_addref(int id );
__attribute__ ((visibility("default"))) int _zend_list_delete(int id );
__attribute__ ((visibility("default"))) void *_zend_list_find(int id, int *type );





__attribute__ ((visibility("default"))) int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type );
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zval **passed_id , int default_id, const char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(int resource );
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;
# 116 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h"

# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



struct _zend_fcall_info;
__attribute__ ((visibility("default"))) extern void (*zend_execute_ex)(zend_execute_data *execute_data );
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, struct _zend_fcall_info *fci, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
zend_execute_data *zend_create_execute_data_from_op_array(zend_op_array *op_array, zend_bool nested );
__attribute__ ((visibility("default"))) void zend_execute(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void execute_ex(zend_execute_data *execute_data );
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data_ptr, struct _zend_fcall_info *fci, int return_value_used );
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);
__attribute__ ((visibility("default"))) int zend_lookup_class(const char *name, int name_length, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_lookup_class_ex(const char *name, int name_length, const zend_literal *key, int use_autoload, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions );

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, const char **class_name, zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, const char *given_kind );

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if (!zval_delref_p(zval_ptr)) {
  ;

  ;
  if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)zval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(zval_ptr ); };
  _zval_dtor((zval_ptr) );
  _efree((zval_ptr) );
 } else {
  ;

  if (zval_refcount_p(zval_ptr) == 1) {
   zval_unset_isref_p(zval_ptr);
  }

  gc_zval_check_possible_root((zval_ptr) );
 }
}

static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
{
 int result;

 switch ((*op).type) {
  case 0:
   result = 0;
   break;
  case 1:
  case 3:
  case 7:
   result = ((*op).value.lval?1:0);
   break;
  case 2:
   result = ((*op).value.dval ? 1 : 0);
   break;
  case 6:
   if ((*op).value.str.len == 0
    || ((*op).value.str.len==1 && (*op).value.str.val[0]=='0')) {
    result = 0;
   } else {
    result = 1;
   }
   break;
  case 4:
   result = (zend_hash_num_elements((*op).value.ht)?1:0);
   break;
  case 5:
   if(((*op).type == 5 && (((*op)).value.obj.handlers->get_class_entry != ((void *)0)))) {
    ;

    if ((*op).value.obj.handlers->cast_object) {
     zval tmp;
     if ((*op).value.obj.handlers->cast_object(op, &tmp, 3 ) == SUCCESS) {
      result = (tmp).value.lval;
      break;
     }
    } else if ((*op).value.obj.handlers->get) {
     zval *tmp = (*op).value.obj.handlers->get(op );
     if((*tmp).type != 5) {

      convert_to_boolean(tmp);
      result = (*tmp).value.lval;
      _zval_ptr_dtor((&tmp) );
      break;
     }
    }
   }
   result = 1;
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );




struct _zend_vm_stack {
 void **top;
 void **end;
 zend_vm_stack prev;
};
# 176 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc(((((sizeof(*page)) + 8 - 1) & ~(8 -1)) + sizeof(void*) * count) );

 page->top = ((void**)(((char*)(page)) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1))));
 page->end = page->top + count;
 page->prev = ((void *)0);
 return page;
}

static inline __attribute__((always_inline)) void zend_vm_stack_init(void)
{
 (executor_globals.argument_stack) = zend_vm_stack_new_page(((16 * 1024) - 16));
}

static inline __attribute__((always_inline)) void zend_vm_stack_destroy(void)
{
 zend_vm_stack stack = (executor_globals.argument_stack);

 while (stack != ((void *)0)) {
  zend_vm_stack p = stack->prev;
  _efree((stack) );
  stack = p;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_extend(int count )
{
 zend_vm_stack p = zend_vm_stack_new_page(count >= ((16 * 1024) - 16) ? count : ((16 * 1024) - 16));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) void **zend_vm_stack_top(void)
{
 return (executor_globals.argument_stack)->top;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push(void *ptr )
{
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_pop(void)
{
 void *el = *(--(executor_globals.argument_stack)->top);

 return el;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_alloc(size_t size )
{
 void *ret;

 size = (size + (sizeof(void*) - 1)) / sizeof(void*);


 if (8 > sizeof(void*)) {
  int extra = (8 - ((zend_uintptr_t)(executor_globals.argument_stack)->top & (8 - 1))) / sizeof(void*);

  if (__builtin_expect(size + extra + (((sizeof(void*)) + 8 - 1) & ~(8 -1)) / sizeof(void*) > (zend_uintptr_t)((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0)
                                                                          ) {
   zend_vm_stack_extend(size );
  } else {
   void **old_top = (executor_globals.argument_stack)->top;

   (executor_globals.argument_stack)->top += extra;

   *(executor_globals.argument_stack)->top = (void*)old_top;
   (executor_globals.argument_stack)->top += (((sizeof(void*)) + 8 - 1) & ~(8 -1)) / sizeof(void*);
  }
 } else {
  do { if (__builtin_expect(((int)size) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend(((int)size) ); } } while (0);
 }
 ret = (void*)(executor_globals.argument_stack)->top;
 (executor_globals.argument_stack)->top += size;
 return ret;
}

static inline __attribute__((always_inline)) void** zend_vm_stack_frame_base(zend_execute_data *ex)
{
 return (void**)((char*)ex->call_slots +
  (((sizeof(call_slot)) + 8 - 1) & ~(8 -1)) * ex->op_array->nested_calls);
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_int(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {
  (executor_globals.argument_stack)->top = (void**)ptr;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {

  if (8 > sizeof(void*)) {
   ptr = (void*)(((char*)ptr) - (((sizeof(void*)) + 8 - 1) & ~(8 -1)));
   (executor_globals.argument_stack)->top = *(void***)ptr;
  } else {
   (executor_globals.argument_stack)->top = (void**)ptr;
  }
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_clear_multiple(int nested )
{
 void **p = (executor_globals.argument_stack)->top - 1;
  void **end = p - (int)(zend_uintptr_t)*p;

 while (p != end) {
  zval *q = (zval *) *(--p);
  *p = ((void *)0);
  i_zval_ptr_dtor(q );
 }
 if (nested) {
  (executor_globals.argument_stack)->top = p;
 } else {
  zend_vm_stack_free_int(p );
 }
}

static inline __attribute__((always_inline)) int zend_vm_stack_get_args_count_ex(zend_execute_data *ex)
{
 if (ex) {
  void **p = ex->function_state.arguments;
  return (int)(zend_uintptr_t) *p;
 } else {
  return 0;
 }
}

static inline __attribute__((always_inline)) zval** zend_vm_stack_get_arg_ex(zend_execute_data *ex, int requested_arg)
{
 void **p = ex->function_state.arguments;
 int arg_count = (int)(zend_uintptr_t) *p;

 if (__builtin_expect(requested_arg > arg_count, 0)) {
  return ((void *)0);
 }
 return (zval**)p - arg_count + requested_arg - 1;
}

static inline __attribute__((always_inline)) int zend_vm_stack_get_args_count(void)
{
 return zend_vm_stack_get_args_count_ex((executor_globals.current_execute_data)->prev_execute_data);
}

static inline __attribute__((always_inline)) zval** zend_vm_stack_get_arg(int requested_arg )
{
 return zend_vm_stack_get_arg_ex((executor_globals.current_execute_data)->prev_execute_data, requested_arg);
}

void execute_new_code(void);



__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space );
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(const char *class_name, uint class_name_len, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(const char *class_name, uint class_name_len, const zend_literal *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 365 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 375 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );

void zend_clean_and_cache_symbol_table(HashTable *symbol_table );
void zend_free_compiled_variables(zend_execute_data *execute_data);
# 409 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 const struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval *object_ptr;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zval *object_ptr;
} zend_fcall_info_cache;
# 233 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 254 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...);

__attribute__ ((visibility("default"))) int zend_parse_parameter(int flags, int arg_num , zval **arg, const char *spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type );
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table );
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type );

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce );






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length );
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length );

__attribute__ ((visibility("default"))) void zend_wrong_param_count(void);
# 300 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, const char *doc_comment, int doc_comment_len );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject );
__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 365 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, int r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 400 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, int r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, int r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) int add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, void **dest, int duplicate);




__attribute__ ((visibility("default"))) int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_string(zval *arg, ulong idx, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length, void **dest, int duplicate);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, long r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str, int duplicate );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, int duplicate );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 450 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 466 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, char **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval ****params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval ***params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval ***argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) void zend_delete_variable(zend_execute_data *ex, HashTable *ht, const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) int zend_delete_global_variable(const char *name, int name_len );

__attribute__ ((visibility("default"))) int zend_delete_global_variable_ex(const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) void zend_reset_all_cv(HashTable *symbol_table );

__attribute__ ((visibility("default"))) void zend_rebuild_symbol_table(void);

__attribute__ ((visibility("default"))) const char* zend_find_alias_name(zend_class_entry *ce, const char *name, zend_uint len);
__attribute__ ((visibility("default"))) const char* zend_resolve_method_name(zend_class_entry *ce, zend_function *f);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 743 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"

# 39 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 82 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 83 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 98 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/build-defs.h" 1
# 99 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 123 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);

# 163 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
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

# 164 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

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
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






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

# 166 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 183 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h" 1
# 184 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 1
# 185 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h" 1
# 186 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 206 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/usr/include/pwd.h" 1 3 4
# 27 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream);







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name);
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);
# 163 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result);
# 183 "/usr/include/pwd.h" 3 4

# 207 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
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
# 80 "/usr/include/signal.h" 3 4
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
# 208 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 213 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 235 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h" 1
# 73 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h"
typedef int bool_int;

typedef enum {
 NO = 0, YES = 1
} boolean_e;



__attribute__ ((visibility("default"))) int ap_php_slprintf(char *buf, size_t len, const char *format,...);
__attribute__ ((visibility("default"))) int ap_php_vslprintf(char *buf, size_t len, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_snprintf(char *, size_t, const char *, ...);
__attribute__ ((visibility("default"))) int ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_vasprintf(char **buf, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_asprintf(char **buf, const char *format, ...);
__attribute__ ((visibility("default"))) int php_sprintf (char* s, const char* format, ...) __attribute__ ((format(printf, 2, 3)));
__attribute__ ((visibility("default"))) char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__ ((visibility("default"))) char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, int *len);


# 127 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 152 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 237 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/spprintf.h" 1
# 39 "/home/ct584/git/bughunter/repositories/php-src/main/spprintf.h"

__attribute__ ((visibility("default"))) int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

# 239 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 267 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
extern char **environ;
# 278 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

void phperror(char *error);
__attribute__ ((visibility("default"))) int php_write(void *buf, uint size );
__attribute__ ((visibility("default"))) int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)))
    ;
__attribute__ ((visibility("default"))) int php_get_module_initialized(void);
__attribute__ ((visibility("default"))) void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);






static inline __attribute__((deprecated)) void php_set_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class )
{
 zend_replace_error_handling(error_handling, exception_class, ((void *)0) );
}
static inline __attribute__((deprecated)) void php_std_error_handling() {}

__attribute__ ((visibility("default"))) void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 308 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));




# 331 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);

# 392 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h" 1
# 51 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"
typedef enum _php_output_handler_status_t {
 PHP_OUTPUT_HANDLER_FAILURE,
 PHP_OUTPUT_HANDLER_SUCCESS,
 PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
# 75 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"
typedef enum _php_output_handler_hook_t {
 PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
 PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
 PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
 PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
 PHP_OUTPUT_HANDLER_HOOK_DISABLE,

 PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
# 93 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"
typedef struct _php_output_buffer {
 char *data;
 size_t size;
 size_t used;
 uint free:1;
 uint _res:31;
} php_output_buffer;

typedef struct _php_output_context {
 int op;
 php_output_buffer in;
 php_output_buffer out;



} php_output_context;




typedef void (*php_output_handler_func_t)(char *output, uint output_len, char **handled_output, uint *handled_output_len, int mode );

typedef int (*php_output_handler_context_func_t)(void **handler_context, php_output_context *output_context);

typedef void (*php_output_handler_context_dtor_t)(void *opaq );

typedef int (*php_output_handler_conflict_check_t)(const char *handler_name, size_t handler_name_len );

typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(const char *handler_name, size_t handler_name_len, size_t chunk_size, int flags );

typedef struct _php_output_handler_user_func_t {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval *zoh;
} php_output_handler_user_func_t;

typedef struct _php_output_handler {
 char *name;
 size_t name_len;
 int flags;
 int level;
 size_t size;
 php_output_buffer buffer;

 void *opaq;
 void (*dtor)(void *opaq );

 union {
  php_output_handler_user_func_t *user;
  php_output_handler_context_func_t internal;
 } func;
} php_output_handler;

typedef struct _zend_output_globals {
 int flags;
 zend_stack handlers;
 php_output_handler *active;
 php_output_handler *running;
 const char *output_start_filename;
 int output_start_lineno;
} zend_output_globals;
# 179 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"


extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 193 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"
__attribute__ ((visibility("default"))) void php_output_startup(void);

__attribute__ ((visibility("default"))) void php_output_shutdown(void);

__attribute__ ((visibility("default"))) void php_output_register_constants(void);


__attribute__ ((visibility("default"))) int php_output_activate(void);

__attribute__ ((visibility("default"))) void php_output_deactivate(void);

__attribute__ ((visibility("default"))) void php_output_set_status(int status );
__attribute__ ((visibility("default"))) int php_output_get_status(void);
__attribute__ ((visibility("default"))) void php_output_set_implicit_flush(int flush );
__attribute__ ((visibility("default"))) const char *php_output_get_start_filename(void);
__attribute__ ((visibility("default"))) int php_output_get_start_lineno(void);

__attribute__ ((visibility("default"))) int php_output_write_unbuffered(const char *str, size_t len );
__attribute__ ((visibility("default"))) int php_output_write(const char *str, size_t len );

__attribute__ ((visibility("default"))) int php_output_flush(void);
__attribute__ ((visibility("default"))) void php_output_flush_all(void);
__attribute__ ((visibility("default"))) int php_output_clean(void);
__attribute__ ((visibility("default"))) void php_output_clean_all(void);
__attribute__ ((visibility("default"))) int php_output_end(void);
__attribute__ ((visibility("default"))) void php_output_end_all(void);
__attribute__ ((visibility("default"))) int php_output_discard(void);
__attribute__ ((visibility("default"))) void php_output_discard_all(void);

__attribute__ ((visibility("default"))) int php_output_get_contents(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_length(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_level(void);
__attribute__ ((visibility("default"))) php_output_handler* php_output_get_active_handler(void);

__attribute__ ((visibility("default"))) int php_output_start_default(void);
__attribute__ ((visibility("default"))) int php_output_start_devnull(void);

__attribute__ ((visibility("default"))) int php_output_start_user(zval *output_handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) int php_output_start_internal(const char *name, size_t name_len, php_output_handler_func_t output_handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_user(zval *handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_internal(const char *name, size_t name_len, php_output_handler_context_func_t handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) void php_output_handler_set_context(php_output_handler *handler, void *opaq, void (*dtor)(void* ) );
__attribute__ ((visibility("default"))) int php_output_handler_start(php_output_handler *handler );
__attribute__ ((visibility("default"))) int php_output_handler_started(const char *name, size_t name_len );
__attribute__ ((visibility("default"))) int php_output_handler_hook(php_output_handler_hook_t type, void *arg );
__attribute__ ((visibility("default"))) void php_output_handler_dtor(php_output_handler *handler );
__attribute__ ((visibility("default"))) void php_output_handler_free(php_output_handler **handler );

__attribute__ ((visibility("default"))) int php_output_handler_conflict(const char *handler_new, size_t handler_new_len, const char *handler_set, size_t handler_set_len );
__attribute__ ((visibility("default"))) int php_output_handler_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );
__attribute__ ((visibility("default"))) int php_output_handler_reverse_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );

__attribute__ ((visibility("default"))) php_output_handler_alias_ctor_t *php_output_handler_alias(const char *handler_name, size_t handler_name_len );
__attribute__ ((visibility("default"))) int php_output_handler_alias_register(const char *handler_name, size_t handler_name_len, php_output_handler_alias_ctor_t func );




void zif_ob_start(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_length(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_level(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_implicit_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_list_handlers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 393 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 26 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
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

# 29 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2


__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);

# 98 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h"
typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
 php_stream_notification_func func;
 void (*dtor)(php_stream_notifier *notifier);
 void *ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval *options;
 int rsrc_id;
};


__attribute__ ((visibility("default"))) void php_stream_context_free(php_stream_context *context);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_alloc(void);
__attribute__ ((visibility("default"))) int php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval ***optionvalue);
__attribute__ ((visibility("default"))) int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

__attribute__ ((visibility("default"))) php_stream_notifier *php_stream_notification_alloc(void);
__attribute__ ((visibility("default"))) void php_stream_notification_free(php_stream_notifier *notifier);

# 87 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h"

__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 104 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_filter_api.h" 1
# 41 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_bucket php_stream_bucket;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;

struct _php_stream_bucket {
 php_stream_bucket *next, *prev;
 php_stream_bucket_brigade *brigade;

 char *buf;
 size_t buflen;

 int own_buf;
 int is_persistent;


 int refcount;
};

struct _php_stream_bucket_brigade {
 php_stream_bucket *head, *tail;
};

typedef enum {
 PSFS_ERR_FATAL,
 PSFS_FEED_ME,
 PSFS_PASS_ON
} php_stream_filter_status_t;



__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent );
__attribute__ ((visibility("default"))) int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length );
__attribute__ ((visibility("default"))) void php_stream_bucket_delref(php_stream_bucket *bucket );

__attribute__ ((visibility("default"))) void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_unlink(php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket );






typedef struct _php_stream_filter_ops {

 php_stream_filter_status_t (*filter)(
   php_stream *stream,
   php_stream_filter *thisfilter,
   php_stream_bucket_brigade *buckets_in,
   php_stream_bucket_brigade *buckets_out,
   size_t *bytes_consumed,
   int flags
   );

 void (*dtor)(php_stream_filter *thisfilter );

 const char *label;

} php_stream_filter_ops;

typedef struct _php_stream_filter_chain {
 php_stream_filter *head, *tail;


 php_stream *stream;
} php_stream_filter_chain;

struct _php_stream_filter {
 php_stream_filter_ops *fops;
 void *abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 int rsrc_id;
};



__attribute__ ((visibility("default"))) void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_prepend_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_append_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int _php_stream_filter_flush(php_stream_filter *filter, int finish );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor );
__attribute__ ((visibility("default"))) void php_stream_filter_free(php_stream_filter *filter );
__attribute__ ((visibility("default"))) php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );

# 144 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern );
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );

# 105 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2

typedef struct _php_stream_statbuf {
 struct stat sb;

} php_stream_statbuf;

typedef struct _php_stream_dirent {
 char d_name[4096];
} php_stream_dirent;


typedef struct _php_stream_ops {

 size_t (*write)(php_stream *stream, const char *buf, size_t count );
 size_t (*read)(php_stream *stream, char *buf, size_t count );
 int (*close)(php_stream *stream, int close_handle );
 int (*flush)(php_stream *stream );

 const char *label;


 int (*seek)(php_stream *stream, off_t offset, int whence, off_t *newoffset );
 int (*cast)(php_stream *stream, int castas, void **ret );
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb );
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam );
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream );

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb );

 int (*url_stat)(php_stream_wrapper *wrapper, char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context );

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );


 int (*rename)(php_stream_wrapper *wrapper, char *url_from, char *url_to, int options, php_stream_context *context );


 int (*stream_mkdir)(php_stream_wrapper *wrapper, char *url, int mode, int options, php_stream_context *context );
 int (*stream_rmdir)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );

 int (*stream_metadata)(php_stream_wrapper *wrapper, char *url, int options, void *value, php_stream_context *context );
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;
};
# 186 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval *wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 int rsrc_id;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;



 char *orig_path;

 php_stream_context *context;
 int flags;


 off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 off_t readpos;
 off_t writepos;


 size_t chunk_size;

 int eof;






 struct _php_stream *enclosing_stream;
};








__attribute__ ((visibility("default"))) php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );

# 261 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 281 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_free(php_stream *stream, int close_options );




__attribute__ ((visibility("default"))) int _php_stream_seek(php_stream *stream, off_t offset, int whence );



__attribute__ ((visibility("default"))) off_t _php_stream_tell(php_stream *stream );


__attribute__ ((visibility("default"))) size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


__attribute__ ((visibility("default"))) size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );



__attribute__ ((visibility("default"))) void _php_stream_fill_read_buffer(php_stream *stream, size_t size );





__attribute__ ((visibility("default"))) size_t _php_stream_printf(php_stream *stream , const char *fmt, ...) __attribute__ ((format(printf, 2, 3)));





__attribute__ ((visibility("default"))) int _php_stream_eof(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_getc(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_putc(php_stream *stream, int c );


__attribute__ ((visibility("default"))) int _php_stream_flush(php_stream *stream, int closing );


__attribute__ ((visibility("default"))) char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



__attribute__ ((visibility("default"))) char *php_stream_get_record(php_stream *stream, size_t maxlen, size_t *returned_len, char *delim, size_t delim_len );


__attribute__ ((visibility("default"))) int _php_stream_puts(php_stream *stream, char *buf );


__attribute__ ((visibility("default"))) int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


__attribute__ ((visibility("default"))) int _php_stream_stat_path(char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



__attribute__ ((visibility("default"))) int _php_stream_mkdir(char *path, int mode, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) int _php_stream_rmdir(char *path, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) php_stream *_php_stream_opendir(char *path, int options, php_stream_context *context );

__attribute__ ((visibility("default"))) php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




__attribute__ ((visibility("default"))) int php_stream_dirent_alphasort(const char **a, const char **b);
__attribute__ ((visibility("default"))) int php_stream_dirent_alphasortr(const char **a, const char **b);

__attribute__ ((visibility("default"))) int _php_stream_scandir(char *dirname, char **namelist[], int flags, php_stream_context *context,
   int (*compare) (const char **a, const char **b) );


__attribute__ ((visibility("default"))) int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );





# 417 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );


# 437 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



__attribute__ ((visibility("default"))) size_t _php_stream_passthru(php_stream * src );



# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_transport.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_transport.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 39 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
# 65 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
# 77 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;
# 120 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4

# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 147 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 162 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    unsigned long int __ss_align;
    char __ss_padding[(128 - (2 * sizeof (unsigned long int)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 272 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));
# 299 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01





  };
# 345 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 346 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 379 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 39 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
# 174 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 202 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 219 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));
# 283 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4

# 27 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(char *protocol );
# 49 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_transport.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_xport_create(const char *name, long namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  char **error_string,
  int *error_code
  );





__attribute__ ((visibility("default"))) int php_stream_xport_bind(php_stream *stream,
  const char *name, long namelen,
  char **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_connect(php_stream *stream,
  const char *name, long namelen,
  int asynchronous,
  struct timeval *timeout,
  char **error_text,
  int *error_code
  );


__attribute__ ((visibility("default"))) int php_stream_xport_listen(php_stream *stream,
  int backlog,
  char **error_text
  );



__attribute__ ((visibility("default"))) int php_stream_xport_accept(php_stream *stream, php_stream **client,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  char **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_get_name(php_stream *stream, int want_peer,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen
  );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



__attribute__ ((visibility("default"))) int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  char **textaddr, int *textaddrlen );



__attribute__ ((visibility("default"))) int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  long flags, void *addr, socklen_t addrlen );

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



__attribute__ ((visibility("default"))) int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how );





typedef struct _php_stream_xport_param {
 enum {
  STREAM_XPORT_OP_BIND, STREAM_XPORT_OP_CONNECT,
  STREAM_XPORT_OP_LISTEN, STREAM_XPORT_OP_ACCEPT,
  STREAM_XPORT_OP_CONNECT_ASYNC,
  STREAM_XPORT_OP_GET_NAME,
  STREAM_XPORT_OP_GET_PEER_NAME,
  STREAM_XPORT_OP_RECV,
  STREAM_XPORT_OP_SEND,
  STREAM_XPORT_OP_SHUTDOWN
 } op;
 unsigned int want_addr:1;
 unsigned int want_textaddr:1;
 unsigned int want_errortext:1;
 unsigned int how:2;

 struct {
  char *name;
  long namelen;
  int backlog;
  struct timeval *timeout;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *buf;
  size_t buflen;
  long flags;
 } inputs;
 struct {
  php_stream *client;
  int returncode;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *textaddr;
  long textaddrlen;

  char *error_text;
  int error_code;
 } outputs;
} php_stream_xport_param;



typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv23_CLIENT,
 STREAM_CRYPTO_METHOD_TLS_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv2_SERVER,
 STREAM_CRYPTO_METHOD_SSLv3_SERVER,
 STREAM_CRYPTO_METHOD_SSLv23_SERVER,
 STREAM_CRYPTO_METHOD_TLS_SERVER
} php_stream_xport_crypt_method_t;


__attribute__ ((visibility("default"))) int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream );
__attribute__ ((visibility("default"))) int php_stream_xport_crypto_enable(php_stream *stream, int activate );


typedef struct _php_stream_xport_crypto_param {
 enum {
  STREAM_XPORT_CRYPTO_OP_SETUP,
  STREAM_XPORT_CRYPTO_OP_ENABLE
 } op;
 struct {
  int activate;
  php_stream_xport_crypt_method_t method;
  php_stream *session;
 } inputs;
 struct {
  int returncode;
 } outputs;
} php_stream_xport_crypto_param;


__attribute__ ((visibility("default"))) HashTable *php_stream_xport_get_hash(void);
__attribute__ ((visibility("default"))) php_stream_transport_factory_func php_stream_generic_socket_factory;

# 457 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );



# 458 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );



# 459 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_userspace.h" 1
# 23 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 460 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_mmap.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_mmap.h"
typedef enum {

 PHP_STREAM_MMAP_SUPPORTED,



 PHP_STREAM_MMAP_MAP_RANGE,

 PHP_STREAM_MMAP_UNMAP
} php_stream_mmap_operation_t;

typedef enum {
 PHP_STREAM_MAP_MODE_READONLY,
 PHP_STREAM_MAP_MODE_READWRITE,
 PHP_STREAM_MAP_MODE_SHARED_READONLY,
 PHP_STREAM_MAP_MODE_SHARED_READWRITE
} php_stream_mmap_access_t;

typedef struct {


 size_t offset;
 size_t length;

 php_stream_mmap_access_t mode;


 char *mapped;

} php_stream_mmap_range;
# 69 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_mmap.h"

__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );


# 461 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 477 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );

# 541 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper(char *protocol );
__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper_volatile(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper_volatile(char *protocol );
__attribute__ ((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(char *path, char *mode, int options, char **opened_path, php_stream_context *context );
__attribute__ ((visibility("default"))) php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, char **path_for_open, int options );
__attribute__ ((visibility("default"))) char *php_stream_locate_eol(php_stream *stream, char *buf, size_t buf_len );
# 568 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 579 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;

# 396 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h" 2
# 42 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 397 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h"

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h" 2

typedef struct _php_core_globals php_core_globals;






extern __attribute__ ((visibility("default"))) struct _php_core_globals core_globals;
# 49 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool implicit_flush;

 long output_buffering;

 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 long serialize_precision;

 long memory_limit;
 long max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 long log_errors_max_len;
 zend_bool ignore_repeated_errors;
 zend_bool ignore_repeated_source;
 zend_bool report_memleaks;
 char *error_log;

 char *doc_root;
 char *user_dir;
 char *include_path;
 char *open_basedir;
 char *extension_dir;
 char *php_binary;
 char *sys_temp_dir;

 char *upload_tmp_dir;
 long upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval *http_globals[6];

 zend_bool expose_php;

 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 long xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool enable_post_data_reading;
 zend_bool always_populate_raw_post_data;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;
 zend_bool exit_on_timeout;



 long max_input_nesting_level;
 long max_input_vars;
 zend_bool in_user_include;

 char *user_ini_filename;
 long user_ini_cache_ttl;

 char *request_order;

 zend_bool mail_x_header;
 char *mail_log;

 zend_bool in_error_log;




};
# 26 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"
struct _zend_ini_entry {
 int module_number;
 int modifiable;
 char *name;
 uint name_length;
 int (*on_modify)(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
 void *mh_arg1;
 void *mh_arg2;
 void *mh_arg3;

 char *value;
 uint value_length;

 char *orig_value;
 uint orig_value_length;
 int orig_modifiable;
 int modified;

 void (*displayer)(zend_ini_entry *ini_entry, int type);
};


__attribute__ ((visibility("default"))) int zend_ini_startup(void);
__attribute__ ((visibility("default"))) int zend_ini_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_global_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_deactivate(void);

__attribute__ ((visibility("default"))) int zend_copy_ini_directives(void);

__attribute__ ((visibility("default"))) void zend_ini_sort_entries(void);

__attribute__ ((visibility("default"))) int zend_register_ini_entries(const zend_ini_entry *ini_entry, int module_number );
__attribute__ ((visibility("default"))) void zend_unregister_ini_entries(int module_number );
__attribute__ ((visibility("default"))) void zend_ini_refresh_caches(int stage );
__attribute__ ((visibility("default"))) int zend_alter_ini_entry(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_ex(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage, int force_change );
__attribute__ ((visibility("default"))) int zend_restore_ini_entry(char *name, uint name_length, int stage);
__attribute__ ((visibility("default"))) void display_ini_entries(zend_module_entry *module);

__attribute__ ((visibility("default"))) long zend_ini_long(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) double zend_ini_double(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string_ex(char *name, uint name_length, int orig, zend_bool *exists);

__attribute__ ((visibility("default"))) int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

__attribute__ ((visibility("default"))) void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void display_link_numbers(zend_ini_entry *ini_entry, int type);

# 175 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 195 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 2


__attribute__ ((visibility("default"))) void config_zval_dtor(zval *zvalue);
int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
__attribute__ ((visibility("default"))) zval *cfg_get_entry(const char *name, uint name_length);
__attribute__ ((visibility("default"))) int cfg_get_long(const char *varname, long *result);
__attribute__ ((visibility("default"))) int cfg_get_double(const char *varname, double *result);
__attribute__ ((visibility("default"))) int cfg_get_string(const char *varname, char **result);
__attribute__ ((visibility("default"))) int php_parse_user_ini_file(const char *dirname, char *ini_filename, HashTable *target_hash );
__attribute__ ((visibility("default"))) void php_ini_activate_config(HashTable *source_hash, int modify_type, int stage );
__attribute__ ((visibility("default"))) int php_ini_has_per_dir_config(void);
__attribute__ ((visibility("default"))) int php_ini_has_per_host_config(void);
__attribute__ ((visibility("default"))) void php_ini_activate_per_dir_config(char *path, uint path_len );
__attribute__ ((visibility("default"))) void php_ini_activate_per_host_config(const char *host, uint host_len );
__attribute__ ((visibility("default"))) HashTable* php_ini_get_configuration_hash(void);

# 27 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path );
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int use_realpath );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 47 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 398 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2



# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/TSRM.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 1
# 13 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 14 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 41 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 42 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 2






# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4

# 37 "/usr/include/utime.h" 3 4
struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 35 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h"
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

# 91 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length );
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size );
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path );
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath );
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path );
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode );
__attribute__ ((visibility("default"))) int virtual_open(const char *path , int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rename(char *oldname, char *newname );
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 190 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath );

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
 int is_dir;
 time_t expires;






 struct _realpath_cache_bucket *next;
} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 long realpath_cache_size;
 long realpath_cache_size_limit;
 long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len );
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t );
__attribute__ ((visibility("default"))) int realpath_cache_size(void);
__attribute__ ((visibility("default"))) int realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 402 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"

void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_get_constant(const char *name, uint name_len, zval *result );
__attribute__ ((visibility("default"))) int zend_get_constant_ex(const char *name, uint name_len, zval *result, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);
zend_constant *zend_quick_get_constant(const zend_literal *key, ulong flags );

# 404 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2






# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h" 2
# 52 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 119 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 411 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/tar.h" 1
# 40 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/tar.h"
typedef struct _old_tar_header {
 char name[100];

 char mode[8];
 char uid[8];
 char gid[8];
 char size[12];
 char mtime[12];
 char checksum[8];
 char link;



 char linkname[100];
} __attribute__((__packed__)) old_tar_header;
# 65 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/tar.h"
typedef struct _tar_header {
 char name[100];
 char mode[8];
 char uid[8];
 char gid[8];
 char size[12];
 char mtime[12];
 char checksum[8];
 char typeflag;
# 82 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/tar.h"
 char linkname[100];
 char magic[6];
 char version[2];
 char uname[32];
 char gname[32];
 char devmajor[8];
 char devminor[8];
 char prefix[155];



 char padding[12];
} __attribute__((__packed__)) tar_header;
# 29 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 32 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h"


__attribute__ ((visibility("default"))) void zend_exception_set_previous(zval *exception, zval *add_previous );
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

void zend_throw_exception_internal(zval *exception );

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);
__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) zval * zend_throw_exception(zend_class_entry *exception_ce, const char *message, long code );
__attribute__ ((visibility("default"))) zval * zend_throw_exception_ex(zend_class_entry *exception_ce, long code , const char *format, ...);
__attribute__ ((visibility("default"))) void zend_throw_exception_object(zval *exception );
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zval * zend_throw_error_exception(zend_class_entry *exception_ce, const char *message, long code, int severity );

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex );


__attribute__ ((visibility("default"))) void zend_exception_error(zval *exception, int severity );


int zend_spprintf(char **message, int max_len, const char *format, ...);


# 33 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h" 2



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_traversable;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_aggregate;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_iterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_arrayaccess;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_serializable;

typedef struct _zend_user_iterator {
 zend_object_iterator it;
 zend_class_entry *ce;
 zval *value;
} zend_user_iterator;

__attribute__ ((visibility("default"))) zval* zend_call_method(zval **object_pp, zend_class_entry *obj_ce, zend_function **fn_proxy, const char *function_name, int function_name_len, zval **retval_ptr_ptr, int param_count, zval* arg1, zval* arg2 );
# 52 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h"
__attribute__ ((visibility("default"))) void zend_user_it_rewind(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) int zend_user_it_valid(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) void zend_user_it_get_current_key(zend_object_iterator *_iter, zval *key );
__attribute__ ((visibility("default"))) void zend_user_it_get_current_data(zend_object_iterator *_iter, zval ***data );
__attribute__ ((visibility("default"))) void zend_user_it_move_forward(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) void zend_user_it_invalidate_current(zend_object_iterator *_iter );

__attribute__ ((visibility("default"))) zval *zend_user_it_new_iterator(zend_class_entry *ce, zval *object );
__attribute__ ((visibility("default"))) zend_object_iterator *zend_user_it_get_new_iterator(zend_class_entry *ce, zval *object, int by_ref );

__attribute__ ((visibility("default"))) void zend_register_interfaces(void);

__attribute__ ((visibility("default"))) int zend_user_serialize(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
__attribute__ ((visibility("default"))) int zend_user_unserialize(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

__attribute__ ((visibility("default"))) int zend_class_serialize_deny(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
__attribute__ ((visibility("default"))) int zend_class_unserialize_deny(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );


# 35 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 36 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm.h"


__attribute__ ((visibility("default"))) void zend_vm_use_old_executor(void);
__attribute__ ((visibility("default"))) void zend_vm_set_opcode_handler(zend_op* opcode);


# 38 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 1
# 39 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );



# 40 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 2
# 51 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
typedef struct {
 char *header;
 uint header_len;
} sapi_header_struct;


typedef struct {
 zend_llist headers;
 int http_response_code;
 unsigned char send_default_content_type;
 char *mimetype;
 char *http_status_line;
} sapi_headers_struct;


typedef struct _sapi_post_entry sapi_post_entry;
typedef struct _sapi_module_struct sapi_module_struct;


extern __attribute__ ((visibility("default"))) sapi_module_struct sapi_module;








typedef struct {
 const char *request_method;
 char *query_string;
 char *post_data, *raw_post_data;
 char *cookie_data;
 long content_length;
 uint post_data_length, raw_post_data_length;

 char *path_translated;
 char *request_uri;

 const char *content_type;

 zend_bool headers_only;
 zend_bool no_headers;
 zend_bool headers_read;

 sapi_post_entry *post_entry;

 char *content_type_dup;


 char *auth_user;
 char *auth_password;
 char *auth_digest;


 char *argv0;

 char *current_user;
 int current_user_length;


 int argc;
 char **argv;
 int proto_num;
} sapi_request_info;


typedef struct _sapi_globals_struct {
 void *server_context;
 sapi_request_info request_info;
 sapi_headers_struct sapi_headers;
 int read_post_bytes;
 unsigned char headers_sent;
 struct stat global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 long post_max_size;
 int options;
 zend_bool sapi_started;
 double global_request_time;
 HashTable known_post_content_types;
 zval *callback_func;
 zend_fcall_info_cache fci_cache;
 zend_bool callback_run;
} sapi_globals_struct;








extern __attribute__ ((visibility("default"))) sapi_globals_struct sapi_globals;


__attribute__ ((visibility("default"))) void sapi_startup(sapi_module_struct *sf);
__attribute__ ((visibility("default"))) void sapi_shutdown(void);
__attribute__ ((visibility("default"))) void sapi_activate(void);
__attribute__ ((visibility("default"))) void sapi_deactivate(void);
__attribute__ ((visibility("default"))) void sapi_initialize_empty_request(void);

# 166 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_DELETE,
 SAPI_HEADER_DELETE_ALL,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


__attribute__ ((visibility("default"))) int sapi_header_op(sapi_header_op_enum op, void *arg );


__attribute__ ((visibility("default"))) int sapi_add_header_ex(char *header_line, uint header_line_len, zend_bool duplicate, zend_bool replace );



__attribute__ ((visibility("default"))) int sapi_send_headers(void);
__attribute__ ((visibility("default"))) void sapi_free_header(sapi_header_struct *sapi_header);
__attribute__ ((visibility("default"))) void sapi_handle_post(void *arg );

__attribute__ ((visibility("default"))) int sapi_register_post_entries(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) void sapi_unregister_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_default_post_reader(void (*default_post_reader)(void) );
__attribute__ ((visibility("default"))) int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ) );
__attribute__ ((visibility("default"))) int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ), unsigned int (*input_filter_init)(void) );

__attribute__ ((visibility("default"))) int sapi_flush(void);
__attribute__ ((visibility("default"))) struct stat *sapi_get_stat(void);
__attribute__ ((visibility("default"))) char *sapi_getenv(char *name, size_t name_len );

__attribute__ ((visibility("default"))) char *sapi_get_default_content_type(void);
__attribute__ ((visibility("default"))) void sapi_get_default_content_type_header(sapi_header_struct *default_header );
__attribute__ ((visibility("default"))) size_t sapi_apply_default_charset(char **mimetype, size_t len );
__attribute__ ((visibility("default"))) void sapi_activate_headers_only(void);

__attribute__ ((visibility("default"))) int sapi_get_fd(int *fd );
__attribute__ ((visibility("default"))) int sapi_force_http_10(void);

__attribute__ ((visibility("default"))) int sapi_get_target_uid(uid_t * );
__attribute__ ((visibility("default"))) int sapi_get_target_gid(gid_t * );
__attribute__ ((visibility("default"))) double sapi_get_request_time(void);
__attribute__ ((visibility("default"))) void sapi_terminate_process(void);


struct _sapi_module_struct {
 char *name;
 char *pretty_name;

 int (*startup)(struct _sapi_module_struct *sapi_module);
 int (*shutdown)(struct _sapi_module_struct *sapi_module);

 int (*activate)(void);
 int (*deactivate)(void);

 int (*ub_write)(const char *str, unsigned int str_length );
 void (*flush)(void *server_context);
 struct stat *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len );

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_header_op_enum op, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 int (*read_post)(char *buffer, uint count_bytes );
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array );
 void (*log_message)(char *message );
 double (*get_request_time)(void);
 void (*terminate_process)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray );
 char *executable_location;

 int php_ini_ignore;
 int php_ini_ignore_cwd;

 int (*get_fd)(int *fd );

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t * );
 int (*get_target_gid)(gid_t * );

 unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

 void (*ini_defaults)(HashTable *configuration_hash);
 int phpinfo_as_text;

 char *ini_entries;
 const zend_function_entry *additional_functions;
 unsigned int (*input_filter_init)(void);
};


struct _sapi_post_entry {
 char *content_type;
 uint content_type_len;
 void (*post_reader)(void);
 void (*post_handler)(char *content_type_dup, void *arg );
};
# 301 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"

__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray );
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

# 41 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_main.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/main/php_main.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/main/php_main.h" 2


__attribute__ ((visibility("default"))) int php_request_startup(void);
__attribute__ ((visibility("default"))) void php_request_shutdown(void *dummy);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_exec(void *dummy);
__attribute__ ((visibility("default"))) int php_module_startup(sapi_module_struct *sf, zend_module_entry *additional_modules, uint num_additional_modules);
__attribute__ ((visibility("default"))) void php_module_shutdown(void);
__attribute__ ((visibility("default"))) void php_module_shutdown_for_exec(void);
__attribute__ ((visibility("default"))) int php_module_shutdown_wrapper(sapi_module_struct *sapi_globals);
__attribute__ ((visibility("default"))) int php_request_startup_for_hook(void);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_hook(void *dummy);

__attribute__ ((visibility("default"))) int php_register_extensions(zend_module_entry **ptr, int count );

__attribute__ ((visibility("default"))) int php_execute_script(zend_file_handle *primary_file );
__attribute__ ((visibility("default"))) int php_execute_simple_script(zend_file_handle *primary_file, zval **ret );
__attribute__ ((visibility("default"))) int php_handle_special_queries(void);
__attribute__ ((visibility("default"))) int php_lint_script(zend_file_handle *file );

__attribute__ ((visibility("default"))) void php_handle_aborted_connection(void);
__attribute__ ((visibility("default"))) int php_handle_auth_data(const char *auth );

__attribute__ ((visibility("default"))) void php_html_puts(const char *str, uint siz );
__attribute__ ((visibility("default"))) int php_stream_open_for_zend_ex(const char *filename, zend_file_handle *handle, int mode );

extern void php_call_shutdown_functions(void);
extern void php_free_shutdown_functions(void);


extern int php_init_environ(void);
extern int php_shutdown_environ(void);

# 42 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_open_temporary_file.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_open_temporary_file.h"

__attribute__ ((visibility("default"))) FILE *php_open_temporary_file(const char *dir, const char *pfx, char **opened_path_p );
__attribute__ ((visibility("default"))) int php_open_temporary_fd_ex(const char *dir, const char *pfx, char **opened_path_p, zend_bool open_basedir_check );
__attribute__ ((visibility("default"))) int php_open_temporary_fd(const char *dir, const char *pfx, char **opened_path_p );
__attribute__ ((visibility("default"))) const char *php_get_temporary_directory(void);
__attribute__ ((visibility("default"))) void php_shutdown_temporary_directory(void);

# 43 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/info.h" 1
# 57 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/info.h"

void zif_phpversion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpcredits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_sapi_name(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_uname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_scanned_files(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_loaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) char *php_info_html_esc(char *string );
__attribute__ ((visibility("default"))) void php_info_html_esc_write(char *string, int str_len );
__attribute__ ((visibility("default"))) void php_print_info_htmlhead(void);
__attribute__ ((visibility("default"))) void php_print_info(int flag );
__attribute__ ((visibility("default"))) void php_print_style(void);
__attribute__ ((visibility("default"))) void php_info_print_style(void);
__attribute__ ((visibility("default"))) void php_info_print_table_colspan_header(int num_cols, char *header);
__attribute__ ((visibility("default"))) void php_info_print_table_header(int num_cols, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_row(int num_cols, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_row_ex(int num_cols, const char *, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_start(void);
__attribute__ ((visibility("default"))) void php_info_print_table_end(void);
__attribute__ ((visibility("default"))) void php_info_print_box_start(int bg);
__attribute__ ((visibility("default"))) void php_info_print_box_end(void);
__attribute__ ((visibility("default"))) void php_info_print_hr(void);
__attribute__ ((visibility("default"))) void php_info_print_module(zend_module_entry *module );
__attribute__ ((visibility("default"))) char *php_get_uname(char mode);

void register_phpinfo_constants(int type, int module_number );

# 44 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 41 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 353 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;

# 132 "/usr/include/wchar.h" 3 4





struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));


extern wchar_t *wcsdup (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));










extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 237 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


# 249 "/usr/include/wchar.h" 3 4



extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 266 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 277 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ , __leaf__));


extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));

# 306 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));




# 320 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

# 350 "/usr/include/wchar.h" 3 4



extern wint_t btowc (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int wctob (wint_t __c) __attribute__ ((__nothrow__ , __leaf__));



extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));

# 405 "/usr/include/wchar.h" 3 4



extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/wchar.h" 3 4



extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ , __leaf__));

# 566 "/usr/include/wchar.h" 3 4
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__));






extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ , __leaf__));






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;
# 656 "/usr/include/wchar.h" 3 4
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__ , __leaf__))


                                                          ;
# 680 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;





extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__ , __leaf__))


                                                          ;
# 736 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 851 "/usr/include/wchar.h" 3 4




extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 891 "/usr/include/wchar.h" 3 4

# 29 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_filestat.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_filestat.h"
int zm_activate_filestat(int type, int module_number );
int zm_deactivate_filestat(int type, int module_number );

void zif_realpath_cache_size(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_realpath_cache_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileatime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filectime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filegroup(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileinode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filemtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileowner(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileperms(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filesize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filetype(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_writable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_readable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_executable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_link(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_stat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_lstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_total_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_free_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_lchown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_lchgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_chmod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_touch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 89 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_filestat.h"
typedef int php_stat_len;


__attribute__ ((visibility("default"))) void php_clear_stat_cache(zend_bool clear_realpath_cache, const char *filename, int filename_len );
__attribute__ ((visibility("default"))) void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value );
# 32 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_highlight.h" 1
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



__attribute__ ((visibility("default"))) void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) void zend_strip(void);
__attribute__ ((visibility("default"))) int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name );
__attribute__ ((visibility("default"))) void zend_html_putc(char c);
__attribute__ ((visibility("default"))) void zend_html_puts(const char *s, uint len );


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 34 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url_scanner_ex.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number );
int zm_shutdown_url_scanner_ex(int type, int module_number );

int zm_activate_url_scanner_ex(int type, int module_number );
int zm_deactivate_url_scanner_ex(int type, int module_number );

__attribute__ ((visibility("default"))) char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen );
__attribute__ ((visibility("default"))) int php_url_scanner_add_var(char *name, int name_len, char *value, int value_len, int urlencode );
__attribute__ ((visibility("default"))) int php_url_scanner_reset_vars(void);

# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_smart_str_public.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 35 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url_scanner_ex.h" 2

typedef struct {

 smart_str tag;
 smart_str arg;
 smart_str val;
 smart_str buf;


 smart_str result;


 smart_str form_app, url_app;

 int active;

 char *lookup_data;
 int state;


 HashTable *tags;
} url_adapt_state_ex_t;
# 36 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 2

extern zend_module_entry basic_functions_module;


int zm_startup_basic(int type, int module_number );
int zm_shutdown_basic(int type, int module_number );
int zm_activate_basic(int type, int module_number );
int zm_deactivate_basic(int type, int module_number );
void zm_info_basic(zend_module_entry *zend_module );

void zif_constant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_usleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_time_nanosleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_time_sleep_until(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_inet_ntop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void php_inet_pton(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_ip2long(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_long2ip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_getenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_putenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getopt(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_current_user(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_time_limit(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_header_register_callback(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_cfg_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_gpc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_error_log(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_error_get_last(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_call_user_func(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_func_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_forward_static_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_forward_static_call_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_shutdown_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_strip_whitespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_get_all(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_restore(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_restore_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_print_r(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vfprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_connection_aborted(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_connection_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ignore_user_abort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getservbyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getservbyport(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobynumber(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_crc32(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unregister_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_sys_getloadavg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_is_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_move_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_parse_ini_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_ini_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );




void zif_str_rot13(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_get_filters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_filter_register(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_make_writeable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_prepend(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_append(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_new(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
int zm_startup_user_filters(int type, int module_number );
int zm_deactivate_user_filters(int type, int module_number );
int zm_deactivate_browscap(int type, int module_number );


__attribute__ ((visibility("default"))) int _php_error_log(int opt_err, char *message, char *opt, char *headers );
__attribute__ ((visibility("default"))) int _php_error_log_ex(int opt_err, char *message, int message_len, char *opt, char *headers );
__attribute__ ((visibility("default"))) int php_prefix_varname(zval *result, zval *prefix, char *var_name, int var_name_len, zend_bool add_underscore );



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 164 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval *strtok_zval;
 char *strtok_string;
 char *locale_string;
 char *strtok_last;
 char strtok_table[256];
 ulong strtok_len;
 char str_ebuf[40];
 zend_fcall_info array_walk_fci;
 zend_fcall_info_cache array_walk_fci_cache;
 zend_fcall_info user_compare_fci;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval *active_ini_file_section;


 long page_uid;
 long page_gid;
 long page_inode;
 time_t page_mtime;


 char *CurrentStatFile, *CurrentLStatFile;
 php_stream_statbuf ssb, lssb;


 php_uint32 state[(624)+1];
 php_uint32 *next;
 int left;

 unsigned int rand_seed;

 zend_bool rand_is_seeded;
 zend_bool mt_rand_is_seeded;


 char *syslog_device;


 zend_class_entry *incomplete_class;
 unsigned serialize_lock;
 struct {
  void *var_hash;
  unsigned level;
 } serialize;
 struct {
  void *var_hash;
  unsigned level;
 } unserialize;


 url_adapt_state_ex_t url_adapt_state_ex;


 void *mmap_file;
 size_t mmap_len;


 HashTable *user_filter_map;






 int umask;
} php_basic_globals;






__attribute__ ((visibility("default"))) extern php_basic_globals basic_globals;



typedef struct {
 char *putenv_string;
 char *previous_value;
 char *key;
 int key_len;
} putenv_entry;


__attribute__ ((visibility("default"))) double php_get_nan(void);
__attribute__ ((visibility("default"))) double php_get_inf(void);

typedef struct _php_shutdown_function_entry {
 zval **arguments;
 int arg_count;
} php_shutdown_function_entry;

__attribute__ ((visibility("default"))) extern zend_bool register_user_shutdown_function(char *function_name, size_t function_len, php_shutdown_function_entry *shutdown_function_entry );
__attribute__ ((visibility("default"))) extern zend_bool remove_user_shutdown_function(char *function_name, size_t function_len );
__attribute__ ((visibility("default"))) extern zend_bool append_user_shutdown_function(php_shutdown_function_entry shutdown_function_entry );
# 45 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h"
int zm_startup_file(int type, int module_number );
int zm_shutdown_file(int type, int module_number );

void zif_tempnam(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_tmpfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fopen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_popen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_feof(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fread(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgets(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetss(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fgetcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fputcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fwrite(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fflush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_rewind(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_ftell(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fseek(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_mkdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rmdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fpassthru(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_readfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_umask(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unlink(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_copy(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_put_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_meta_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_flock(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_isset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_realpath(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_fnmatch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_ftruncate(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sys_get_temp_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

int zm_startup_user_streams(int type, int module_number );

__attribute__ ((visibility("default"))) int php_le_stream_context(void);
__attribute__ ((visibility("default"))) int php_set_sock_blocking(int socketd, int block );
__attribute__ ((visibility("default"))) int php_copy_file(char *src, char *dest );
__attribute__ ((visibility("default"))) int php_copy_file_ex(char *src, char *dest, int src_chk );
__attribute__ ((visibility("default"))) int php_copy_file_ctx(char *src, char *dest, int src_chk, php_stream_context *ctx );
__attribute__ ((visibility("default"))) int php_mkdir_ex(char *dir, long mode, int options );
__attribute__ ((visibility("default"))) int php_mkdir(char *dir, long mode );
__attribute__ ((visibility("default"))) void php_fgetcsv(php_stream *stream, char delimiter, char enclosure, char escape_char, size_t buf_len, char *buf, zval *return_value );
__attribute__ ((visibility("default"))) int php_fputcsv(php_stream *stream, zval *fields, char delimiter, char enclosure, char escape_char );
# 93 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h"
typedef enum _php_meta_tags_token {
 TOK_EOF = 0,
 TOK_OPENTAG,
 TOK_CLOSETAG,
 TOK_SLASH,
 TOK_EQUAL,
 TOK_SPACE,
 TOK_ID,
 TOK_STRING,
 TOK_OTHER
} php_meta_tags_token;

typedef struct _php_meta_tags_data {
 php_stream *stream;
 int ulc;
 int lc;
 char *input_buffer;
 char *token_data;
 int token_len;
 int in_meta;
} php_meta_tags_data;

php_meta_tags_token php_next_meta_token(php_meta_tags_data * );

typedef struct {
 int pclose_ret;
 size_t def_chunk_size;
 long auto_detect_line_endings;
 long default_socket_timeout;
 char *user_agent;
 char *from_address;
 char *user_stream_current_filename;
 php_stream_context *default_context;
 HashTable *stream_wrappers;
 HashTable *stream_filters;
 HashTable *wrapper_errors;
 int pclose_wait;
} php_file_globals;






extern __attribute__ ((visibility("default"))) php_file_globals file_globals;
# 46 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h"
void zif_strspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strcspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_ireplace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rtrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ltrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_soundex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_levenshtein(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_count_chars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_wordwrap(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_explode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_implode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtok(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtoupper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtolower(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_basename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_dirname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pathinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strstr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrchr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_quotemeta(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_lcfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucwords(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrevc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_sprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_printf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vsprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ord(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl2br(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_setlocale(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_localeconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl_langinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stristr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chunk_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_str(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_getcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hex2bin(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_similar_text(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strip_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_repeat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_word_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpbrk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_strcoll(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_money_format(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );







int zm_startup_nl_langinfo(int type, int module_number );






__attribute__ ((visibility("default"))) int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out);


__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen);
__attribute__ ((visibility("default"))) char *php_addslashes(char *str, int length, int *new_length, int freeit );
__attribute__ ((visibility("default"))) char *php_addcslashes(const char *str, int length, int *new_length, int freeit, char *what, int wlength );
__attribute__ ((visibility("default"))) void php_stripslashes(char *str, int *len );
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, int *len);
__attribute__ ((visibility("default"))) void php_basename(const char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
__attribute__ ((visibility("default"))) size_t php_dirname(char *str, size_t len);
__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len);
__attribute__ ((visibility("default"))) char *php_str_to_str_ex(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) char *php_str_to_str(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length);
__attribute__ ((visibility("default"))) char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode );
__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, int len, int *state, char *allow, int allow_len);
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces);
__attribute__ ((visibility("default"))) int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result);
__attribute__ ((visibility("default"))) void php_implode(zval *delim, zval *arr, zval *return_value );
__attribute__ ((visibility("default"))) void php_explode(zval *delim, zval *str, zval *return_value, long limit);

__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);

__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2 );
# 165 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 47 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url.h" 1
# 23 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url.h"
typedef struct php_url {
 char *scheme;
 char *user;
 char *pass;
 char *host;
 unsigned short port;
 char *path;
 char *query;
 char *fragment;
} php_url;

__attribute__ ((visibility("default"))) void php_url_free(php_url *theurl);
__attribute__ ((visibility("default"))) php_url *php_url_parse(char const *str);
__attribute__ ((visibility("default"))) php_url *php_url_parse_ex(char const *str, int length);
__attribute__ ((visibility("default"))) int php_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) int php_raw_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) char *php_url_encode(char const *s, int len, int *new_length);
__attribute__ ((visibility("default"))) char *php_raw_url_encode(char const *s, int len, int *new_length);

void zif_parse_url(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_headers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 48 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/crc32.h" 1
# 35 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/crc32.h"
static const unsigned int crc32tab[256] = {
 0x00000000, 0x77073096, 0xee0e612c, 0x990951ba,
 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3,
 0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
 0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de,
 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
 0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec,
 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5,
 0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
 0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940,
 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
 0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116,
 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f,
 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
 0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a,
 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
 0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818,
 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
 0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c,
 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb,
 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
 0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086,
 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
 0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4,
 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad,
 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
 0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8,
 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
 0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe,
 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7,
 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
 0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252,
 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
 0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60,
 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79,
 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
 0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04,
 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
 0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a,
 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
 0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e,
 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45,
 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
 0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0,
 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
 0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6,
 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf,
 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d,
};
# 49 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/md5.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/md5.h"
__attribute__ ((visibility("default"))) void make_digest(char *md5str, const unsigned char *digest);
__attribute__ ((visibility("default"))) void make_digest_ex(char *md5str, const unsigned char *digest, int len);

void php_if_md5(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_md5_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 44 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/md5.h"
typedef struct {
 php_uint32 lo, hi;
 php_uint32 a, b, c, d;
 unsigned char buffer[64];
 php_uint32 block[16];
} PHP_MD5_CTX;

__attribute__ ((visibility("default"))) void PHP_MD5Init(PHP_MD5_CTX *ctx);
__attribute__ ((visibility("default"))) void PHP_MD5Update(PHP_MD5_CTX *ctx, const void *data, size_t size);
__attribute__ ((visibility("default"))) void PHP_MD5Final(unsigned char *result, PHP_MD5_CTX *ctx);
# 50 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/sha1.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/sha1.h"
typedef struct {
 php_uint32 state[5];
 php_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA1_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA1Init(PHP_SHA1_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA1Update(PHP_SHA1_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA1Final(unsigned char[20], PHP_SHA1_CTX *);
__attribute__ ((visibility("default"))) void make_sha1_digest(char *sha1str, unsigned char *digest);

void zif_sha1(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sha1_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 51 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_var.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_var.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_smart_str_public.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_var.h" 2

void zif_var_dump(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_var_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_debug_zval_dump(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_serialize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unserialize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_memory_get_usage(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_memory_get_peak_usage(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) void php_var_dump(zval **struc, int level );
__attribute__ ((visibility("default"))) void php_var_export(zval **struc, int level );
__attribute__ ((visibility("default"))) void php_var_export_ex(zval **struc, int level, smart_str *buf );

__attribute__ ((visibility("default"))) void php_debug_zval_dump(zval **struc, int level );

typedef HashTable* php_serialize_data_t;

struct php_unserialize_data {
 void *first;
 void *last;
 void *first_dtor;
 void *last_dtor;
};

typedef struct php_unserialize_data* php_unserialize_data_t;

__attribute__ ((visibility("default"))) void php_var_serialize(smart_str *buf, zval **struc, php_serialize_data_t *var_hash );
__attribute__ ((visibility("default"))) int php_var_unserialize(zval **rval, const unsigned char **p, const unsigned char *max, php_unserialize_data_t *var_hash );
# 116 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_var.h"
__attribute__ ((visibility("default"))) void var_replace(php_unserialize_data_t *var_hash, zval *ozval, zval **nzval);
__attribute__ ((visibility("default"))) void var_push_dtor(php_unserialize_data_t *var_hash, zval **val);
__attribute__ ((visibility("default"))) void var_push_dtor_no_addref(php_unserialize_data_t *var_hashx, zval **rval);
__attribute__ ((visibility("default"))) void var_destroy(php_unserialize_data_t *var_hash);




__attribute__ ((visibility("default"))) zend_class_entry *php_create_empty_class(char *class_name, int len);

static inline int php_varname_check(char *name, int name_len, zend_bool silent )
{
    if (name_len == sizeof("GLOBALS") - 1 && !memcmp(name, "GLOBALS", sizeof("GLOBALS") - 1)) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted GLOBALS variable overwrite");
  }
        return FAILURE;
    } else if (name[0] == '_' &&
            (
             (name_len == sizeof("_GET") - 1 && !memcmp(name, "_GET", sizeof("_GET") - 1)) ||
             (name_len == sizeof("_POST") - 1 && !memcmp(name, "_POST", sizeof("_POST") - 1)) ||
             (name_len == sizeof("_COOKIE") - 1 && !memcmp(name, "_COOKIE", sizeof("_COOKIE") - 1)) ||
             (name_len == sizeof("_ENV") - 1 && !memcmp(name, "_ENV", sizeof("_ENV") - 1)) ||
             (name_len == sizeof("_SERVER") - 1 && !memcmp(name, "_SERVER", sizeof("_SERVER") - 1)) ||
             (name_len == sizeof("_SESSION") - 1 && !memcmp(name, "_SESSION", sizeof("_SESSION") - 1)) ||
             (name_len == sizeof("_FILES") - 1 && !memcmp(name, "_FILES", sizeof("_FILES") - 1)) ||
             (name_len == sizeof("_REQUEST") -1 && !memcmp(name, "_REQUEST", sizeof("_REQUEST") - 1))
            )
            ) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted super-global (%s) variable overwrite", name);
  }
        return FAILURE;
    } else if (name[0] == 'H' &&
            (
             (name_len == sizeof("HTTP_POST_VARS") - 1 && !memcmp(name, "HTTP_POST_VARS", sizeof("HTTP_POST_VARS") - 1)) ||
             (name_len == sizeof("HTTP_GET_VARS") - 1 && !memcmp(name, "HTTP_GET_VARS", sizeof("HTTP_GET_VARS") - 1)) ||
             (name_len == sizeof("HTTP_COOKIE_VARS") - 1 && !memcmp(name, "HTTP_COOKIE_VARS", sizeof("HTTP_COOKIE_VARS") - 1)) ||
             (name_len == sizeof("HTTP_ENV_VARS") - 1 && !memcmp(name, "HTTP_ENV_VARS", sizeof("HTTP_ENV_VARS") - 1)) ||
             (name_len == sizeof("HTTP_SERVER_VARS") - 1 && !memcmp(name, "HTTP_SERVER_VARS", sizeof("HTTP_SERVER_VARS") - 1)) ||
             (name_len == sizeof("HTTP_SESSION_VARS") - 1 && !memcmp(name, "HTTP_SESSION_VARS", sizeof("HTTP_SESSION_VARS") - 1)) ||
             (name_len == sizeof("HTTP_RAW_POST_DATA") - 1 && !memcmp(name, "HTTP_RAW_POST_DATA", sizeof("HTTP_RAW_POST_DATA") - 1)) ||
             (name_len == sizeof("HTTP_POST_FILES") - 1 && !memcmp(name, "HTTP_POST_FILES", sizeof("HTTP_POST_FILES") - 1))
            )
            ) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted long input array (%s) overwrite", name);
  }
        return FAILURE;
    }
 return SUCCESS;
}
# 52 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_smart_str.h" 1
# 153 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_smart_str.h"
static inline char *smart_str_print_long(char *buf, long num) {
 char *r;
 do { if (num < 0) { do { char *__p = ((buf)); unsigned long __num = (-(num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); *--(r) = '-'; } else { do { char *__p = ((buf)); unsigned long __num = ((num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); } } while (0);
 return r;
}

static inline char *smart_str_print_unsigned(char *buf, long num) {
 char *r;
 do { char *__p = (buf); unsigned long __num = (num); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); r = __p; } while (0);
 return r;
}
# 53 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_versioning.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_versioning.h"
__attribute__ ((visibility("default"))) char *php_canonicalize_version(const char *);
__attribute__ ((visibility("default"))) int php_version_compare(const char *, const char *);
void zif_version_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 54 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_strtok_r.h" 1



char *tsrm_strtok_r(char *s, const char *delim, char **last);
# 56 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_virtual_cwd.h" 1
# 58 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_array.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_array.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/php_spl.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/php_spl.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
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
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 2 3 4
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/php_spl.h" 2
# 36 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/php_spl.h"
extern zend_module_entry spl_module_entry;
# 58 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/php_spl.h"
int zm_startup_spl(int type, int module_number );
int zm_shutdown_spl(int type, int module_number );
int zm_activate_spl(int type, int module_number );
int zm_deactivate_spl(int type, int module_number );
void zm_info_spl(zend_module_entry *zend_module );


typedef struct _zend_spl_globals {
 char * autoload_extensions;
 HashTable * autoload_functions;
 int autoload_running;
 int autoload_extensions_len;
 intptr_t hash_mask_handle;
 intptr_t hash_mask_handlers;
 int hash_mask_init;
} zend_spl_globals;






extern zend_spl_globals spl_globals;


void zif_spl_classes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_parents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_implements(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_uses(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) void php_spl_object_hash(zval *obj, char* md5str );
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_array.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_iterators.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_iterators.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/php_pcre.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/php_pcre.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/pcrelib/pcre.h" 1
# 324 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/pcrelib/pcre.h"
struct real_pcre;
typedef struct real_pcre pcre;

struct real_pcre16;
typedef struct real_pcre16 pcre16;

struct real_pcre32;
typedef struct real_pcre32 pcre32;

struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;

struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;

struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
# 376 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/pcrelib/pcre.h"
typedef struct pcre_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
} pcre_extra;



typedef struct pcre16_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned short **mark;
  void *executable_jit;
} pcre16_extra;



typedef struct pcre32_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned int **mark;
  void *executable_jit;
} pcre32_extra;






typedef struct pcre_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const char * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned char *mark;

} pcre_callout_block;



typedef struct pcre16_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const unsigned short * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned short *mark;

} pcre16_callout_block;



typedef struct pcre32_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const unsigned int * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

  const unsigned int *mark;

} pcre32_callout_block;
# 489 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/pcrelib/pcre.h"
extern void *(*php_pcre_malloc)(size_t);
extern void (*php_pcre_free)(void *);
extern void *(*php_pcre_stack_malloc)(size_t);
extern void (*php_pcre_stack_free)(void *);
extern int (*php_pcre_callout)(pcre_callout_block *);
extern int (*pcre_stack_guard)(void);

extern void *(*pcre16_malloc)(size_t);
extern void (*pcre16_free)(void *);
extern void *(*pcre16_stack_malloc)(size_t);
extern void (*pcre16_stack_free)(void *);
extern int (*pcre16_callout)(pcre16_callout_block *);
extern int (*pcre16_stack_guard)(void);

extern void *(*pcre32_malloc)(size_t);
extern void (*pcre32_free)(void *);
extern void *(*pcre32_stack_malloc)(size_t);
extern void (*pcre32_stack_free)(void *);
extern int (*pcre32_callout)(pcre32_callout_block *);
extern int (*pcre32_stack_guard)(void);
# 534 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/pcrelib/pcre.h"
typedef pcre_jit_stack *(*pcre_jit_callback)(void *);
typedef pcre16_jit_stack *(*pcre16_jit_callback)(void *);
typedef pcre32_jit_stack *(*pcre32_jit_callback)(void *);



extern pcre *php_pcre_compile(const char *, int, const char **, int *,
                  const unsigned char *);
extern pcre16 *pcre16_compile(const unsigned short *, int, const char **, int *,
                  const unsigned char *);
extern pcre32 *pcre32_compile(const unsigned int *, int, const char **, int *,
                  const unsigned char *);
extern pcre *php_pcre_compile2(const char *, int, int *, const char **,
                  int *, const unsigned char *);
extern pcre16 *pcre16_compile2(const unsigned short *, int, int *, const char **,
                  int *, const unsigned char *);
extern pcre32 *pcre32_compile2(const unsigned int *, int, int *, const char **,
                  int *, const unsigned char *);
extern int php_pcre_config(int, void *);
extern int pcre16_config(int, void *);
extern int pcre32_config(int, void *);
extern int php_pcre_copy_named_substring(const pcre *, const char *,
                  int *, int, const char *, char *, int);
extern int pcre16_copy_named_substring(const pcre16 *, const unsigned short *,
                  int *, int, const unsigned short *, unsigned short *, int);
extern int pcre32_copy_named_substring(const pcre32 *, const unsigned int *,
                  int *, int, const unsigned int *, unsigned int *, int);
extern int php_pcre_copy_substring(const char *, int *, int, int,
                  char *, int);
extern int pcre16_copy_substring(const unsigned short *, int *, int, int,
                  unsigned short *, int);
extern int pcre32_copy_substring(const unsigned int *, int *, int, int,
                  unsigned int *, int);
extern int pcre_dfa_exec(const pcre *, const pcre_extra *,
                  const char *, int, int, int, int *, int , int *, int);
extern int pcre16_dfa_exec(const pcre16 *, const pcre16_extra *,
                  const unsigned short *, int, int, int, int *, int , int *, int);
extern int pcre32_dfa_exec(const pcre32 *, const pcre32_extra *,
                  const unsigned int *, int, int, int, int *, int , int *, int);
extern int php_pcre_exec(const pcre *, const pcre_extra *, const char *,
                   int, int, int, int *, int);
extern int pcre16_exec(const pcre16 *, const pcre16_extra *,
                   const unsigned short *, int, int, int, int *, int);
extern int pcre32_exec(const pcre32 *, const pcre32_extra *,
                   const unsigned int *, int, int, int, int *, int);
extern int pcre_jit_exec(const pcre *, const pcre_extra *,
                   const char *, int, int, int, int *, int,
                   pcre_jit_stack *);
extern int pcre16_jit_exec(const pcre16 *, const pcre16_extra *,
                   const unsigned short *, int, int, int, int *, int,
                   pcre16_jit_stack *);
extern int pcre32_jit_exec(const pcre32 *, const pcre32_extra *,
                   const unsigned int *, int, int, int, int *, int,
                   pcre32_jit_stack *);
extern void php_pcre_free_substring(const char *);
extern void pcre16_free_substring(const unsigned short *);
extern void pcre32_free_substring(const unsigned int *);
extern void php_pcre_free_substring_list(const char **);
extern void pcre16_free_substring_list(const unsigned short * *);
extern void pcre32_free_substring_list(const unsigned int * *);
extern int php_pcre_fullinfo(const pcre *, const pcre_extra *, int,
                  void *);
extern int pcre16_fullinfo(const pcre16 *, const pcre16_extra *, int,
                  void *);
extern int pcre32_fullinfo(const pcre32 *, const pcre32_extra *, int,
                  void *);
extern int php_pcre_get_named_substring(const pcre *, const char *,
                  int *, int, const char *, const char **);
extern int pcre16_get_named_substring(const pcre16 *, const unsigned short *,
                  int *, int, const unsigned short *, const unsigned short * *);
extern int pcre32_get_named_substring(const pcre32 *, const unsigned int *,
                  int *, int, const unsigned int *, const unsigned int * *);
extern int php_pcre_get_stringnumber(const pcre *, const char *);
extern int pcre16_get_stringnumber(const pcre16 *, const unsigned short *);
extern int pcre32_get_stringnumber(const pcre32 *, const unsigned int *);
extern int php_pcre_get_stringtable_entries(const pcre *, const char *,
                  char **, char **);
extern int pcre16_get_stringtable_entries(const pcre16 *, const unsigned short *,
                  unsigned short **, unsigned short **);
extern int pcre32_get_stringtable_entries(const pcre32 *, const unsigned int *,
                  unsigned int **, unsigned int **);
extern int php_pcre_get_substring(const char *, int *, int, int,
                  const char **);
extern int pcre16_get_substring(const unsigned short *, int *, int, int,
                  const unsigned short * *);
extern int pcre32_get_substring(const unsigned int *, int *, int, int,
                  const unsigned int * *);
extern int php_pcre_get_substring_list(const char *, int *, int,
                  const char ***);
extern int pcre16_get_substring_list(const unsigned short *, int *, int,
                  const unsigned short * **);
extern int pcre32_get_substring_list(const unsigned int *, int *, int,
                  const unsigned int * **);
extern const unsigned char *php_pcre_maketables(void);
extern const unsigned char *pcre16_maketables(void);
extern const unsigned char *pcre32_maketables(void);
extern int php_pcre_refcount(pcre *, int);
extern int pcre16_refcount(pcre16 *, int);
extern int pcre32_refcount(pcre32 *, int);
extern pcre_extra *php_pcre_study(const pcre *, int, const char **);
extern pcre16_extra *pcre16_study(const pcre16 *, int, const char **);
extern pcre32_extra *pcre32_study(const pcre32 *, int, const char **);
extern void pcre_free_study(pcre_extra *);
extern void pcre16_free_study(pcre16_extra *);
extern void pcre32_free_study(pcre32_extra *);
extern const char *php_pcre_version(void);
extern const char *pcre16_version(void);
extern const char *pcre32_version(void);


extern int pcre_pattern_to_host_byte_order(pcre *, pcre_extra *,
                  const unsigned char *);
extern int pcre16_pattern_to_host_byte_order(pcre16 *, pcre16_extra *,
                  const unsigned char *);
extern int pcre32_pattern_to_host_byte_order(pcre32 *, pcre32_extra *,
                  const unsigned char *);
extern int pcre16_utf16_to_host_byte_order(unsigned short *,
                  const unsigned short *, int, int *, int);
extern int pcre32_utf32_to_host_byte_order(unsigned int *,
                  const unsigned int *, int, int *, int);



extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern pcre16_jit_stack *pcre16_jit_stack_alloc(int, int);
extern pcre32_jit_stack *pcre32_jit_stack_alloc(int, int);
extern void pcre_jit_stack_free(pcre_jit_stack *);
extern void pcre16_jit_stack_free(pcre16_jit_stack *);
extern void pcre32_jit_stack_free(pcre32_jit_stack *);
extern void pcre_assign_jit_stack(pcre_extra *,
                  pcre_jit_callback, void *);
extern void pcre16_assign_jit_stack(pcre16_extra *,
                  pcre16_jit_callback, void *);
extern void pcre32_assign_jit_stack(pcre32_extra *,
                  pcre32_jit_callback, void *);
extern void pcre_jit_free_unused_memory(void);
extern void pcre16_jit_free_unused_memory(void);
extern void pcre32_jit_free_unused_memory(void);
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/php_pcre.h" 2





# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 50 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 34 "/home/ct584/git/bughunter/repositories/php-src/ext/pcre/php_pcre.h" 2


__attribute__ ((visibility("default"))) char *php_pcre_replace(char *regex, int regex_len, char *subject, int subject_len, zval *replace_val, int is_callable_replace, int *result_len, int limit, int *replace_count );
__attribute__ ((visibility("default"))) pcre* pcre_get_compiled_regex(char *regex, pcre_extra **extra, int *options );
__attribute__ ((visibility("default"))) pcre* pcre_get_compiled_regex_ex(char *regex, pcre_extra **extra, int *preg_options, int *coptions );

extern zend_module_entry pcre_module_entry;


typedef struct {
 pcre *re;
 pcre_extra *extra;
 int preg_options;

 char *locale;
 unsigned const char *tables;

 int compile_options;
 int refcount;
} pcre_cache_entry;

__attribute__ ((visibility("default"))) pcre_cache_entry* pcre_get_compiled_regex_cache(char *regex, int regex_len );

__attribute__ ((visibility("default"))) void php_pcre_match_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 zval *subpats, int global, int use_flags, long flags, long start_offset );

__attribute__ ((visibility("default"))) char *php_pcre_replace_impl(pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 int is_callable_replace, int *result_len, int limit, int *replace_count );

__attribute__ ((visibility("default"))) void php_pcre_split_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 long limit_val, long flags );

__attribute__ ((visibility("default"))) void php_pcre_grep_impl( pcre_cache_entry *pce, zval *input, zval *return_value,
 long flags );

typedef struct _zend_pcre_globals {
 HashTable pcre_cache;
 long backtrack_limit;
 long recursion_limit;
 int error_code;
} zend_pcre_globals;
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_iterators.h" 2
# 36 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_iterators.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveIteratorIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveTreeIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_FilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveFilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ParentIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SeekableIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LimitIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_CachingIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveCachingIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OuterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_IteratorIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_NoRewindIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_InfiniteIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_EmptyIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_AppendIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RegexIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveRegexIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_Countable;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_CallbackFilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveCallbackFilterIterator;

int zm_startup_spl_iterators(int type, int module_number );

void zif_iterator_to_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_apply(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef enum {
 DIT_Default = 0,
 DIT_FilterIterator = DIT_Default,
 DIT_RecursiveFilterIterator = DIT_Default,
 DIT_ParentIterator = DIT_Default,
 DIT_LimitIterator,
 DIT_CachingIterator,
 DIT_RecursiveCachingIterator,
 DIT_IteratorIterator,
 DIT_NoRewindIterator,
 DIT_InfiniteIterator,
 DIT_AppendIterator,

 DIT_RegexIterator,
 DIT_RecursiveRegexIterator,

 DIT_CallbackFilterIterator,
 DIT_RecursiveCallbackFilterIterator,
 DIT_Unknown = ~0
} dual_it_type;

typedef enum {
 RIT_Default = 0,
 RIT_RecursiveIteratorIterator = RIT_Default,
 RIT_RecursiveTreeIterator,
 RIT_Unknow = ~0
} recursive_it_it_type;

enum {

 CIT_CALL_TOSTRING = 0x00000001,
 CIT_TOSTRING_USE_KEY = 0x00000002,
 CIT_TOSTRING_USE_CURRENT = 0x00000004,
 CIT_TOSTRING_USE_INNER = 0x00000008,
 CIT_CATCH_GET_CHILD = 0x00000010,
 CIT_FULL_CACHE = 0x00000100,
 CIT_PUBLIC = 0x0000FFFF,

 CIT_VALID = 0x00010000,
 CIT_HAS_CHILDREN = 0x00020000
};

enum {

 REGIT_USE_KEY = 0x00000001,
 REGIT_INVERTED = 0x00000002
};

typedef enum {
 REGIT_MODE_MATCH,
 REGIT_MODE_GET_MATCH,
 REGIT_MODE_ALL_MATCHES,
 REGIT_MODE_SPLIT,
 REGIT_MODE_REPLACE,
 REGIT_MODE_MAX
} regex_mode;

typedef struct _spl_cbfilter_it_intern {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
} _spl_cbfilter_it_intern;

typedef struct _spl_dual_it_object {
 zend_object std;
 struct {
  zval *zobject;
  zend_class_entry *ce;
  zend_object *object;
  zend_object_iterator *iterator;
 } inner;
 struct {
  zval *data;
  zval *key;
  int pos;
 } current;
 dual_it_type dit_type;
 union {
  struct {
   long offset;
   long count;
  } limit;
  struct {
   long flags;
   zval *zstr;
   zval *zchildren;
   zval *zcache;
  } caching;
  struct {
   zval *zarrayit;
   zend_object_iterator *iterator;
  } append;

  struct {
   int use_flags;
   long flags;
   regex_mode mode;
   long preg_flags;
   pcre_cache_entry *pce;
   char *regex;
   uint regex_len;
  } regex;

  _spl_cbfilter_it_intern *cbfilter;
 } u;
} spl_dual_it_object;

typedef int (*spl_iterator_apply_func_t)(zend_object_iterator *iter, void *puser );

__attribute__ ((visibility("default"))) int spl_iterator_apply(zval *obj, spl_iterator_apply_func_t apply_func, void *puser );
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_array.h" 2

extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ArrayObject;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ArrayIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveArrayIterator;

int zm_startup_spl_array(int type, int module_number );

extern void spl_array_iterator_append(zval *object, zval *append_value );
extern void spl_array_iterator_key(zval *object, zval *return_value );
# 60 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_directory.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_directory.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplFileInfo;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_DirectoryIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_FilesystemIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveDirectoryIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_GlobIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplFileObject;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplTempFileObject;

int zm_startup_spl_directory(int type, int module_number );

typedef enum {
 SPL_FS_INFO,
 SPL_FS_DIR,
 SPL_FS_FILE
} SPL_FS_OBJ_TYPE;

typedef struct _spl_filesystem_object spl_filesystem_object;

typedef void (*spl_foreign_dtor_t)(spl_filesystem_object *object );
typedef void (*spl_foreign_clone_t)(spl_filesystem_object *src, spl_filesystem_object *dst );

__attribute__ ((visibility("default"))) char* spl_filesystem_object_get_path(spl_filesystem_object *intern, int *len );

typedef struct _spl_other_handler {
 spl_foreign_dtor_t dtor;
 spl_foreign_clone_t clone;
} spl_other_handler;


typedef struct {
 zend_object_iterator intern;
 zval *current;
 spl_filesystem_object *object;
} spl_filesystem_iterator;

struct _spl_filesystem_object {
 zend_object std;
 void *oth;
 spl_other_handler *oth_handler;
 char *_path;
 int _path_len;
 char *orig_path;
 char *file_name;
 int file_name_len;
 SPL_FS_OBJ_TYPE type;
 long flags;
 zend_class_entry *file_class;
 zend_class_entry *info_class;
 union {
  struct {
   php_stream *dirp;
   php_stream_dirent entry;
   char *sub_path;
   int sub_path_len;
   int index;
   int is_recursive;
   zend_function *func_rewind;
   zend_function *func_next;
   zend_function *func_valid;
  } dir;
  struct {
   php_stream *stream;
   php_stream_context *context;
   zval *zcontext;
   char *open_mode;
   int open_mode_len;
   zval *current_zval;
   char *current_line;
   size_t current_line_len;
   size_t max_line_len;
   long current_line_num;
   zval zresource;
   zend_function *func_getCurr;
   char delimiter;
   char enclosure;
   char escape;
  } file;
 } u;
 spl_filesystem_iterator it;
};

static inline spl_filesystem_iterator* spl_filesystem_object_to_iterator(spl_filesystem_object *obj)
{
 return &obj->it;
}

static inline spl_filesystem_object* spl_filesystem_iterator_to_object(spl_filesystem_iterator *it)
{
 return (spl_filesystem_object*)((char*)it - __builtin_offsetof (spl_filesystem_object, it));
}
# 61 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_engine.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_engine.h"
__attribute__ ((visibility("default"))) void spl_instantiate(zend_class_entry *pce, zval **object, int alloc );

__attribute__ ((visibility("default"))) long spl_offset_convert_to_long(zval *offset );


static inline int spl_instantiate_arg_ex1(zend_class_entry *pce, zval **retval, int alloc, zval *arg1 )
{
 spl_instantiate(pce, retval, alloc );

 zend_call_method(retval, pce, &pce->constructor, pce->constructor->common.function_name, strlen(pce->constructor->common.function_name), ((void *)0), 1, arg1, ((void *)0) );
 return 0;
}



static inline int spl_instantiate_arg_ex2(zend_class_entry *pce, zval **retval, int alloc, zval *arg1, zval *arg2 )
{
 spl_instantiate(pce, retval, alloc );

 zend_call_method(retval, pce, &pce->constructor, pce->constructor->common.function_name, strlen(pce->constructor->common.function_name), ((void *)0), 2, arg1, arg2 );
 return 0;
}



static inline void spl_instantiate_arg_n(zend_class_entry *pce, zval **retval, int argc, zval ***argv )
{
 zend_function *func = pce->constructor;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval *dummy;
 zval z_name;

 spl_instantiate(pce, retval, 0 );

 do { const char *__s=(func->common.function_name); zval *__z = (&z_name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (0?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 fci.size = sizeof(zend_fcall_info);
 fci.function_table = &pce->function_table;
 fci.function_name = &z_name;
 fci.object_ptr = *retval;
 fci.symbol_table = ((void *)0);
 fci.retval_ptr_ptr = &dummy;
 fci.param_count = argc;
 fci.params = argv;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = func;
 fcc.calling_scope = (executor_globals.scope);
 fcc.called_scope = pce;
 fcc.object_ptr = *retval;

 zend_call_function(&fci, &fcc );

 _zval_ptr_dtor((&dummy) );
}
# 62 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_exceptions.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_exceptions.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LogicException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_BadFunctionCallException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_BadMethodCallException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_DomainException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_InvalidArgumentException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LengthException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OutOfRangeException;

extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RuntimeException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OutOfBoundsException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OverflowException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RangeException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_UnderflowException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_UnexpectedValueException;

int zm_startup_spl_exceptions(int type, int module_number );
# 63 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/spl/spl_iterators.h" 1
# 64 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/php_phar.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/php_phar.h"
extern zend_module_entry phar_module_entry;
# 37 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/php_phar.h"
__attribute__ ((visibility("default"))) int phar_resolve_alias(char *alias, int alias_len, char **filename, int *filename_len );
# 66 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2




# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash_types.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash_types.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash_types.h" 2






typedef unsigned long php_hash_uint64;

typedef unsigned int php_hash_uint32;
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash.h" 2







typedef void (*php_hash_init_func_t)(void *context);
typedef void (*php_hash_update_func_t)(void *context, const unsigned char *buf, unsigned int count);
typedef void (*php_hash_final_func_t)(unsigned char *digest, void *context);
typedef int (*php_hash_copy_func_t)(const void *ops, void *orig_context, void *dest_context);

typedef struct _php_hash_ops {
 php_hash_init_func_t hash_init;
 php_hash_update_func_t hash_update;
 php_hash_final_func_t hash_final;
 php_hash_copy_func_t hash_copy;

 int digest_size;
 int block_size;
 int context_size;
} php_hash_ops;

typedef struct _php_hash_data {
 const php_hash_ops *ops;
 void *context;

 long options;
 unsigned char *key;
} php_hash_data;

extern const php_hash_ops php_hash_md2_ops;
extern const php_hash_ops php_hash_md4_ops;
extern const php_hash_ops php_hash_md5_ops;
extern const php_hash_ops php_hash_sha1_ops;
extern const php_hash_ops php_hash_sha224_ops;
extern const php_hash_ops php_hash_sha256_ops;
extern const php_hash_ops php_hash_sha384_ops;
extern const php_hash_ops php_hash_sha512_ops;
extern const php_hash_ops php_hash_ripemd128_ops;
extern const php_hash_ops php_hash_ripemd160_ops;
extern const php_hash_ops php_hash_ripemd256_ops;
extern const php_hash_ops php_hash_ripemd320_ops;
extern const php_hash_ops php_hash_whirlpool_ops;
extern const php_hash_ops php_hash_3tiger128_ops;
extern const php_hash_ops php_hash_3tiger160_ops;
extern const php_hash_ops php_hash_3tiger192_ops;
extern const php_hash_ops php_hash_4tiger128_ops;
extern const php_hash_ops php_hash_4tiger160_ops;
extern const php_hash_ops php_hash_4tiger192_ops;
extern const php_hash_ops php_hash_snefru_ops;
extern const php_hash_ops php_hash_gost_ops;
extern const php_hash_ops php_hash_adler32_ops;
extern const php_hash_ops php_hash_crc32_ops;
extern const php_hash_ops php_hash_crc32b_ops;
extern const php_hash_ops php_hash_fnv132_ops;
extern const php_hash_ops php_hash_fnv164_ops;
extern const php_hash_ops php_hash_joaat_ops;



extern const php_hash_ops php_hash_3haval128_ops;
extern const php_hash_ops php_hash_3haval160_ops;
extern const php_hash_ops php_hash_3haval192_ops;
extern const php_hash_ops php_hash_3haval224_ops;
extern const php_hash_ops php_hash_3haval256_ops;

extern const php_hash_ops php_hash_4haval128_ops;
extern const php_hash_ops php_hash_4haval160_ops;
extern const php_hash_ops php_hash_4haval192_ops;
extern const php_hash_ops php_hash_4haval224_ops;
extern const php_hash_ops php_hash_4haval256_ops;

extern const php_hash_ops php_hash_5haval128_ops;
extern const php_hash_ops php_hash_5haval160_ops;
extern const php_hash_ops php_hash_5haval192_ops;
extern const php_hash_ops php_hash_5haval224_ops;
extern const php_hash_ops php_hash_5haval256_ops;

extern zend_module_entry hash_module_entry;
# 120 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash.h"
void zif_hash(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_hmac(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_hmac_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_init(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update_stream(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_final(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_algos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_pbkdf2(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) const php_hash_ops *php_hash_fetch_ops(const char *algo, int algo_len);
__attribute__ ((visibility("default"))) void php_hash_register_algo(const char *algo, const php_hash_ops *ops);
__attribute__ ((visibility("default"))) int php_hash_copy(const void *ops, void *orig_context, void *dest_context);

static inline void php_hash_bin2hex(char *out, const unsigned char *in, int in_len)
{
 static const char hexits[17] = "0123456789abcdef";
 int i;

 for(i = 0; i < in_len; i++) {
  out[i * 2] = hexits[in[i] >> 4];
  out[(i * 2) + 1] = hexits[in[i] & 0x0F];
 }
}
# 71 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash_sha.h" 1
# 54 "/home/ct584/git/bughunter/repositories/php-src/ext/hash/php_hash_sha.h"
typedef struct {
 php_hash_uint32 state[8];
 php_hash_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA224_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA224Init(PHP_SHA224_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA224Update(PHP_SHA224_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA224Final(unsigned char[28], PHP_SHA224_CTX *);


typedef struct {
 php_hash_uint32 state[8];
 php_hash_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA256_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA256Init(PHP_SHA256_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA256Update(PHP_SHA256_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA256Final(unsigned char[32], PHP_SHA256_CTX *);


typedef struct {
 php_hash_uint64 state[8];
 php_hash_uint64 count[2];
 unsigned char buffer[128];
} PHP_SHA384_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA384Init(PHP_SHA384_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA384Update(PHP_SHA384_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA384Final(unsigned char[48], PHP_SHA384_CTX *);


typedef struct {
 php_hash_uint64 state[8];
 php_hash_uint64 count[2];
 unsigned char buffer[128];
} PHP_SHA512_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA512Init(PHP_SHA512_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA512Update(PHP_SHA512_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA512Final(unsigned char[64], PHP_SHA512_CTX *);
# 72 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2
# 151 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h"
typedef struct _phar_entry_fp phar_entry_fp;
typedef struct _phar_archive_data phar_archive_data;

typedef struct _zend_phar_globals {


 HashTable phar_persist_map;
 HashTable phar_fname_map;

 phar_entry_fp *cached_fp;
 HashTable phar_alias_map;
 int phar_SERVER_mung_list;
 int readonly;
 char* cache_list;
 int manifest_cached;
 int persist;
 int has_zlib;
 int has_bz2;
 zend_bool readonly_orig;
 zend_bool require_hash_orig;
 zend_bool intercepted;
 int request_init;
 int require_hash;
 int request_done;
 int request_ends;
 void (*orig_fopen)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_file_get_contents)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_file)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_link)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_dir)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_opendir)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_file_exists)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileperms)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileinode)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filesize)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileowner)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filegroup)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileatime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filemtime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filectime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filetype)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_writable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_readable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_executable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_lstat)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_readfile)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_stat)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

 char* cwd;
 int cwd_len;
 int cwd_init;
 char *openssl_privatekey;
 int openssl_privatekey_len;

 char* last_phar_name;
 int last_phar_name_len;
 char* last_alias;
 int last_alias_len;
 phar_archive_data* last_phar;
 HashTable mime_types;
} zend_phar_globals;

extern zend_phar_globals phar_globals;
# 231 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/pharzip.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/pharzip.h"
typedef struct _phar_zip_file_header {
 char signature[4];
 char zipversion[2];
 char flags[2];
 char compressed[2];
 char timestamp[2];
 char datestamp[2];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
 char filename_len[2];
 char extra_len[2];


} phar_zip_file_header;


typedef struct _phar_zip_file_datadesc {
 char signature[4];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
} phar_zip_data_desc;


typedef struct _phar_zip_file_datadesc_zip64 {
 char crc32[4];
 char compsize[4];
 char compsize2[4];
 char uncompsize[4];
 char uncompsize2[4];
} phar_zip_data_desc_zip64;

typedef struct _phar_zip_archive_extra_data_record {
 char signature[4];
 char len[4];

} phar_zip_archive_extra_data_record;
# 135 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/pharzip.h"
typedef struct _phar_zip_extra_field_header {
 char tag[2];
 char size[2];
} phar_zip_extra_field_header;

typedef struct _phar_zip_unix3 {
 char tag[2];
 char size[2];
 char crc32[4];
 char perms[2];
 char symlinksize[4];
 char uid[2];
 char gid[2];

} phar_zip_unix3;

typedef struct _phar_zip_central_dir_file {
 char signature[4];
 char madeby[2];
 char zipversion[2];
 char flags[2];
 char compressed[2];
 char timestamp[2];
 char datestamp[2];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
 char filename_len[2];
 char extra_len[2];
 char comment_len[2];
 char disknumber[2];
 char internal_atts[2];
 char external_atts[4];
 char offset[4];




} phar_zip_central_dir_file;

typedef struct _phar_zip_dir_signature {
 char signature[4];
 char size[2];
} phar_zip_dir_signature;


typedef struct _phar_zip64_dir_end {
 char signature[4];

 char size1[4];

 char size2[4];
 char madeby[2];
 char extractneeded[2];
 char disknum[4];
 char cdir_num[4];

 char entries1[4];

 char entries2[4];
 char entriestotal1[4];

 char entriestotal2[4];
 char cdirsize1[4];
 char cdirsize2[4];
 char offset1[4];


 char offset2[4];

} phar_zip64_dir_end;


typedef struct _phar_zip64_dir_locator {
 char signature[4];

 char disknum[4];


 char diroffset1[4];

 char diroffset2[4];
 char totaldisks[4];
} phar_zip64_dir_locator;

typedef struct _phar_zip_dir_end {
 char signature[4];
 char disknumber[2];
 char centraldisk[2];

 char counthere[2];

 char count[2];

 char cdir_size[4];
 char cdir_offset[4];


 char comment_len[2];

} phar_zip_dir_end;
# 232 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h" 2


typedef union _phar_archive_object phar_archive_object;
typedef union _phar_entry_object phar_entry_object;





enum phar_fp_type {

 PHAR_FP,

 PHAR_UFP,

 PHAR_MOD,


 PHAR_TMP
};


typedef struct _phar_entry_info {

 php_uint32 uncompressed_filesize;
 php_uint32 timestamp;
 php_uint32 compressed_filesize;
 php_uint32 crc32;
 php_uint32 flags;


 php_uint32 old_flags;
 zval *metadata;
 int metadata_len;
 php_uint32 filename_len;
 char *filename;
 enum phar_fp_type fp_type;

 long offset_abs;

 long offset;

 long header_offset;
 php_stream *fp;
 php_stream *cfp;
 int fp_refcount;
 char *tmp;
 phar_archive_data *phar;
 smart_str metadata_str;
 char *link;
 char tar_type;

 uint manifest_pos;

 unsigned short inode;

 unsigned int is_crc_checked:1;
 unsigned int is_modified:1;
 unsigned int is_deleted:1;
 unsigned int is_dir:1;


 unsigned int is_mounted:1;

 unsigned int is_temp_dir:1;

 unsigned int is_tar:1;

 unsigned int is_zip:1;

 unsigned int is_persistent:1;
} phar_entry_info;


struct _phar_archive_data {
 char *fname;
 int fname_len;

 char *ext;
 int ext_len;
 char *alias;
 int alias_len;
 char version[12];
 size_t internal_file_start;
 size_t halt_offset;
 HashTable manifest;

 HashTable virtual_dirs;

 HashTable mounted_dirs;
 php_uint32 flags;
 php_uint32 min_timestamp;
 php_uint32 max_timestamp;
 php_stream *fp;

 php_stream *ufp;
 int refcount;
 php_uint32 sig_flags;
 int sig_len;
 char *signature;
 zval *metadata;
 int metadata_len;
 uint phar_pos;

 unsigned int is_temporary_alias:1;
 unsigned int is_modified:1;
 unsigned int is_writeable:1;
 unsigned int is_brandnew:1;

 unsigned int donotflush:1;

 unsigned int is_zip:1;

 unsigned int is_tar:1;

 unsigned int is_data:1;

 unsigned int is_persistent:1;
};

typedef struct _phar_entry_fp_info {
 enum phar_fp_type fp_type;

 long offset;
} phar_entry_fp_info;

struct _phar_entry_fp {
 php_stream *fp;
 php_stream *ufp;
 phar_entry_fp_info *manifest;
};

static inline php_stream *phar_get_entrypfp(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->phar->fp;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].fp;
}

static inline php_stream *phar_get_entrypufp(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->phar->ufp;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].ufp;
}

static inline void phar_set_entrypfp(phar_entry_info *entry, php_stream *fp )
{
 if (!entry->phar->is_persistent) {
  entry->phar->fp = fp;
  return;
 }

 (&phar_globals)->cached_fp[entry->phar->phar_pos].fp = fp;
}

static inline void phar_set_entrypufp(phar_entry_info *entry, php_stream *fp )
{
 if (!entry->phar->is_persistent) {
  entry->phar->ufp = fp;
  return;
 }

 (&phar_globals)->cached_fp[entry->phar->phar_pos].ufp = fp;
}

static inline php_stream *phar_get_pharfp(phar_archive_data *phar )
{
 if (!phar->is_persistent) {
  return phar->fp;
 }
 return (&phar_globals)->cached_fp[phar->phar_pos].fp;
}

static inline php_stream *phar_get_pharufp(phar_archive_data *phar )
{
 if (!phar->is_persistent) {
  return phar->ufp;
 }
 return (&phar_globals)->cached_fp[phar->phar_pos].ufp;
}

static inline void phar_set_pharfp(phar_archive_data *phar, php_stream *fp )
{
 if (!phar->is_persistent) {
  phar->fp = fp;
  return;
 }

 (&phar_globals)->cached_fp[phar->phar_pos].fp = fp;
}

static inline void phar_set_pharufp(phar_archive_data *phar, php_stream *fp )
{
 if (!phar->is_persistent) {
  phar->ufp = fp;
  return;
 }

 (&phar_globals)->cached_fp[phar->phar_pos].ufp = fp;
}

static inline void phar_set_fp_type(phar_entry_info *entry, enum phar_fp_type type, off_t offset )
{
 phar_entry_fp_info *data;

 if (!entry->is_persistent) {
  entry->fp_type = type;
  entry->offset = offset;
  return;
 }
 data = &((&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos]);
 data->fp_type = type;
 data->offset = offset;
}

static inline enum phar_fp_type phar_get_fp_type(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->fp_type;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].fp_type;
}

static inline off_t phar_get_fp_offset(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->offset;
 }
 if ((&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].fp_type == PHAR_FP) {
  if (!(&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset) {
   (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset = entry->offset;
  }
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset;
}





typedef struct _phar_mime_type {
 char *mime;
 int len;

 char type;
} phar_mime_type;


typedef struct _phar_entry_data {
 phar_archive_data *phar;
 php_stream *fp;

 off_t position;

 off_t zero;
 unsigned int for_write:1;
 unsigned int is_zip:1;
 unsigned int is_tar:1;
 phar_entry_info *internal_file;
} phar_entry_data;



union _phar_archive_object {
 zend_object std;
 spl_filesystem_object spl;
 struct {
  zend_object std;
  phar_archive_data *archive;
 } arc;
};




union _phar_entry_object {
 zend_object std;
 spl_filesystem_object spl;
 struct {
  zend_object std;
  phar_entry_info *entry;
 } ent;
};



extern char *(*phar_save_resolve_path)(const char *filename, int filename_len );




typedef char *phar_zstr;







# 553 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_internal.h"
static inline int phar_validate_alias(const char *alias, int alias_len)
{
 return !(memchr(alias, '/', alias_len) || memchr(alias, '\\', alias_len) || memchr(alias, ':', alias_len) ||
  memchr(alias, ';', alias_len) || memchr(alias, '\n', alias_len) || memchr(alias, '\r', alias_len));
}


static inline void phar_set_inode(phar_entry_info *entry )
{
 char tmp[4096];
 int tmp_len;
 size_t len1, len2;

 tmp_len = (((4096)<(entry->filename_len + entry->phar->fname_len))?(4096):(entry->filename_len + entry->phar->fname_len));

 len1 = (((entry->phar->fname_len)<(tmp_len))?(entry->phar->fname_len):(tmp_len));
 memcpy(tmp, entry->phar->fname, len1);

 len2 = (((tmp_len - len1)<(entry->filename_len))?(tmp_len - len1):(entry->filename_len));
 memcpy(tmp + len1, entry->filename, len2);

 entry->inode = (unsigned short)zend_get_hash_value(tmp, tmp_len);
}


void phar_request_initialize(void);

void phar_object_init(void);
void phar_destroy_phar_data(phar_archive_data *phar );

int phar_open_entry_file(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_postprocess_file(phar_entry_data *idata, php_uint32 crc32, char **error, int process_zip );
int phar_open_from_filename(char *fname, int fname_len, char *alias, int alias_len, int options, phar_archive_data** pphar, char **error );
int phar_open_or_create_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_create_or_parse_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_open_executed_filename(char *alias, int alias_len, char **error );
int phar_free_alias(phar_archive_data *phar, char *alias, int alias_len );
int phar_get_archive(phar_archive_data **archive, char *fname, int fname_len, char *alias, int alias_len, char **error );
int phar_open_parsed_phar(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_verify_signature(php_stream *fp, size_t end_of_phar, php_uint32 sig_type, char *sig, int sig_len, char *fname, char **signature, int *signature_len, char **error );
int phar_create_signature(phar_archive_data *phar, php_stream *fp, char **signature, int *signature_length, char **error );


char *phar_create_default_stub(const char *index_php, const char *web_index, size_t *len, char **error );
char *phar_decompress_filter(phar_entry_info * entry, int return_unknown);
char *phar_compress_filter(phar_entry_info * entry, int return_unknown);

void phar_remove_virtual_dirs(phar_archive_data *phar, char *filename, int filename_len );
void phar_add_virtual_dirs(phar_archive_data *phar, char *filename, int filename_len );
int phar_mount_entry(phar_archive_data *phar, char *filename, int filename_len, char *path, int path_len );
char *phar_find_in_include_path(char *file, int file_len, phar_archive_data **pphar );
char *phar_fix_filepath(char *path, int *new_len, int use_cwd );
phar_entry_info * phar_open_jit(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_parse_metadata(char **buffer, zval **metadata, php_uint32 zip_metadata_len );
void destroy_phar_manifest_entry(void *pDest);
int phar_seek_efp(phar_entry_info *entry, off_t offset, int whence, off_t position, int follow_links );
php_stream *phar_get_efp(phar_entry_info *entry, int follow_links );
int phar_copy_entry_fp(phar_entry_info *source, phar_entry_info *dest, char **error );
int phar_open_entry_fp(phar_entry_info *entry, char **error, int follow_links );
phar_entry_info *phar_get_link_source(phar_entry_info *entry );
int phar_create_writeable_entry(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_separate_entry_fp(phar_entry_info *entry, char **error );
int phar_open_archive_fp(phar_archive_data *phar );
int phar_copy_on_write(phar_archive_data **pphar );


int phar_is_tar(char *buf, char *fname);
int phar_parse_tarfile(php_stream* fp, char *fname, int fname_len, char *alias, int alias_len, phar_archive_data** pphar, int is_data, php_uint32 compression, char **error );
int phar_open_or_create_tar(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_tar_flush(phar_archive_data *phar, char *user_stub, long len, int defaultstub, char **error );


int phar_parse_zipfile(php_stream *fp, char *fname, int fname_len, char *alias, int alias_len, phar_archive_data** pphar, char **error );
int phar_open_or_create_zip(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_zip_flush(phar_archive_data *archive, char *user_stub, long len, int defaultstub, char **error );





extern HashTable cached_phars;
extern HashTable cached_alias;


int phar_archive_delref(phar_archive_data *phar );
int phar_entry_delref(phar_entry_data *idata );

phar_entry_info *phar_get_entry_info(phar_archive_data *phar, char *path, int path_len, char **error, int security );
phar_entry_info *phar_get_entry_info_dir(phar_archive_data *phar, char *path, int path_len, char dir, char **error, int security );
phar_entry_data *phar_get_or_create_entry_data(char *fname, int fname_len, char *path, int path_len, char *mode, char allow_dir, char **error, int security );
int phar_get_entry_data(phar_entry_data **ret, char *fname, int fname_len, char *path, int path_len, char *mode, char allow_dir, char **error, int security );
int phar_flush(phar_archive_data *archive, char *user_stub, long len, int convert, char **error );
int phar_detect_phar_fname_ext(const char *filename, int filename_len, const char **ext_str, int *ext_len, int executable, int for_create, int is_complete );
int phar_split_fname(char *filename, int filename_len, char **arch, int *arch_len, char **entry, int *entry_len, int executable, int for_create );

typedef enum {
 pcr_use_query,
 pcr_is_ok,
 pcr_err_double_slash,
 pcr_err_up_dir,
 pcr_err_curr_dir,
 pcr_err_back_slash,
 pcr_err_star,
 pcr_err_illegal_char,
 pcr_err_empty_entry
} phar_path_check_result;

phar_path_check_result phar_path_check(char **p, int *len, const char **error);


# 23 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/func_interceptors.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/func_interceptors.h"

void phar_intercept_functions(void);
void phar_release_functions(void);
void phar_intercept_functions_init(void);
void phar_intercept_functions_shutdown(void);
void phar_save_orig_functions(void);
void phar_restore_orig_functions(void);

# 24 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c" 2

static zend_class_entry *phar_ce_archive;
static zend_class_entry *phar_ce_data;
static zend_class_entry *phar_ce_PharException;


static zend_class_entry *phar_ce_entry;
# 39 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
static int phar_file_type(HashTable *mimes, char *file, char **mime_type )
{
 char *ext;
 phar_mime_type *mime;
 ext = strrchr(file, '.');
 if (!ext) {
  *mime_type = "text/plain";

  return '\2';
 }
 ++ext;
 if (SUCCESS != zend_hash_find(mimes, ext, strlen(ext), (void **) &mime)) {
  *mime_type = "application/octet-stream";
  return '\2';
 }
 *mime_type = mime->mime;
 return mime->type;
}


static void phar_mung_server_vars(char *fname, char *entry, int entry_len, char *basename, int request_uri_len )
{
 HashTable *_SERVER;
 zval **stuff;
 char *path_info;
 int basename_len = strlen(basename);
 int code;
 zval *temp;


 if (!(core_globals.http_globals)[3]) {
  return;
 }

 _SERVER = (*(core_globals.http_globals)[3]).value.ht;


 if (SUCCESS == zend_hash_find(_SERVER, "PATH_INFO", sizeof("PATH_INFO"), (void **) &stuff)) {
  path_info = (**stuff).value.str.val;
  code = (**stuff).value.str.len;

  if ((**stuff).value.str.len > entry_len && !memcmp((**stuff).value.str.val, entry, entry_len)) {
   do { const char *__s=((**stuff).value.str.val + entry_len); int __l=request_uri_len; zval *__z = (*stuff); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

   do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
   do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

   _zend_hash_add_or_update(_SERVER, "PHAR_PATH_INFO", sizeof("PHAR_PATH_INFO"), &temp, sizeof(zval **), ((void *)0), (1<<0) );
  }
 }

 if (SUCCESS == zend_hash_find(_SERVER, "PATH_TRANSLATED", sizeof("PATH_TRANSLATED"), (void **) &stuff)) {
  path_info = (**stuff).value.str.val;
  code = (**stuff).value.str.len;
  (**stuff).value.str.len = spprintf(&((**stuff).value.str.val), 4096, "phar://%s%s", fname, entry);

  do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
  do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

  _zend_hash_add_or_update(_SERVER, "PHAR_PATH_TRANSLATED", sizeof("PHAR_PATH_TRANSLATED"), (void *) &temp, sizeof(zval **), ((void *)0), (1<<0) );
 }

 if (!(&phar_globals)->phar_SERVER_mung_list) {
  return;
 }

 if ((&phar_globals)->phar_SERVER_mung_list & (1<<1)) {
  if (SUCCESS == zend_hash_find(_SERVER, "REQUEST_URI", sizeof("REQUEST_URI"), (void **) &stuff)) {
   path_info = (**stuff).value.str.val;
   code = (**stuff).value.str.len;

   if ((**stuff).value.str.len > basename_len && !memcmp((**stuff).value.str.val, basename, basename_len)) {
    do { const char *__s=((**stuff).value.str.val + basename_len); int __l=(**stuff).value.str.len - basename_len; zval *__z = (*stuff); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

    do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
    do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

    _zend_hash_add_or_update(_SERVER, "PHAR_REQUEST_URI", sizeof("PHAR_REQUEST_URI"), (void *) &temp, sizeof(zval **), ((void *)0), (1<<0) );
   }
  }
 }

 if ((&phar_globals)->phar_SERVER_mung_list & (1<<0)) {
  if (SUCCESS == zend_hash_find(_SERVER, "PHP_SELF", sizeof("PHP_SELF"), (void **) &stuff)) {
   path_info = (**stuff).value.str.val;
   code = (**stuff).value.str.len;

   if ((**stuff).value.str.len > basename_len && !memcmp((**stuff).value.str.val, basename, basename_len)) {
    do { const char *__s=((**stuff).value.str.val + basename_len); int __l=(**stuff).value.str.len - basename_len; zval *__z = (*stuff); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

    do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
    do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

    _zend_hash_add_or_update(_SERVER, "PHAR_PHP_SELF", sizeof("PHAR_PHP_SELF"), (void *) &temp, sizeof(zval **), ((void *)0), (1<<0) );
   }
  }
 }

 if ((&phar_globals)->phar_SERVER_mung_list & (1<<2)) {
  if (SUCCESS == zend_hash_find(_SERVER, "SCRIPT_NAME", sizeof("SCRIPT_NAME"), (void **) &stuff)) {
   path_info = (**stuff).value.str.val;
   code = (**stuff).value.str.len;
   do { const char *__s=(entry); int __l=entry_len; zval *__z = (*stuff); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

   do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
   do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

   _zend_hash_add_or_update(_SERVER, "PHAR_SCRIPT_NAME", sizeof("PHAR_SCRIPT_NAME"), (void *) &temp, sizeof(zval **), ((void *)0), (1<<0) );
  }
 }

 if ((&phar_globals)->phar_SERVER_mung_list & (1<<3)) {
  if (SUCCESS == zend_hash_find(_SERVER, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME"), (void **) &stuff)) {
   path_info = (**stuff).value.str.val;
   code = (**stuff).value.str.len;
   (**stuff).value.str.len = spprintf(&((**stuff).value.str.val), 4096, "phar://%s%s", fname, entry);

   do { (temp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(temp))->u.buffered = ((void *)0); } while (0); (temp)->refcount__gc = 1; (temp)->is_ref__gc = 0;;;
   do { const char *__s=(path_info); int __l=code; zval *__z = (temp); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

   _zend_hash_add_or_update(_SERVER, "PHAR_SCRIPT_FILENAME", sizeof("PHAR_SCRIPT_FILENAME"), (void *) &temp, sizeof(zval **), ((void *)0), (1<<0) );
  }
 }
}


static int phar_file_action(phar_archive_data *phar, phar_entry_info *info, char *mime_type, int code, char *entry, int entry_len, char *arch, char *basename, char *ru, int ru_len )
{
 char *name = ((void *)0), buf[8192];
 const char *cwd;
 zend_syntax_highlighter_ini syntax_highlighter_ini;
 sapi_header_line ctr = {0};
 size_t got;
 int dummy = 1, name_len;
 zend_file_handle file_handle;
 zend_op_array *new_op_array;
 zval *result = ((void *)0);
 php_stream *fp;
 off_t position;

 switch (code) {
  case '\1':
   _efree((basename) );

   if (entry[0] == '/') {
    name_len = spprintf(&name, 4096, "phar://%s%s", arch, entry);
   } else {
    name_len = spprintf(&name, 4096, "phar://%s/%s", arch, entry);
   }
   php_get_highlight_struct(&syntax_highlighter_ini);

   highlight_file(name, &syntax_highlighter_ini );

   _efree((name) );



   _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 196);
  case '\2':

   _efree((basename) );
   ctr.line_len = spprintf(&(ctr.line), 0, "Content-type: %s", mime_type);
   sapi_header_op(SAPI_HEADER_REPLACE, &ctr );
   _efree((ctr.line) );
   ctr.line_len = spprintf(&(ctr.line), 0, "Content-length: %u", info->uncompressed_filesize);
   sapi_header_op(SAPI_HEADER_REPLACE, &ctr );
   _efree((ctr.line) );

   if (FAILURE == sapi_send_headers()) {
    _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 208);
   }


   fp = phar_get_efp(info, 1 );

   if (!fp) {
    char *error;
    if (!phar_open_jit(phar, info, &error )) {
     if (error) {
      zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
      _efree((error) );
     }
     return -1;
    }
    fp = phar_get_efp(info, 1 );
   }
   position = 0;
   phar_seek_efp(info, 0, 0, 0, 1 );

   do {
    got = _php_stream_read((fp), (buf), ((((8192)<(info->uncompressed_filesize - position))?(8192):(info->uncompressed_filesize - position))) );
    if (got > 0) {
     php_output_write((buf), (got) );
     position += got;
     if (position == (off_t) info->uncompressed_filesize) {
      break;
     }
    }
   } while (1);

   _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 239);
  case '\0':
   if (basename) {
    phar_mung_server_vars(arch, entry, entry_len, basename, ru_len );
    _efree((basename) );
   }

   if (entry[0] == '/') {
    name_len = spprintf(&name, 4096, "phar://%s%s", arch, entry);
   } else {
    name_len = spprintf(&name, 4096, "phar://%s/%s", arch, entry);
   }

   file_handle.type = ZEND_HANDLE_FILENAME;
   file_handle.handle.fd = 0;
   file_handle.filename = name;
   file_handle.opened_path = ((void *)0);
   file_handle.free_filename = 0;

   (phar_globals.cwd) = ((void *)0);
   (phar_globals.cwd_len) = 0;

   if (_zend_hash_add_or_update(&(executor_globals.included_files), name, name_len+1, (void *)&dummy, sizeof(int), ((void *)0), (1<<1) ) == SUCCESS) {
    if ((cwd = zend_memrchr(entry, '/', entry_len))) {
     (phar_globals.cwd_init) = 1;
     if (entry == cwd) {

      (phar_globals.cwd_len) = 0;
      (phar_globals.cwd) = ((void *)0);
     } else if (entry[0] == '/') {
      (phar_globals.cwd_len) = cwd - (entry + 1);
      (phar_globals.cwd) = _estrndup((entry + 1), ((phar_globals.cwd_len)) );
     } else {
      (phar_globals.cwd_len) = cwd - entry;
      (phar_globals.cwd) = _estrndup((entry), ((phar_globals.cwd_len)) );
     }
    }

    new_op_array = zend_compile_file(&file_handle, (1<<3) );

    if (!new_op_array) {
     zend_hash_del_key_or_index(&(executor_globals.included_files), name, name_len+1, 0, 0);
    }

    zend_destroy_file_handle(&file_handle );

   } else {
    _efree((name) );
    new_op_array = ((void *)0);
   }



   if (new_op_array) {
    (executor_globals.return_value_ptr_ptr) = &result;
    (executor_globals.active_op_array) = new_op_array;

    { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
     zend_execute(new_op_array );
     if ((phar_globals.cwd)) {
      _efree(((phar_globals.cwd)) );
      (phar_globals.cwd) = ((void *)0);
      (phar_globals.cwd_len) = 0;
     }

     (phar_globals.cwd_init) = 0;
     _efree((name) );
     destroy_op_array(new_op_array );
     _efree((new_op_array) );


     if ((executor_globals.return_value_ptr_ptr) && *(executor_globals.return_value_ptr_ptr)) {
      _zval_ptr_dtor(((executor_globals.return_value_ptr_ptr)) );
     }
    } } else { (executor_globals.bailout) = __orig_bailout; {
     if ((phar_globals.cwd)) {
      _efree(((phar_globals.cwd)) );
      (phar_globals.cwd) = ((void *)0);
      (phar_globals.cwd_len) = 0;
     }

     (phar_globals.cwd_init) = 0;
     _efree((name) );
    } } (executor_globals.bailout) = __orig_bailout; };

    _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 324);
   }

   return '\0';
 }
 return -1;
}


static void phar_do_403(char *entry, int entry_len )
{
 sapi_header_line ctr = {0};

 ctr.response_code = 403;
 ctr.line_len = sizeof("HTTP/1.0 403 Access Denied")-1;
 ctr.line = "HTTP/1.0 403 Access Denied";
 sapi_header_op(SAPI_HEADER_REPLACE, &ctr );
 sapi_send_headers();
 php_output_write(("<html>\n <head>\n  <title>Access Denied</title>\n </head>\n <body>\n  <h1>403 - File "), (sizeof("<html>\n <head>\n  <title>Access Denied</title>\n </head>\n <body>\n  <h1>403 - File ") - 1) );
 php_output_write((entry), (entry_len) );
 php_output_write((" Access Denied</h1>\n </body>\n</html>"), (sizeof(" Access Denied</h1>\n </body>\n</html>") - 1) );
}


static void phar_do_404(phar_archive_data *phar, char *fname, int fname_len, char *f404, int f404_len, char *entry, int entry_len )
{
 sapi_header_line ctr = {0};
 phar_entry_info *info;

 if (phar && f404_len) {
  info = phar_get_entry_info(phar, f404, f404_len, ((void *)0), 1 );

  if (info) {
   phar_file_action(phar, info, "text/html", '\0', f404, f404_len, fname, ((void *)0), ((void *)0), 0 );
   return;
  }
 }

 ctr.response_code = 404;
 ctr.line_len = sizeof("HTTP/1.0 404 Not Found")-1;
 ctr.line = "HTTP/1.0 404 Not Found";
 sapi_header_op(SAPI_HEADER_REPLACE, &ctr );
 sapi_send_headers();
 php_output_write(("<html>\n <head>\n  <title>File Not Found</title>\n </head>\n <body>\n  <h1>404 - File "), (sizeof("<html>\n <head>\n  <title>File Not Found</title>\n </head>\n <body>\n  <h1>404 - File ") - 1) );
 php_output_write((entry), (entry_len) );
 php_output_write((" Not Found</h1>\n </body>\n</html>"), (sizeof(" Not Found</h1>\n </body>\n</html>") - 1) );
}





static void phar_postprocess_ru_web(char *fname, int fname_len, char **entry, int *entry_len, char **ru, int *ru_len )
{
 char *e = *entry + 1, *u = ((void *)0), *u1 = ((void *)0), *saveu = ((void *)0);
 int e_len = *entry_len - 1, u_len = 0;
 phar_archive_data **pphar = ((void *)0);


 zend_hash_find(&((&phar_globals)->phar_fname_map), fname, fname_len, (void **) &pphar);

 if (!pphar && (phar_globals.manifest_cached)) {
  zend_hash_find(&cached_phars, fname, fname_len, (void **) &pphar);
 }

 do {
  if (zend_hash_exists(&((*pphar)->manifest), e, e_len)) {
   if (u) {
    u[0] = '/';
    *ru = _estrndup((u), (u_len+1) );
    ++u_len;
    u[0] = '\0';
   } else {
    *ru = ((void *)0);
   }
   *ru_len = u_len;
   *entry_len = e_len + 1;
   return;
  }

  if (u) {
   u1 = strrchr(e, '/');
   u[0] = '/';
   saveu = u;
   e_len += u_len + 1;
   u = u1;
   if (!u) {
    return;
   }
  } else {
   u = strrchr(e, '/');
   if (!u) {
    if (saveu) {
     saveu[0] = '/';
    }
    return;
   }
  }

  u[0] = '\0';
  u_len = strlen(u + 1);
  e_len -= u_len + 1;

  if (e_len < 0) {
   if (saveu) {
    saveu[0] = '/';
   }
   return;
  }
 } while (1);
}






void zim_Phar_running(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *arch, *entry;
 int fname_len, arch_len, entry_len;
 zend_bool retphar = 1;

 if (zend_parse_parameters((ht) , "|b", &retphar) == FAILURE) {
  return;
 }

 fname = (char*)zend_get_executed_filename();
 fname_len = strlen(fname);

 if (fname_len > 7 && !memcmp(fname, "phar://", 7) && SUCCESS == phar_split_fname(fname, fname_len, &arch, &arch_len, &entry, &entry_len, 2, 0 )) {
  _efree((entry) );
  if (retphar) {
   do { const char *__s=(fname); int __l=arch_len + 7; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
   _efree((arch) );
   return;
  } else {
   { do { const char *__s=(arch); int __l=arch_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
  }
 }

 { do { const char *__s=(""); int __l=0; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}
# 475 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_mount(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *arch = ((void *)0), *entry = ((void *)0), *path, *actual;
 int fname_len, arch_len, entry_len, path_len, actual_len;
 phar_archive_data **pphar;

 if (zend_parse_parameters((ht) , "pp", &path, &path_len, &actual, &actual_len) == FAILURE) {
  return;
 }

 fname = (char*)zend_get_executed_filename();
 fname_len = strlen(fname);





 if (fname_len > 7 && !memcmp(fname, "phar://", 7) && SUCCESS == phar_split_fname(fname, fname_len, &arch, &arch_len, &entry, &entry_len, 2, 0 )) {
  _efree((entry) );
  entry = ((void *)0);

  if (path_len > 7 && !memcmp(path, "phar://", 7)) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Can only mount internal paths within a phar archive, use a relative path instead of \"%s\"", path);
   _efree((arch) );
   return;
  }
carry_on2:
  if (SUCCESS != zend_hash_find(&((&phar_globals)->phar_fname_map), arch, arch_len, (void **)&pphar)) {
   if ((phar_globals.manifest_cached) && SUCCESS == zend_hash_find(&cached_phars, arch, arch_len, (void **)&pphar)) {
    if (SUCCESS == phar_copy_on_write(pphar )) {
     goto carry_on;
    }
   }

   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s is not a phar archive, cannot mount", arch);

   if (arch) {
    _efree((arch) );
   }
   return;
  }
carry_on:
  if (SUCCESS != phar_mount_entry(*pphar, actual, actual_len, path, path_len )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Mounting of %s to %s within phar %s failed", path, actual, arch);
   if (path && path == entry) {
    _efree((entry) );
   }

   if (arch) {
    _efree((arch) );
   }

   return;
  }

  if (entry && path && path == entry) {
   _efree((entry) );
  }

  if (arch) {
   _efree((arch) );
  }

  return;
 } else if ((&phar_globals)->phar_fname_map.arBuckets && SUCCESS == zend_hash_find(&((&phar_globals)->phar_fname_map), fname, fname_len, (void **)&pphar)) {
  goto carry_on;
 } else if ((phar_globals.manifest_cached) && SUCCESS == zend_hash_find(&cached_phars, fname, fname_len, (void **)&pphar)) {
  if (SUCCESS == phar_copy_on_write(pphar )) {
   goto carry_on;
  }

  goto carry_on;
 } else if (SUCCESS == phar_split_fname(path, path_len, &arch, &arch_len, &entry, &entry_len, 2, 0 )) {
  path = entry;
  path_len = entry_len;
  goto carry_on2;
 }

 zend_throw_exception_ex(phar_ce_PharException, 0 , "Mounting of %s to %s failed", path, actual);
}
# 564 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_webPhar(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *mimeoverride = ((void *)0), *rewrite = ((void *)0);
 char *alias = ((void *)0), *error, *index_php = ((void *)0), *f404 = ((void *)0), *ru = ((void *)0);
 int alias_len = 0, ret, f404_len = 0, free_pathinfo = 0, ru_len = 0;
 char *fname, *path_info, *mime_type = ((void *)0), *entry, *pt;
 const char *basename;
 int fname_len, entry_len, code, index_php_len = 0, not_cgi;
 phar_archive_data *phar = ((void *)0);
 phar_entry_info *info = ((void *)0);

 if (zend_parse_parameters((ht) , "|s!s!saz", &alias, &alias_len, &index_php, &index_php_len, &f404, &f404_len, &mimeoverride, &rewrite) == FAILURE) {
  return;
 }

 phar_request_initialize();
 fname = (char*)zend_get_executed_filename();
 fname_len = strlen(fname);

 if (phar_open_executed_filename(alias, alias_len, &error ) != SUCCESS) {
  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }
  return;
 }


 if (!((sapi_globals.request_info).request_method && (sapi_globals.request_info).request_uri && (!strcmp((sapi_globals.request_info).request_method, "GET") || !strcmp((sapi_globals.request_info).request_method, "POST")))) {
  return;
 }





 basename = zend_memrchr(fname, '/', fname_len);

 if (!basename) {
  basename = fname;
 } else {
  ++basename;
 }

 if ((strlen(sapi_module.name) == sizeof("cgi-fcgi")-1 && !strncmp(sapi_module.name, "cgi-fcgi", sizeof("cgi-fcgi")-1))
  || (strlen(sapi_module.name) == sizeof("fpm-fcgi")-1 && !strncmp(sapi_module.name, "fpm-fcgi", sizeof("fpm-fcgi")-1))
  || (strlen(sapi_module.name) == sizeof("cgi")-1 && !strncmp(sapi_module.name, "cgi", sizeof("cgi")-1))) {

  if ((core_globals.http_globals)[3]) {
   HashTable *_server = (*(core_globals.http_globals)[3]).value.ht;
   zval **z_script_name, **z_path_info;

   if (SUCCESS != zend_hash_find(_server, "SCRIPT_NAME", sizeof("SCRIPT_NAME"), (void**)&z_script_name) ||
    6 != (**z_script_name).type ||
    !strstr((**z_script_name).value.str.val, basename)) {
    return;
   }

   if (SUCCESS == zend_hash_find(_server, "PATH_INFO", sizeof("PATH_INFO"), (void**)&z_path_info) &&
    6 == (**z_path_info).type) {
    entry_len = (**z_path_info).value.str.len;
    entry = _estrndup(((**z_path_info).value.str.val), (entry_len) );
    path_info = _emalloc(((**z_script_name).value.str.len + entry_len + 1) );
    memcpy(path_info, (**z_script_name).value.str.val, (**z_script_name).value.str.len);
    memcpy(path_info + (**z_script_name).value.str.len, entry, entry_len + 1);
    free_pathinfo = 1;
   } else {
    entry_len = 0;
    entry = _estrndup((""), (0) );
    path_info = (**z_script_name).value.str.val;
   }

   pt = _estrndup(((**z_script_name).value.str.val), ((**z_script_name).value.str.len) );

  } else {
   char *testit;

   testit = sapi_getenv("SCRIPT_NAME", sizeof("SCRIPT_NAME")-1 );
   if (!(pt = strstr(testit, basename))) {
    _efree((testit) );
    return;
   }

   path_info = sapi_getenv("PATH_INFO", sizeof("PATH_INFO")-1 );

   if (path_info) {
    entry = path_info;
    entry_len = strlen(entry);
    spprintf(&path_info, 0, "%s%s", testit, path_info);
    free_pathinfo = 1;
   } else {
    path_info = testit;
    free_pathinfo = 1;
    entry = _estrndup((""), (0) );
    entry_len = 0;
   }

   pt = _estrndup((testit), ((pt - testit) + (fname_len - (basename - fname))) );
  }
  not_cgi = 0;
 } else {
  path_info = (sapi_globals.request_info).request_uri;

  if (!(pt = strstr(path_info, basename))) {

   return;
  }

  entry_len = strlen(path_info);
  entry_len -= (pt - path_info) + (fname_len - (basename - fname));
  entry = _estrndup((pt + (fname_len - (basename - fname))), (entry_len) );

  pt = _estrndup((path_info), ((pt - path_info) + (fname_len - (basename - fname))) );
  not_cgi = 1;
 }

 if (rewrite) {
  zend_fcall_info fci;
  zend_fcall_info_cache fcc;
  zval *params, *retval_ptr, **zp[1];

  do { (params) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(params))->u.buffered = ((void *)0); } while (0); (params)->refcount__gc = 1; (params)->is_ref__gc = 0;;;
  do { const char *__s=(entry); int __l=entry_len; zval *__z = (params); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  zp[0] = &params;

  if (FAILURE == zend_fcall_info_init(rewrite, 0, &fci, &fcc, ((void *)0), ((void *)0) )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar error: invalid rewrite callback");

   if (free_pathinfo) {
    _efree((path_info) );
   }

   return;
  }

  fci.param_count = 1;
  fci.params = zp;
  zval_addref_p(params);
  fci.retval_ptr_ptr = &retval_ptr;

  if (FAILURE == zend_call_function(&fci, &fcc )) {
   if (!(executor_globals.exception)) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "phar error: failed to call rewrite callback");
   }

   if (free_pathinfo) {
    _efree((path_info) );
   }

   return;
  }

  if (!fci.retval_ptr_ptr || !retval_ptr) {
   if (free_pathinfo) {
    _efree((path_info) );
   }
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar error: rewrite callback must return a string or false");
   return;
  }

  switch ((*retval_ptr).type) {
   case 6:
    _efree((entry) );

    if (fci.retval_ptr_ptr != &retval_ptr) {
     entry = _estrndup(((**fci.retval_ptr_ptr).value.str.val), ((**fci.retval_ptr_ptr).value.str.len) );
     entry_len = (**fci.retval_ptr_ptr).value.str.len;
    } else {
     entry = (*retval_ptr).value.str.val;
     entry_len = (*retval_ptr).value.str.len;
    }

    break;
   case 3:
    phar_do_403(entry, entry_len );

    if (free_pathinfo) {
     _efree((path_info) );
    }

    _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 744);
    return;
   default:
    _efree((retval_ptr) );

    if (free_pathinfo) {
     _efree((path_info) );
    }

    zend_throw_exception_ex(phar_ce_PharException, 0 , "phar error: rewrite callback must return a string or false");
    return;
  }
 }

 if (entry_len) {
  phar_postprocess_ru_web(fname, fname_len, &entry, &entry_len, &ru, &ru_len );
 }

 if (!entry_len || (entry_len == 1 && entry[0] == '/')) {
  _efree((entry) );

  if (index_php_len) {
   entry = index_php;
   entry_len = index_php_len;
   if (entry[0] != '/') {
    spprintf(&entry, 0, "/%s", index_php);
    ++entry_len;
   }
  } else {

   entry = _estrndup(("/index.php"), (sizeof("/index.php")) );
   entry_len = sizeof("/index.php")-1;
  }

  if (FAILURE == phar_get_archive(&phar, fname, fname_len, ((void *)0), 0, ((void *)0) ) ||
   (info = phar_get_entry_info(phar, entry, entry_len, ((void *)0), 0 )) == ((void *)0)) {
   phar_do_404(phar, fname, fname_len, f404, f404_len, entry, entry_len );

   if (free_pathinfo) {
    _efree((path_info) );
   }

   _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 786);
  } else {
   char *tmp = ((void *)0), sa = '\0';
   sapi_header_line ctr = {0};
   ctr.response_code = 301;
   ctr.line_len = sizeof("HTTP/1.1 301 Moved Permanently")-1;
   ctr.line = "HTTP/1.1 301 Moved Permanently";
   sapi_header_op(SAPI_HEADER_REPLACE, &ctr );

   if (not_cgi) {
    tmp = strstr(path_info, basename) + fname_len;
    sa = *tmp;
    *tmp = '\0';
   }

   ctr.response_code = 0;

   if (path_info[strlen(path_info)-1] == '/') {
    ctr.line_len = spprintf(&(ctr.line), 4096, "Location: %s%s", path_info, entry + 1);
   } else {
    ctr.line_len = spprintf(&(ctr.line), 4096, "Location: %s%s", path_info, entry);
   }

   if (not_cgi) {
    *tmp = sa;
   }

   if (free_pathinfo) {
    _efree((path_info) );
   }

   sapi_header_op(SAPI_HEADER_REPLACE, &ctr );
   sapi_send_headers();
   _efree((ctr.line) );
   _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 820);
  }
 }

 if (FAILURE == phar_get_archive(&phar, fname, fname_len, ((void *)0), 0, ((void *)0) ) ||
  (info = phar_get_entry_info(phar, entry, entry_len, ((void *)0), 0 )) == ((void *)0)) {
  phar_do_404(phar, fname, fname_len, f404, f404_len, entry, entry_len );



  _zend_bailout("/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c", 830);
 }

 if (mimeoverride && zend_hash_num_elements((*mimeoverride).value.ht)) {
  const char *ext = zend_memrchr(entry, '.', entry_len);
  zval **val;

  if (ext) {
   ++ext;

   if (SUCCESS == zend_hash_find((*mimeoverride).value.ht, ext, strlen(ext)+1, (void **) &val)) {
    switch ((**val).type) {
     case 1:
      if ((**val).value.lval == '\0' || (**val).value.lval == '\1') {
       mime_type = "";
       code = (**val).value.lval;
      } else {
       zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown mime type specifier used, only Phar::PHP, Phar::PHPS and a mime type string are allowed");



       { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
      }
      break;
     case 6:
      mime_type = (**val).value.str.val;
      code = '\2';
      break;
     default:
      zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown mime type specifier used (not a string or int), only Phar::PHP, Phar::PHPS and a mime type string are allowed");



      { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
    }
   }
  }
 }

 if (!mime_type) {
  code = phar_file_type(&(phar_globals.mime_types), entry, &mime_type );
 }
 ret = phar_file_action(phar, info, mime_type, code, entry, entry_len, fname, pt, ru, ru_len );
}
# 882 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_mungServer(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *mungvalues;

 if (zend_parse_parameters((ht) , "a", &mungvalues) == FAILURE) {
  return;
 }

 if (!zend_hash_num_elements((*mungvalues).value.ht)) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "No values passed to Phar::mungServer(), expecting an array of any of these strings: PHP_SELF, REQUEST_URI, SCRIPT_FILENAME, SCRIPT_NAME");
  return;
 }

 if (zend_hash_num_elements((*mungvalues).value.ht) > 4) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "Too many values passed to Phar::mungServer(), expecting an array of any of these strings: PHP_SELF, REQUEST_URI, SCRIPT_FILENAME, SCRIPT_NAME");
  return;
 }

 phar_request_initialize();

 for (zend_hash_internal_pointer_reset_ex((*mungvalues).value.ht, ((void *)0)); SUCCESS == (zend_hash_get_current_key_type_ex((*mungvalues).value.ht, ((void *)0)) == 3 ? FAILURE : SUCCESS); zend_hash_move_forward_ex((*mungvalues).value.ht, ((void *)0))) {
  zval **data = ((void *)0);

  if (SUCCESS != zend_hash_get_current_data_ex((*mungvalues).value.ht, (void **) &data, ((void *)0))) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "unable to retrieve array value in Phar::mungServer()");
   return;
  }

  if ((**data).type != 6) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Non-string value passed to Phar::mungServer(), expecting an array of any of these strings: PHP_SELF, REQUEST_URI, SCRIPT_FILENAME, SCRIPT_NAME");
   return;
  }

  if ((**data).value.str.len == sizeof("PHP_SELF")-1 && !strncmp((**data).value.str.val, "PHP_SELF", sizeof("PHP_SELF")-1)) {
   (&phar_globals)->phar_SERVER_mung_list |= (1<<0);
  }

  if ((**data).value.str.len == sizeof("REQUEST_URI")-1) {
   if (!strncmp((**data).value.str.val, "REQUEST_URI", sizeof("REQUEST_URI")-1)) {
    (&phar_globals)->phar_SERVER_mung_list |= (1<<1);
   }
   if (!strncmp((**data).value.str.val, "SCRIPT_NAME", sizeof("SCRIPT_NAME")-1)) {
    (&phar_globals)->phar_SERVER_mung_list |= (1<<2);
   }
  }

  if ((**data).value.str.len == sizeof("SCRIPT_FILENAME")-1 && !strncmp((**data).value.str.val, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME")-1)) {
   (&phar_globals)->phar_SERVER_mung_list |= (1<<3);
  }
 }
}
# 943 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_interceptFileFuncs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }
 phar_intercept_functions();
}







void zim_Phar_createDefaultStub(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *index = ((void *)0), *webindex = ((void *)0), *stub, *error;
 int index_len = 0, webindex_len = 0;
 size_t stub_len;

 if (zend_parse_parameters((ht) , "|pp", &index, &index_len, &webindex, &webindex_len) == FAILURE) {
  return;
 }

 stub = phar_create_default_stub(index, webindex, &stub_len, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
  return;
 }
 { do { const char *__s=(stub); int __l=stub_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_Phar_mapPhar(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *alias = ((void *)0), *error;
 int alias_len = 0;
 long dataoffset = 0;

 if (zend_parse_parameters((ht) , "|s!l", &alias, &alias_len, &dataoffset) == FAILURE) {
  return;
 }

 phar_request_initialize();

 do { zval *__z = (return_value); (*__z).value.lval = ((phar_open_executed_filename(alias, alias_len, &error ) == SUCCESS) != 0); (*__z).type = 3; } while (0);

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}



void zim_Phar_loadPhar(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *alias = ((void *)0), *error;
 int fname_len, alias_len = 0;

 if (zend_parse_parameters((ht) , "p|s!", &fname, &fname_len, &alias, &alias_len) == FAILURE) {
  return;
 }

 phar_request_initialize();

 do { zval *__z = (return_value); (*__z).value.lval = ((phar_open_from_filename(fname, fname_len, alias, alias_len, 0x00000008, ((void *)0), &error ) == SUCCESS) != 0); (*__z).type = 3; } while (0);

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}



void zim_Phar_apiVersion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }
 { do { const char *__s=("1.1.1"); int __l=sizeof("1.1.1")-1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_Phar_canCompress(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long method = 0;

 if (zend_parse_parameters((ht) , "|l", &method) == FAILURE) {
  return;
 }

 phar_request_initialize();
 switch (method) {
 case 0x00001000:
  if ((phar_globals.has_zlib)) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 case 0x00002000:
  if ((phar_globals.has_bz2)) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 default:
  if ((phar_globals.has_zlib) || (phar_globals.has_bz2)) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 }
}




void zim_Phar_canWrite(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((!(phar_globals.readonly)) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_Phar_isValidPharFilename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname;
 const char *ext_str;
 int fname_len, ext_len, is_executable;
 zend_bool executable = 1;

 if (zend_parse_parameters((ht) , "p|b", &fname, &fname_len, &executable) == FAILURE) {
  return;
 }

 is_executable = executable;
 do { zval *__z = (return_value); (*__z).value.lval = ((phar_detect_phar_fname_ext(fname, fname_len, &ext_str, &ext_len, is_executable, 2, 1 ) == SUCCESS) != 0); (*__z).type = 3; } while (0);
}






static void phar_spl_foreign_dtor(spl_filesystem_object *object )
{
 phar_archive_data *phar = (phar_archive_data *) object->oth;

 if (!phar->is_persistent) {
  phar_archive_delref(phar );
 }

 object->oth = ((void *)0);
}





static void phar_spl_foreign_clone(spl_filesystem_object *src, spl_filesystem_object *dst )
{
 phar_archive_data *phar_data = (phar_archive_data *) dst->oth;

 if (!phar_data->is_persistent) {
  ++(phar_data->refcount);
 }
}


static spl_other_handler phar_spl_foreign_handler = {
 phar_spl_foreign_dtor,
 phar_spl_foreign_clone
};
# 1139 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{



 char *fname, *alias = ((void *)0), *error, *arch = ((void *)0), *entry = ((void *)0), *save_fname;
 int fname_len, alias_len = 0, arch_len, entry_len, is_data;
 long flags = 0x00001000|0x00002000;
 long format = 0;
 phar_archive_object *phar_obj;
 phar_archive_data *phar_data;
 zval *zobj = (this_ptr), arg1, arg2;

 phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) );

 is_data = instanceof_function(zend_get_class_entry(&(*zobj) ), phar_ce_data );

 if (is_data) {
  if (zend_parse_parameters((ht) , "p|ls!l", &fname, &fname_len, &flags, &alias, &alias_len, &format) == FAILURE) {
   return;
  }
 } else {
  if (zend_parse_parameters((ht) , "p|ls!", &fname, &fname_len, &flags, &alias, &alias_len) == FAILURE) {
   return;
  }
 }

 if (phar_obj->arc.archive) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call constructor twice");
  return;
 }

 save_fname = fname;
 if (SUCCESS == phar_split_fname(fname, fname_len, &arch, &arch_len, &entry, &entry_len, !is_data, 2 )) {





  fname = arch;
  fname_len = arch_len;







 }

 if (phar_open_or_create_filename(fname, fname_len, alias, alias_len, is_data, 0x00000008, &phar_data, &error ) == FAILURE) {

  if (fname == arch && fname != save_fname) {
   _efree((arch) );
   fname = save_fname;
  }

  if (entry) {
   _efree((entry) );
  }

  if (error) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "%s", error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Phar creation or opening failed");
  }

  return;
 }

 if (is_data && phar_data->is_tar && phar_data->is_brandnew && format == 3) {
  phar_data->is_zip = 1;
  phar_data->is_tar = 0;
 }

 if (fname == arch) {
  _efree((arch) );
  fname = save_fname;
 }

 if ((is_data && !phar_data->is_data) || (!is_data && phar_data->is_data)) {
  if (is_data) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "PharData class can only be used for non-executable tar and zip archives");
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Phar class can only be used for executable tar and zip archives");
  }
  _efree((entry) );
  return;
 }

 is_data = phar_data->is_data;

 if (!phar_data->is_persistent) {
  ++(phar_data->refcount);
 }

 phar_obj->arc.archive = phar_data;
 phar_obj->spl.oth_handler = &phar_spl_foreign_handler;

 if (entry) {
  fname_len = spprintf(&fname, 0, "phar://%s%s", phar_data->fname, entry);
  _efree((entry) );
 } else {
  fname_len = spprintf(&fname, 0, "phar://%s", phar_data->fname);
 }

 (&arg1)->refcount__gc = 1; (&arg1)->is_ref__gc = 0;;
 do { const char *__s=(fname); int __l=fname_len; zval *__z = (&arg1); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 (&arg2)->refcount__gc = 1; (&arg2)->is_ref__gc = 0;;
 { zval *__z = (&arg2); (*__z).value.lval = flags; (*__z).type = 1; };

 zend_call_method(&zobj, zend_get_class_entry(&(*zobj) ), &spl_ce_RecursiveDirectoryIterator->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 2, &arg1, &arg2 )
                                                                                     ;

 if (!phar_data->is_persistent) {
  phar_obj->arc.archive->is_data = is_data;
 } else if (!(executor_globals.exception)) {

  _zend_hash_add_or_update(&(&phar_globals)->phar_persist_map, (const char *) phar_obj->arc.archive, sizeof(phar_obj->arc.archive), (void *) &phar_obj, sizeof(phar_archive_object **), ((void *)0), (1<<1) );
 }

 phar_obj->spl.info_class = phar_ce_entry;
 _efree((fname) );

}





void zim_Phar_getSupportedSignatures(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 _array_init((return_value), 0 );

 add_next_index_stringl(return_value, "MD5", 3, 1);
 add_next_index_stringl(return_value, "SHA-1", 5, 1);

 add_next_index_stringl(return_value, "SHA-256", 7, 1);
 add_next_index_stringl(return_value, "SHA-512", 7, 1);




 if (zend_hash_exists(&module_registry, "openssl", sizeof("openssl"))) {
  add_next_index_stringl(return_value, "OpenSSL", 7, 1);
 }

}





void zim_Phar_getSupportedCompression(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 _array_init((return_value), 0 );
 phar_request_initialize();

 if ((phar_globals.has_zlib)) {
  add_next_index_stringl(return_value, "GZ", 2, 1);
 }

 if ((phar_globals.has_bz2)) {
  add_next_index_stringl(return_value, "BZIP2", 5, 1);
 }
}





void zim_Phar_unlinkArchive(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *error, *zname, *arch, *entry;
 int fname_len, zname_len, arch_len, entry_len;
 phar_archive_data *phar;

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (!fname_len) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown phar archive \"\"");
  return;
 }

 if (FAILURE == phar_open_from_filename(fname, fname_len, ((void *)0), 0, 0x00000008, &phar, &error )) {
  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown phar archive \"%s\": %s", fname, error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown phar archive \"%s\"", fname);
  }
  return;
 }

 zname = (char*)zend_get_executed_filename();
 zname_len = strlen(zname);

 if (zname_len > 7 && !memcmp(zname, "phar://", 7) && SUCCESS == phar_split_fname(zname, zname_len, &arch, &arch_len, &entry, &entry_len, 2, 0 )) {
  if (arch_len == fname_len && !memcmp(arch, fname, arch_len)) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar archive \"%s\" cannot be unlinked from within itself", fname);
   _efree((arch) );
   _efree((entry) );
   return;
  }
  _efree((arch) );
  _efree((entry) );
 }

 if (phar->is_persistent) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar archive \"%s\" is in phar.cache_list, cannot unlinkArchive()", fname);
  return;
 }

 if (phar->refcount) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar archive \"%s\" has open file handles or objects.  fclose() all file handles, and unset() all objects prior to calling unlinkArchive()", fname);
  return;
 }

 fname = _estrndup((phar->fname), (phar->fname_len) );


 (phar_globals.last_phar) = ((void *)0);
 (phar_globals.last_phar_name) = (phar_globals.last_alias) = ((void *)0);

 phar_archive_delref(phar );
 unlink(fname);
 _efree((fname) );
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}
# 1398 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar___destruct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) );

 if (phar_obj->arc.archive && phar_obj->arc.archive->is_persistent) {
  zend_hash_del_key_or_index(&(&phar_globals)->phar_persist_map, (const char *) phar_obj->arc.archive, sizeof(phar_obj->arc.archive), 0, 0);
 }
}


struct _phar_t {
 phar_archive_object *p;
 zend_class_entry *c;
 char *b;
 uint l;
 zval *ret;
 int count;
 php_stream *fp;
};

static int phar_build(zend_object_iterator *iter, void *puser )
{
 zval **value;
 zend_bool close_fp = 1;
 struct _phar_t *p_obj = (struct _phar_t*) puser;
 uint str_key_len, base_len = p_obj->l, fname_len;
 phar_entry_data *data;
 php_stream *fp;
 size_t contents_len;
 char *fname, *error = ((void *)0), *base = p_obj->b, *opened, *save = ((void *)0), *temp = ((void *)0);
 char *str_key;
 zend_class_entry *ce = p_obj->c;
 phar_archive_object *phar_obj = p_obj->p;
 char *str = "[stream]";

 iter->funcs->get_current_data(iter, &value );

 if ((executor_globals.exception)) {
  return 1<<1;
 }

 if (!value) {

  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned no value", ce->name);
  return 1<<1;
 }

 switch ((**value).type) {
  case 6:
   break;
  case 7:
   (fp) = (php_stream*)zend_fetch_resource((value) , -1, "stream", ((void *)0), 2, php_file_le_stream(), php_file_le_pstream());

   if (!fp) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Iterator %v returned an invalid stream handle", ce->name);
    return 1<<1;
   }

   if (iter->funcs->get_current_key) {
    zval key;
    iter->funcs->get_current_key(iter, &key );

    if ((executor_globals.exception)) {
     return 1<<1;
    }

    if ((key).type != 6) {
     _zval_dtor((&key) );
     zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned an invalid key (must return a string)", ce->name);
     return 1<<1;
    }

    str_key_len = (key).value.str.len;
    str_key = _estrndup(((key).value.str.val), (str_key_len) );

    save = str_key;
    _zval_dtor((&key) );
   } else {
    zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned an invalid key (must return a string)", ce->name);
    return 1<<1;
   }

   close_fp = 0;
   opened = (char *) _estrndup((str), (sizeof("[stream]") - 1) );
   goto after_open_fp;
  case 5:
   if (instanceof_function(zend_get_class_entry(&(**value) ), spl_ce_SplFileInfo )) {
    char *test = ((void *)0);
    zval dummy;
    spl_filesystem_object *intern = (spl_filesystem_object*)zend_object_store_get_object(*value );

    if (!base_len) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Iterator %v returns an SplFileInfo object, so base directory must be specified", ce->name);
     return 1<<1;
    }

    switch (intern->type) {
     case SPL_FS_DIR:
      test = spl_filesystem_object_get_path(intern, ((void *)0) );
      fname_len = spprintf(&fname, 0, "%s%c%s", test, '/', intern->u.dir.entry.d_name);
      php_stat(fname, fname_len, 13, &dummy );

      if (((zend_bool)(dummy).value.lval)) {

       _efree((fname) );
       return 0;
      }

      test = expand_filepath(fname, ((void *)0) );
      _efree((fname) );

      if (test) {
       fname = test;
       fname_len = strlen(fname);
      } else {
       zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Could not resolve file path");
       return 1<<1;
      }

      save = fname;
      goto phar_spl_fileinfo;
     case SPL_FS_INFO:
     case SPL_FS_FILE:
      fname = expand_filepath(intern->file_name, ((void *)0) );
      if (!fname) {
       zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Could not resolve file path");
       return 1<<1;
      }

      fname_len = strlen(fname);
      save = fname;
      goto phar_spl_fileinfo;
    }
   }

  default:
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned an invalid value (must return a string)", ce->name);
   return 1<<1;
 }

 fname = (**value).value.str.val;
 fname_len = (**value).value.str.len;

phar_spl_fileinfo:
 if (base_len) {
  temp = expand_filepath(base, ((void *)0) );
  if (!temp) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Could not resolve file path");
   if (save) {
    _efree((save) );
   }
   return 1<<1;
  }

  base = temp;
  base_len = strlen(base);

  if (strstr(fname, base)) {
   str_key_len = fname_len - base_len;

   if (str_key_len <= 0) {
    if (save) {
     _efree((save) );
     _efree((temp) );
    }
    return 0;
   }

   str_key = fname + base_len;

   if (*str_key == '/' || *str_key == '\\') {
    str_key++;
    str_key_len--;
   }

  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned a path \"%s\" that is not in the base directory \"%s\"", ce->name, fname, base);

   if (save) {
    _efree((save) );
    _efree((temp) );
   }

   return 1<<1;
  }
 } else {
  if (iter->funcs->get_current_key) {
   zval key;
   iter->funcs->get_current_key(iter, &key );

   if ((executor_globals.exception)) {
    return 1<<1;
   }

   if ((key).type != 6) {
    _zval_dtor((&key) );
    zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned an invalid key (must return a string)", ce->name);
    return 1<<1;
   }

   str_key_len = (key).value.str.len;
   str_key = _estrndup(((key).value.str.val), (str_key_len) );

   save = str_key;
   _zval_dtor((&key) );
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned an invalid key (must return a string)", ce->name);
   return 1<<1;
  }
 }
# 1624 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
 if (php_check_open_basedir(fname )) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned a path \"%s\" that open_basedir prevents opening", ce->name, fname);

  if (save) {
   _efree((save) );
  }

  if (temp) {
   _efree((temp) );
  }

  return 1<<1;
 }


 fp = _php_stream_open_wrapper_ex((fname), ("rb"), (0x00000010|0), (&opened), ((void *)0) );

 if (!fp) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "Iterator %v returned a file that could not be opened \"%s\"", ce->name, fname);

  if (save) {
   _efree((save) );
  }

  if (temp) {
   _efree((temp) );
  }

  return 1<<1;
 }
after_open_fp:
 if (str_key_len >= sizeof(".phar")-1 && !memcmp(str_key, ".phar", sizeof(".phar")-1)) {

  if (save) {
   _efree((save) );
  }

  if (temp) {
   _efree((temp) );
  }

  if (opened) {
   _efree((opened) );
  }

  if (close_fp) {
   _php_stream_free((fp), (1 | 2) );
  }

  return 0;
 }

 if (!(data = phar_get_or_create_entry_data(phar_obj->arc.archive->fname, phar_obj->arc.archive->fname_len, str_key, str_key_len, "w+b", 0, &error, 1 ))) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s cannot be created: %s", str_key, error);
  _efree((error) );

  if (save) {
   _efree((save) );
  }

  if (opened) {
   _efree((opened) );
  }

  if (temp) {
   _efree((temp) );
  }

  if (close_fp) {
   _php_stream_free((fp), (1 | 2) );
  }

  return 1<<1;

 } else {
  if (error) {
   _efree((error) );
  }

  if (data->internal_file->fp_type == PHAR_MOD) {
   _php_stream_free((data->internal_file->fp), (1 | 2) );
  }

  data->internal_file->fp = ((void *)0);
  data->internal_file->fp_type = PHAR_UFP;
  data->internal_file->offset_abs = data->internal_file->offset = _php_stream_tell((p_obj->fp) );
  data->fp = ((void *)0);
  _php_stream_copy_to_stream_ex((fp), (p_obj->fp), (((size_t)-1)), (&contents_len) );
  data->internal_file->uncompressed_filesize = data->internal_file->compressed_filesize =
   _php_stream_tell((p_obj->fp) ) - data->internal_file->offset;
 }

 if (close_fp) {
  _php_stream_free((fp), (1 | 2) );
 }

 add_assoc_string_ex(p_obj->ret, str_key, strlen(str_key)+1, opened, 0);

 if (save) {
  _efree((save) );
 }

 if (temp) {
  _efree((temp) );
 }

 data->internal_file->compressed_filesize = data->internal_file->uncompressed_filesize = contents_len;
 phar_entry_delref(data );

 return 0;
}
# 1743 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_buildFromDirectory(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *dir, *error, *regex = ((void *)0);
 int dir_len, regex_len = 0;
 zend_bool apply_reg = 0;
 zval arg, arg2, *iter, *iteriter, *regexiter = ((void *)0);
 struct _phar_t pass;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write to archive - write operations restricted by INI setting");
  return;
 }

 if (zend_parse_parameters((ht) , "p|s", &dir, &dir_len, &regex, &regex_len) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 do { (iter) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(iter))->u.buffered = ((void *)0); } while (0); (iter)->refcount__gc = 1; (iter)->is_ref__gc = 0;;;

 if (SUCCESS != _object_init_ex((iter), (spl_ce_RecursiveDirectoryIterator) )) {
  _zval_ptr_dtor((&iter) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to instantiate directory iterator for %s", phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 (&arg)->refcount__gc = 1; (&arg)->is_ref__gc = 0;;
 do { const char *__s=(dir); int __l=dir_len; zval *__z = (&arg); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 (&arg2)->refcount__gc = 1; (&arg2)->is_ref__gc = 0;;
 { zval *__z = (&arg2); (*__z).value.lval = 0x00001000|0x00002000; (*__z).type = 1; };

 zend_call_method(&iter, spl_ce_RecursiveDirectoryIterator, &spl_ce_RecursiveDirectoryIterator->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 2, &arg, &arg2 )
                                                                                     ;

 if ((executor_globals.exception)) {
  _zval_ptr_dtor((&iter) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 do { (iteriter) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(iteriter))->u.buffered = ((void *)0); } while (0); (iteriter)->refcount__gc = 1; (iteriter)->is_ref__gc = 0;;;

 if (SUCCESS != _object_init_ex((iteriter), (spl_ce_RecursiveIteratorIterator) )) {
  _zval_ptr_dtor((&iter) );
  _zval_ptr_dtor((&iteriter) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to instantiate directory iterator for %s", phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 zend_call_method(&iteriter, spl_ce_RecursiveIteratorIterator, &spl_ce_RecursiveIteratorIterator->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 1, iter, ((void *)0) )
                                                                             ;

 if ((executor_globals.exception)) {
  _zval_ptr_dtor((&iter) );
  _zval_ptr_dtor((&iteriter) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 _zval_ptr_dtor((&iter) );

 if (regex_len > 0) {
  apply_reg = 1;
  do { (regexiter) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(regexiter))->u.buffered = ((void *)0); } while (0); (regexiter)->refcount__gc = 1; (regexiter)->is_ref__gc = 0;;;

  if (SUCCESS != _object_init_ex((regexiter), (spl_ce_RegexIterator) )) {
   _zval_ptr_dtor((&iteriter) );
   _zval_dtor((regexiter) );
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to instantiate regex iterator for %s", phar_obj->arc.archive->fname);
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }

  (&arg2)->refcount__gc = 1; (&arg2)->is_ref__gc = 0;;
  do { const char *__s=(regex); int __l=regex_len; zval *__z = (&arg2); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

  zend_call_method(&regexiter, spl_ce_RegexIterator, &spl_ce_RegexIterator->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 2, iteriter, &arg2 )
                                                                            ;
 }

 _array_init((return_value), 0 );

 pass.c = apply_reg ? zend_get_class_entry(&(*regexiter) ) : zend_get_class_entry(&(*iteriter) );
 pass.p = phar_obj;
 pass.b = dir;
 pass.l = dir_len;
 pass.count = 0;
 pass.ret = return_value;
 pass.fp = _php_stream_fopen_tmpfile(0 );
 if (pass.fp == ((void *)0)) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" unable to create temporary file", phar_obj->arc.archive->fname);
  return;
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  _zval_ptr_dtor((&iteriter) );
  if (apply_reg) {
   _zval_ptr_dtor((&regexiter) );
  }
  _php_stream_free((pass.fp), (1 | 2) );
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }

 if (SUCCESS == spl_iterator_apply((apply_reg ? regexiter : iteriter), (spl_iterator_apply_func_t) phar_build, (void *) &pass )) {
  _zval_ptr_dtor((&iteriter) );

  if (apply_reg) {
   _zval_ptr_dtor((&regexiter) );
  }

  phar_obj->arc.archive->ufp = pass.fp;
  phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }

 } else {
  _zval_ptr_dtor((&iteriter) );
  if (apply_reg) {
   _zval_ptr_dtor((&regexiter) );
  }
  _php_stream_free((pass.fp), (1 | 2) );
 }
}
# 1881 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_buildFromIterator(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *obj;
 char *error;
 uint base_len = 0;
 char *base = ((void *)0);
 struct _phar_t pass;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write out phar archive, phar is read-only");
  return;
 }

 if (zend_parse_parameters((ht) , "O|s", &obj, zend_ce_traversable, &base, &base_len) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }

 _array_init((return_value), 0 );

 pass.c = zend_get_class_entry(&(*obj) );
 pass.p = phar_obj;
 pass.b = base;
 pass.l = base_len;
 pass.ret = return_value;
 pass.count = 0;
 pass.fp = _php_stream_fopen_tmpfile(0 );
 if (pass.fp == ((void *)0)) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\": unable to create temporary file", phar_obj->arc.archive->fname);
  return;
 }

 if (SUCCESS == spl_iterator_apply(obj, (spl_iterator_apply_func_t) phar_build, (void *) &pass )) {
  phar_obj->arc.archive->ufp = pass.fp;
  phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );
  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }
 } else {
  _php_stream_free((pass.fp), (1 | 2) );
 }
}





void zim_Phar_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*__z).value.lval = zend_hash_num_elements(&phar_obj->arc.archive->manifest); (*__z).type = 1; }; return; };
}






void zim_Phar_isFileFormat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long type;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "l", &type) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 switch (type) {
  case 2:
   { do { zval *__z = (return_value); (*__z).value.lval = ((phar_obj->arc.archive->is_tar) != 0); (*__z).type = 3; } while (0); return; };
  case 3:
   { do { zval *__z = (return_value); (*__z).value.lval = ((phar_obj->arc.archive->is_zip) != 0); (*__z).type = 3; } while (0); return; };
  case 1:
   { do { zval *__z = (return_value); (*__z).value.lval = ((!phar_obj->arc.archive->is_tar && !phar_obj->arc.archive->is_zip) != 0); (*__z).type = 3; } while (0); return; };
  default:
   zend_throw_exception_ex(phar_ce_PharException, 0 , "Unknown file format specified");
 }
}


static int phar_copy_file_contents(phar_entry_info *entry, php_stream *fp )
{
 char *error;
 off_t offset;
 phar_entry_info *link;

 if (FAILURE == phar_open_entry_fp(entry, &error, 1 )) {
  if (error) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Cannot convert phar archive \"%s\", unable to open entry \"%s\" contents: %s", entry->phar->fname, entry->filename, error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Cannot convert phar archive \"%s\", unable to open entry \"%s\" contents", entry->phar->fname, entry->filename);
  }
  return FAILURE;
 }


 phar_seek_efp(entry, 0, 0, 0, 1 );
 offset = _php_stream_tell((fp) );
 link = phar_get_link_source(entry );

 if (!link) {
  link = entry;
 }

 if (SUCCESS != _php_stream_copy_to_stream_ex((phar_get_efp(link, 0 )), (fp), (link->uncompressed_filesize), (((void *)0)) )) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot convert phar archive \"%s\", unable to copy entry \"%s\" contents", entry->phar->fname, entry->filename);
  return FAILURE;
 }

 if (entry->fp_type == PHAR_MOD) {

  entry->cfp = entry->fp;
  entry->fp = ((void *)0);
 }


 entry->fp_type = PHAR_FP;
 entry->offset = offset;
 return SUCCESS;
}


static zval *phar_rename_archive(phar_archive_data **sphar, char *ext, zend_bool compress )
{
 const char *oldname = ((void *)0);
 phar_archive_data *phar = *sphar;
 char *oldpath = ((void *)0);
 char *basename = ((void *)0), *basepath = ((void *)0);
 char *newname = ((void *)0), *newpath = ((void *)0);
 zval *ret, arg1;
 zend_class_entry *ce;
 char *error;
 const char *pcr_error;
 int ext_len = ext ? strlen(ext) : 0;
 int oldname_len;
 phar_archive_data **pphar = ((void *)0);
 php_stream_statbuf ssb;

 if (!ext) {
  if (phar->is_zip) {

   if (phar->is_data) {
    ext = "zip";
   } else {
    ext = "phar.zip";
   }

  } else if (phar->is_tar) {

   switch (phar->flags) {
    case 0x00100000:
     if (phar->is_data) {
      ext = "tar.gz";
     } else {
      ext = "phar.tar.gz";
     }
     break;
    case 0x00200000:
     if (phar->is_data) {
      ext = "tar.bz2";
     } else {
      ext = "phar.tar.bz2";
     }
     break;
    default:
     if (phar->is_data) {
      ext = "tar";
     } else {
      ext = "phar.tar";
     }
   }
  } else {

   switch (phar->flags) {
    case 0x00100000:
     ext = "phar.gz";
     break;
    case 0x00200000:
     ext = "phar.bz2";
     break;
    default:
     ext = "phar";
   }
  }
 } else if (phar_path_check(&ext, &ext_len, &pcr_error) > pcr_is_ok) {

  if (phar->is_data) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "data phar converted from \"%s\" has invalid extension %s", phar->fname, ext);
  } else {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "phar converted from \"%s\" has invalid extension %s", phar->fname, ext);
  }
  return ((void *)0);
 }

 if (ext[0] == '.') {
  ++ext;
 }

 oldpath = _estrndup((phar->fname), (phar->fname_len) );
 oldname = zend_memrchr(phar->fname, '/', phar->fname_len);
 ++oldname;
 oldname_len = strlen(oldname);

 basename = _estrndup((oldname), (oldname_len) );
 spprintf(&newname, 0, "%s.%s", strtok(basename, "."), ext);
 _efree((basename) );



 basepath = _estrndup((oldpath), ((strlen(oldpath) - oldname_len)) );
 phar->fname_len = spprintf(&newpath, 0, "%s%s", basepath, newname);
 phar->fname = newpath;
 phar->ext = newpath + phar->fname_len - strlen(ext) - 1;
 _efree((basepath) );
 _efree((newname) );

 if ((phar_globals.manifest_cached) && SUCCESS == zend_hash_find(&cached_phars, newpath, phar->fname_len, (void **) &pphar)) {
  _efree((oldpath) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to add newly converted phar \"%s\" to the list of phars, new phar name is in phar.cache_list", phar->fname);
  return ((void *)0);
 }

 if (SUCCESS == zend_hash_find(&((&phar_globals)->phar_fname_map), newpath, phar->fname_len, (void **) &pphar)) {
  if ((*pphar)->fname_len == phar->fname_len && !memcmp((*pphar)->fname, phar->fname, phar->fname_len)) {
   if (!zend_hash_num_elements(&phar->manifest)) {
    (*pphar)->is_tar = phar->is_tar;
    (*pphar)->is_zip = phar->is_zip;
    (*pphar)->is_data = phar->is_data;
    (*pphar)->flags = phar->flags;
    (*pphar)->fp = phar->fp;
    phar->fp = ((void *)0);
    phar_destroy_phar_data(phar );
    *sphar = ((void *)0);
    phar = *pphar;
    *sphar = ((void *)0);
    phar->refcount++;
    newpath = oldpath;
    goto its_ok;
   }
  }

  _efree((oldpath) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to add newly converted phar \"%s\" to the list of phars, a phar with that name already exists", phar->fname);
  return ((void *)0);
 }
its_ok:
 if (SUCCESS == _php_stream_stat_path((newpath), 0, (&ssb), ((void *)0) )) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "phar \"%s\" exists and must be unlinked prior to conversion", newpath);
  _efree((oldpath) );
  return ((void *)0);
 }
 if (!phar->is_data) {
  if (SUCCESS != phar_detect_phar_fname_ext(newpath, phar->fname_len, (const char **) &(phar->ext), &(phar->ext_len), 1, 1, 1 )) {
   _efree((oldpath) );
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "phar \"%s\" has invalid extension %s", phar->fname, ext);
   return ((void *)0);
  }

  if (phar->alias) {
   if (phar->is_temporary_alias) {
    phar->alias = ((void *)0);
    phar->alias_len = 0;
   } else {
    phar->alias = _estrndup((newpath), (strlen(newpath)) );
    phar->alias_len = strlen(newpath);
    phar->is_temporary_alias = 1;
    _zend_hash_add_or_update(&((&phar_globals)->phar_alias_map), newpath, phar->fname_len, (void*)&phar, sizeof(phar_archive_data*), ((void *)0), (1<<0) );
   }
  }

 } else {

  if (SUCCESS != phar_detect_phar_fname_ext(newpath, phar->fname_len, (const char **) &(phar->ext), &(phar->ext_len), 0, 1, 1 )) {
   _efree((oldpath) );
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "data phar \"%s\" has invalid extension %s", phar->fname, ext);
   return ((void *)0);
  }

  phar->alias = ((void *)0);
  phar->alias_len = 0;
 }

 if ((!pphar || phar == *pphar) && SUCCESS != _zend_hash_add_or_update(&((&phar_globals)->phar_fname_map), newpath, phar->fname_len, (void*)&phar, sizeof(phar_archive_data*), ((void *)0), (1<<0) )) {
  _efree((oldpath) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to add newly converted phar \"%s\" to the list of phars", phar->fname);
  return ((void *)0);
 }

 phar_flush(phar, 0, 0, 1, &error );

 if (error) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "%s", error);
  _efree((error) );
  _efree((oldpath) );
  return ((void *)0);
 }

 _efree((oldpath) );

 if (phar->is_data) {
  ce = phar_ce_data;
 } else {
  ce = phar_ce_archive;
 }

 do { (ret) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(ret))->u.buffered = ((void *)0); } while (0); (ret)->refcount__gc = 1; (ret)->is_ref__gc = 0;;;

 if (SUCCESS != _object_init_ex((ret), (ce) )) {
  _zval_dtor((ret) );
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Unable to instantiate phar object when converting archive \"%s\"", phar->fname);
  return ((void *)0);
 }

 (&arg1)->refcount__gc = 1; (&arg1)->is_ref__gc = 0;;
 do { const char *__s=(phar->fname); int __l=phar->fname_len; zval *__z = (&arg1); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 zend_call_method(&ret, ce, &ce->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 1, &arg1, ((void *)0) );
 return ret;
}


static zval *phar_convert_to_other(phar_archive_data *source, int convert, char *ext, php_uint32 flags )
{
 phar_archive_data *phar;
 phar_entry_info *entry, newentry;
 zval *ret;


 (phar_globals.last_phar) = ((void *)0);
 (phar_globals.last_phar_name) = (phar_globals.last_alias) = ((void *)0);

 phar = (phar_archive_data *) _ecalloc((1), (sizeof(phar_archive_data)) );

 phar->flags = flags;
 phar->is_data = source->is_data;

 switch (convert) {
  case 2:
   phar->is_tar = 1;
   break;
  case 3:
   phar->is_zip = 1;
   break;
  default:
   phar->is_data = 0;
   break;
 }

 _zend_hash_init((&(phar->manifest)), (sizeof(phar_entry_info)), (zend_get_hash_value), (destroy_phar_manifest_entry), (0) )
                                                      ;
 _zend_hash_init((&phar->mounted_dirs), (sizeof(char *)), (zend_get_hash_value), (((void *)0)), (0) )
                               ;
 _zend_hash_init((&phar->virtual_dirs), (sizeof(char *)), (zend_get_hash_value), (((void *)0)), (0) )
                               ;

 phar->fp = _php_stream_fopen_tmpfile(0 );
 if (phar->fp == ((void *)0)) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "unable to create temporary file");
  return ((void *)0);
 }
 phar->fname = source->fname;
 phar->fname_len = source->fname_len;
 phar->is_temporary_alias = source->is_temporary_alias;
 phar->alias = source->alias;

 if (source->metadata) {
  zval *t;

  t = source->metadata;
  do { (phar->metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(phar->metadata))->u.buffered = ((void *)0); } while (0);
  *phar->metadata = *t;
  _zval_copy_ctor((phar->metadata) );
  zval_set_refcount_p(phar->metadata, 1);

  phar->metadata_len = 0;
 }


 for (zend_hash_internal_pointer_reset_ex(&source->manifest, ((void *)0)); SUCCESS == (zend_hash_get_current_key_type_ex(&source->manifest, ((void *)0)) == 3 ? FAILURE : SUCCESS); zend_hash_move_forward_ex(&source->manifest, ((void *)0))) {

  if (FAILURE == zend_hash_get_current_data_ex(&source->manifest, (void **) &entry, ((void *)0))) {
   zend_hash_destroy(&(phar->manifest));
   _php_stream_free((phar->fp), (1 | 2) );
   _efree((phar) );
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Cannot convert phar archive \"%s\"", source->fname);
   return ((void *)0);
  }

  newentry = *entry;

  if (newentry.link) {
   newentry.link = _estrdup((newentry.link) );
   goto no_copy;
  }

  if (newentry.tmp) {
   newentry.tmp = _estrdup((newentry.tmp) );
   goto no_copy;
  }

  newentry.metadata_str.c = 0;

  if (FAILURE == phar_copy_file_contents(&newentry, phar->fp )) {
   zend_hash_destroy(&(phar->manifest));
   _php_stream_free((phar->fp), (1 | 2) );
   _efree((phar) );

   return ((void *)0);
  }
no_copy:
  newentry.filename = _estrndup((newentry.filename), (newentry.filename_len) );

  if (newentry.metadata) {
   zval *t;

   t = newentry.metadata;
   do { (newentry.metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(newentry.metadata))->u.buffered = ((void *)0); } while (0);
   *newentry.metadata = *t;
   _zval_copy_ctor((newentry.metadata) );
   zval_set_refcount_p(newentry.metadata, 1);

   newentry.metadata_str.c = ((void *)0);
   newentry.metadata_str.len = 0;
  }

  newentry.is_zip = phar->is_zip;
  newentry.is_tar = phar->is_tar;

  if (newentry.is_tar) {
   newentry.tar_type = (entry->is_dir ? '5' : '0');
  }

  newentry.is_modified = 1;
  newentry.phar = phar;
  newentry.old_flags = newentry.flags & ~0x0000F000;
  phar_set_inode(&newentry );
  _zend_hash_add_or_update(&(phar->manifest), newentry.filename, newentry.filename_len, (void*)&newentry, sizeof(phar_entry_info), ((void *)0), (1<<1) );
  phar_add_virtual_dirs(phar, newentry.filename, newentry.filename_len );
 }

 if ((ret = phar_rename_archive(&phar, ext, 0 ))) {
  return ret;
 } else {
  if(phar != ((void *)0)) {
   zend_hash_destroy(&(phar->manifest));
   zend_hash_destroy(&(phar->mounted_dirs));
   zend_hash_destroy(&(phar->virtual_dirs));
   if (phar->fp) {
    _php_stream_free((phar->fp), (1 | 2) );
   }
   _efree((phar->fname) );
   _efree((phar) );
  }
  return ((void *)0);
 }
}







void zim_Phar_convertToExecutable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *ext = ((void *)0);
 int is_data, ext_len = 0;
 php_uint32 flags;
 zval *ret;

 long format = 9021976, method = 9021976;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "|lls", &format, &method, &ext, &ext_len) == FAILURE) {
  return;
 }

 if ((phar_globals.readonly)) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write out executable phar archive, phar is read-only");
  return;
 }

 switch (format) {
  case 9021976:
  case 0:

   if (phar_obj->arc.archive->is_tar) {
    format = 2;
   } else if (phar_obj->arc.archive->is_zip) {
    format = 3;
   } else {
    format = 1;
   }
   break;
  case 1:
  case 2:
  case 3:
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown file format specified, please pass one of Phar::PHAR, Phar::TAR or Phar::ZIP");
   return;
 }

 switch (method) {
  case 9021976:
   flags = phar_obj->arc.archive->flags & 0x00F00000;
   break;
  case 0:
   flags = 0x00000000;
   break;
  case 0x00001000:
   if (format == 3) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with gzip, zip archives do not support whole-archive compression");
    return;
   }

   if (!(phar_globals.has_zlib)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with gzip, enable ext/zlib in php.ini");
    return;
   }

   flags = 0x00100000;
   break;
  case 0x00002000:
   if (format == 3) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with bz2, zip archives do not support whole-archive compression");
    return;
   }

   if (!(phar_globals.has_bz2)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with bz2, enable ext/bz2 in php.ini");
    return;
   }

   flags = 0x00200000;
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression specified, please pass one of Phar::GZ or Phar::BZ2");
   return;
 }

 is_data = phar_obj->arc.archive->is_data;
 phar_obj->arc.archive->is_data = 0;
 ret = phar_convert_to_other(phar_obj->arc.archive, format, ext, flags );
 phar_obj->arc.archive->is_data = is_data;

 if (ret) {
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}







void zim_Phar_convertToData(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *ext = ((void *)0);
 int is_data, ext_len = 0;
 php_uint32 flags;
 zval *ret;

 long format = 9021976, method = 9021976;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "|lls", &format, &method, &ext, &ext_len) == FAILURE) {
  return;
 }

 switch (format) {
  case 9021976:
  case 0:

   if (phar_obj->arc.archive->is_tar) {
    format = 2;
   } else if (phar_obj->arc.archive->is_zip) {
    format = 3;
   } else {
    zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
     "Cannot write out data phar archive, use Phar::TAR or Phar::ZIP");
    return;
   }
   break;
  case 1:
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Cannot write out data phar archive, use Phar::TAR or Phar::ZIP");
   return;
  case 2:
  case 3:
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown file format specified, please pass one of Phar::TAR or Phar::ZIP");
   return;
 }

 switch (method) {
  case 9021976:
   flags = phar_obj->arc.archive->flags & 0x00F00000;
   break;
  case 0:
   flags = 0x00000000;
   break;
  case 0x00001000:
   if (format == 3) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with gzip, zip archives do not support whole-archive compression");
    return;
   }

   if (!(phar_globals.has_zlib)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with gzip, enable ext/zlib in php.ini");
    return;
   }

   flags = 0x00100000;
   break;
  case 0x00002000:
   if (format == 3) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with bz2, zip archives do not support whole-archive compression");
    return;
   }

   if (!(phar_globals.has_bz2)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with bz2, enable ext/bz2 in php.ini");
    return;
   }

   flags = 0x00200000;
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression specified, please pass one of Phar::GZ or Phar::BZ2");
   return;
 }

 is_data = phar_obj->arc.archive->is_data;
 phar_obj->arc.archive->is_data = 1;
 ret = phar_convert_to_other(phar_obj->arc.archive, format, ext, flags );
 phar_obj->arc.archive->is_data = is_data;

 if (ret) {
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}






void zim_Phar_isCompressed(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->flags & 0x00100000) {
  { { zval *__z = (return_value); (*__z).value.lval = 0x00001000; (*__z).type = 1; }; return; };
 }

 if (phar_obj->arc.archive->flags & 0x00200000) {
  { { zval *__z = (return_value); (*__z).value.lval = 0x00002000; (*__z).type = 1; }; return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_isWritable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_stream_statbuf ssb;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (!phar_obj->arc.archive->is_writeable) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (SUCCESS != _php_stream_stat_path((phar_obj->arc.archive->fname), 0, (&ssb), ((void *)0) )) {
  if (phar_obj->arc.archive->is_brandnew) {

   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = (((ssb.sb.st_mode & (((0200 >> 3) >> 3) | (0200 >> 3) | 0200)) != 0) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_delete(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname;
 int fname_len;
 char *error;
 phar_entry_info *entry;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write out phar archive, phar is read-only");
  return;
 }

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }
 if (zend_hash_exists(&phar_obj->arc.archive->manifest, fname, (uint) fname_len)) {
  if (SUCCESS == zend_hash_find(&phar_obj->arc.archive->manifest, fname, (uint) fname_len, (void**)&entry)) {
   if (entry->is_deleted) {

    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   } else {
    entry->is_deleted = 1;
    entry->is_modified = 1;
    phar_obj->arc.archive->is_modified = 1;
   }
  }
 } else {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s does not exist and cannot be deleted", fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 phar_flush(phar_obj->arc.archive, ((void *)0), 0, 0, &error );
 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_getAlias(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->alias && phar_obj->arc.archive->alias != phar_obj->arc.archive->fname) {
  { do { const char *__s=(phar_obj->arc.archive->alias); int __l=phar_obj->arc.archive->alias_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
}





void zim_Phar_getPath(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { const char *__s=(phar_obj->arc.archive->fname); int __l=phar_obj->arc.archive->fname_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}






void zim_Phar_setAlias(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *alias, *error, *oldalias;
 phar_archive_data **fd_ptr;
 int alias_len, oldalias_len, old_temp, readd = 0;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write out phar archive, phar is read-only");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }


 (phar_globals.last_phar) = ((void *)0);
 (phar_globals.last_phar_name) = (phar_globals.last_alias) = ((void *)0);

 if (phar_obj->arc.archive->is_data) {
  if (phar_obj->arc.archive->is_tar) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar alias cannot be set in a plain tar archive");
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar alias cannot be set in a plain zip archive");
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (zend_parse_parameters((ht) , "s", &alias, &alias_len) == SUCCESS) {
  if (alias_len == phar_obj->arc.archive->alias_len && memcmp(phar_obj->arc.archive->alias, alias, alias_len) == 0) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }
  if (alias_len && SUCCESS == zend_hash_find(&((&phar_globals)->phar_alias_map), alias, alias_len, (void**)&fd_ptr)) {
   spprintf(&error, 0, "alias \"%s\" is already used for archive \"%s\" and cannot be used for other archives", alias, (*fd_ptr)->fname);
   if (SUCCESS == phar_free_alias(*fd_ptr, alias, alias_len )) {
    _efree((error) );
    goto valid_alias;
   }
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  if (!phar_validate_alias(alias, alias_len)) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Invalid alias \"%s\" specified for phar \"%s\"", alias, phar_obj->arc.archive->fname);
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
valid_alias:
  if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
   return;
  }
  if (phar_obj->arc.archive->alias_len && SUCCESS == zend_hash_find(&((&phar_globals)->phar_alias_map), phar_obj->arc.archive->alias, phar_obj->arc.archive->alias_len, (void**)&fd_ptr)) {
   zend_hash_del_key_or_index(&((&phar_globals)->phar_alias_map), phar_obj->arc.archive->alias, phar_obj->arc.archive->alias_len, 0, 0);
   readd = 1;
  }

  oldalias = phar_obj->arc.archive->alias;
  oldalias_len = phar_obj->arc.archive->alias_len;
  old_temp = phar_obj->arc.archive->is_temporary_alias;

  if (alias_len) {
   phar_obj->arc.archive->alias = _estrndup((alias), (alias_len) );
  } else {
   phar_obj->arc.archive->alias = ((void *)0);
  }

  phar_obj->arc.archive->alias_len = alias_len;
  phar_obj->arc.archive->is_temporary_alias = 0;
  phar_flush(phar_obj->arc.archive, ((void *)0), 0, 0, &error );

  if (error) {
   phar_obj->arc.archive->alias = oldalias;
   phar_obj->arc.archive->alias_len = oldalias_len;
   phar_obj->arc.archive->is_temporary_alias = old_temp;
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   if (readd) {
    _zend_hash_add_or_update(&((&phar_globals)->phar_alias_map), oldalias, oldalias_len, (void*)&(phar_obj->arc.archive), sizeof(phar_archive_data*), ((void *)0), (1<<1) );
   }
   _efree((error) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }

  _zend_hash_add_or_update(&((&phar_globals)->phar_alias_map), alias, alias_len, (void*)&(phar_obj->arc.archive), sizeof(phar_archive_data*), ((void *)0), (1<<1) );

  if (oldalias) {
   _efree((oldalias) );
  }

  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_getVersion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { const char *__s=(phar_obj->arc.archive->version); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}





void zim_Phar_startBuffering(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 phar_obj->arc.archive->donotflush = 1;
}





void zim_Phar_isBuffering(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((phar_obj->arc.archive->donotflush) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_stopBuffering(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot write out phar archive, phar is read-only");
  return;
 }

 phar_obj->arc.archive->donotflush = 0;
 phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}






void zim_Phar_setStub(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *zstub;
 char *stub, *error;
 int stub_len;
 long len = -1;
 php_stream *stream;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot change stub, phar is read-only");
  return;
 }

 if (phar_obj->arc.archive->is_data) {
  if (phar_obj->arc.archive->is_tar) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar stub cannot be set in a plain tar archive");
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar stub cannot be set in a plain zip archive");
  }
  return;
 }

 if (zend_parse_parameters_ex(1<<1, (ht) , "r|l", &zstub, &len) == SUCCESS) {
  if (((stream) = (php_stream*)zend_fetch_resource((&zstub) , -1, "stream", ((void *)0), 2, php_file_le_stream(), php_file_le_pstream())) != ((void *)0)) {
   if (len > 0) {
    len = -len;
   } else {
    len = -1;
   }
   if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
    return;
   }
   phar_flush(phar_obj->arc.archive, (char *) &zstub, len, 0, &error );
   if (error) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
    _efree((error) );
   }
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Cannot change stub, unable to read from input stream");
  }
 } else if (zend_parse_parameters((ht) , "s", &stub, &stub_len) == SUCCESS) {
  if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
   return;
  }
  phar_flush(phar_obj->arc.archive, stub, stub_len, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }

  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}
# 2955 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_setDefaultStub(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *index = ((void *)0), *webindex = ((void *)0), *error = ((void *)0), *stub = ((void *)0);
 int index_len = 0, webindex_len = 0, created_stub = 0;
 size_t stub_len = 0;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (phar_obj->arc.archive->is_data) {
  if (phar_obj->arc.archive->is_tar) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar stub cannot be set in a plain tar archive");
  } else {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "A Phar stub cannot be set in a plain zip archive");
  }
  return;
 }

 if (zend_parse_parameters((ht) , "|s!s", &index, &index_len, &webindex, &webindex_len) == FAILURE) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if ((ht) > 0 && (phar_obj->arc.archive->is_tar || phar_obj->arc.archive->is_zip)) {
  php_error_docref0(((void *)0) , (1<<1L), "method accepts no arguments for a tar- or zip-based phar stub, %d given", (ht));
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if ((phar_globals.readonly)) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot change stub: phar.readonly=1");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (!phar_obj->arc.archive->is_tar && !phar_obj->arc.archive->is_zip) {
  stub = phar_create_default_stub(index, webindex, &stub_len, &error );

  if (error) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "%s", error);
   _efree((error) );
   if (stub) {
    _efree((stub) );
   }
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }

  created_stub = 1;
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }
 phar_flush(phar_obj->arc.archive, stub, stub_len, 1, &error );

 if (created_stub) {
  _efree((stub) );
 }

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}
# 3029 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_Phar_setSignatureAlgorithm(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long algo;
 char *error, *key = ((void *)0);
 int key_len = 0;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot set signature algorithm, phar is read-only");
  return;
 }

 if (zend_parse_parameters_ex(1<<1, (ht) , "l|s", &algo, &key, &key_len) != SUCCESS) {
  return;
 }

 switch (algo) {
  case 0x0003:
  case 0x0004:





  case 0x0001:
  case 0x0002:
  case 0x0010:
   if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
    return;
   }
   phar_obj->arc.archive->sig_flags = algo;
   phar_obj->arc.archive->is_modified = 1;
   (phar_globals.openssl_privatekey) = key;
   (phar_globals.openssl_privatekey_len) = key_len;

   phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );
   if (error) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
    _efree((error) );
   }
   break;
  default:
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "Unknown signature algorithm specified");
 }
}





void zim_Phar_getSignature(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->signature) {
  char *unknown;
  int unknown_len;

  _array_init((return_value), 0 );
  add_assoc_stringl_ex(return_value, "hash", strlen("hash")+1, phar_obj->arc.archive->signature, phar_obj->arc.archive->sig_len, 1);
  switch(phar_obj->arc.archive->sig_flags) {
   case 0x0001:
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, "MD5", 3, 1);
    break;
   case 0x0002:
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, "SHA-1", 5, 1);
    break;
   case 0x0003:
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, "SHA-256", 7, 1);
    break;
   case 0x0004:
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, "SHA-512", 7, 1);
    break;
   case 0x0010:
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, "OpenSSL", 7, 1);
    break;
   default:
    unknown_len = spprintf(&unknown, 0, "Unknown (%u)", phar_obj->arc.archive->sig_flags);
    add_assoc_stringl_ex(return_value, "hash_type", strlen("hash_type")+1, unknown, unknown_len, 0);
    break;
  }
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zim_Phar_getModified(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((phar_obj->arc.archive->is_modified) != 0); (*__z).type = 3; } while (0); return; };
}


static int phar_set_compression(void *pDest, void *argument )
{
 phar_entry_info *entry = (phar_entry_info *)pDest;
 php_uint32 compress = *(php_uint32 *)argument;

 if (entry->is_deleted) {
  return 0;
 }

 entry->old_flags = entry->flags;
 entry->flags &= ~0x0000F000;
 entry->flags |= compress;
 entry->is_modified = 1;
 return 0;
}


static int phar_test_compression(void *pDest, void *argument )
{
 phar_entry_info *entry = (phar_entry_info *)pDest;

 if (entry->is_deleted) {
  return 0;
 }

 if (!(phar_globals.has_bz2)) {
  if (entry->flags & 0x00002000) {
   *(int *) argument = 0;
  }
 }

 if (!(phar_globals.has_zlib)) {
  if (entry->flags & 0x00001000) {
   *(int *) argument = 0;
  }
 }

 return 0;
}


static void pharobj_set_compression(HashTable *manifest, php_uint32 compress )
{
 zend_hash_apply_with_argument(manifest, phar_set_compression, &compress );
}


static int pharobj_cancompress(HashTable *manifest )
{
 int test;

 test = 1;
 zend_hash_apply_with_argument(manifest, phar_test_compression, &test );
 return test;
}







void zim_Phar_compress(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long method;
 char *ext = ((void *)0);
 int ext_len = 0;
 php_uint32 flags;
 zval *ret;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "l|s", &method, &ext, &ext_len) == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot compress phar archive, phar is read-only");
  return;
 }

 if (phar_obj->arc.archive->is_zip) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot compress zip-based archives with whole-archive compression");
  return;
 }

 switch (method) {
  case 0:
   flags = 0x00000000;
   break;
  case 0x00001000:
   if (!(phar_globals.has_zlib)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with gzip, enable ext/zlib in php.ini");
    return;
   }
   flags = 0x00100000;
   break;

  case 0x00002000:
   if (!(phar_globals.has_bz2)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress entire archive with bz2, enable ext/bz2 in php.ini");
    return;
   }
   flags = 0x00200000;
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression specified, please pass one of Phar::GZ or Phar::BZ2");
   return;
 }

 if (phar_obj->arc.archive->is_tar) {
  ret = phar_convert_to_other(phar_obj->arc.archive, 2, ext, flags );
 } else {
  ret = phar_convert_to_other(phar_obj->arc.archive, 1, ext, flags );
 }

 if (ret) {
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}





void zim_Phar_decompress(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *ext = ((void *)0);
 int ext_len = 0;
 zval *ret;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "|s", &ext, &ext_len) == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot decompress phar archive, phar is read-only");
  return;
 }

 if (phar_obj->arc.archive->is_zip) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot decompress zip-based archives with whole-archive compression");
  return;
 }

 if (phar_obj->arc.archive->is_tar) {
  ret = phar_convert_to_other(phar_obj->arc.archive, 2, ext, 0x00000000 );
 } else {
  ret = phar_convert_to_other(phar_obj->arc.archive, 1, ext, 0x00000000 );
 }

 if (ret) {
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}







void zim_Phar_compressFiles(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 php_uint32 flags;
 long method;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "l", &method) == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar is readonly, cannot change compression");
  return;
 }

 switch (method) {
  case 0x00001000:
   if (!(phar_globals.has_zlib)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress files within archive with gzip, enable ext/zlib in php.ini");
    return;
   }
   flags = 0x00001000;
   break;

  case 0x00002000:
   if (!(phar_globals.has_bz2)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress files within archive with bz2, enable ext/bz2 in php.ini");
    return;
   }
   flags = 0x00002000;
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression specified, please pass one of Phar::GZ or Phar::BZ2");
   return;
 }

 if (phar_obj->arc.archive->is_tar) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot compress with Gzip compression, tar archives cannot compress individual files, use compress() to compress the whole archive");
  return;
 }

 if (!pharobj_cancompress(&phar_obj->arc.archive->manifest )) {
  if (flags == 0x00100000) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Cannot compress all files as Gzip, some are compressed as bzip2 and cannot be decompressed");
  } else {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Cannot compress all files as Bzip2, some are compressed as gzip and cannot be decompressed");
  }
  return;
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }
 pharobj_set_compression(&phar_obj->arc.archive->manifest, flags );
 phar_obj->arc.archive->is_modified = 1;
 phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "%s", error);
  _efree((error) );
 }
}





void zim_Phar_decompressFiles(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar is readonly, cannot change compression");
  return;
 }

 if (!pharobj_cancompress(&phar_obj->arc.archive->manifest )) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot decompress all files, some are compressed as bzip2 or gzip and cannot be decompressed");
  return;
 }

 if (phar_obj->arc.archive->is_tar) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
   return;
  }
  pharobj_set_compression(&phar_obj->arc.archive->manifest, 0x00000000 );
 }

 phar_obj->arc.archive->is_modified = 1;
 phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "%s", error);
  _efree((error) );
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_copy(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *oldfile, *newfile, *error;
 const char *pcr_error;
 int oldfile_len, newfile_len;
 phar_entry_info *oldentry, newentry = {0}, *temp;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "pp", &oldfile, &oldfile_len, &newfile, &newfile_len) == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "Cannot copy \"%s\" to \"%s\", phar is read-only", oldfile, newfile);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (oldfile_len >= sizeof(".phar")-1 && !memcmp(oldfile, ".phar", sizeof(".phar")-1)) {

  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "file \"%s\" cannot be copied to file \"%s\", cannot copy Phar meta-file in %s", oldfile, newfile, phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (newfile_len >= sizeof(".phar")-1 && !memcmp(newfile, ".phar", sizeof(".phar")-1)) {

  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "file \"%s\" cannot be copied to file \"%s\", cannot copy to Phar meta-file in %s", oldfile, newfile, phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (!zend_hash_exists(&phar_obj->arc.archive->manifest, oldfile, (uint) oldfile_len) || SUCCESS != zend_hash_find(&phar_obj->arc.archive->manifest, oldfile, (uint) oldfile_len, (void**)&oldentry) || oldentry->is_deleted) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
   "file \"%s\" cannot be copied to file \"%s\", file does not exist in %s", oldfile, newfile, phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (zend_hash_exists(&phar_obj->arc.archive->manifest, newfile, (uint) newfile_len)) {
  if (SUCCESS == zend_hash_find(&phar_obj->arc.archive->manifest, newfile, (uint) newfile_len, (void**)&temp) || !temp->is_deleted) {
   zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "file \"%s\" cannot be copied to file \"%s\", file must not already exist in phar %s", oldfile, newfile, phar_obj->arc.archive->fname);
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 }

 if (phar_path_check(&newfile, &newfile_len, &pcr_error) > pcr_is_ok) {
  zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 ,
    "file \"%s\" contains invalid characters %s, cannot be copied from \"%s\" in phar %s", newfile, pcr_error, oldfile, phar_obj->arc.archive->fname);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (phar_obj->arc.archive->is_persistent) {
  if (FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
   return;
  }

  zend_hash_find(&phar_obj->arc.archive->manifest, oldfile, (uint) oldfile_len, (void**)&oldentry);
 }

 memcpy((void *) &newentry, oldentry, sizeof(phar_entry_info));

 if (newentry.metadata) {
  zval *t;

  t = newentry.metadata;
  do { (newentry.metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(newentry.metadata))->u.buffered = ((void *)0); } while (0);
  *newentry.metadata = *t;
  _zval_copy_ctor((newentry.metadata) );
  zval_set_refcount_p(newentry.metadata, 1);

  newentry.metadata_str.c = ((void *)0);
  newentry.metadata_str.len = 0;
 }

 newentry.filename = _estrndup((newfile), (newfile_len) );
 newentry.filename_len = newfile_len;
 newentry.fp_refcount = 0;

 if (oldentry->fp_type != PHAR_FP) {
  if (FAILURE == phar_copy_entry_fp(oldentry, &newentry, &error )) {
   _efree((newentry.filename) );
   _php_stream_free((newentry.fp), (1 | 2) );
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
   return;
  }
 }

 _zend_hash_add_or_update(&oldentry->phar->manifest, newfile, newfile_len, (void*)&newentry, sizeof(phar_entry_info), ((void *)0), (1<<1) );
 phar_obj->arc.archive->is_modified = 1;
 phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_offsetExists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname;
 int fname_len;
 phar_entry_info *entry;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  return;
 }

 if (zend_hash_exists(&phar_obj->arc.archive->manifest, fname, (uint) fname_len)) {
  if (SUCCESS == zend_hash_find(&phar_obj->arc.archive->manifest, fname, (uint) fname_len, (void**)&entry)) {
   if (entry->is_deleted) {

    { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
   }
  }

  if (fname_len >= sizeof(".phar")-1 && !memcmp(fname, ".phar", sizeof(".phar")-1)) {

   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  if (zend_hash_exists(&phar_obj->arc.archive->virtual_dirs, fname, (uint) fname_len)) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zim_Phar_offsetGet(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *error;
 int fname_len;
 zval *zfname;
 phar_entry_info *entry;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  return;
 }


 if (!(entry = phar_get_entry_info_dir(phar_obj->arc.archive, fname, fname_len, 1, &error, 0 ))) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s does not exist%s%s", fname, error?", ":"", error?error:"");
 } else {
  if (fname_len == sizeof(".phar/stub.php")-1 && !memcmp(fname, ".phar/stub.php", sizeof(".phar/stub.php")-1)) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot get stub \".phar/stub.php\" directly in phar \"%s\", use getStub", phar_obj->arc.archive->fname);
   return;
  }

  if (fname_len == sizeof(".phar/alias.txt")-1 && !memcmp(fname, ".phar/alias.txt", sizeof(".phar/alias.txt")-1)) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot get alias \".phar/alias.txt\" directly in phar \"%s\", use getAlias", phar_obj->arc.archive->fname);
   return;
  }

  if (fname_len >= sizeof(".phar")-1 && !memcmp(fname, ".phar", sizeof(".phar")-1)) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot directly get any files or directories in magic \".phar\" directory", phar_obj->arc.archive->fname);
   return;
  }

  if (entry->is_temp_dir) {
   _efree((entry->filename) );
   _efree((entry) );
  }

  fname_len = spprintf(&fname, 0, "phar://%s/%s", phar_obj->arc.archive->fname, fname);
  do { (zfname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(zfname))->u.buffered = ((void *)0); } while (0); (zfname)->refcount__gc = 1; (zfname)->is_ref__gc = 0;;;
  do { const char *__s=(fname); int __l=fname_len; zval *__z = (zfname); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  spl_instantiate_arg_ex1(phar_obj->spl.info_class, &return_value, 0, zfname );
  _zval_ptr_dtor((&zfname) );
 }
}




static void phar_add_file(phar_archive_data **pphar, char *filename, int filename_len, char *cont_str, int cont_len, zval *zresource )
{
 char *error;
 size_t contents_len;
 phar_entry_data *data;
 php_stream *contents_file;

 if (filename_len >= sizeof(".phar")-1 && !memcmp(filename, ".phar", sizeof(".phar")-1) && (filename[5] == '/' || filename[5] == '\\' || filename[5] == '\0')) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot create any files in magic \".phar\" directory", (*pphar)->fname);
  return;
 }

 if (!(data = phar_get_or_create_entry_data((*pphar)->fname, (*pphar)->fname_len, filename, filename_len, "w+b", 0, &error, 1 ))) {
  if (error) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s does not exist and cannot be created: %s", filename, error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s does not exist and cannot be created", filename);
  }
  return;
 } else {
  if (error) {
   _efree((error) );
  }

  if (!data->internal_file->is_dir) {
   if (cont_str) {
    contents_len = _php_stream_write(data->fp, (cont_str), (cont_len) );
    if (contents_len != cont_len) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s could not be written to", filename);
     return;
    }
   } else {
    if (!((contents_file) = (php_stream*)zend_fetch_resource((&zresource) , -1, "stream", ((void *)0), 2, php_file_le_stream(), php_file_le_pstream()))) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Entry %s could not be written to", filename);
     return;
    }
    _php_stream_copy_to_stream_ex((contents_file), (data->fp), (((size_t)-1)), (&contents_len) );
   }

   data->internal_file->compressed_filesize = data->internal_file->uncompressed_filesize = contents_len;
  }


  if (pphar[0] != data->phar) {
   *pphar = data->phar;
  }
  phar_entry_delref(data );
  phar_flush(*pphar, 0, 0, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }
 }
}




static void phar_mkdir(phar_archive_data **pphar, char *dirname, int dirname_len )
{
 char *error;
 phar_entry_data *data;

 if (!(data = phar_get_or_create_entry_data((*pphar)->fname, (*pphar)->fname_len, dirname, dirname_len, "w+b", 2, &error, 1 ))) {
  if (error) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Directory %s does not exist and cannot be created: %s", dirname, error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Directory %s does not exist and cannot be created", dirname);
  }

  return;
 } else {
  if (error) {
   _efree((error) );
  }


  if (data->phar != *pphar) {
   *pphar = data->phar;
  }
  phar_entry_delref(data );
  phar_flush(*pphar, 0, 0, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
  }
 }
}





void zim_Phar_offsetSet(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *cont_str = ((void *)0);
 int fname_len, cont_len;
 zval *zresource;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (zend_parse_parameters_ex(1<<1, (ht) , "pr", &fname, &fname_len, &zresource) == FAILURE
 && zend_parse_parameters((ht) , "ps", &fname, &fname_len, &cont_str, &cont_len) == FAILURE) {
  return;
 }

 if (fname_len == sizeof(".phar/stub.php")-1 && !memcmp(fname, ".phar/stub.php", sizeof(".phar/stub.php")-1)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot set stub \".phar/stub.php\" directly in phar \"%s\", use setStub", phar_obj->arc.archive->fname);
  return;
 }

 if (fname_len == sizeof(".phar/alias.txt")-1 && !memcmp(fname, ".phar/alias.txt", sizeof(".phar/alias.txt")-1)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot set alias \".phar/alias.txt\" directly in phar \"%s\", use setAlias", phar_obj->arc.archive->fname);
  return;
 }

 if (fname_len >= sizeof(".phar")-1 && !memcmp(fname, ".phar", sizeof(".phar")-1)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot set any files or directories in magic \".phar\" directory", phar_obj->arc.archive->fname);
  return;
 }

 phar_add_file(&(phar_obj->arc.archive), fname, fname_len, cont_str, cont_len, zresource );
}





void zim_Phar_offsetUnset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *error;
 int fname_len;
 phar_entry_info *entry;
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  return;
 }

 if (zend_hash_exists(&phar_obj->arc.archive->manifest, fname, (uint) fname_len)) {
  if (SUCCESS == zend_hash_find(&phar_obj->arc.archive->manifest, fname, (uint) fname_len, (void**)&entry)) {
   if (entry->is_deleted) {

    return;
   }

   if (phar_obj->arc.archive->is_persistent) {
    if (FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
     zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
     return;
    }

    zend_hash_find(&phar_obj->arc.archive->manifest, fname, (uint) fname_len, (void **)&entry);
   }
   entry->is_modified = 0;
   entry->is_deleted = 1;

   phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

   if (error) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
    _efree((error) );
   }

   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zim_Phar_addEmptyDir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *dirname;
 int dirname_len;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "p", &dirname, &dirname_len) == FAILURE) {
  return;
 }

 if (dirname_len >= sizeof(".phar")-1 && !memcmp(dirname, ".phar", sizeof(".phar")-1)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot create a directory in magic \".phar\" directory");
  return;
 }

 phar_mkdir(&phar_obj->arc.archive, dirname, dirname_len );
}





void zim_Phar_addFile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *localname = ((void *)0);
 int fname_len, localname_len = 0;
 php_stream *resource;
 zval *zresource;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "p|s", &fname, &fname_len, &localname, &localname_len) == FAILURE) {
  return;
 }
# 3856 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
 if (!strstr(fname, "://") && php_check_open_basedir(fname )) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 , "phar error: unable to open file \"%s\" to add to phar archive, open_basedir restrictions prevent this", fname);
  return;
 }

 if (!(resource = _php_stream_open_wrapper_ex((fname), ("rb"), (0), (((void *)0)), ((void *)0) ))) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 , "phar error: unable to open file \"%s\" to add to phar archive", fname);
  return;
 }

 if (localname) {
  fname = localname;
  fname_len = localname_len;
 }

 do { (zresource) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(zresource))->u.buffered = ((void *)0); } while (0); (zresource)->refcount__gc = 1; (zresource)->is_ref__gc = 0;;;
 { do { zval *__z = (zresource); (*__z).value.lval = (resource)->rsrc_id; (*__z).type = 7; } while (0); };
 phar_add_file(&(phar_obj->arc.archive), fname, fname_len, ((void *)0), 0, zresource );
 _efree((zresource) );
 _php_stream_free((resource), (1 | 2) );
}





void zim_Phar_addFromString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *localname, *cont_str;
 int localname_len, cont_len;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "ps", &localname, &localname_len, &cont_str, &cont_len) == FAILURE) {
  return;
 }

 phar_add_file(&(phar_obj->arc.archive), localname, localname_len, cont_str, cont_len, ((void *)0) );
}





void zim_Phar_getStub(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 size_t len;
 char *buf;
 php_stream *fp;
 php_stream_filter *filter = ((void *)0);
 phar_entry_info *stub;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->is_tar || phar_obj->arc.archive->is_zip) {

  if (SUCCESS == zend_hash_find(&(phar_obj->arc.archive->manifest), ".phar/stub.php", sizeof(".phar/stub.php")-1, (void **)&stub)) {
   if (phar_obj->arc.archive->fp && !phar_obj->arc.archive->is_brandnew && !(stub->flags & 0x0000F000)) {
    fp = phar_obj->arc.archive->fp;
   } else {
    if (!(fp = _php_stream_open_wrapper_ex((phar_obj->arc.archive->fname), ("rb"), (0), (((void *)0)), ((void *)0) ))) {
     zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "phar error: unable to open phar \"%s\"", phar_obj->arc.archive->fname);
     return;
    }
    if (stub->flags & 0x0000F000) {
     char *filter_name;

     if ((filter_name = phar_decompress_filter(stub, 0)) != ((void *)0)) {
      filter = php_stream_filter_create(filter_name, ((void *)0), (fp)->is_persistent );
     } else {
      filter = ((void *)0);
     }
     if (!filter) {
      zend_throw_exception_ex(spl_ce_UnexpectedValueException, 0 , "phar error: unable to read stub of phar \"%s\" (cannot create %s filter)", phar_obj->arc.archive->fname, phar_decompress_filter(stub, 1));
      return;
     }
     _php_stream_filter_append((&fp->readfilters), (filter) );
    }
   }

   if (!fp) {
    zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
     "Unable to read stub");
    return;
   }

   _php_stream_seek((fp), (stub->offset_abs), (0) );
   len = stub->uncompressed_filesize;
   goto carry_on;
  } else {
   { do { const char *__s=(""); int __l=0; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
  }
 }
 len = phar_obj->arc.archive->halt_offset;

 if (phar_obj->arc.archive->fp && !phar_obj->arc.archive->is_brandnew) {
  fp = phar_obj->arc.archive->fp;
 } else {
  fp = _php_stream_open_wrapper_ex((phar_obj->arc.archive->fname), ("rb"), (0), (((void *)0)), ((void *)0) );
 }

 if (!fp) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
   "Unable to read stub");
  return;
 }

 _php_stream_seek((fp), 0L, 0 );
carry_on:
 buf = _safe_emalloc((len), (1), (1) );

 if (len != _php_stream_read((fp), (buf), (len) )) {
  if (fp != phar_obj->arc.archive->fp) {
   _php_stream_free((fp), (1 | 2) );
  }
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
   "Unable to read stub");
  _efree((buf) );
  return;
 }

 if (filter) {
  _php_stream_filter_flush((filter), (1) );
  php_stream_filter_remove(filter, 1 );
 }

 if (fp != phar_obj->arc.archive->fp) {
  _php_stream_free((fp), (1 | 2) );
 }

 buf[len] = '\0';
 { do { const char *__s=(buf); int __l=len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}





void zim_Phar_hasMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 { do { zval *__z = (return_value); (*__z).value.lval = ((phar_obj->arc.archive->metadata != ((void *)0)) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_Phar_getMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->metadata) {
  if (phar_obj->arc.archive->is_persistent) {
   zval *ret;
   char *buf = _estrndup(((char *) phar_obj->arc.archive->metadata), (phar_obj->arc.archive->metadata_len) );

   phar_parse_metadata(&buf, &ret, phar_obj->arc.archive->metadata_len );
   _efree((buf) );
   { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (0) { _zval_copy_ctor((return_value) ); } if (1) { if (!0) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
  }
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (phar_obj->arc.archive->metadata)->value; (*return_value).type = (*phar_obj->arc.archive->metadata).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*phar_obj->arc.archive->metadata).type = 0; }; } _zval_ptr_dtor((&phar_obj->arc.archive->metadata) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 }
}





void zim_Phar_setMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 zval *metadata;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (zend_parse_parameters((ht) , "z", &metadata) == FAILURE) {
  return;
 }

 if (phar_obj->arc.archive->is_persistent && FAILURE == phar_copy_on_write(&(phar_obj->arc.archive) )) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar_obj->arc.archive->fname);
  return;
 }
 if (phar_obj->arc.archive->metadata) {
  _zval_ptr_dtor((&phar_obj->arc.archive->metadata) );
  phar_obj->arc.archive->metadata = ((void *)0);
 }

 do { (phar_obj->arc.archive->metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(phar_obj->arc.archive->metadata))->u.buffered = ((void *)0); } while (0); (phar_obj->arc.archive->metadata)->refcount__gc = 1; (phar_obj->arc.archive->metadata)->is_ref__gc = 0;;;
 { zend_uchar is_ref = zval_isref_p(phar_obj->arc.archive->metadata); zend_uint refcount = zval_refcount_p(phar_obj->arc.archive->metadata); do { (phar_obj->arc.archive->metadata)->value = (metadata)->value; (*phar_obj->arc.archive->metadata).type = (*metadata).type; } while (0); if (1) { _zval_copy_ctor((phar_obj->arc.archive->metadata) ); } if (0) { if (!1) { { (*metadata).type = 0; }; } _zval_ptr_dtor((&metadata) ); } zval_set_isref_to_p(phar_obj->arc.archive->metadata, is_ref); zval_set_refcount_p(phar_obj->arc.archive->metadata, refcount); };
 phar_obj->arc.archive->is_modified = 1;
 phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}





void zim_Phar_delMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if ((phar_globals.readonly) && !phar_obj->arc.archive->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (phar_obj->arc.archive->metadata) {
  _zval_ptr_dtor((&phar_obj->arc.archive->metadata) );
  phar_obj->arc.archive->metadata = ((void *)0);
  phar_obj->arc.archive->is_modified = 1;
  phar_flush(phar_obj->arc.archive, 0, 0, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }

 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }
}
# 4112 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
static int phar_extract_file(zend_bool overwrite, phar_entry_info *entry, char *dest, int dest_len, char **error )
{
 php_stream_statbuf ssb;
 int len;
 php_stream *fp;
 char *fullpath;
 const char *slash;
 mode_t mode;
 cwd_state new_state;
 char *filename;
 size_t filename_len;

 if (entry->is_mounted) {

  return SUCCESS;
 }

 if (entry->filename_len >= sizeof(".phar")-1 && !memcmp(entry->filename, ".phar", sizeof(".phar")-1)) {
  return SUCCESS;
 }

 new_state.cwd = (char*)malloc(2);
 new_state.cwd[0] = '/';
 new_state.cwd[1] = '\0';
 new_state.cwd_length = 1;
 if (virtual_file_ex(&new_state, entry->filename, ((void *)0), 0 ) != 0 ||
   new_state.cwd_length <= 1) {
  if (22 == (*__errno_location ()) && entry->filename_len > 50) {
   char *tmp = _estrndup((entry->filename), (50) );
   spprintf(error, 4096, "Cannot extract \"%s...\" to \"%s...\", extracted filename is too long for filesystem", tmp, dest);
   _efree((tmp) );
  } else {
   spprintf(error, 4096, "Cannot extract \"%s\", internal error", entry->filename);
  }
  free(new_state.cwd);
  return FAILURE;
 }
 filename = new_state.cwd + 1;
 filename_len = new_state.cwd_length - 1;
# 4164 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
 len = spprintf(&fullpath, 0, "%s/%s", dest, filename);

 if (len >= 4096) {
  char *tmp;

  fullpath[50] = '\0';
  if (entry->filename_len > 50) {
   tmp = _estrndup((entry->filename), (50) );
   spprintf(error, 4096, "Cannot extract \"%s...\" to \"%s...\", extracted filename is too long for filesystem", tmp, fullpath);
   _efree((tmp) );
  } else {
   spprintf(error, 4096, "Cannot extract \"%s\" to \"%s...\", extracted filename is too long for filesystem", entry->filename, fullpath);
  }
  _efree((fullpath) );
  free(new_state.cwd);
  return FAILURE;
 }

 if (!len) {
  spprintf(error, 4096, "Cannot extract \"%s\", internal error", entry->filename);
  _efree((fullpath) );
  free(new_state.cwd);
  return FAILURE;
 }

 if (php_check_open_basedir(fullpath )) {
  spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", openbasedir/safe mode restrictions in effect", entry->filename, fullpath);
  _efree((fullpath) );
  free(new_state.cwd);
  return FAILURE;
 }


 if (!overwrite && SUCCESS == _php_stream_stat_path((fullpath), 0, (&ssb), ((void *)0) )) {
  spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", path already exists", entry->filename, fullpath);
  _efree((fullpath) );
  free(new_state.cwd);
  return FAILURE;
 }


 slash = zend_memrchr(filename, '/', filename_len);

 if (slash) {
  fullpath[dest_len + (slash - filename) + 1] = '\0';
 } else {
  fullpath[dest_len] = '\0';
 }

 if (FAILURE == _php_stream_stat_path((fullpath), 0, (&ssb), ((void *)0) )) {
  if (entry->is_dir) {
   if (!_php_stream_mkdir(fullpath, entry->flags & 0x000001FF, 1, ((void *)0) )) {
    spprintf(error, 4096, "Cannot extract \"%s\", could not create directory \"%s\"", entry->filename, fullpath);
    _efree((fullpath) );
    free(new_state.cwd);
    return FAILURE;
   }
  } else {
   if (!_php_stream_mkdir(fullpath, 0777, 1, ((void *)0) )) {
    spprintf(error, 4096, "Cannot extract \"%s\", could not create directory \"%s\"", entry->filename, fullpath);
    _efree((fullpath) );
    free(new_state.cwd);
    return FAILURE;
   }
  }
 }

 if (slash) {
  fullpath[dest_len + (slash - filename) + 1] = '/';
 } else {
  fullpath[dest_len] = '/';
 }

 filename = ((void *)0);
 free(new_state.cwd);

 if (entry->is_dir) {
  _efree((fullpath) );
  return SUCCESS;
 }




 fp = _php_stream_open_wrapper_ex((fullpath), ("w+b"), (0x00000008), (((void *)0)), ((void *)0) );


 if (!fp) {
  spprintf(error, 4096, "Cannot extract \"%s\", could not open for writing \"%s\"", entry->filename, fullpath);
  _efree((fullpath) );
  return FAILURE;
 }

 if (!phar_get_efp(entry, 0 )) {
  if (FAILURE == phar_open_entry_fp(entry, error, 1 )) {
   if (error) {
    spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", unable to open internal file pointer: %s", entry->filename, fullpath, *error);
   } else {
    spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", unable to open internal file pointer", entry->filename, fullpath);
   }
   _efree((fullpath) );
   _php_stream_free((fp), (1 | 2) );
   return FAILURE;
  }
 }

 if (FAILURE == phar_seek_efp(entry, 0, 0, 0, 0 )) {
  spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", unable to seek internal file pointer", entry->filename, fullpath);
  _efree((fullpath) );
  _php_stream_free((fp), (1 | 2) );
  return FAILURE;
 }

 if (SUCCESS != _php_stream_copy_to_stream_ex((phar_get_efp(entry, 0 )), (fp), (entry->uncompressed_filesize), (((void *)0)) )) {
  spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", copying contents failed", entry->filename, fullpath);
  _efree((fullpath) );
  _php_stream_free((fp), (1 | 2) );
  return FAILURE;
 }

 _php_stream_free((fp), (1 | 2) );
 mode = (mode_t) entry->flags & 0x000001FF;

 if (FAILURE == chmod(fullpath, mode)) {
  spprintf(error, 4096, "Cannot extract \"%s\" to \"%s\", setting file permissions failed", entry->filename, fullpath);
  _efree((fullpath) );
  return FAILURE;
 }

 _efree((fullpath) );
 return SUCCESS;
}





void zim_Phar_extractTo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error = ((void *)0);
 php_stream *fp;
 php_stream_statbuf ssb;
 phar_entry_info *entry;
 char *pathto, *filename, *actual;
 int pathto_len, filename_len;
 int ret, i;
 int nelems;
 zval *zval_files = ((void *)0);
 zend_bool overwrite = 0;

 phar_archive_object *phar_obj = (phar_archive_object*)zend_object_store_get_object((this_ptr) ); if (!phar_obj->arc.archive) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized Phar object"); return; };

 if (zend_parse_parameters((ht) , "p|z!b", &pathto, &pathto_len, &zval_files, &overwrite) == FAILURE) {
  return;
 }

 fp = _php_stream_open_wrapper_ex((phar_obj->arc.archive->fname), ("rb"), (0x00000002|0x00000010), (&actual), ((void *)0) );

 if (!fp) {
  zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 ,
   "Invalid argument, %s cannot be found", phar_obj->arc.archive->fname);
  return;
 }

 _efree((actual) );
 _php_stream_free((fp), (1 | 2) );

 if (pathto_len < 1) {
  zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 ,
   "Invalid argument, extraction path must be non-zero length");
  return;
 }

 if (pathto_len >= 4096) {
  char *tmp = _estrndup((pathto), (50) );

  zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 , "Cannot extract to \"%s...\", destination directory is too long for filesystem", tmp);
  _efree((tmp) );
  return;
 }

 if (_php_stream_stat_path((pathto), 0, (&ssb), ((void *)0) ) < 0) {
  ret = _php_stream_mkdir(pathto, 0777, 1, ((void *)0) );
  if (!ret) {
   zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
    "Unable to create path \"%s\" for extraction", pathto);
   return;
  }
 } else if (!(ssb.sb.st_mode & 0040000)) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
   "Unable to use path \"%s\" for extraction, it is a file, must be a directory", pathto);
  return;
 }

 if (zval_files) {
  switch ((*zval_files).type) {
   case 0:
    goto all_files;
   case 6:
    filename = (*zval_files).value.str.val;
    filename_len = (*zval_files).value.str.len;
    break;
   case 4:
    nelems = zend_hash_num_elements((*zval_files).value.ht);
    if (nelems == 0 ) {
     { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
    }
    for (i = 0; i < nelems; i++) {
     zval **zval_file;
     if (zend_hash_index_find((*zval_files).value.ht, i, (void **) &zval_file) == SUCCESS) {
      switch ((**zval_file).type) {
       case 6:
        break;
       default:
        zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 ,
         "Invalid argument, array of filenames to extract contains non-string value");
        return;
      }
      if (FAILURE == zend_hash_find(&phar_obj->arc.archive->manifest, (**zval_file).value.str.val, (**zval_file).value.str.len, (void **)&entry)) {
       zend_throw_exception_ex(phar_ce_PharException, 0 ,
        "Phar Error: attempted to extract non-existent file \"%s\" from phar \"%s\"", (**zval_file).value.str.val, phar_obj->arc.archive->fname);
      }
      if (FAILURE == phar_extract_file(overwrite, entry, pathto, pathto_len, &error )) {
       zend_throw_exception_ex(phar_ce_PharException, 0 ,
        "Extraction from phar \"%s\" failed: %s", phar_obj->arc.archive->fname, error);
       _efree((error) );
       return;
      }
     }
    }
    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   default:
    zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 ,
     "Invalid argument, expected a filename (string) or array of filenames");
    return;
  }

  if (FAILURE == zend_hash_find(&phar_obj->arc.archive->manifest, filename, filename_len, (void **)&entry)) {
   zend_throw_exception_ex(phar_ce_PharException, 0 ,
    "Phar Error: attempted to extract non-existent file \"%s\" from phar \"%s\"", filename, phar_obj->arc.archive->fname);
   return;
  }

  if (FAILURE == phar_extract_file(overwrite, entry, pathto, pathto_len, &error )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 ,
    "Extraction from phar \"%s\" failed: %s", phar_obj->arc.archive->fname, error);
   _efree((error) );
   return;
  }
 } else {
  phar_archive_data *phar;
all_files:
  phar = phar_obj->arc.archive;

  if (!zend_hash_num_elements(&(phar->manifest))) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }

  for (zend_hash_internal_pointer_reset_ex(&phar->manifest, ((void *)0));
  (zend_hash_get_current_key_type_ex(&phar->manifest, ((void *)0)) == 3 ? FAILURE : SUCCESS) == SUCCESS;
  zend_hash_move_forward_ex(&phar->manifest, ((void *)0))) {

   if (zend_hash_get_current_data_ex(&phar->manifest, (void **)&entry, ((void *)0)) == FAILURE) {
    continue;
   }

   if (FAILURE == phar_extract_file(overwrite, entry, pathto, pathto_len, &error )) {
    zend_throw_exception_ex(phar_ce_PharException, 0 ,
     "Extraction from phar \"%s\" failed: %s", phar->fname, error);
    _efree((error) );
    return;
   }
  }
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}






void zim_PharFileInfo___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *fname, *arch, *entry, *error;
 int fname_len, arch_len, entry_len;
 phar_entry_object *entry_obj;
 phar_entry_info *entry_info;
 phar_archive_data *phar_data;
 zval *zobj = (this_ptr), arg1;

 if (zend_parse_parameters((ht) , "p", &fname, &fname_len) == FAILURE) {
  return;
 }

 entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) );

 if (entry_obj->ent.entry) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call constructor twice");
  return;
 }

 if (fname_len < 7 || memcmp(fname, "phar://", 7) || phar_split_fname(fname, fname_len, &arch, &arch_len, &entry, &entry_len, 2, 0 ) == FAILURE) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
   "'%s' is not a valid phar archive URL (must have at least phar://filename.phar)", fname);
  return;
 }

 if (phar_open_from_filename(arch, arch_len, ((void *)0), 0, 0x00000008, &phar_data, &error ) == FAILURE) {
  _efree((arch) );
  _efree((entry) );
  if (error) {
   zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
    "Cannot open phar file '%s': %s", fname, error);
   _efree((error) );
  } else {
   zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
    "Cannot open phar file '%s'", fname);
  }
  return;
 }

 if ((entry_info = phar_get_entry_info_dir(phar_data, entry, entry_len, 1, &error, 1 )) == ((void *)0)) {
  zend_throw_exception_ex(spl_ce_RuntimeException, 0 ,
   "Cannot access phar file entry '%s' in archive '%s'%s%s", entry, arch, error ? ", " : "", error ? error : "");
  _efree((arch) );
  _efree((entry) );
  return;
 }

 _efree((arch) );
 _efree((entry) );

 entry_obj->ent.entry = entry_info;

 (&arg1)->refcount__gc = 1; (&arg1)->is_ref__gc = 0;;
 do { const char *__s=(fname); int __l=fname_len; zval *__z = (&arg1); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 zend_call_method(&zobj, zend_get_class_entry(&(*zobj) ), &spl_ce_SplFileInfo->constructor, "__construct", sizeof("__construct")-1, ((void *)0), 1, &arg1, ((void *)0) )
                                                               ;
}
# 4518 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
void zim_PharFileInfo___destruct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) );

 if (entry_obj->ent.entry && entry_obj->ent.entry->is_temp_dir) {
  if (entry_obj->ent.entry->filename) {
   _efree((entry_obj->ent.entry->filename) );
   entry_obj->ent.entry->filename = ((void *)0);
  }

  _efree((entry_obj->ent.entry) );
  entry_obj->ent.entry = ((void *)0);
 }
}





void zim_PharFileInfo_getCompressedSize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*__z).value.lval = entry_obj->ent.entry->compressed_filesize; (*__z).type = 1; }; return; };
}





void zim_PharFileInfo_isCompressed(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{

 long method = 9021976;
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "|l", &method) == FAILURE) {
  return;
 }

 switch (method) {
  case 9021976:
   { do { zval *__z = (return_value); (*__z).value.lval = ((entry_obj->ent.entry->flags & 0x0000F000) != 0); (*__z).type = 3; } while (0); return; };
  case 0x00001000:
   { do { zval *__z = (return_value); (*__z).value.lval = ((entry_obj->ent.entry->flags & 0x00001000) != 0); (*__z).type = 3; } while (0); return; };
  case 0x00002000:
   { do { zval *__z = (return_value); (*__z).value.lval = ((entry_obj->ent.entry->flags & 0x00002000) != 0); (*__z).type = 3; } while (0); return; };
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression type specified");
 }
}





void zim_PharFileInfo_getCRC32(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry is a directory, does not have a CRC");
  return;
 }

 if (entry_obj->ent.entry->is_crc_checked) {
  { { zval *__z = (return_value); (*__z).value.lval = entry_obj->ent.entry->crc32; (*__z).type = 1; }; return; };
 } else {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry was not CRC checked");
 }
}





void zim_PharFileInfo_isCRCChecked(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((entry_obj->ent.entry->is_crc_checked) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_PharFileInfo_getPharFlags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*__z).value.lval = entry_obj->ent.entry->flags & ~(0x000001FF|0x0000F000); (*__z).type = 1; }; return; };
}





void zim_PharFileInfo_chmod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 long perms;
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (entry_obj->ent.entry->is_temp_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry \"%s\" is a temporary directory (not an actual entry in the archive), cannot chmod", entry_obj->ent.entry->filename);
  return;
 }

 if ((phar_globals.readonly) && !entry_obj->ent.entry->phar->is_data) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "Cannot modify permissions for file \"%s\" in phar \"%s\", write operations are prohibited", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname);
  return;
 }

 if (zend_parse_parameters((ht) , "l", &perms) == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_persistent) {
  phar_archive_data *phar = entry_obj->ent.entry->phar;

  if (FAILURE == phar_copy_on_write(&phar )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar->fname);
   return;
  }

  zend_hash_find(&phar->manifest, entry_obj->ent.entry->filename, entry_obj->ent.entry->filename_len, (void **)&entry_obj->ent.entry);
 }

 entry_obj->ent.entry->flags &= ~0x000001FF;
 perms &= 0777;
 entry_obj->ent.entry->flags |= perms;
 entry_obj->ent.entry->old_flags = entry_obj->ent.entry->flags;
 entry_obj->ent.entry->phar->is_modified = 1;
 entry_obj->ent.entry->is_modified = 1;



 if ((basic_globals.CurrentLStatFile)) {
  _efree(((basic_globals.CurrentLStatFile)) );
 }

 if ((basic_globals.CurrentStatFile)) {
  _efree(((basic_globals.CurrentStatFile)) );
 }

 (basic_globals.CurrentLStatFile) = ((void *)0);
 (basic_globals.CurrentStatFile) = ((void *)0);
 phar_flush(entry_obj->ent.entry->phar, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}





void zim_PharFileInfo_hasMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((entry_obj->ent.entry->metadata != ((void *)0)) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_PharFileInfo_getMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->metadata) {
  if (entry_obj->ent.entry->is_persistent) {
   zval *ret;
   char *buf = _estrndup(((char *) entry_obj->ent.entry->metadata), (entry_obj->ent.entry->metadata_len) );

   phar_parse_metadata(&buf, &ret, entry_obj->ent.entry->metadata_len );
   _efree((buf) );
   { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (ret)->value; (*return_value).type = (*ret).type; } while (0); if (0) { _zval_copy_ctor((return_value) ); } if (1) { if (!0) { { (*ret).type = 0; }; } _zval_ptr_dtor((&ret) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
  }
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (entry_obj->ent.entry->metadata)->value; (*return_value).type = (*entry_obj->ent.entry->metadata).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*entry_obj->ent.entry->metadata).type = 0; }; } _zval_ptr_dtor((&entry_obj->ent.entry->metadata) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 }
}





void zim_PharFileInfo_setMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 zval *metadata;

 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if ((phar_globals.readonly) && !entry_obj->ent.entry->phar->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (entry_obj->ent.entry->is_temp_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry is a temporary directory (not an actual entry in the archive), cannot set metadata");
  return;
 }

 if (zend_parse_parameters((ht) , "z", &metadata) == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_persistent) {
  phar_archive_data *phar = entry_obj->ent.entry->phar;

  if (FAILURE == phar_copy_on_write(&phar )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar->fname);
   return;
  }

  zend_hash_find(&phar->manifest, entry_obj->ent.entry->filename, entry_obj->ent.entry->filename_len, (void **)&entry_obj->ent.entry);
 }
 if (entry_obj->ent.entry->metadata) {
  _zval_ptr_dtor((&entry_obj->ent.entry->metadata) );
  entry_obj->ent.entry->metadata = ((void *)0);
 }

 do { (entry_obj->ent.entry->metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(entry_obj->ent.entry->metadata))->u.buffered = ((void *)0); } while (0); (entry_obj->ent.entry->metadata)->refcount__gc = 1; (entry_obj->ent.entry->metadata)->is_ref__gc = 0;;;
 { zend_uchar is_ref = zval_isref_p(entry_obj->ent.entry->metadata); zend_uint refcount = zval_refcount_p(entry_obj->ent.entry->metadata); do { (entry_obj->ent.entry->metadata)->value = (metadata)->value; (*entry_obj->ent.entry->metadata).type = (*metadata).type; } while (0); if (1) { _zval_copy_ctor((entry_obj->ent.entry->metadata) ); } if (0) { if (!1) { { (*metadata).type = 0; }; } _zval_ptr_dtor((&metadata) ); } zval_set_isref_to_p(entry_obj->ent.entry->metadata, is_ref); zval_set_refcount_p(entry_obj->ent.entry->metadata, refcount); };

 entry_obj->ent.entry->is_modified = 1;
 entry_obj->ent.entry->phar->is_modified = 1;
 phar_flush(entry_obj->ent.entry->phar, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
}





void zim_PharFileInfo_delMetadata(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;

 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if ((phar_globals.readonly) && !entry_obj->ent.entry->phar->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Write operations disabled by the php.ini setting phar.readonly");
  return;
 }

 if (entry_obj->ent.entry->is_temp_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry is a temporary directory (not an actual entry in the archive), cannot delete metadata");
  return;
 }

 if (entry_obj->ent.entry->metadata) {
  if (entry_obj->ent.entry->is_persistent) {
   phar_archive_data *phar = entry_obj->ent.entry->phar;

   if (FAILURE == phar_copy_on_write(&phar )) {
    zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar->fname);
    return;
   }

   zend_hash_find(&phar->manifest, entry_obj->ent.entry->filename, entry_obj->ent.entry->filename_len, (void **)&entry_obj->ent.entry);
  }
  _zval_ptr_dtor((&entry_obj->ent.entry->metadata) );
  entry_obj->ent.entry->metadata = ((void *)0);
  entry_obj->ent.entry->is_modified = 1;
  entry_obj->ent.entry->phar->is_modified = 1;

  phar_flush(entry_obj->ent.entry->phar, 0, 0, 0, &error );

  if (error) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
   _efree((error) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }

 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zim_PharFileInfo_getContent(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 php_stream *fp;
 phar_entry_info *link;

 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar error: Cannot retrieve contents, \"%s\" in phar \"%s\" is a directory", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname);
  return;
 }

 link = phar_get_link_source(entry_obj->ent.entry );

 if (!link) {
  link = entry_obj->ent.entry;
 }

 if (SUCCESS != phar_open_entry_fp(link, &error, 0 )) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar error: Cannot retrieve contents, \"%s\" in phar \"%s\": %s", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname, error);
  _efree((error) );
  return;
 }

 if (!(fp = phar_get_efp(link, 0 ))) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar error: Cannot retrieve contents of \"%s\" in phar \"%s\"", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname);
  return;
 }

 phar_seek_efp(link, 0, 0, 0, 0 );
 (*return_value).type = 6;
 (*return_value).value.str.val = ((void *)0);
 (*return_value).value.str.len = _php_stream_copy_to_mem((fp), (&((*return_value).value.str.val)), (link->uncompressed_filesize), (0) );

 if (!(*return_value).value.str.val) {
  (*return_value).value.str.val = _estrndup((""), (0) );
 }
}





void zim_PharFileInfo_compress(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long method;
 char *error;
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "l", &method) == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_tar) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot compress with Gzip compression, not possible with tar-based phar archives");
  return;
 }

 if (entry_obj->ent.entry->is_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry is a directory, cannot set compression");
  return;
 }

 if ((phar_globals.readonly) && !entry_obj->ent.entry->phar->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar is readonly, cannot change compression");
  return;
 }

 if (entry_obj->ent.entry->is_deleted) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot compress deleted file");
  return;
 }

 if (entry_obj->ent.entry->is_persistent) {
  phar_archive_data *phar = entry_obj->ent.entry->phar;

  if (FAILURE == phar_copy_on_write(&phar )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar->fname);
   return;
  }

  zend_hash_find(&phar->manifest, entry_obj->ent.entry->filename, entry_obj->ent.entry->filename_len, (void **)&entry_obj->ent.entry);
 }
 switch (method) {
  case 0x00001000:
   if (entry_obj->ent.entry->flags & 0x00001000) {
    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   }

   if ((entry_obj->ent.entry->flags & 0x00002000) != 0) {
    if (!(phar_globals.has_bz2)) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
      "Cannot compress with gzip compression, file is already compressed with bzip2 compression and bz2 extension is not enabled, cannot decompress");
     return;
    }


    if (SUCCESS != phar_open_entry_fp(entry_obj->ent.entry, &error, 1 )) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
      "Phar error: Cannot decompress bzip2-compressed file \"%s\" in phar \"%s\" in order to compress with gzip: %s", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname, error);
     _efree((error) );
     return;
    }
   }

   if (!(phar_globals.has_zlib)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress with gzip compression, zlib extension is not enabled");
    return;
   }

   entry_obj->ent.entry->old_flags = entry_obj->ent.entry->flags;
   entry_obj->ent.entry->flags &= ~0x0000F000;
   entry_obj->ent.entry->flags |= 0x00001000;
   break;
  case 0x00002000:
   if (entry_obj->ent.entry->flags & 0x00002000) {
    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   }

   if ((entry_obj->ent.entry->flags & 0x00001000) != 0) {
    if (!(phar_globals.has_zlib)) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
      "Cannot compress with bzip2 compression, file is already compressed with gzip compression and zlib extension is not enabled, cannot decompress");
     return;
    }


    if (SUCCESS != phar_open_entry_fp(entry_obj->ent.entry, &error, 1 )) {
     zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
      "Phar error: Cannot decompress gzip-compressed file \"%s\" in phar \"%s\" in order to compress with bzip2: %s", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname, error);
     _efree((error) );
     return;
    }
   }

   if (!(phar_globals.has_bz2)) {
    zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
     "Cannot compress with bzip2 compression, bz2 extension is not enabled");
    return;
   }
   entry_obj->ent.entry->old_flags = entry_obj->ent.entry->flags;
   entry_obj->ent.entry->flags &= ~0x0000F000;
   entry_obj->ent.entry->flags |= 0x00002000;
   break;
  default:
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
    "Unknown compression type specified");
 }

 entry_obj->ent.entry->phar->is_modified = 1;
 entry_obj->ent.entry->is_modified = 1;
 phar_flush(entry_obj->ent.entry->phar, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zim_PharFileInfo_decompress(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *error;
 phar_entry_object *entry_obj = (phar_entry_object*)zend_object_store_get_object((this_ptr) ); if (!entry_obj->ent.entry) { zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot call method on an uninitialized PharFileInfo object"); return; };

 if (zend_parse_parameters((ht) , "") == FAILURE) {
  return;
 }

 if (entry_obj->ent.entry->is_dir) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar entry is a directory, cannot set compression");
  return;
 }

 if ((entry_obj->ent.entry->flags & 0x0000F000) == 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 if ((phar_globals.readonly) && !entry_obj->ent.entry->phar->is_data) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Phar is readonly, cannot decompress");
  return;
 }

 if (entry_obj->ent.entry->is_deleted) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot compress deleted file");
  return;
 }

 if ((entry_obj->ent.entry->flags & 0x00001000) != 0 && !(phar_globals.has_zlib)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot decompress Gzip-compressed file, zlib extension is not enabled");
  return;
 }

 if ((entry_obj->ent.entry->flags & 0x00002000) != 0 && !(phar_globals.has_bz2)) {
  zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 ,
   "Cannot decompress Bzip2-compressed file, bz2 extension is not enabled");
  return;
 }

 if (entry_obj->ent.entry->is_persistent) {
  phar_archive_data *phar = entry_obj->ent.entry->phar;

  if (FAILURE == phar_copy_on_write(&phar )) {
   zend_throw_exception_ex(phar_ce_PharException, 0 , "phar \"%s\" is persistent, unable to copy on write", phar->fname);
   return;
  }

  zend_hash_find(&phar->manifest, entry_obj->ent.entry->filename, entry_obj->ent.entry->filename_len, (void **)&entry_obj->ent.entry);
 }
 if (!entry_obj->ent.entry->fp) {
  if (FAILURE == phar_open_archive_fp(entry_obj->ent.entry->phar )) {
   zend_throw_exception_ex(spl_ce_BadMethodCallException, 0 , "Cannot decompress entry \"%s\", phar error: Cannot open phar archive \"%s\" for reading", entry_obj->ent.entry->filename, entry_obj->ent.entry->phar->fname);
   return;
  }
  entry_obj->ent.entry->fp_type = PHAR_FP;
 }

 entry_obj->ent.entry->old_flags = entry_obj->ent.entry->flags;
 entry_obj->ent.entry->flags &= ~0x0000F000;
 entry_obj->ent.entry->phar->is_modified = 1;
 entry_obj->ent.entry->is_modified = 1;
 phar_flush(entry_obj->ent.entry->phar, 0, 0, 0, &error );

 if (error) {
  zend_throw_exception_ex(phar_ce_PharException, 0 , "%s", error);
  _efree((error) );
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}






static const zend_arg_info arginfo_phar___construct[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "filename", sizeof("filename")-1, ((void *)0), 0, 0, 0, 0},
 { "flags", sizeof("flags")-1, ((void *)0), 0, 0, 0, 0},
 { "alias", sizeof("alias")-1, ((void *)0), 0, 0, 0, 0},
 { "fileformat", sizeof("fileformat")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_createDS[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "index", sizeof("index")-1, ((void *)0), 0, 0, 0, 0},
 { "webindex", sizeof("webindex")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_cancompress[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "method", sizeof("method")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_isvalidpharfilename[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "filename", sizeof("filename")-1, ((void *)0), 0, 0, 0, 0},
 { "executable", sizeof("executable")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_loadPhar[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "filename", sizeof("filename")-1, ((void *)0), 0, 0, 0, 0},
 { "alias", sizeof("alias")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_mapPhar[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "alias", sizeof("alias")-1, ((void *)0), 0, 0, 0, 0},
 { "offset", sizeof("offset")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_mount[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "inphar", sizeof("inphar")-1, ((void *)0), 0, 0, 0, 0},
 { "externalfile", sizeof("externalfile")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_mungServer[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "munglist", sizeof("munglist")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_webPhar[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "alias", sizeof("alias")-1, ((void *)0), 0, 0, 0, 0},
 { "index", sizeof("index")-1, ((void *)0), 0, 0, 0, 0},
 { "f404", sizeof("f404")-1, ((void *)0), 0, 0, 0, 0},
 { "mimetypes", sizeof("mimetypes")-1, ((void *)0), 0, 0, 0, 0},
 { "rewrites", sizeof("rewrites")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_running[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "retphar", sizeof("retphar")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_ua[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "archive", sizeof("archive")-1, ((void *)0), 0, 0, 0, 0},
};



static const zend_arg_info arginfo_phar_build[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "iterator", sizeof("iterator")-1, ((void *)0), 0, 0, 0, 0},
 { "base_directory", sizeof("base_directory")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_conv[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "format", sizeof("format")-1, ((void *)0), 0, 0, 0, 0},
 { "compression_type", sizeof("compression_type")-1, ((void *)0), 0, 0, 0, 0},
 { "file_ext", sizeof("file_ext")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_comps[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "compression_type", sizeof("compression_type")-1, ((void *)0), 0, 0, 0, 0},
 { "file_ext", sizeof("file_ext")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_decomp[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "file_ext", sizeof("file_ext")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_comp[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "compression_type", sizeof("compression_type")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_compo[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "compression_type", sizeof("compression_type")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_copy[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "newfile", sizeof("newfile")-1, ((void *)0), 0, 0, 0, 0},
 { "oldfile", sizeof("oldfile")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_delete[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "entry", sizeof("entry")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_fromdir[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "base_dir", sizeof("base_dir")-1, ((void *)0), 0, 0, 0, 0},
 { "regex", sizeof("regex")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_offsetExists[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "entry", sizeof("entry")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_offsetSet[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "entry", sizeof("entry")-1, ((void *)0), 0, 0, 0, 0},
 { "value", sizeof("value")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_setAlias[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "alias", sizeof("alias")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_setMetadata[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "metadata", sizeof("metadata")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_setSigAlgo[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "algorithm", sizeof("algorithm")-1, ((void *)0), 0, 0, 0, 0},
 { "privatekey", sizeof("privatekey")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_setStub[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "newstub", sizeof("newstub")-1, ((void *)0), 0, 0, 0, 0},
 { "maxlen", sizeof("maxlen")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_emptydir[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "dirname", sizeof("dirname")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_extract[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "pathto", sizeof("pathto")-1, ((void *)0), 0, 0, 0, 0},
 { "files", sizeof("files")-1, ((void *)0), 0, 0, 0, 0},
 { "overwrite", sizeof("overwrite")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_addfile[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "filename", sizeof("filename")-1, ((void *)0), 0, 0, 0, 0},
 { "localname", sizeof("localname")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_fromstring[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "localname", sizeof("localname")-1, ((void *)0), 0, 0, 0, 0},
 { "contents", sizeof("contents")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar_isff[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "fileformat", sizeof("fileformat")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_phar__void[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};




zend_function_entry php_archive_methods[] = {



 { "__construct", zim_Phar___construct, arginfo_phar___construct, (zend_uint) (sizeof(arginfo_phar___construct)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "__destruct", zim_Phar___destruct, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "addEmptyDir", zim_Phar_addEmptyDir, arginfo_phar_emptydir, (zend_uint) (sizeof(arginfo_phar_emptydir)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "addFile", zim_Phar_addFile, arginfo_phar_addfile, (zend_uint) (sizeof(arginfo_phar_addfile)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "addFromString", zim_Phar_addFromString, arginfo_phar_fromstring, (zend_uint) (sizeof(arginfo_phar_fromstring)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "buildFromDirectory", zim_Phar_buildFromDirectory, arginfo_phar_fromdir, (zend_uint) (sizeof(arginfo_phar_fromdir)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "buildFromIterator", zim_Phar_buildFromIterator, arginfo_phar_build, (zend_uint) (sizeof(arginfo_phar_build)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "compressFiles", zim_Phar_compressFiles, arginfo_phar_comp, (zend_uint) (sizeof(arginfo_phar_comp)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "decompressFiles", zim_Phar_decompressFiles, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "compress", zim_Phar_compress, arginfo_phar_comps, (zend_uint) (sizeof(arginfo_phar_comps)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "decompress", zim_Phar_decompress, arginfo_phar_decomp, (zend_uint) (sizeof(arginfo_phar_decomp)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "convertToExecutable", zim_Phar_convertToExecutable, arginfo_phar_conv, (zend_uint) (sizeof(arginfo_phar_conv)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "convertToData", zim_Phar_convertToData, arginfo_phar_conv, (zend_uint) (sizeof(arginfo_phar_conv)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "copy", zim_Phar_copy, arginfo_phar_copy, (zend_uint) (sizeof(arginfo_phar_copy)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "count", zim_Phar_count, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "delete", zim_Phar_delete, arginfo_phar_delete, (zend_uint) (sizeof(arginfo_phar_delete)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "delMetadata", zim_Phar_delMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "extractTo", zim_Phar_extractTo, arginfo_phar_extract, (zend_uint) (sizeof(arginfo_phar_extract)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getAlias", zim_Phar_getAlias, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getPath", zim_Phar_getPath, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getMetadata", zim_Phar_getMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getModified", zim_Phar_getModified, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getSignature", zim_Phar_getSignature, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getStub", zim_Phar_getStub, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getVersion", zim_Phar_getVersion, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "hasMetadata", zim_Phar_hasMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isBuffering", zim_Phar_isBuffering, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isCompressed", zim_Phar_isCompressed, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isFileFormat", zim_Phar_isFileFormat, arginfo_phar_isff, (zend_uint) (sizeof(arginfo_phar_isff)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isWritable", zim_Phar_isWritable, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "offsetExists", zim_Phar_offsetExists, arginfo_phar_offsetExists, (zend_uint) (sizeof(arginfo_phar_offsetExists)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "offsetGet", zim_Phar_offsetGet, arginfo_phar_offsetExists, (zend_uint) (sizeof(arginfo_phar_offsetExists)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "offsetSet", zim_Phar_offsetSet, arginfo_phar_offsetSet, (zend_uint) (sizeof(arginfo_phar_offsetSet)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "offsetUnset", zim_Phar_offsetUnset, arginfo_phar_offsetExists, (zend_uint) (sizeof(arginfo_phar_offsetExists)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setAlias", zim_Phar_setAlias, arginfo_phar_setAlias, (zend_uint) (sizeof(arginfo_phar_setAlias)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setDefaultStub", zim_Phar_setDefaultStub, arginfo_phar_createDS, (zend_uint) (sizeof(arginfo_phar_createDS)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setMetadata", zim_Phar_setMetadata, arginfo_phar_setMetadata, (zend_uint) (sizeof(arginfo_phar_setMetadata)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setSignatureAlgorithm", zim_Phar_setSignatureAlgorithm, arginfo_phar_setSigAlgo, (zend_uint) (sizeof(arginfo_phar_setSigAlgo)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setStub", zim_Phar_setStub, arginfo_phar_setStub, (zend_uint) (sizeof(arginfo_phar_setStub)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "startBuffering", zim_Phar_startBuffering, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "stopBuffering", zim_Phar_stopBuffering, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },


 { "apiVersion", zim_Phar_apiVersion, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "canCompress", zim_Phar_canCompress, arginfo_phar_cancompress, (zend_uint) (sizeof(arginfo_phar_cancompress)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "canWrite", zim_Phar_canWrite, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "createDefaultStub", zim_Phar_createDefaultStub, arginfo_phar_createDS, (zend_uint) (sizeof(arginfo_phar_createDS)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "getSupportedCompression", zim_Phar_getSupportedCompression, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "getSupportedSignatures", zim_Phar_getSupportedSignatures, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "interceptFileFuncs", zim_Phar_interceptFileFuncs, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "isValidPharFilename", zim_Phar_isValidPharFilename, arginfo_phar_isvalidpharfilename, (zend_uint) (sizeof(arginfo_phar_isvalidpharfilename)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "loadPhar", zim_Phar_loadPhar, arginfo_phar_loadPhar, (zend_uint) (sizeof(arginfo_phar_loadPhar)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "mapPhar", zim_Phar_mapPhar, arginfo_phar_mapPhar, (zend_uint) (sizeof(arginfo_phar_mapPhar)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "running", zim_Phar_running, arginfo_phar_running, (zend_uint) (sizeof(arginfo_phar_running)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "mount", zim_Phar_mount, arginfo_phar_mount, (zend_uint) (sizeof(arginfo_phar_mount)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "mungServer", zim_Phar_mungServer, arginfo_phar_mungServer, (zend_uint) (sizeof(arginfo_phar_mungServer)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "unlinkArchive", zim_Phar_unlinkArchive, arginfo_phar_ua, (zend_uint) (sizeof(arginfo_phar_ua)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { "webPhar", zim_Phar_webPhar, arginfo_phar_webPhar, (zend_uint) (sizeof(arginfo_phar_webPhar)/sizeof(struct _zend_arg_info)-1), 0x100|0x01|0x04 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};



static const zend_arg_info arginfo_entry___construct[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "filename", sizeof("filename")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_arg_info arginfo_entry_chmod[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "perms", sizeof("perms")-1, ((void *)0), 0, 0, 0, 0},
};

zend_function_entry php_entry_methods[] = {
 { "__construct", zim_PharFileInfo___construct, arginfo_entry___construct, (zend_uint) (sizeof(arginfo_entry___construct)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "__destruct", zim_PharFileInfo___destruct, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "chmod", zim_PharFileInfo_chmod, arginfo_entry_chmod, (zend_uint) (sizeof(arginfo_entry_chmod)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "compress", zim_PharFileInfo_compress, arginfo_phar_comp, (zend_uint) (sizeof(arginfo_phar_comp)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "decompress", zim_PharFileInfo_decompress, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "delMetadata", zim_PharFileInfo_delMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getCompressedSize", zim_PharFileInfo_getCompressedSize, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getCRC32", zim_PharFileInfo_getCRC32, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getContent", zim_PharFileInfo_getContent, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getMetadata", zim_PharFileInfo_getMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "getPharFlags", zim_PharFileInfo_getPharFlags, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "hasMetadata", zim_PharFileInfo_hasMetadata, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isCompressed", zim_PharFileInfo_isCompressed, arginfo_phar_compo, (zend_uint) (sizeof(arginfo_phar_compo)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "isCRCChecked", zim_PharFileInfo_isCRCChecked, arginfo_phar__void, (zend_uint) (sizeof(arginfo_phar__void)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { "setMetadata", zim_PharFileInfo_setMetadata, arginfo_phar_setMetadata, (zend_uint) (sizeof(arginfo_phar_setMetadata)/sizeof(struct _zend_arg_info)-1), 0x100 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


zend_function_entry phar_exception_methods[] = {
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};







void phar_object_init(void)
{
 zend_class_entry ce;

 { const char *cl_name = "PharException"; int _len = sizeof("PharException")-1; ce.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (ce.name == cl_name) { ce.name = zend_strndup(cl_name, _len); } ce.name_length = _len; { ce.constructor = ((void *)0); ce.destructor = ((void *)0); ce.clone = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.create_object = ((void *)0); ce.interface_gets_implemented = ((void *)0); ce.get_static_method = ((void *)0); ce.__call = ((void *)0); ce.__callstatic = ((void *)0); ce.__tostring = ((void *)0); ce.__get = ((void *)0); ce.__set = ((void *)0); ce.__unset = ((void *)0); ce.__isset = ((void *)0); ce.serialize_func = ((void *)0); ce.unserialize_func = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.parent = ((void *)0); ce.num_interfaces = 0; ce.traits = ((void *)0); ce.num_traits = 0; ce.trait_aliases = ((void *)0); ce.trait_precedences = ((void *)0); ce.interfaces = ((void *)0); ce.get_iterator = ((void *)0); ce.iterator_funcs.funcs = ((void *)0); ce.info.internal.module = ((void *)0); ce.info.internal.builtin_functions = phar_exception_methods; } };
 phar_ce_PharException = zend_register_internal_class_ex(&ce, zend_exception_get_default(), ((void *)0) );


 { const char *cl_name = "Phar"; int _len = sizeof("Phar")-1; ce.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (ce.name == cl_name) { ce.name = zend_strndup(cl_name, _len); } ce.name_length = _len; { ce.constructor = ((void *)0); ce.destructor = ((void *)0); ce.clone = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.create_object = ((void *)0); ce.interface_gets_implemented = ((void *)0); ce.get_static_method = ((void *)0); ce.__call = ((void *)0); ce.__callstatic = ((void *)0); ce.__tostring = ((void *)0); ce.__get = ((void *)0); ce.__set = ((void *)0); ce.__unset = ((void *)0); ce.__isset = ((void *)0); ce.serialize_func = ((void *)0); ce.unserialize_func = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.parent = ((void *)0); ce.num_interfaces = 0; ce.traits = ((void *)0); ce.num_traits = 0; ce.trait_aliases = ((void *)0); ce.trait_precedences = ((void *)0); ce.interfaces = ((void *)0); ce.get_iterator = ((void *)0); ce.iterator_funcs.funcs = ((void *)0); ce.info.internal.module = ((void *)0); ce.info.internal.builtin_functions = php_archive_methods; } };
 phar_ce_archive = zend_register_internal_class_ex(&ce, spl_ce_RecursiveDirectoryIterator, ((void *)0) );

 zend_class_implements(phar_ce_archive , 2, spl_ce_Countable, zend_ce_arrayaccess);

 { const char *cl_name = "PharData"; int _len = sizeof("PharData")-1; ce.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (ce.name == cl_name) { ce.name = zend_strndup(cl_name, _len); } ce.name_length = _len; { ce.constructor = ((void *)0); ce.destructor = ((void *)0); ce.clone = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.create_object = ((void *)0); ce.interface_gets_implemented = ((void *)0); ce.get_static_method = ((void *)0); ce.__call = ((void *)0); ce.__callstatic = ((void *)0); ce.__tostring = ((void *)0); ce.__get = ((void *)0); ce.__set = ((void *)0); ce.__unset = ((void *)0); ce.__isset = ((void *)0); ce.serialize_func = ((void *)0); ce.unserialize_func = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.parent = ((void *)0); ce.num_interfaces = 0; ce.traits = ((void *)0); ce.num_traits = 0; ce.trait_aliases = ((void *)0); ce.trait_precedences = ((void *)0); ce.interfaces = ((void *)0); ce.get_iterator = ((void *)0); ce.iterator_funcs.funcs = ((void *)0); ce.info.internal.module = ((void *)0); ce.info.internal.builtin_functions = php_archive_methods; } };
 phar_ce_data = zend_register_internal_class_ex(&ce, spl_ce_RecursiveDirectoryIterator, ((void *)0) );

 zend_class_implements(phar_ce_data , 2, spl_ce_Countable, zend_ce_arrayaccess);

 { const char *cl_name = "PharFileInfo"; int _len = sizeof("PharFileInfo")-1; ce.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (ce.name == cl_name) { ce.name = zend_strndup(cl_name, _len); } ce.name_length = _len; { ce.constructor = ((void *)0); ce.destructor = ((void *)0); ce.clone = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.create_object = ((void *)0); ce.interface_gets_implemented = ((void *)0); ce.get_static_method = ((void *)0); ce.__call = ((void *)0); ce.__callstatic = ((void *)0); ce.__tostring = ((void *)0); ce.__get = ((void *)0); ce.__set = ((void *)0); ce.__unset = ((void *)0); ce.__isset = ((void *)0); ce.serialize_func = ((void *)0); ce.unserialize_func = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.parent = ((void *)0); ce.num_interfaces = 0; ce.traits = ((void *)0); ce.num_traits = 0; ce.trait_aliases = ((void *)0); ce.trait_precedences = ((void *)0); ce.interfaces = ((void *)0); ce.get_iterator = ((void *)0); ce.iterator_funcs.funcs = ((void *)0); ce.info.internal.module = ((void *)0); ce.info.internal.builtin_functions = php_entry_methods; } };
 phar_ce_entry = zend_register_internal_class_ex(&ce, spl_ce_SplFileInfo, ((void *)0) );
# 5428 "/home/ct584/git/bughunter/repositories/php-src/ext/phar/phar_object.c"
 zend_declare_class_constant_long(phar_ce_archive, "BZ2", sizeof("BZ2")-1, (long)0x00002000 );
 zend_declare_class_constant_long(phar_ce_archive, "GZ", sizeof("GZ")-1, (long)0x00001000 );
 zend_declare_class_constant_long(phar_ce_archive, "NONE", sizeof("NONE")-1, (long)0x00000000 );
 zend_declare_class_constant_long(phar_ce_archive, "PHAR", sizeof("PHAR")-1, (long)1 );
 zend_declare_class_constant_long(phar_ce_archive, "TAR", sizeof("TAR")-1, (long)2 );
 zend_declare_class_constant_long(phar_ce_archive, "ZIP", sizeof("ZIP")-1, (long)3 );
 zend_declare_class_constant_long(phar_ce_archive, "COMPRESSED", sizeof("COMPRESSED")-1, (long)0x0000F000 );
 zend_declare_class_constant_long(phar_ce_archive, "PHP", sizeof("PHP")-1, (long)'\0' );
 zend_declare_class_constant_long(phar_ce_archive, "PHPS", sizeof("PHPS")-1, (long)'\1' );
 zend_declare_class_constant_long(phar_ce_archive, "MD5", sizeof("MD5")-1, (long)0x0001 );
 zend_declare_class_constant_long(phar_ce_archive, "OPENSSL", sizeof("OPENSSL")-1, (long)0x0010 );
 zend_declare_class_constant_long(phar_ce_archive, "SHA1", sizeof("SHA1")-1, (long)0x0002 );
 zend_declare_class_constant_long(phar_ce_archive, "SHA256", sizeof("SHA256")-1, (long)0x0003 );
 zend_declare_class_constant_long(phar_ce_archive, "SHA512", sizeof("SHA512")-1, (long)0x0004 );
}
