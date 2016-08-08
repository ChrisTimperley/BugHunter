# 1 "module.c"
# 1 "/home/ct584/git/bughunter/repositories/redis/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "module.c"
# 1 "server.h" 1
# 33 "server.h"
# 1 "fmacros.h" 1
# 34 "server.h" 2
# 1 "config.h" 1
# 38 "config.h"
# 1 "/usr/include/linux/version.h" 1 3 4
# 39 "config.h" 2
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
# 40 "config.h" 2
# 127 "config.h"
void spt_init(int argc, char *argv[]);
void setproctitle(const char *fmt, ...);



# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


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
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;





typedef __ino64_t ino_t;




typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;







typedef __off64_t off_t;




typedef __off64_t off64_t;




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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


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
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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





# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 129 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



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


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__nothrow__ , __leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}


# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;
# 248 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;





typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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



# 133 "config.h" 2
# 35 "server.h" 2
# 1 "solarisfixes.h" 1
# 36 "server.h" 2
# 1 "rio.h" 1
# 35 "rio.h"
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




typedef _G_fpos64_t fpos_t;



typedef _G_fpos64_t fpos64_t;
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



# 198 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64") __attribute__ ((__warn_unused_result__));






extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);




# 283 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__ ("" "fopen64")

  __attribute__ ((__warn_unused_result__));
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  __attribute__ ((__warn_unused_result__));







extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






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






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
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
     __attribute__ ((__warn_unused_result__));
# 640 "/usr/include/stdio.h" 3 4

# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 781 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64")

                  ;
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");








# 806 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64")
                                          ;
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __asm__ ("" "fsetpos64")
                                                          ;








extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 935 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...)

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...)

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 206 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 241 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")

                                        __attribute__ ((__warn_unused_result__));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked")

                                                 __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 938 "/usr/include/stdio.h" 2 3 4






# 36 "rio.h" 2
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
# 37 "rio.h" 2
# 1 "sds.h" 1
# 39 "sds.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "sds.h" 2


typedef char *sds;



struct __attribute__ ((__packed__)) sdshdr5 {
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr8 {
    uint8_t len;
    uint8_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr16 {
    uint16_t len;
    uint16_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr32 {
    uint32_t len;
    uint32_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr64 {
    uint64_t len;
    uint64_t alloc;
    unsigned char flags;
    char buf[];
};
# 86 "sds.h"
static inline size_t sdslen(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            return ((flags)>>3);
        case 1:
            return ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len;
        case 2:
            return ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len;
        case 3:
            return ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len;
        case 4:
            return ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len;
    }
    return 0;
}

static inline size_t sdsavail(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0: {
            return 0;
        }
        case 1: {
            struct sdshdr8 *sh = (void*)((s)-(sizeof(struct sdshdr8)));;
            return sh->alloc - sh->len;
        }
        case 2: {
            struct sdshdr16 *sh = (void*)((s)-(sizeof(struct sdshdr16)));;
            return sh->alloc - sh->len;
        }
        case 3: {
            struct sdshdr32 *sh = (void*)((s)-(sizeof(struct sdshdr32)));;
            return sh->alloc - sh->len;
        }
        case 4: {
            struct sdshdr64 *sh = (void*)((s)-(sizeof(struct sdshdr64)));;
            return sh->alloc - sh->len;
        }
    }
    return 0;
}

static inline void sdssetlen(sds s, size_t newlen) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            {
                unsigned char *fp = ((unsigned char*)s)-1;
                *fp = 0 | (newlen << 3);
            }
            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len = newlen;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len = newlen;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len = newlen;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len = newlen;
            break;
    }
}

static inline void sdsinclen(sds s, size_t inc) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            {
                unsigned char *fp = ((unsigned char*)s)-1;
                unsigned char newlen = ((flags)>>3)+inc;
                *fp = 0 | (newlen << 3);
            }
            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len += inc;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len += inc;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len += inc;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len += inc;
            break;
    }
}


static inline size_t sdsalloc(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            return ((flags)>>3);
        case 1:
            return ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->alloc;
        case 2:
            return ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->alloc;
        case 3:
            return ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->alloc;
        case 4:
            return ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->alloc;
    }
    return 0;
}

static inline void sdssetalloc(sds s, size_t newlen) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:

            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->alloc = newlen;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->alloc = newlen;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->alloc = newlen;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->alloc = newlen;
            break;
    }
}

sds sdsnewlen(const void *init, size_t initlen);
sds sdsnew(const char *init);
sds sdsempty(void);
sds sdsdup(const sds s);
void sdsfree(sds s);
sds sdsgrowzero(sds s, size_t len);
sds sdscatlen(sds s, const void *t, size_t len);
sds sdscat(sds s, const char *t);
sds sdscatsds(sds s, const sds t);
sds sdscpylen(sds s, const char *t, size_t len);
sds sdscpy(sds s, const char *t);

sds sdscatvprintf(sds s, const char *fmt, va_list ap);

sds sdscatprintf(sds s, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));




sds sdscatfmt(sds s, char const *fmt, ...);
sds sdstrim(sds s, const char *cset);
void sdsrange(sds s, int start, int end);
void sdsupdatelen(sds s);
void sdsclear(sds s);
int sdscmp(const sds s1, const sds s2);
sds *sdssplitlen(const char *s, int len, const char *sep, int seplen, int *count);
void sdsfreesplitres(sds *tokens, int count);
void sdstolower(sds s);
void sdstoupper(sds s);
sds sdsfromlonglong(long long value);
sds sdscatrepr(sds s, const char *p, size_t len);
sds *sdssplitargs(const char *line, int *argc);
sds sdsmapchars(sds s, const char *from, const char *to, size_t setlen);
sds sdsjoin(char **argv, int argc, char *sep);
sds sdsjoinsds(sds *argv, int argc, const char *sep, size_t seplen);


sds sdsMakeRoomFor(sds s, size_t addlen);
void sdsIncrLen(sds s, int incr);
sds sdsRemoveFreeSpace(sds s);
size_t sdsAllocSize(sds s);
void *sdsAllocPtr(sds s);





void *sds_malloc(size_t size);
void *sds_realloc(void *ptr, size_t size);
void sds_free(void *ptr);
# 38 "rio.h" 2

struct _rio {



    size_t (*read)(struct _rio *, void *buf, size_t len);
    size_t (*write)(struct _rio *, const void *buf, size_t len);
    off_t (*tell)(struct _rio *);
    int (*flush)(struct _rio *);





    void (*update_cksum)(struct _rio *, const void *buf, size_t len);


    uint64_t cksum;


    size_t processed_bytes;


    size_t max_processing_chunk;


    union {

        struct {
            sds ptr;
            off_t pos;
        } buffer;

        struct {
            FILE *fp;
            off_t buffered;
            off_t autosync;
        } file;

        struct {
            int *fds;
            int *state;
            int numfds;
            off_t pos;
            sds buf;
        } fdset;
    } io;
};

typedef struct _rio rio;





static inline size_t rioWrite(rio *r, const void *buf, size_t len) {
    while (len) {
        size_t bytes_to_write = (r->max_processing_chunk && r->max_processing_chunk < len) ? r->max_processing_chunk : len;
        if (r->update_cksum) r->update_cksum(r,buf,bytes_to_write);
        if (r->write(r,buf,bytes_to_write) == 0)
            return 0;
        buf = (char*)buf + bytes_to_write;
        len -= bytes_to_write;
        r->processed_bytes += bytes_to_write;
    }
    return 1;
}

static inline size_t rioRead(rio *r, void *buf, size_t len) {
    while (len) {
        size_t bytes_to_read = (r->max_processing_chunk && r->max_processing_chunk < len) ? r->max_processing_chunk : len;
        if (r->read(r,buf,bytes_to_read) == 0)
            return 0;
        if (r->update_cksum) r->update_cksum(r,buf,bytes_to_read);
        buf = (char*)buf + bytes_to_read;
        len -= bytes_to_read;
        r->processed_bytes += bytes_to_read;
    }
    return 1;
}

static inline off_t rioTell(rio *r) {
    return r->tell(r);
}

static inline int rioFlush(rio *r) {
    return r->flush(r);
}

void rioInitWithFile(rio *r, FILE *fp);
void rioInitWithBuffer(rio *r, sds s);
void rioInitWithFdset(rio *r, int *fds, int numfds);

void rioFreeFdset(rio *r);

size_t rioWriteBulkCount(rio *r, char prefix, int count);
size_t rioWriteBulkString(rio *r, const char *buf, size_t len);
size_t rioWriteBulkLongLong(rio *r, long long l);
size_t rioWriteBulkDouble(rio *r, double d);

struct redisObject;
int rioWriteBulkObject(rio *r, struct redisObject *obj);

void rioGenericUpdateChecksum(rio *r, const void *buf, size_t len);
void rioSetAutoSync(rio *r, off_t bytes);
# 37 "server.h" 2


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
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
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
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





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

# 235 "/usr/include/stdlib.h" 3 4
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
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 321 "/usr/include/stdlib.h" 3 4
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









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










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





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 623 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 645 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 677 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __asm__ ("" "mkostemp64")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 698 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags) __asm__ ("" "mkostemps64")

     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));









extern int system (const char *__command) __attribute__ ((__warn_unused_result__));






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 761 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




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








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));





extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}

# 956 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 40 "server.h" 2
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


# 110 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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


# 277 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 604 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 632 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string.h" 1 3 4
# 633 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/string2.h" 1 3 4
# 393 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 1297 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 636 "/usr/include/string.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/string3.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")))
                                                                                                   ;
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 75 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  if (__builtin_constant_p (__len) && __len == 0
      && (!__builtin_constant_p (__ch) || __ch != 0))
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__ , __leaf__))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 641 "/usr/include/string.h" 2 3 4




# 41 "server.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 86 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 87 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));


# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


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
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));






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





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 42 "server.h" 2
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



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 43 "server.h" 2
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
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 337 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__ , __leaf__))

             ;





extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 388 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

               __attribute__ ((__warn_unused_result__));
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")

                __attribute__ ((__warn_unused_result__));
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__));


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__));







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





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




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




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




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 997 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__ , __leaf__))

                  __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__ , __leaf__))
                   __attribute__ ((__warn_unused_result__));





extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1084 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64")
                  __attribute__ ((__warn_unused_result__));





extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1148 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read")
                               __attribute__ ((__warn_unused_result__));
extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("read called with bigger length than size of " "the destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}


extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread")

                                 __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

                                     __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread called with bigger length than size of " "the destination buffer")))
                                  ;
extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")



     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("pread64 called with bigger length than size of " "the destination buffer")))
                                  ;
# 86 "/usr/include/x86_64-linux-gnu/bits/unistd.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
       __builtin_object_size (__buf, 0));
    }

  return __pread64_alias (__fd, __buf, __nbytes, __offset);
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
       __builtin_object_size (__buf, 0));
    }

  return __pread64_alias (__fd, __buf, __nbytes, __offset);
}




extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlink") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlink_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlink called with bigger length " "than size of destination buffer")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlink (const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) __asm__ ("" "readlinkat") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) __asm__ ("" "__readlinkat_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("readlinkat called with bigger " "length than size of destination " "buffer")))

                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
__attribute__ ((__nothrow__ , __leaf__)) readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len)

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) __asm__ ("" "getcwd") __attribute__ ((__nothrow__ , __leaf__))
                                              __attribute__ ((__warn_unused_result__));
extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) __asm__ ("" "__getcwd_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getcwd caller with bigger length than size of " "destination buffer")))
                              ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getcwd (char *__buf, size_t __size)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) __asm__ ("" "getwd") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use getcwd instead, as getwd " "doesn't specify buffer size")))
                                         ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) getwd (char *__buf)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) __asm__ ("" "confstr") __attribute__ ((__nothrow__ , __leaf__))
                             ;
extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) __asm__ ("" "__confstr_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__((__warning__ ("confstr called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) confstr (int __name, char *__buf, size_t __len)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) __asm__ ("" "getgroups") __attribute__ ((__nothrow__ , __leaf__))
                 __attribute__ ((__warn_unused_result__));
extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) __asm__ ("" "__getgroups_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getgroups called with bigger group count than what " "can fit into destination buffer")))
                                           ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getgroups (int __size, __gid_t __list[])
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size) || __size < 0)
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ttyname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ttyname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ttyname_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ttyname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r")
                     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("getlogin_r called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) __asm__ ("" "gethostname") __attribute__ ((__nothrow__ , __leaf__))
                   __attribute__ ((__nonnull__ (1)));
extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__gethostname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__((__warning__ ("gethostname called with bigger buflen than " "size of destination buffer")))
                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) gethostname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) __asm__ ("" "getdomainname") __attribute__ ((__nothrow__ , __leaf__))

                     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getdomainname_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("getdomainname called with bigger " "buflen than size of destination " "buffer")))

                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) getdomainname (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1149 "/usr/include/unistd.h" 2 3 4



# 44 "server.h" 2
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
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 45 "server.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
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





extern long int __strtol_internal (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ , __leaf__)) strtoimax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ , __leaf__)) strtoumax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (const __gwchar_t * __restrict __nptr,
       __gwchar_t **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ , __leaf__)) wcstoimax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (const __gwchar_t *
          __restrict __nptr,
          __gwchar_t **
          __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ , __leaf__)) wcstoumax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 432 "/usr/include/inttypes.h" 3 4

# 46 "server.h" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4
# 41 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));


extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));


extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));











struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 42 "/usr/include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 116 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));



# 24 "/usr/include/pthread.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 125 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 166 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 201 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 239 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));







extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 505 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 517 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 551 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 691 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
# 703 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
# 726 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
# 739 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 817 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 899 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1011 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1055 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1122 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 1156 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}



# 47 "server.h" 2
# 1 "/usr/include/syslog.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 1 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/syslog-path.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4
# 169 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4






extern void closelog (void);





extern void openlog (const char *__ident, int __option, int __facility);


extern int setlogmask (int __mask) __attribute__ ((__nothrow__ , __leaf__));





extern void syslog (int __pri, const char *__fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 200 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
extern void vsyslog (int __pri, const char *__fmt, __gnuc_va_list __ap)
     __attribute__ ((__format__ (__printf__, 2, 0)));





# 1 "/usr/include/x86_64-linux-gnu/bits/syslog.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/syslog.h" 3 4
extern void __syslog_chk (int __pri, int __flag, const char *__fmt, ...)
     __attribute__ ((__format__ (__printf__, 3, 4)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
syslog (int __pri, const char *__fmt, ...)
{
  __syslog_chk (__pri, 2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern void __vsyslog_chk (int __pri, int __flag, const char *__fmt,
      __gnuc_va_list __ap)
     __attribute__ ((__format__ (__printf__, 3, 0)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
vsyslog (int __pri, const char *__fmt, __gnuc_va_list __ap)
{
  __vsyslog_chk (__pri, 2 - 1, __fmt, __ap);
}
# 208 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4






# 1 "/usr/include/syslog.h" 2 3 4
# 48 "server.h" 2
# 1 "/usr/include/netinet/in.h" 1 3 4
# 23 "/usr/include/netinet/in.h" 3 4
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
# 56 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4



extern ssize_t process_vm_readv (pid_t __pid, const struct iovec *__lvec,
     unsigned long int __liovcnt,
     const struct iovec *__rvec,
     unsigned long int __riovcnt,
     unsigned long int __flags)
  __attribute__ ((__nothrow__ , __leaf__));


extern ssize_t process_vm_writev (pid_t __pid, const struct iovec *__lvec,
      unsigned long int __liovcnt,
      const struct iovec *__rvec,
      unsigned long int __riovcnt,
      unsigned long int __flags)
  __attribute__ ((__nothrow__ , __leaf__));


# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 39 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  __attribute__ ((__warn_unused_result__));
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  __attribute__ ((__warn_unused_result__));
# 81 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__ ("" "preadv64")

                __attribute__ ((__warn_unused_result__));
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count, __off64_t __offset) __asm__ ("" "pwritev64")

                 __attribute__ ((__warn_unused_result__));
# 103 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv64 (int __fd, const struct iovec *__iovec, int __count,
    __off64_t __offset) __attribute__ ((__warn_unused_result__));
# 115 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev64 (int __fd, const struct iovec *__iovec, int __count,
     __off64_t __offset) __attribute__ ((__warn_unused_result__));




# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4






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



    MSG_TRYHARD = MSG_DONTROUTE,


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




extern __inline __attribute__ ((__gnu_inline__)) struct cmsghdr *
__attribute__ ((__nothrow__ , __leaf__)) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return (struct cmsghdr *) 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return (struct cmsghdr *) 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
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
# 90 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 174 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       const struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/x86_64-linux-gnu/bits/socket2.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/socket2.h" 3 4
extern ssize_t __recv_chk (int __fd, void *__buf, size_t __n, size_t __buflen,
      int __flags);
extern ssize_t __recv_alias (int __fd, void *__buf, size_t __n, int __flags) __asm__ ("" "recv")
                          ;
extern ssize_t __recv_chk_warn (int __fd, void *__buf, size_t __n, size_t __buflen, int __flags) __asm__ ("" "__recv_chk")


     __attribute__((__warning__ ("recv called with bigger length than size of destination " "buffer")))
            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) ssize_t
recv (int __fd, void *__buf, size_t __n, int __flags)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __recv_chk (__fd, __buf, __n, __builtin_object_size (__buf, 0), __flags);

      if (__n > __builtin_object_size (__buf, 0))
 return __recv_chk_warn (__fd, __buf, __n, __builtin_object_size (__buf, 0), __flags);
    }
  return __recv_alias (__fd, __buf, __n, __flags);
}

extern ssize_t __recvfrom_chk (int __fd, void *__restrict __buf, size_t __n,
          size_t __buflen, int __flags,
          __SOCKADDR_ARG __addr,
          socklen_t *__restrict __addr_len);
extern ssize_t __recvfrom_alias (int __fd, void *__restrict __buf, size_t __n, int __flags, __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len) __asm__ ("" "recvfrom")


                                                   ;
extern ssize_t __recvfrom_chk_warn (int __fd, void *__restrict __buf, size_t __n, size_t __buflen, int __flags, __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len) __asm__ ("" "__recvfrom_chk")




     __attribute__((__warning__ ("recvfrom called with bigger length than size of " "destination buffer")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) ssize_t
recvfrom (int __fd, void *__restrict __buf, size_t __n, int __flags,
   __SOCKADDR_ARG __addr, socklen_t *__restrict __addr_len)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __recvfrom_chk (__fd, __buf, __n, __builtin_object_size (__buf, 0), __flags,
          __addr, __addr_len);
      if (__n > __builtin_object_size (__buf, 0))
 return __recvfrom_chk_warn (__fd, __buf, __n, __builtin_object_size (__buf, 0), __flags,
        __addr, __addr_len);
    }
  return __recvfrom_alias (__fd, __buf, __n, __flags, __addr, __addr_len);
}
# 281 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4



# 24 "/usr/include/netinet/in.h" 2 3 4






typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 112 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 209 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 237 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 374 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 386 "/usr/include/netinet/in.h" 2 3 4
# 501 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ , __leaf__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ , __leaf__));
# 531 "/usr/include/netinet/in.h" 3 4
struct cmsghdr;


struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));



extern socklen_t inet6_rth_space (int __type, int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_reverse (const void *__in, void *__out) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_segments (const void *__bp) __attribute__ ((__nothrow__ , __leaf__));
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     __attribute__ ((__nothrow__ , __leaf__));





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));



# 49 "server.h" 2
# 1 "../deps/lua/src/lua.h" 1
# 13 "../deps/lua/src/lua.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 14 "../deps/lua/src/lua.h" 2


# 1 "../deps/lua/src/luaconf.h" 1
# 11 "../deps/lua/src/luaconf.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 12 "../deps/lua/src/luaconf.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 13 "../deps/lua/src/luaconf.h" 2
# 17 "../deps/lua/src/lua.h" 2
# 50 "../deps/lua/src/lua.h"
typedef struct lua_State lua_State;

typedef int (*lua_CFunction) (lua_State *L);





typedef const char * (*lua_Reader) (lua_State *L, void *ud, size_t *sz);

typedef int (*lua_Writer) (lua_State *L, const void* p, size_t sz, void* ud);





typedef void * (*lua_Alloc) (void *ud, void *ptr, size_t osize, size_t nsize);
# 99 "../deps/lua/src/lua.h"
typedef double lua_Number;



typedef ptrdiff_t lua_Integer;






extern lua_State *(lua_newstate) (lua_Alloc f, void *ud);
extern void (lua_close) (lua_State *L);
extern lua_State *(lua_newthread) (lua_State *L);

extern lua_CFunction (lua_atpanic) (lua_State *L, lua_CFunction panicf);





extern int (lua_gettop) (lua_State *L);
extern void (lua_settop) (lua_State *L, int idx);
extern void (lua_pushvalue) (lua_State *L, int idx);
extern void (lua_remove) (lua_State *L, int idx);
extern void (lua_insert) (lua_State *L, int idx);
extern void (lua_replace) (lua_State *L, int idx);
extern int (lua_checkstack) (lua_State *L, int sz);

extern void (lua_xmove) (lua_State *from, lua_State *to, int n);






extern int (lua_isnumber) (lua_State *L, int idx);
extern int (lua_isstring) (lua_State *L, int idx);
extern int (lua_iscfunction) (lua_State *L, int idx);
extern int (lua_isuserdata) (lua_State *L, int idx);
extern int (lua_type) (lua_State *L, int idx);
extern const char *(lua_typename) (lua_State *L, int tp);

extern int (lua_equal) (lua_State *L, int idx1, int idx2);
extern int (lua_rawequal) (lua_State *L, int idx1, int idx2);
extern int (lua_lessthan) (lua_State *L, int idx1, int idx2);

extern lua_Number (lua_tonumber) (lua_State *L, int idx);
extern lua_Integer (lua_tointeger) (lua_State *L, int idx);
extern int (lua_toboolean) (lua_State *L, int idx);
extern const char *(lua_tolstring) (lua_State *L, int idx, size_t *len);
extern size_t (lua_objlen) (lua_State *L, int idx);
extern lua_CFunction (lua_tocfunction) (lua_State *L, int idx);
extern void *(lua_touserdata) (lua_State *L, int idx);
extern lua_State *(lua_tothread) (lua_State *L, int idx);
extern const void *(lua_topointer) (lua_State *L, int idx);





extern void (lua_pushnil) (lua_State *L);
extern void (lua_pushnumber) (lua_State *L, lua_Number n);
extern void (lua_pushinteger) (lua_State *L, lua_Integer n);
extern void (lua_pushlstring) (lua_State *L, const char *s, size_t l);
extern void (lua_pushstring) (lua_State *L, const char *s);
extern const char *(lua_pushvfstring) (lua_State *L, const char *fmt,
                                                      va_list argp);
extern const char *(lua_pushfstring) (lua_State *L, const char *fmt, ...);
extern void (lua_pushcclosure) (lua_State *L, lua_CFunction fn, int n);
extern void (lua_pushboolean) (lua_State *L, int b);
extern void (lua_pushlightuserdata) (lua_State *L, void *p);
extern int (lua_pushthread) (lua_State *L);





extern void (lua_gettable) (lua_State *L, int idx);
extern void (lua_getfield) (lua_State *L, int idx, const char *k);
extern void (lua_rawget) (lua_State *L, int idx);
extern void (lua_rawgeti) (lua_State *L, int idx, int n);
extern void (lua_createtable) (lua_State *L, int narr, int nrec);
extern void *(lua_newuserdata) (lua_State *L, size_t sz);
extern int (lua_getmetatable) (lua_State *L, int objindex);
extern void (lua_getfenv) (lua_State *L, int idx);





extern void (lua_settable) (lua_State *L, int idx);
extern void (lua_setfield) (lua_State *L, int idx, const char *k);
extern void (lua_rawset) (lua_State *L, int idx);
extern void (lua_rawseti) (lua_State *L, int idx, int n);
extern int (lua_setmetatable) (lua_State *L, int objindex);
extern int (lua_setfenv) (lua_State *L, int idx);





extern void (lua_call) (lua_State *L, int nargs, int nresults);
extern int (lua_pcall) (lua_State *L, int nargs, int nresults, int errfunc);
extern int (lua_cpcall) (lua_State *L, lua_CFunction func, void *ud);
extern int (lua_load) (lua_State *L, lua_Reader reader, void *dt,
                                        const char *chunkname);

extern int (lua_dump) (lua_State *L, lua_Writer writer, void *data);





extern int (lua_yield) (lua_State *L, int nresults);
extern int (lua_resume) (lua_State *L, int narg);
extern int (lua_status) (lua_State *L);
# 230 "../deps/lua/src/lua.h"
extern int (lua_gc) (lua_State *L, int what, int data);






extern int (lua_error) (lua_State *L);

extern int (lua_next) (lua_State *L, int idx);

extern void (lua_concat) (lua_State *L, int n);

extern lua_Alloc (lua_getallocf) (lua_State *L, void **ud);
extern void lua_setallocf (lua_State *L, lua_Alloc f, void *ud);
# 298 "../deps/lua/src/lua.h"
extern void lua_setlevel (lua_State *from, lua_State *to);
# 326 "../deps/lua/src/lua.h"
typedef struct lua_Debug lua_Debug;



typedef void (*lua_Hook) (lua_State *L, lua_Debug *ar);


extern int lua_getstack (lua_State *L, int level, lua_Debug *ar);
extern int lua_getinfo (lua_State *L, const char *what, lua_Debug *ar);
extern const char *lua_getlocal (lua_State *L, const lua_Debug *ar, int n);
extern const char *lua_setlocal (lua_State *L, const lua_Debug *ar, int n);
extern const char *lua_getupvalue (lua_State *L, int funcindex, int n);
extern const char *lua_setupvalue (lua_State *L, int funcindex, int n);

extern int lua_sethook (lua_State *L, lua_Hook func, int mask, int count);
extern lua_Hook lua_gethook (lua_State *L);
extern int lua_gethookmask (lua_State *L);
extern int lua_gethookcount (lua_State *L);


struct lua_Debug {
  int event;
  const char *name;
  const char *namewhat;
  const char *what;
  const char *source;
  int currentline;
  int nups;
  int linedefined;
  int lastlinedefined;
  char short_src[60];

  int i_ci;
};
# 50 "server.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int __sigismember (const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline __attribute__ ((__gnu_inline__)) int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline __attribute__ ((__gnu_inline__)) int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
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

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));






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



extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 204 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




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



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


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







extern int sighold (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 51 "server.h" 2

typedef long long mstime_t;

# 1 "ae.h" 1
# 56 "ae.h"
struct aeEventLoop;


typedef void aeFileProc(struct aeEventLoop *eventLoop, int fd, void *clientData, int mask);
typedef int aeTimeProc(struct aeEventLoop *eventLoop, long long id, void *clientData);
typedef void aeEventFinalizerProc(struct aeEventLoop *eventLoop, void *clientData);
typedef void aeBeforeSleepProc(struct aeEventLoop *eventLoop);


typedef struct aeFileEvent {
    int mask;
    aeFileProc *rfileProc;
    aeFileProc *wfileProc;
    void *clientData;
} aeFileEvent;


typedef struct aeTimeEvent {
    long long id;
    long when_sec;
    long when_ms;
    aeTimeProc *timeProc;
    aeEventFinalizerProc *finalizerProc;
    void *clientData;
    struct aeTimeEvent *next;
} aeTimeEvent;


typedef struct aeFiredEvent {
    int fd;
    int mask;
} aeFiredEvent;


typedef struct aeEventLoop {
    int maxfd;
    int setsize;
    long long timeEventNextId;
    time_t lastTime;
    aeFileEvent *events;
    aeFiredEvent *fired;
    aeTimeEvent *timeEventHead;
    int stop;
    void *apidata;
    aeBeforeSleepProc *beforesleep;
} aeEventLoop;


aeEventLoop *aeCreateEventLoop(int setsize);
void aeDeleteEventLoop(aeEventLoop *eventLoop);
void aeStop(aeEventLoop *eventLoop);
int aeCreateFileEvent(aeEventLoop *eventLoop, int fd, int mask,
        aeFileProc *proc, void *clientData);
void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask);
int aeGetFileEvents(aeEventLoop *eventLoop, int fd);
long long aeCreateTimeEvent(aeEventLoop *eventLoop, long long milliseconds,
        aeTimeProc *proc, void *clientData,
        aeEventFinalizerProc *finalizerProc);
int aeDeleteTimeEvent(aeEventLoop *eventLoop, long long id);
int aeProcessEvents(aeEventLoop *eventLoop, int flags);
int aeWait(int fd, int mask, long long milliseconds);
void aeMain(aeEventLoop *eventLoop);
char *aeGetApiName(void);
void aeSetBeforeSleepProc(aeEventLoop *eventLoop, aeBeforeSleepProc *beforesleep);
int aeGetSetSize(aeEventLoop *eventLoop);
int aeResizeSetSize(aeEventLoop *eventLoop, int setsize);
# 55 "server.h" 2

# 1 "dict.h" 1
# 47 "dict.h"
typedef struct dictEntry {
    void *key;
    union {
        void *val;
        uint64_t u64;
        int64_t s64;
        double d;
    } v;
    struct dictEntry *next;
} dictEntry;

typedef struct dictType {
    unsigned int (*hashFunction)(const void *key);
    void *(*keyDup)(void *privdata, const void *key);
    void *(*valDup)(void *privdata, const void *obj);
    int (*keyCompare)(void *privdata, const void *key1, const void *key2);
    void (*keyDestructor)(void *privdata, void *key);
    void (*valDestructor)(void *privdata, void *obj);
} dictType;



typedef struct dictht {
    dictEntry **table;
    unsigned long size;
    unsigned long sizemask;
    unsigned long used;
} dictht;

typedef struct dict {
    dictType *type;
    void *privdata;
    dictht ht[2];
    long rehashidx;
    unsigned long iterators;
} dict;





typedef struct dictIterator {
    dict *d;
    long index;
    int table, safe;
    dictEntry *entry, *nextEntry;

    long long fingerprint;
} dictIterator;

typedef void (dictScanFunction)(void *privdata, const dictEntry *de);
# 150 "dict.h"
dict *dictCreate(dictType *type, void *privDataPtr);
int dictExpand(dict *d, unsigned long size);
int dictAdd(dict *d, void *key, void *val);
dictEntry *dictAddRaw(dict *d, void *key);
int dictReplace(dict *d, void *key, void *val);
dictEntry *dictReplaceRaw(dict *d, void *key);
int dictDelete(dict *d, const void *key);
int dictDeleteNoFree(dict *d, const void *key);
void dictRelease(dict *d);
dictEntry * dictFind(dict *d, const void *key);
void *dictFetchValue(dict *d, const void *key);
int dictResize(dict *d);
dictIterator *dictGetIterator(dict *d);
dictIterator *dictGetSafeIterator(dict *d);
dictEntry *dictNext(dictIterator *iter);
void dictReleaseIterator(dictIterator *iter);
dictEntry *dictGetRandomKey(dict *d);
unsigned int dictGetSomeKeys(dict *d, dictEntry **des, unsigned int count);
void dictGetStats(char *buf, size_t bufsize, dict *d);
unsigned int dictGenHashFunction(const void *key, int len);
unsigned int dictGenCaseHashFunction(const unsigned char *buf, int len);
void dictEmpty(dict *d, void(callback)(void*));
void dictEnableResize(void);
void dictDisableResize(void);
int dictRehash(dict *d, int n);
int dictRehashMilliseconds(dict *d, int ms);
void dictSetHashFunctionSeed(unsigned int initval);
unsigned int dictGetHashFunctionSeed(void);
unsigned long dictScan(dict *d, unsigned long v, dictScanFunction *fn, void *privdata);


extern dictType dictTypeHeapStringCopyKey;
extern dictType dictTypeHeapStrings;
extern dictType dictTypeHeapStringCopyKeyValue;
# 57 "server.h" 2
# 1 "adlist.h" 1
# 36 "adlist.h"
typedef struct listNode {
    struct listNode *prev;
    struct listNode *next;
    void *value;
} listNode;

typedef struct listIter {
    listNode *next;
    int direction;
} listIter;

typedef struct list {
    listNode *head;
    listNode *tail;
    void *(*dup)(void *ptr);
    void (*free)(void *ptr);
    int (*match)(void *ptr, void *key);
    unsigned long len;
} list;
# 73 "adlist.h"
list *listCreate(void);
void listRelease(list *list);
list *listAddNodeHead(list *list, void *value);
list *listAddNodeTail(list *list, void *value);
list *listInsertNode(list *list, listNode *old_node, void *value, int after);
void listDelNode(list *list, listNode *node);
listIter *listGetIterator(list *list, int direction);
listNode *listNext(listIter *iter);
void listReleaseIterator(listIter *iter);
list *listDup(list *orig);
listNode *listSearchKey(list *list, void *key);
listNode *listIndex(list *list, long index);
void listRewind(list *list, listIter *li);
void listRewindTail(list *list, listIter *li);
void listRotate(list *list);
# 58 "server.h" 2
# 1 "zmalloc.h" 1
# 50 "zmalloc.h"
# 1 "../deps/jemalloc/include/jemalloc/jemalloc.h" 1
# 76 "../deps/jemalloc/include/jemalloc/jemalloc.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdbool.h" 1 3 4
# 77 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 79 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 80 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 183 "../deps/jemalloc/include/jemalloc/jemalloc.h"
extern __attribute__((visibility("default"))) const char *je_malloc_conf;
extern __attribute__((visibility("default"))) void (*je_malloc_message)(void *cbopaque,
    const char *s);

__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_malloc(size_t size)
    __attribute__((malloc)) __attribute__((alloc_size(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_calloc(size_t num, size_t size)
    __attribute__((malloc)) __attribute__((alloc_size(1, 2)));
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_posix_memalign(void **memptr,
    size_t alignment, size_t size) __attribute__((nonnull(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_aligned_alloc(size_t alignment,
    size_t size) __attribute__((malloc))
    __attribute__((alloc_size(2)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_realloc(void *ptr, size_t size)
    __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_free(void *ptr)
    ;

__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_mallocx(size_t size, int flags)
    __attribute__((malloc)) __attribute__((alloc_size(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_rallocx(void *ptr, size_t size,
    int flags) __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_xallocx(void *ptr, size_t size,
    size_t extra, int flags);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_sallocx(const void *ptr,
    int flags) __attribute__((pure));
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_dallocx(void *ptr, int flags);
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_sdallocx(void *ptr, size_t size,
    int flags);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_nallocx(size_t size, int flags)
    __attribute__((pure));

__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctl(const char *name,
    void *oldp, size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctlnametomib(const char *name,
    size_t *mibp, size_t *miblenp);
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctlbymib(const size_t *mib,
    size_t miblen, void *oldp, size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_malloc_stats_print(
    void (*write_cb)(void *, const char *), void *je_cbopaque,
    const char *opts);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_malloc_usable_size(
    void *ptr) ;


__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_memalign(size_t alignment, size_t size)
    __attribute__((malloc));



__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_valloc(size_t size)
    __attribute__((malloc));







typedef void *(chunk_alloc_t)(void *, size_t, size_t, _Bool *, _Bool *, unsigned);





typedef _Bool (chunk_dalloc_t)(void *, size_t, _Bool, unsigned);






typedef _Bool (chunk_commit_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_decommit_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_purge_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_split_t)(void *, size_t, size_t, size_t, _Bool, unsigned);






typedef _Bool (chunk_merge_t)(void *, size_t, void *, size_t, _Bool, unsigned);

typedef struct {
 chunk_alloc_t *alloc;
 chunk_dalloc_t *dalloc;
 chunk_commit_t *commit;
 chunk_decommit_t *decommit;
 chunk_purge_t *purge;
 chunk_split_t *split;
 chunk_merge_t *merge;
} chunk_hooks_t;
# 51 "zmalloc.h" 2
# 68 "zmalloc.h"
void *zmalloc(size_t size);
void *zcalloc(size_t size);
void *zrealloc(void *ptr, size_t size);
void zfree(void *ptr);
char *zstrdup(const char *s);
size_t zmalloc_used_memory(void);
void zmalloc_enable_thread_safeness(void);
void zmalloc_set_oom_handler(void (*oom_handler)(size_t));
float zmalloc_get_fragmentation_ratio(size_t rss);
size_t zmalloc_get_rss(void);
size_t zmalloc_get_private_dirty(void);
size_t zmalloc_get_smap_bytes_by_field(char *field);
size_t zmalloc_get_memory_size(void);
void zlibc_free(void *ptr);
# 59 "server.h" 2
# 1 "anet.h" 1
# 52 "anet.h"
int anetTcpConnect(char *err, char *addr, int port);
int anetTcpNonBlockConnect(char *err, char *addr, int port);
int anetTcpNonBlockBindConnect(char *err, char *addr, int port, char *source_addr);
int anetTcpNonBlockBestEffortBindConnect(char *err, char *addr, int port, char *source_addr);
int anetUnixConnect(char *err, char *path);
int anetUnixNonBlockConnect(char *err, char *path);
int anetRead(int fd, char *buf, int count);
int anetResolve(char *err, char *host, char *ipbuf, size_t ipbuf_len);
int anetResolveIP(char *err, char *host, char *ipbuf, size_t ipbuf_len);
int anetTcpServer(char *err, int port, char *bindaddr, int backlog);
int anetTcp6Server(char *err, int port, char *bindaddr, int backlog);
int anetUnixServer(char *err, char *path, mode_t perm, int backlog);
int anetTcpAccept(char *err, int serversock, char *ip, size_t ip_len, int *port);
int anetUnixAccept(char *err, int serversock);
int anetWrite(int fd, char *buf, int count);
int anetNonBlock(char *err, int fd);
int anetBlock(char *err, int fd);
int anetEnableTcpNoDelay(char *err, int fd);
int anetDisableTcpNoDelay(char *err, int fd);
int anetTcpKeepAlive(char *err, int fd);
int anetSendTimeout(char *err, int fd, long long ms);
int anetPeerToString(int fd, char *ip, size_t ip_len, int *port);
int anetKeepAlive(char *err, int fd, int interval);
int anetSockName(int fd, char *ip, size_t ip_len, int *port);
int anetFormatAddr(char *fmt, size_t fmt_len, char *ip, int port);
int anetFormatPeer(int fd, char *fmt, size_t fmt_len);
int anetFormatSock(int fd, char *fmt, size_t fmt_len);
# 60 "server.h" 2
# 1 "ziplist.h" 1
# 37 "ziplist.h"
unsigned char *ziplistNew(void);
unsigned char *ziplistMerge(unsigned char **first, unsigned char **second);
unsigned char *ziplistPush(unsigned char *zl, unsigned char *s, unsigned int slen, int where);
unsigned char *ziplistIndex(unsigned char *zl, int index);
unsigned char *ziplistNext(unsigned char *zl, unsigned char *p);
unsigned char *ziplistPrev(unsigned char *zl, unsigned char *p);
unsigned int ziplistGet(unsigned char *p, unsigned char **sval, unsigned int *slen, long long *lval);
unsigned char *ziplistInsert(unsigned char *zl, unsigned char *p, unsigned char *s, unsigned int slen);
unsigned char *ziplistDelete(unsigned char *zl, unsigned char **p);
unsigned char *ziplistDeleteRange(unsigned char *zl, int index, unsigned int num);
unsigned int ziplistCompare(unsigned char *p, unsigned char *s, unsigned int slen);
unsigned char *ziplistFind(unsigned char *p, unsigned char *vstr, unsigned int vlen, unsigned int skip);
unsigned int ziplistLen(unsigned char *zl);
size_t ziplistBlobLen(unsigned char *zl);
# 61 "server.h" 2
# 1 "intset.h" 1
# 35 "intset.h"
typedef struct intset {
    uint32_t encoding;
    uint32_t length;
    int8_t contents[];
} intset;

intset *intsetNew(void);
intset *intsetAdd(intset *is, int64_t value, uint8_t *success);
intset *intsetRemove(intset *is, int64_t value, int *success);
uint8_t intsetFind(intset *is, int64_t value);
int64_t intsetRandom(intset *is);
uint8_t intsetGet(intset *is, uint32_t pos, int64_t *value);
uint32_t intsetLen(intset *is);
size_t intsetBlobLen(intset *is);
# 62 "server.h" 2
# 1 "version.h" 1
# 63 "server.h" 2
# 1 "util.h" 1
# 36 "util.h"
int stringmatchlen(const char *p, int plen, const char *s, int slen, int nocase);
int stringmatch(const char *p, const char *s, int nocase);
long long memtoll(const char *p, int *err);
uint32_t digits10(uint64_t v);
uint32_t sdigits10(int64_t v);
int ll2string(char *s, size_t len, long long value);
int string2ll(const char *s, size_t slen, long long *value);
int string2l(const char *s, size_t slen, long *value);
int string2ld(const char *s, size_t slen, long double *dp);
int d2string(char *buf, size_t len, double value);
int ld2string(char *buf, size_t len, long double value, int humanfriendly);
sds getAbsolutePath(char *filename);
int pathIsBaseName(char *path);
# 64 "server.h" 2
# 1 "latency.h" 1
# 41 "latency.h"
struct latencySample {
    int32_t time;
    uint32_t latency;
};


struct latencyTimeSeries {
    int idx;
    uint32_t max;
    struct latencySample samples[160];
};


struct latencyStats {
    uint32_t all_time_high;
    uint32_t avg;
    uint32_t min;
    uint32_t max;
    uint32_t mad;
    uint32_t samples;
    time_t period;
};

void latencyMonitorInit(void);
void latencyAddSample(char *event, mstime_t latency);
int THPIsEnabled(void);
# 65 "server.h" 2
# 1 "sparkline.h" 1
# 34 "sparkline.h"
struct sample {
    double value;
    char *label;
};

struct sequence {
    int length;
    int labels;
    struct sample *samples;
    double min, max;
};





struct sequence *createSparklineSequence(void);
void sparklineSequenceAddSample(struct sequence *seq, double value, char *label);
void freeSparklineSequence(struct sequence *seq);
sds sparklineRenderRange(sds output, struct sequence *seq, int rows, int offset, int len, int flags);
sds sparklineRender(sds output, struct sequence *seq, int columns, int rows, int flags);
# 66 "server.h" 2
# 1 "quicklist.h" 1
# 44 "quicklist.h"
typedef struct quicklistNode {
    struct quicklistNode *prev;
    struct quicklistNode *next;
    unsigned char *zl;
    unsigned int sz;
    unsigned int count : 16;
    unsigned int encoding : 2;
    unsigned int container : 2;
    unsigned int recompress : 1;
    unsigned int attempted_compress : 1;
    unsigned int extra : 10;
} quicklistNode;






typedef struct quicklistLZF {
    unsigned int sz;
    char compressed[];
} quicklistLZF;







typedef struct quicklist {
    quicklistNode *head;
    quicklistNode *tail;
    unsigned long count;
    unsigned int len;
    int fill : 16;
    unsigned int compress : 16;
} quicklist;

typedef struct quicklistIter {
    const quicklist *quicklist;
    quicklistNode *current;
    unsigned char *zi;
    long offset;
    int direction;
} quicklistIter;

typedef struct quicklistEntry {
    const quicklist *quicklist;
    quicklistNode *node;
    unsigned char *zi;
    unsigned char *value;
    long long longval;
    unsigned int sz;
    int offset;
} quicklistEntry;
# 118 "quicklist.h"
quicklist *quicklistCreate(void);
quicklist *quicklistNew(int fill, int compress);
void quicklistSetCompressDepth(quicklist *quicklist, int depth);
void quicklistSetFill(quicklist *quicklist, int fill);
void quicklistSetOptions(quicklist *quicklist, int fill, int depth);
void quicklistRelease(quicklist *quicklist);
int quicklistPushHead(quicklist *quicklist, void *value, const size_t sz);
int quicklistPushTail(quicklist *quicklist, void *value, const size_t sz);
void quicklistPush(quicklist *quicklist, void *value, const size_t sz,
                   int where);
void quicklistAppendZiplist(quicklist *quicklist, unsigned char *zl);
quicklist *quicklistAppendValuesFromZiplist(quicklist *quicklist,
                                            unsigned char *zl);
quicklist *quicklistCreateFromZiplist(int fill, int compress,
                                      unsigned char *zl);
void quicklistInsertAfter(quicklist *quicklist, quicklistEntry *node,
                          void *value, const size_t sz);
void quicklistInsertBefore(quicklist *quicklist, quicklistEntry *node,
                           void *value, const size_t sz);
void quicklistDelEntry(quicklistIter *iter, quicklistEntry *entry);
int quicklistReplaceAtIndex(quicklist *quicklist, long index, void *data,
                            int sz);
int quicklistDelRange(quicklist *quicklist, const long start, const long stop);
quicklistIter *quicklistGetIterator(const quicklist *quicklist, int direction);
quicklistIter *quicklistGetIteratorAtIdx(const quicklist *quicklist,
                                         int direction, const long long idx);
int quicklistNext(quicklistIter *iter, quicklistEntry *node);
void quicklistReleaseIterator(quicklistIter *iter);
quicklist *quicklistDup(quicklist *orig);
int quicklistIndex(const quicklist *quicklist, const long long index,
                   quicklistEntry *entry);
void quicklistRewind(quicklist *quicklist, quicklistIter *li);
void quicklistRewindTail(quicklist *quicklist, quicklistIter *li);
void quicklistRotate(quicklist *quicklist);
int quicklistPopCustom(quicklist *quicklist, int where, unsigned char **data,
                       unsigned int *sz, long long *sval,
                       void *(*saver)(unsigned char *data, unsigned int sz));
int quicklistPop(quicklist *quicklist, int where, unsigned char **data,
                 unsigned int *sz, long long *slong);
unsigned int quicklistCount(quicklist *ql);
int quicklistCompare(unsigned char *p1, unsigned char *p2, int p2_len);
size_t quicklistGetLzf(const quicklistNode *node, void **data);
# 67 "server.h" 2


# 1 "zipmap.h" 1
# 38 "zipmap.h"
unsigned char *zipmapNew(void);
unsigned char *zipmapSet(unsigned char *zm, unsigned char *key, unsigned int klen, unsigned char *val, unsigned int vlen, int *update);
unsigned char *zipmapDel(unsigned char *zm, unsigned char *key, unsigned int klen, int *deleted);
unsigned char *zipmapRewind(unsigned char *zm);
unsigned char *zipmapNext(unsigned char *zm, unsigned char **key, unsigned int *klen, unsigned char **value, unsigned int *vlen);
int zipmapGet(unsigned char *zm, unsigned char *key, unsigned int klen, unsigned char **value, unsigned int *vlen);
int zipmapExists(unsigned char *zm, unsigned char *key, unsigned int klen);
unsigned int zipmapLen(unsigned char *zm);
size_t zipmapBlobLen(unsigned char *zm);
void zipmapRepr(unsigned char *p);
# 70 "server.h" 2
# 1 "sha1.h" 1
# 10 "sha1.h"
typedef struct {
    uint32_t state[5];
    uint32_t count[2];
    unsigned char buffer[64];
} SHA1_CTX;

void SHA1Transform(uint32_t state[5], const unsigned char buffer[64]);
void SHA1Init(SHA1_CTX* context);
void SHA1Update(SHA1_CTX* context, const unsigned char* data, uint32_t len);
void SHA1Final(unsigned char digest[20], SHA1_CTX* context);
# 71 "server.h" 2
# 1 "endianconv.h" 1
# 39 "endianconv.h"
void memrev16(void *p);
void memrev32(void *p);
void memrev64(void *p);
uint16_t intrev16(uint16_t v);
uint32_t intrev32(uint32_t v);
uint64_t intrev64(uint64_t v);
# 72 "server.h" 2
# 1 "crc64.h" 1





uint64_t crc64(uint64_t crc, const unsigned char *s, uint64_t l);
# 73 "server.h" 2
# 444 "server.h"
struct RedisModule;
struct RedisModuleIO;
struct RedisModuleDigest;
struct redisObject;





typedef void *(*moduleTypeLoadFunc)(struct RedisModuleIO *io, int encver);
typedef void (*moduleTypeSaveFunc)(struct RedisModuleIO *io, void *value);
typedef void (*moduleTypeRewriteFunc)(struct RedisModuleIO *io, struct redisObject *key, void *value);
typedef void (*moduleTypeDigestFunc)(struct RedisModuleDigest *digest, void *value);
typedef void (*moduleTypeFreeFunc)(void *value);



typedef struct RedisModuleType {
    uint64_t id;
    struct RedisModule *module;
    moduleTypeLoadFunc rdb_load;
    moduleTypeSaveFunc rdb_save;
    moduleTypeRewriteFunc aof_rewrite;
    moduleTypeDigestFunc digest;
    moduleTypeFreeFunc free;
    char name[10];
} moduleType;
# 487 "server.h"
typedef struct moduleValue {
    moduleType *type;
    void *value;
} moduleValue;




typedef struct RedisModuleIO {
    size_t bytes;
    rio *rio;
    moduleType *type;
    int error;
} RedisModuleIO;
# 528 "server.h"
typedef struct redisObject {
    unsigned type:4;
    unsigned encoding:4;
    unsigned lru:24;
    int refcount;
    void *ptr;
} robj;
# 561 "server.h"
struct evictionPoolEntry {
    unsigned long long idle;
    sds key;
};




typedef struct redisDb {
    dict *dict;
    dict *expires;
    dict *blocking_keys;
    dict *ready_keys;
    dict *watched_keys;
    struct evictionPoolEntry *eviction_pool;
    int id;
    long long avg_ttl;
} redisDb;


typedef struct multiCmd {
    robj **argv;
    int argc;
    struct redisCommand *cmd;
} multiCmd;

typedef struct multiState {
    multiCmd *commands;
    int count;
    int minreplicas;
    time_t minreplicas_timeout;
} multiState;



typedef struct blockingState {

    mstime_t timeout;



    dict *keys;

    robj *target;



    int numreplicas;
    long long reploffset;
} blockingState;
# 623 "server.h"
typedef struct readyList {
    redisDb *db;
    robj *key;
} readyList;



typedef struct client {
    uint64_t id;
    int fd;
    redisDb *db;
    robj *name;
    sds querybuf;
    size_t querybuf_peak;
    int argc;
    robj **argv;
    struct redisCommand *cmd, *lastcmd;
    int reqtype;
    int multibulklen;
    long bulklen;
    list *reply;
    unsigned long long reply_bytes;
    size_t sentlen;

    time_t ctime;
    time_t lastinteraction;
    time_t obuf_soft_limit_reached_time;
    int flags;
    int authenticated;
    int replstate;
    int repl_put_online_on_ack;
    int repldbfd;
    off_t repldboff;
    off_t repldbsize;
    sds replpreamble;
    long long reploff;
    long long repl_ack_off;
    long long repl_ack_time;
    long long psync_initial_offset;


    char replrunid[40 +1];
    int slave_listening_port;
    int slave_capa;
    multiState mstate;
    int btype;
    blockingState bpop;
    long long woff;
    list *watched_keys;
    dict *pubsub_channels;
    list *pubsub_patterns;
    sds peerid;


    int bufpos;
    char buf[(16*1024)];
} client;

struct saveparam {
    time_t seconds;
    int changes;
};

struct moduleLoadQueueEntry {
    sds path;
    int argc;
    robj **argv;
};

struct sharedObjectsStruct {
    robj *crlf, *ok, *err, *emptybulk, *czero, *cone, *cnegone, *pong, *space,
    *colon, *nullbulk, *nullmultibulk, *queued,
    *emptymultibulk, *wrongtypeerr, *nokeyerr, *syntaxerr, *sameobjecterr,
    *outofrangeerr, *noscripterr, *loadingerr, *slowscripterr, *bgsaveerr,
    *masterdownerr, *roslaveerr, *execaborterr, *noautherr, *noreplicaserr,
    *busykeyerr, *oomerr, *plus, *messagebulk, *pmessagebulk, *subscribebulk,
    *unsubscribebulk, *psubscribebulk, *punsubscribebulk, *del, *unlink,
    *rpop, *lpop, *lpush, *emptyscan,
    *select[10],
    *integers[10000],
    *mbulkhdr[32],
    *bulkhdr[32];
    sds minstring, maxstring;
};


typedef struct zskiplistNode {
    sds ele;
    double score;
    struct zskiplistNode *backward;
    struct zskiplistLevel {
        struct zskiplistNode *forward;
        unsigned int span;
    } level[];
} zskiplistNode;

typedef struct zskiplist {
    struct zskiplistNode *header, *tail;
    unsigned long length;
    int level;
} zskiplist;

typedef struct zset {
    dict *dict;
    zskiplist *zsl;
} zset;

typedef struct clientBufferLimitsConfig {
    unsigned long long hard_limit_bytes;
    unsigned long long soft_limit_bytes;
    time_t soft_limit_seconds;
} clientBufferLimitsConfig;

extern clientBufferLimitsConfig clientBufferLimitsDefaults[3];







typedef struct redisOp {
    robj **argv;
    int argc, dbid, target;
    struct redisCommand *cmd;
} redisOp;
# 757 "server.h"
typedef struct redisOpArray {
    redisOp *ops;
    int numops;
} redisOpArray;





struct clusterState;







struct redisServer {

    pid_t pid;
    char *configfile;
    char *executable;
    char **exec_argv;
    int hz;
    redisDb *db;
    dict *commands;
    dict *orig_commands;
    aeEventLoop *el;
    unsigned lruclock:24;
    int shutdown_asap;
    int activerehashing;
    char *requirepass;
    char *pidfile;
    int arch_bits;
    int cronloops;
    char runid[40 +1];
    int sentinel_mode;

    dict *moduleapi;
    list *loadmodule_queue;

    int port;
    int tcp_backlog;
    char *bindaddr[16];
    int bindaddr_count;
    char *unixsocket;
    mode_t unixsocketperm;
    int ipfd[16];
    int ipfd_count;
    int sofd;
    int cfd[16];
    int cfd_count;
    list *clients;
    list *clients_to_close;
    list *clients_pending_write;
    list *slaves, *monitors;
    client *current_client;
    int clients_paused;
    mstime_t clients_pause_end_time;
    char neterr[256];
    dict *migrate_cached_sockets;
    uint64_t next_client_id;
    int protected_mode;

    int loading;
    off_t loading_total_bytes;
    off_t loading_loaded_bytes;
    time_t loading_start_time;
    off_t loading_process_events_interval_bytes;

    struct redisCommand *delCommand, *multiCommand, *lpushCommand, *lpopCommand,
                        *rpopCommand, *sremCommand, *execCommand;

    time_t stat_starttime;
    long long stat_numcommands;
    long long stat_numconnections;
    long long stat_expiredkeys;
    long long stat_evictedkeys;
    long long stat_keyspace_hits;
    long long stat_keyspace_misses;
    size_t stat_peak_memory;
    long long stat_fork_time;
    double stat_fork_rate;
    long long stat_rejected_conn;
    long long stat_sync_full;
    long long stat_sync_partial_ok;
    long long stat_sync_partial_err;
    list *slowlog;
    long long slowlog_entry_id;
    long long slowlog_log_slower_than;
    unsigned long slowlog_max_len;
    size_t resident_set_size;
    long long stat_net_input_bytes;
    long long stat_net_output_bytes;


    struct {
        long long last_sample_time;
        long long last_sample_count;
        long long samples[16];
        int idx;
    } inst_metric[3];

    int verbosity;
    int maxidletime;
    int tcpkeepalive;
    int active_expire_enabled;
    size_t client_max_querybuf_len;
    int dbnum;
    int supervised;
    int supervised_mode;
    int daemonize;
    clientBufferLimitsConfig client_obuf_limits[3];

    int aof_state;
    int fdatasync;
    char *aof_filename;
    int aof_no_fsync_on_rewrite;
    int aof_rewrite_perc;
    off_t aof_rewrite_min_size;
    off_t aof_rewrite_base_size;
    off_t aof_current_size;
    int aof_rewrite_scheduled;
    pid_t aof_child_pid;
    list *aof_rewrite_buf_blocks;
    sds aof_buf;
    int aof_fd;
    int aof_selected_db;
    time_t aof_flush_postponed_start;
    time_t aof_last_fsync;
    time_t aof_rewrite_time_last;
    time_t aof_rewrite_time_start;
    int aof_lastbgrewrite_status;
    unsigned long aof_delayed_fsync;
    int aof_rewrite_incremental_fsync;
    int aof_last_write_status;
    int aof_last_write_errno;
    int aof_load_truncated;

    int aof_pipe_write_data_to_child;
    int aof_pipe_read_data_from_parent;
    int aof_pipe_write_ack_to_parent;
    int aof_pipe_read_ack_from_child;
    int aof_pipe_write_ack_to_child;
    int aof_pipe_read_ack_from_parent;
    int aof_stop_sending_diff;

    sds aof_child_diff;

    long long dirty;
    long long dirty_before_bgsave;
    pid_t rdb_child_pid;
    struct saveparam *saveparams;
    int saveparamslen;
    char *rdb_filename;
    int rdb_compression;
    int rdb_checksum;
    time_t lastsave;
    time_t lastbgsave_try;
    time_t rdb_save_time_last;
    time_t rdb_save_time_start;
    int rdb_child_type;
    int lastbgsave_status;
    int stop_writes_on_bgsave_err;
    int rdb_pipe_write_result_to_parent;
    int rdb_pipe_read_result_from_child;

    redisOpArray also_propagate;

    char *logfile;
    int syslog_enabled;
    char *syslog_ident;
    int syslog_facility;

    int slaveseldb;
    long long master_repl_offset;
    int repl_ping_slave_period;
    char *repl_backlog;
    long long repl_backlog_size;
    long long repl_backlog_histlen;
    long long repl_backlog_idx;
    long long repl_backlog_off;

    time_t repl_backlog_time_limit;

    time_t repl_no_slaves_since;

    int repl_min_slaves_to_write;
    int repl_min_slaves_max_lag;
    int repl_good_slaves_count;
    int repl_diskless_sync;
    int repl_diskless_sync_delay;

    char *masterauth;
    char *masterhost;
    int masterport;
    int repl_timeout;
    client *master;
    client *cached_master;
    int repl_syncio_timeout;
    int repl_state;
    off_t repl_transfer_size;
    off_t repl_transfer_read;
    off_t repl_transfer_last_fsync_off;
    int repl_transfer_s;
    int repl_transfer_fd;
    char *repl_transfer_tmpfile;
    time_t repl_transfer_lastio;
    int repl_serve_stale_data;
    int repl_slave_ro;
    time_t repl_down_since;
    int repl_disable_tcp_nodelay;
    int slave_priority;
    char repl_master_runid[40 +1];
    long long repl_master_initial_offset;
    int repl_slave_lazy_flush;

    dict *repl_scriptcache_dict;
    list *repl_scriptcache_fifo;
    unsigned int repl_scriptcache_size;

    list *clients_waiting_acks;
    int get_ack_from_slaves;

    unsigned int maxclients;
    unsigned long long maxmemory;
    int maxmemory_policy;
    int maxmemory_samples;

    unsigned int bpop_blocked_clients;
    list *unblocked_clients;
    list *ready_keys;


    int sort_desc;
    int sort_alpha;
    int sort_bypattern;
    int sort_store;

    size_t hash_max_ziplist_entries;
    size_t hash_max_ziplist_value;
    size_t set_max_intset_entries;
    size_t zset_max_ziplist_entries;
    size_t zset_max_ziplist_value;
    size_t hll_sparse_max_bytes;

    int list_max_ziplist_size;
    int list_compress_depth;

    time_t unixtime;
    long long mstime;

    dict *pubsub_channels;
    list *pubsub_patterns;
    int notify_keyspace_events;


    int cluster_enabled;
    mstime_t cluster_node_timeout;
    char *cluster_configfile;
    struct clusterState *cluster;
    int cluster_migration_barrier;
    int cluster_slave_validity_factor;
    int cluster_require_full_coverage;

    char *cluster_announce_ip;
    int cluster_announce_port;
    int cluster_announce_bus_port;

    lua_State *lua;
    client *lua_client;
    client *lua_caller;
    dict *lua_scripts;
    mstime_t lua_time_limit;
    mstime_t lua_time_start;
    int lua_write_dirty;

    int lua_random_dirty;

    int lua_replicate_commands;
    int lua_multi_emitted;
    int lua_repl;
    int lua_timedout;

    int lua_kill;
    int lua_always_replicate_commands;

    int lazyfree_lazy_eviction;
    int lazyfree_lazy_expire;
    int lazyfree_lazy_server_del;

    long long latency_monitor_threshold;
    dict *latency_events;

    char *assert_failed;
    char *assert_file;
    int assert_line;
    int bug_report_start;
    int watchdog_period;

    size_t system_memory_size;
};

typedef struct pubsubPattern {
    client *client;
    robj *pattern;
} pubsubPattern;

typedef void redisCommandProc(client *c);
typedef int *redisGetKeysProc(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);
struct redisCommand {
    char *name;
    redisCommandProc *proc;
    int arity;
    char *sflags;
    int flags;


    redisGetKeysProc *getkeys_proc;

    int firstkey;
    int lastkey;
    int keystep;
    long long microseconds, calls;
};

struct redisFunctionSym {
    char *name;
    unsigned long pointer;
};

typedef struct _redisSortObject {
    robj *obj;
    union {
        double score;
        robj *cmpobj;
    } u;
} redisSortObject;

typedef struct _redisSortOperation {
    int type;
    robj *pattern;
} redisSortOperation;


typedef struct {
    robj *subject;
    unsigned char encoding;
    unsigned char direction;
    quicklistIter *iter;
} listTypeIterator;


typedef struct {
    listTypeIterator *li;
    quicklistEntry entry;
} listTypeEntry;


typedef struct {
    robj *subject;
    int encoding;
    int ii;
    dictIterator *di;
} setTypeIterator;





typedef struct {
    robj *subject;
    int encoding;

    unsigned char *fptr, *vptr;

    dictIterator *di;
    dictEntry *de;
} hashTypeIterator;
# 1144 "server.h"
extern struct redisServer server;
extern struct sharedObjectsStruct shared;
extern dictType objectKeyPointerValueDictType;
extern dictType setDictType;
extern dictType zsetDictType;
extern dictType clusterNodesDictType;
extern dictType clusterNodesBlackListDictType;
extern dictType dbDictType;
extern dictType shaScriptObjectDictType;
extern double R_Zero, R_PosInf, R_NegInf, R_Nan;
extern dictType hashDictType;
extern dictType replScriptCacheDictType;
extern dictType keyptrDictType;
extern dictType modulesDictType;






void moduleInitModulesSystem(void);
int moduleLoad(const char *path, void **argv, int argc);
void moduleLoadFromQueue(void);
int *moduleGetCommandKeysViaAPI(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);
moduleType *moduleTypeLookupModuleByID(uint64_t id);
void moduleTypeNameByID(char *name, uint64_t moduleid);


long long ustime(void);
long long mstime(void);
void getRandomHexChars(char *p, unsigned int len);
uint64_t crc64(uint64_t crc, const unsigned char *s, uint64_t l);
void exitFromChild(int retcode);
size_t redisPopcount(void *s, long count);
void redisSetProcTitle(char *title);


client *createClient(int fd);
void closeTimedoutClients(void);
void freeClient(client *c);
void freeClientAsync(client *c);
void resetClient(client *c);
void sendReplyToClient(aeEventLoop *el, int fd, void *privdata, int mask);
void *addDeferredMultiBulkLength(client *c);
void setDeferredMultiBulkLength(client *c, void *node, long length);
void processInputBuffer(client *c);
void acceptHandler(aeEventLoop *el, int fd, void *privdata, int mask);
void acceptTcpHandler(aeEventLoop *el, int fd, void *privdata, int mask);
void acceptUnixHandler(aeEventLoop *el, int fd, void *privdata, int mask);
void readQueryFromClient(aeEventLoop *el, int fd, void *privdata, int mask);
void addReplyBulk(client *c, robj *obj);
void addReplyBulkCString(client *c, const char *s);
void addReplyBulkCBuffer(client *c, const void *p, size_t len);
void addReplyBulkLongLong(client *c, long long ll);
void addReply(client *c, robj *obj);
void addReplySds(client *c, sds s);
void addReplyBulkSds(client *c, sds s);
void addReplyError(client *c, const char *err);
void addReplyStatus(client *c, const char *status);
void addReplyDouble(client *c, double d);
void addReplyHumanLongDouble(client *c, long double d);
void addReplyLongLong(client *c, long long ll);
void addReplyMultiBulkLen(client *c, long length);
void copyClientOutputBuffer(client *dst, client *src);
void *dupClientReplyValue(void *o);
void getClientsMaxBuffers(unsigned long *longest_output_list,
                          unsigned long *biggest_input_buffer);
char *getClientPeerId(client *client);
sds catClientInfoString(sds s, client *client);
sds getAllClientsInfoString(void);
void rewriteClientCommandVector(client *c, int argc, ...);
void rewriteClientCommandArgument(client *c, int i, robj *newval);
void replaceClientCommandVector(client *c, int argc, robj **argv);
unsigned long getClientOutputBufferMemoryUsage(client *c);
void freeClientsInAsyncFreeQueue(void);
void asyncCloseClientOnOutputBufferLimitReached(client *c);
int getClientType(client *c);
int getClientTypeByName(char *name);
char *getClientTypeName(int class);
void flushSlavesOutputBuffers(void);
void disconnectSlaves(void);
int listenToPort(int port, int *fds, int *count);
void pauseClients(mstime_t duration);
int clientsArePaused(void);
int processEventsWhileBlocked(void);
int handleClientsWithPendingWrites(void);
int clientHasPendingReplies(client *c);
void unlinkClient(client *c);
int writeToClient(int fd, client *c, int handler_installed);


void addReplyErrorFormat(client *c, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));
void addReplyStatusFormat(client *c, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));






void listTypeTryConversion(robj *subject, robj *value);
void listTypePush(robj *subject, robj *value, int where);
robj *listTypePop(robj *subject, int where);
unsigned long listTypeLength(robj *subject);
listTypeIterator *listTypeInitIterator(robj *subject, long index, unsigned char direction);
void listTypeReleaseIterator(listTypeIterator *li);
int listTypeNext(listTypeIterator *li, listTypeEntry *entry);
robj *listTypeGet(listTypeEntry *entry);
void listTypeInsert(listTypeEntry *entry, robj *value, int where);
int listTypeEqual(listTypeEntry *entry, robj *o);
void listTypeDelete(listTypeIterator *iter, listTypeEntry *entry);
void listTypeConvert(robj *subject, int enc);
void unblockClientWaitingData(client *c);
void handleClientsBlockedOnLists(void);
void popGenericCommand(client *c, int where);
void signalListAsReady(redisDb *db, robj *key);


void unwatchAllKeys(client *c);
void initClientMultiState(client *c);
void freeClientMultiState(client *c);
void queueMultiCommand(client *c);
void touchWatchedKey(redisDb *db, robj *key);
void touchWatchedKeysOnFlush(int dbid);
void discardTransaction(client *c);
void flagTransaction(client *c);
void execCommandPropagateMulti(client *c);


void decrRefCount(robj *o);
void decrRefCountVoid(void *o);
void incrRefCount(robj *o);
robj *makeObjectShared(robj *o);
robj *resetRefCount(robj *obj);
void freeStringObject(robj *o);
void freeListObject(robj *o);
void freeSetObject(robj *o);
void freeZsetObject(robj *o);
void freeHashObject(robj *o);
robj *createObject(int type, void *ptr);
robj *createStringObject(const char *ptr, size_t len);
robj *createRawStringObject(const char *ptr, size_t len);
robj *createEmbeddedStringObject(const char *ptr, size_t len);
robj *dupStringObject(robj *o);
int isSdsRepresentableAsLongLong(sds s, long long *llval);
int isObjectRepresentableAsLongLong(robj *o, long long *llongval);
robj *tryObjectEncoding(robj *o);
robj *getDecodedObject(robj *o);
size_t stringObjectLen(robj *o);
robj *createStringObjectFromLongLong(long long value);
robj *createStringObjectFromLongDouble(long double value, int humanfriendly);
robj *createQuicklistObject(void);
robj *createZiplistObject(void);
robj *createSetObject(void);
robj *createIntsetObject(void);
robj *createHashObject(void);
robj *createZsetObject(void);
robj *createZsetZiplistObject(void);
robj *createModuleObject(moduleType *mt, void *value);
int getLongFromObjectOrReply(client *c, robj *o, long *target, const char *msg);
int checkType(client *c, robj *o, int type);
int getLongLongFromObjectOrReply(client *c, robj *o, long long *target, const char *msg);
int getDoubleFromObjectOrReply(client *c, robj *o, double *target, const char *msg);
int getDoubleFromObject(robj *o, double *target);
int getLongLongFromObject(robj *o, long long *target);
int getLongDoubleFromObject(robj *o, long double *target);
int getLongDoubleFromObjectOrReply(client *c, robj *o, long double *target, const char *msg);
char *strEncoding(int encoding);
int compareStringObjects(robj *a, robj *b);
int collateStringObjects(robj *a, robj *b);
int equalStringObjects(robj *a, robj *b);
unsigned long long estimateObjectIdleTime(robj *o);



ssize_t syncWrite(int fd, char *ptr, ssize_t size, long long timeout);
ssize_t syncRead(int fd, char *ptr, ssize_t size, long long timeout);
ssize_t syncReadLine(int fd, char *ptr, ssize_t size, long long timeout);


void replicationFeedSlaves(list *slaves, int dictid, robj **argv, int argc);
void replicationFeedMonitors(client *c, list *monitors, int dictid, robj **argv, int argc);
void updateSlavesWaitingBgsave(int bgsaveerr, int type);
void replicationCron(void);
void replicationHandleMasterDisconnection(void);
void replicationCacheMaster(client *c);
void resizeReplicationBacklog(long long newsize);
void replicationSetMaster(char *ip, int port);
void replicationUnsetMaster(void);
void refreshGoodSlavesCount(void);
void replicationScriptCacheInit(void);
void replicationScriptCacheFlush(void);
void replicationScriptCacheAdd(sds sha1);
int replicationScriptCacheExists(sds sha1);
void processClientsWaitingReplicas(void);
void unblockClientWaitingReplicas(client *c);
int replicationCountAcksByOffset(long long offset);
void replicationSendNewlineToMaster(void);
long long replicationGetSlaveOffset(void);
char *replicationGetSlaveName(client *c);
long long getPsyncInitialOffset(void);
int replicationSetupSlaveForFullResync(client *slave, long long offset);


void startLoading(FILE *fp);
void loadingProgress(off_t pos);
void stopLoading(void);


# 1 "rdb.h" 1
# 37 "rdb.h"
# 1 "server.h" 1
# 38 "rdb.h" 2
# 109 "rdb.h"
int rdbSaveType(rio *rdb, unsigned char type);
int rdbLoadType(rio *rdb);
int rdbSaveTime(rio *rdb, time_t t);
time_t rdbLoadTime(rio *rdb);
int rdbSaveLen(rio *rdb, uint64_t len);
uint64_t rdbLoadLen(rio *rdb, int *isencoded);
int rdbLoadLenByRef(rio *rdb, int *isencoded, uint64_t *lenptr);
int rdbSaveObjectType(rio *rdb, robj *o);
int rdbLoadObjectType(rio *rdb);
int rdbLoad(char *filename);
int rdbSaveBackground(char *filename);
int rdbSaveToSlavesSockets(void);
void rdbRemoveTempFile(pid_t childpid);
int rdbSave(char *filename);
ssize_t rdbSaveObject(rio *rdb, robj *o);
size_t rdbSavedObjectLen(robj *o);
robj *rdbLoadObject(int type, rio *rdb);
void backgroundSaveDoneHandler(int exitcode, int bysignal);
int rdbSaveKeyValuePair(rio *rdb, robj *key, robj *val, long long expiretime, long long now);
robj *rdbLoadStringObject(rio *rdb);
int rdbSaveStringObject(rio *rdb, robj *obj);
ssize_t rdbSaveRawString(rio *rdb, unsigned char *s, size_t len);
void *rdbGenericLoadStringObject(rio *rdb, int flags, size_t *lenptr);
int rdbSaveBinaryDoubleValue(rio *rdb, double val);
int rdbLoadBinaryDoubleValue(rio *rdb, double *val);
# 1355 "server.h" 2


void flushAppendOnlyFile(int force);
void feedAppendOnlyFile(struct redisCommand *cmd, int dictid, robj **argv, int argc);
void aofRemoveTempFile(pid_t childpid);
int rewriteAppendOnlyFileBackground(void);
int loadAppendOnlyFile(char *filename);
void stopAppendOnly(void);
int startAppendOnly(void);
void backgroundRewriteDoneHandler(int exitcode, int bysignal);
void aofRewriteBufferReset(void);
unsigned long aofRewriteBufferSize(void);
# 1386 "server.h"
typedef struct {
    double min, max;
    int minex, maxex;
} zrangespec;


typedef struct {
    sds min, max;
    int minex, maxex;
} zlexrangespec;

zskiplist *zslCreate(void);
void zslFree(zskiplist *zsl);
zskiplistNode *zslInsert(zskiplist *zsl, double score, sds ele);
unsigned char *zzlInsert(unsigned char *zl, sds ele, double score);
int zslDelete(zskiplist *zsl, double score, sds ele, zskiplistNode **node);
zskiplistNode *zslFirstInRange(zskiplist *zsl, zrangespec *range);
zskiplistNode *zslLastInRange(zskiplist *zsl, zrangespec *range);
double zzlGetScore(unsigned char *sptr);
void zzlNext(unsigned char *zl, unsigned char **eptr, unsigned char **sptr);
void zzlPrev(unsigned char *zl, unsigned char **eptr, unsigned char **sptr);
unsigned char *zzlFirstInRange(unsigned char *zl, zrangespec *range);
unsigned char *zzlLastInRange(unsigned char *zl, zrangespec *range);
unsigned int zsetLength(robj *zobj);
void zsetConvert(robj *zobj, int encoding);
void zsetConvertToZiplistIfNeeded(robj *zobj, size_t maxelelen);
int zsetScore(robj *zobj, sds member, double *score);
unsigned long zslGetRank(zskiplist *zsl, double score, sds o);
int zsetAdd(robj *zobj, double score, sds ele, int *flags, double *newscore);
long zsetRank(robj *zobj, sds ele, int reverse);
int zsetDel(robj *zobj, sds ele);
sds ziplistGetObject(unsigned char *sptr);
int zslValueGteMin(double value, zrangespec *spec);
int zslValueLteMax(double value, zrangespec *spec);
void zslFreeLexRange(zlexrangespec *spec);
int zslParseLexRange(robj *min, robj *max, zlexrangespec *spec);
unsigned char *zzlFirstInLexRange(unsigned char *zl, zlexrangespec *range);
unsigned char *zzlLastInLexRange(unsigned char *zl, zlexrangespec *range);
zskiplistNode *zslFirstInLexRange(zskiplist *zsl, zlexrangespec *range);
zskiplistNode *zslLastInLexRange(zskiplist *zsl, zlexrangespec *range);
int zzlLexValueGteMin(unsigned char *p, zlexrangespec *spec);
int zzlLexValueLteMax(unsigned char *p, zlexrangespec *spec);
int zslLexValueGteMin(sds value, zlexrangespec *spec);
int zslLexValueLteMax(sds value, zlexrangespec *spec);


int freeMemoryIfNeeded(void);
int processCommand(client *c);
void setupSignalHandlers(void);
struct redisCommand *lookupCommand(sds name);
struct redisCommand *lookupCommandByCString(char *s);
struct redisCommand *lookupCommandOrOriginal(sds name);
void call(client *c, int flags);
void propagate(struct redisCommand *cmd, int dbid, robj **argv, int argc, int flags);
void alsoPropagate(struct redisCommand *cmd, int dbid, robj **argv, int argc, int target);
void forceCommandPropagation(client *c, int flags);
void preventCommandPropagation(client *c);
void preventCommandAOF(client *c);
void preventCommandReplication(client *c);
int prepareForShutdown();

void serverLog(int level, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));



void serverLogRaw(int level, const char *msg);
void serverLogFromHandler(int level, const char *msg);
void usage(void);
void updateDictResizePolicy(void);
int htNeedsResize(dict *dict);
void populateCommandTable(void);
void resetCommandTableStats(void);
void adjustOpenFilesLimit(void);
void closeListeningSockets(int unlink_unix_socket);
void updateCachedTime(void);
void resetServerStats(void);
unsigned int getLRUClock(void);
const char *evictPolicyToString(void);




int restartServer(int flags, mstime_t delay);


robj *setTypeCreate(sds value);
int setTypeAdd(robj *subject, sds value);
int setTypeRemove(robj *subject, sds value);
int setTypeIsMember(robj *subject, sds value);
setTypeIterator *setTypeInitIterator(robj *subject);
void setTypeReleaseIterator(setTypeIterator *si);
int setTypeNext(setTypeIterator *si, sds *sdsele, int64_t *llele);
sds setTypeNextObject(setTypeIterator *si);
int setTypeRandomElement(robj *setobj, sds *sdsele, int64_t *llele);
unsigned long setTypeRandomElements(robj *set, unsigned long count, robj *aux_set);
unsigned long setTypeSize(robj *subject);
void setTypeConvert(robj *subject, int enc);






void hashTypeConvert(robj *o, int enc);
void hashTypeTryConversion(robj *subject, robj **argv, int start, int end);
void hashTypeTryObjectEncoding(robj *subject, robj **o1, robj **o2);
int hashTypeExists(robj *o, sds key);
int hashTypeDelete(robj *o, sds key);
unsigned long hashTypeLength(robj *o);
hashTypeIterator *hashTypeInitIterator(robj *subject);
void hashTypeReleaseIterator(hashTypeIterator *hi);
int hashTypeNext(hashTypeIterator *hi);
void hashTypeCurrentFromZiplist(hashTypeIterator *hi, int what,
                                unsigned char **vstr,
                                unsigned int *vlen,
                                long long *vll);
sds hashTypeCurrentFromHashTable(hashTypeIterator *hi, int what);
void hashTypeCurrentObject(hashTypeIterator *hi, int what, unsigned char **vstr, unsigned int *vlen, long long *vll);
sds hashTypeCurrentObjectNewSds(hashTypeIterator *hi, int what);
robj *hashTypeLookupWriteOrCreate(client *c, robj *key);
robj *hashTypeGetValueObject(robj *o, sds field);
int hashTypeSet(robj *o, sds field, sds value, int flags);


int pubsubUnsubscribeAllChannels(client *c, int notify);
int pubsubUnsubscribeAllPatterns(client *c, int notify);
void freePubsubPattern(void *p);
int listMatchPubsubPattern(void *a, void *b);
int pubsubPublishMessage(robj *channel, robj *message);


void notifyKeyspaceEvent(int type, char *event, robj *key, int dbid);
int keyspaceEventsStringToFlags(char *classes);
sds keyspaceEventsFlagsToString(int flags);


void loadServerConfig(char *filename, char *options);
void appendServerSaveParams(time_t seconds, int changes);
void resetServerSaveParams(void);
struct rewriteConfigState;
void rewriteConfigRewriteLine(struct rewriteConfigState *state, const char *option, sds line, int force);
int rewriteConfig(char *path);


int removeExpire(redisDb *db, robj *key);
void propagateExpire(redisDb *db, robj *key, int lazy);
int expireIfNeeded(redisDb *db, robj *key);
long long getExpire(redisDb *db, robj *key);
void setExpire(redisDb *db, robj *key, long long when);
robj *lookupKey(redisDb *db, robj *key, int flags);
robj *lookupKeyRead(redisDb *db, robj *key);
robj *lookupKeyWrite(redisDb *db, robj *key);
robj *lookupKeyReadOrReply(client *c, robj *key, robj *reply);
robj *lookupKeyWriteOrReply(client *c, robj *key, robj *reply);
robj *lookupKeyReadWithFlags(redisDb *db, robj *key, int flags);


void dbAdd(redisDb *db, robj *key, robj *val);
void dbOverwrite(redisDb *db, robj *key, robj *val);
void setKey(redisDb *db, robj *key, robj *val);
int dbExists(redisDb *db, robj *key);
robj *dbRandomKey(redisDb *db);
int dbSyncDelete(redisDb *db, robj *key);
int dbDelete(redisDb *db, robj *key);
robj *dbUnshareStringValue(redisDb *db, robj *key, robj *o);



long long emptyDb(int dbnum, int flags, void(callback)(void*));

int selectDb(client *c, int id);
void signalModifiedKey(redisDb *db, robj *key);
void signalFlushedDb(int dbid);
unsigned int getKeysInSlot(unsigned int hashslot, robj **keys, unsigned int count);
unsigned int countKeysInSlot(unsigned int hashslot);
unsigned int delKeysInSlot(unsigned int hashslot);
int verifyClusterConfigWithData(void);
void scanGenericCommand(client *c, robj *o, unsigned long cursor);
int parseScanCursorOrReply(client *c, robj *o, unsigned long *cursor);
void slotToKeyAdd(robj *key);
void slotToKeyDel(robj *key);
void slotToKeyFlush(void);
int dbAsyncDelete(redisDb *db, robj *key);
void emptyDbAsync(redisDb *db);
void slotToKeyFlushAsync(void);
size_t lazyfreeGetPendingObjectsCount(void);


int *getKeysFromCommand(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);
void getKeysFreeResult(int *result);
int *zunionInterGetKeys(struct redisCommand *cmd,robj **argv, int argc, int *numkeys);
int *evalGetKeys(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);
int *sortGetKeys(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);
int *migrateGetKeys(struct redisCommand *cmd, robj **argv, int argc, int *numkeys);


void clusterInit(void);
unsigned short crc16(const char *buf, int len);
unsigned int keyHashSlot(char *key, int keylen);
void clusterCron(void);
void clusterPropagatePublish(robj *channel, robj *message);
void migrateCloseTimedoutSockets(void);
void clusterBeforeSleep(void);


void initSentinelConfig(void);
void initSentinel(void);
void sentinelTimer(void);
char *sentinelHandleConfiguration(char **argv, int argc);
void sentinelIsRunning(void);


int redis_check_rdb(char *rdbfilename);
int redis_check_rdb_main(char **argv, int argc);


void scriptingInit(int setup);
int ldbRemoveChild(pid_t pid);
void ldbKillForkedSessions(void);
int ldbPendingChildren(void);


void processUnblockedClients(void);
void blockClient(client *c, int btype);
void unblockClient(client *c);
void replyToBlockedClientTimedOut(client *c);
int getTimeoutFromObjectOrReply(client *c, robj *object, mstime_t *timeout, int unit);
void disconnectAllBlockedClients(void);


char *redisGitSHA1(void);
char *redisGitDirty(void);
uint64_t redisBuildId(void);


void authCommand(client *c);
void pingCommand(client *c);
void echoCommand(client *c);
void commandCommand(client *c);
void setCommand(client *c);
void setnxCommand(client *c);
void setexCommand(client *c);
void psetexCommand(client *c);
void getCommand(client *c);
void delCommand(client *c);
void unlinkCommand(client *c);
void existsCommand(client *c);
void setbitCommand(client *c);
void getbitCommand(client *c);
void bitfieldCommand(client *c);
void setrangeCommand(client *c);
void getrangeCommand(client *c);
void incrCommand(client *c);
void decrCommand(client *c);
void incrbyCommand(client *c);
void decrbyCommand(client *c);
void incrbyfloatCommand(client *c);
void selectCommand(client *c);
void randomkeyCommand(client *c);
void keysCommand(client *c);
void scanCommand(client *c);
void dbsizeCommand(client *c);
void lastsaveCommand(client *c);
void saveCommand(client *c);
void bgsaveCommand(client *c);
void bgrewriteaofCommand(client *c);
void shutdownCommand(client *c);
void moveCommand(client *c);
void renameCommand(client *c);
void renamenxCommand(client *c);
void lpushCommand(client *c);
void rpushCommand(client *c);
void lpushxCommand(client *c);
void rpushxCommand(client *c);
void linsertCommand(client *c);
void lpopCommand(client *c);
void rpopCommand(client *c);
void llenCommand(client *c);
void lindexCommand(client *c);
void lrangeCommand(client *c);
void ltrimCommand(client *c);
void typeCommand(client *c);
void lsetCommand(client *c);
void saddCommand(client *c);
void sremCommand(client *c);
void smoveCommand(client *c);
void sismemberCommand(client *c);
void scardCommand(client *c);
void spopCommand(client *c);
void srandmemberCommand(client *c);
void sinterCommand(client *c);
void sinterstoreCommand(client *c);
void sunionCommand(client *c);
void sunionstoreCommand(client *c);
void sdiffCommand(client *c);
void sdiffstoreCommand(client *c);
void sscanCommand(client *c);
void syncCommand(client *c);
void flushdbCommand(client *c);
void flushallCommand(client *c);
void sortCommand(client *c);
void lremCommand(client *c);
void rpoplpushCommand(client *c);
void infoCommand(client *c);
void mgetCommand(client *c);
void monitorCommand(client *c);
void expireCommand(client *c);
void expireatCommand(client *c);
void pexpireCommand(client *c);
void pexpireatCommand(client *c);
void getsetCommand(client *c);
void ttlCommand(client *c);
void touchCommand(client *c);
void pttlCommand(client *c);
void persistCommand(client *c);
void slaveofCommand(client *c);
void roleCommand(client *c);
void debugCommand(client *c);
void msetCommand(client *c);
void msetnxCommand(client *c);
void zaddCommand(client *c);
void zincrbyCommand(client *c);
void zrangeCommand(client *c);
void zrangebyscoreCommand(client *c);
void zrevrangebyscoreCommand(client *c);
void zrangebylexCommand(client *c);
void zrevrangebylexCommand(client *c);
void zcountCommand(client *c);
void zlexcountCommand(client *c);
void zrevrangeCommand(client *c);
void zcardCommand(client *c);
void zremCommand(client *c);
void zscoreCommand(client *c);
void zremrangebyscoreCommand(client *c);
void zremrangebylexCommand(client *c);
void multiCommand(client *c);
void execCommand(client *c);
void discardCommand(client *c);
void blpopCommand(client *c);
void brpopCommand(client *c);
void brpoplpushCommand(client *c);
void appendCommand(client *c);
void strlenCommand(client *c);
void zrankCommand(client *c);
void zrevrankCommand(client *c);
void hsetCommand(client *c);
void hsetnxCommand(client *c);
void hgetCommand(client *c);
void hmsetCommand(client *c);
void hmgetCommand(client *c);
void hdelCommand(client *c);
void hlenCommand(client *c);
void hstrlenCommand(client *c);
void zremrangebyrankCommand(client *c);
void zunionstoreCommand(client *c);
void zinterstoreCommand(client *c);
void zscanCommand(client *c);
void hkeysCommand(client *c);
void hvalsCommand(client *c);
void hgetallCommand(client *c);
void hexistsCommand(client *c);
void hscanCommand(client *c);
void configCommand(client *c);
void hincrbyCommand(client *c);
void hincrbyfloatCommand(client *c);
void subscribeCommand(client *c);
void unsubscribeCommand(client *c);
void psubscribeCommand(client *c);
void punsubscribeCommand(client *c);
void publishCommand(client *c);
void pubsubCommand(client *c);
void watchCommand(client *c);
void unwatchCommand(client *c);
void clusterCommand(client *c);
void restoreCommand(client *c);
void migrateCommand(client *c);
void askingCommand(client *c);
void readonlyCommand(client *c);
void readwriteCommand(client *c);
void dumpCommand(client *c);
void objectCommand(client *c);
void clientCommand(client *c);
void evalCommand(client *c);
void evalShaCommand(client *c);
void scriptCommand(client *c);
void timeCommand(client *c);
void bitopCommand(client *c);
void bitcountCommand(client *c);
void bitposCommand(client *c);
void replconfCommand(client *c);
void waitCommand(client *c);
void geoencodeCommand(client *c);
void geodecodeCommand(client *c);
void georadiusByMemberCommand(client *c);
void georadiusCommand(client *c);
void geoaddCommand(client *c);
void geohashCommand(client *c);
void geoposCommand(client *c);
void geodistCommand(client *c);
void pfselftestCommand(client *c);
void pfaddCommand(client *c);
void pfcountCommand(client *c);
void pfmergeCommand(client *c);
void pfdebugCommand(client *c);
void latencyCommand(client *c);
void moduleCommand(client *c);


void *calloc(size_t count, size_t size) __attribute__ ((deprecated));
void free(void *ptr) __attribute__ ((deprecated));
void *malloc(size_t size) __attribute__ ((deprecated));
void *realloc(void *ptr, size_t size) __attribute__ ((deprecated));



void _serverAssertWithInfo(client *c, robj *o, char *estr, char *file, int line);
void _serverAssert(char *estr, char *file, int line);
void _serverPanic(char *msg, char *file, int line);
void bugReportStart(void);
void serverLogObjectDebugInfo(robj *o);
void sigsegvHandler(int sig, siginfo_t *info, void *secret);
sds genRedisInfoString(char *section);
void enableWatchdog(int period);
void disableWatchdog(void);
void watchdogScheduleSignal(int period);
void serverLogHexDump(int level, char *descr, void *value, size_t len);
int memtest_preserving_test(unsigned long *m, size_t bytes, int passes);
# 2 "module.c" 2
# 1 "cluster.h" 1
# 37 "cluster.h"
struct clusterNode;


typedef struct clusterLink {
    mstime_t ctime;
    int fd;
    sds sndbuf;
    sds rcvbuf;
    struct clusterNode *node;
} clusterLink;
# 77 "cluster.h"
typedef struct clusterNodeFailReport {
    struct clusterNode *node;
    mstime_t time;
} clusterNodeFailReport;

typedef struct clusterNode {
    mstime_t ctime;
    char name[40];
    int flags;
    uint64_t configEpoch;
    unsigned char slots[16384/8];
    int numslots;
    int numslaves;
    struct clusterNode **slaves;
    struct clusterNode *slaveof;



    mstime_t ping_sent;
    mstime_t pong_received;
    mstime_t fail_time;
    mstime_t voted_time;
    mstime_t repl_offset_time;
    mstime_t orphaned_time;
    long long repl_offset;
    char ip[46];
    int port;
    int cport;
    clusterLink *link;
    list *fail_reports;
} clusterNode;

typedef struct clusterState {
    clusterNode *myself;
    uint64_t currentEpoch;
    int state;
    int size;
    dict *nodes;
    dict *nodes_black_list;
    clusterNode *migrating_slots_to[16384];
    clusterNode *importing_slots_from[16384];
    clusterNode *slots[16384];
    zskiplist *slots_to_keys;

    mstime_t failover_auth_time;
    int failover_auth_count;
    int failover_auth_sent;
    int failover_auth_rank;
    uint64_t failover_auth_epoch;
    int cant_failover_reason;


    mstime_t mf_end;


    clusterNode *mf_slave;

    long long mf_master_offset;

    int mf_can_start;


    uint64_t lastVoteEpoch;
    int todo_before_sleep;
    long long stats_bus_messages_sent;
    long long stats_bus_messages_received;
} clusterState;
# 170 "cluster.h"
typedef struct {
    char nodename[40];
    uint32_t ping_sent;
    uint32_t pong_received;
    char ip[46];
    uint16_t port;
    uint16_t cport;
    uint16_t flags;
    uint32_t notused1;
} clusterMsgDataGossip;

typedef struct {
    char nodename[40];
} clusterMsgDataFail;

typedef struct {
    uint32_t channel_len;
    uint32_t message_len;



    unsigned char bulk_data[8];
} clusterMsgDataPublish;

typedef struct {
    uint64_t configEpoch;
    char nodename[40];
    unsigned char slots[16384/8];
} clusterMsgDataUpdate;

union clusterMsgData {

    struct {

        clusterMsgDataGossip gossip[1];
    } ping;


    struct {
        clusterMsgDataFail about;
    } fail;


    struct {
        clusterMsgDataPublish msg;
    } publish;


    struct {
        clusterMsgDataUpdate nodecfg;
    } update;
};



typedef struct {
    char sig[4];
    uint32_t totlen;
    uint16_t ver;
    uint16_t port;
    uint16_t type;
    uint16_t count;
    uint64_t currentEpoch;
    uint64_t configEpoch;


    uint64_t offset;

    char sender[40];
    unsigned char myslots[16384/8];
    char slaveof[40];
    char myip[46];
    char notused1[34];
    uint16_t cport;
    uint16_t flags;
    unsigned char state;
    unsigned char mflags[3];
    union clusterMsgData data;
} clusterMsg;
# 259 "cluster.h"
clusterNode *getNodeByQuery(client *c, struct redisCommand *cmd, robj **argv, int argc, int *hashslot, int *ask);
int clusterRedirectBlockedClientIfNeeded(client *c);
void clusterRedirectClient(client *c, clusterNode *n, int hashslot, int error_code);
# 3 "module.c" 2
# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ , __leaf__));


# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 4 "module.c" 2


# 1 "redismodule.h" 1
# 7 "module.c" 2
# 15 "module.c"
struct RedisModule {
    void *handle;
    char *name;
    int ver;
    int apiver;
    list *types;
};
typedef struct RedisModule RedisModule;

static dict *modules;



struct AutoMemEntry {
    void *ptr;
    int type;
};
# 55 "module.c"
typedef struct RedisModulePoolAllocBlock {
    uint32_t size;
    uint32_t used;
    struct RedisModulePoolAllocBlock *next;
    char memory[];
} RedisModulePoolAllocBlock;
# 69 "module.c"
struct RedisModuleCtx {
    void *getapifuncptr;
    struct RedisModule *module;
    client *client;
    struct AutoMemEntry *amqueue;
    int amqueue_len;
    int amqueue_used;
    int flags;
    void **postponed_arrays;
    int postponed_arrays_count;


    int *keys_pos;
    int keys_count;

    struct RedisModulePoolAllocBlock *pa_head;
};
typedef struct RedisModuleCtx RedisModuleCtx;







struct RedisModuleKey {
    RedisModuleCtx *ctx;
    redisDb *db;
    robj *key;
    robj *value;
    void *iter;
    int mode;


    uint32_t ztype;
    zrangespec zrs;
    zlexrangespec zlrs;
    uint32_t zstart;
    uint32_t zend;
    void *zcurrent;
    int zer;

};
typedef struct RedisModuleKey RedisModuleKey;
# 122 "module.c"
typedef int (*RedisModuleCmdFunc) (RedisModuleCtx *ctx, void **argv, int argc);


struct RedisModuleCommandProxy {
    struct RedisModule *module;
    RedisModuleCmdFunc func;
    struct redisCommand *rediscmd;
};
typedef struct RedisModuleCommandProxy RedisModuleCommandProxy;
# 140 "module.c"
typedef struct RedisModuleCallReply {
    RedisModuleCtx *ctx;
    int type;
    int flags;
    size_t len;
    char *proto;
    size_t protolen;
    union {
        const char *str;



        long long ll;
        struct RedisModuleCallReply *array;
    } val;
} RedisModuleCallReply;





void RM_FreeCallReply(RedisModuleCallReply *reply);
void RM_CloseKey(RedisModuleKey *key);
void autoMemoryCollect(RedisModuleCtx *ctx);
robj **moduleCreateArgvFromUserFormat(const char *cmdname, const char *fmt, int *argcp, int *flags, va_list ap);
void moduleReplicateMultiIfNeeded(RedisModuleCtx *ctx);
void RM_ZsetRangeStop(RedisModuleKey *key);
# 176 "module.c"
void *RM_Alloc(size_t bytes) {
    return zmalloc(bytes);
}


void* RM_Realloc(void *ptr, size_t bytes) {
    return zrealloc(ptr,bytes);
}




void RM_Free(void *ptr) {
    zfree(ptr);
}


char *RM_Strdup(const char *str) {
    return zstrdup(str);
}






void poolAllocRelease(RedisModuleCtx *ctx) {
    RedisModulePoolAllocBlock *head = ctx->pa_head, *next;

    while(head != ((void *)0)) {
        next = head->next;
        zfree(head);
        head = next;
    }
    ctx->pa_head = ((void *)0);
}
# 225 "module.c"
void *RM_PoolAlloc(RedisModuleCtx *ctx, size_t bytes) {
    if (bytes == 0) return ((void *)0);
    RedisModulePoolAllocBlock *b = ctx->pa_head;
    size_t left = b ? b->size - b->used : 0;


    if (left >= bytes) {
        size_t alignment = (sizeof(void*));
        while (bytes < alignment && alignment/2 >= bytes) alignment /= 2;
        if (b->used % alignment)
            b->used += alignment - (b->used % alignment);
        left = (b->used > b->size) ? 0 : b->size - b->used;
    }


    if (left < bytes) {
        size_t blocksize = (1024*8);
        if (blocksize < bytes) blocksize = bytes;
        b = zmalloc(sizeof(*b) + blocksize);
        b->size = blocksize;
        b->used = 0;
        b->next = ctx->pa_head;
        ctx->pa_head = b;
    }

    char *retval = b->memory + b->used;
    b->used += bytes;
    return retval;
}
# 271 "module.c"
int moduleCreateEmptyKey(RedisModuleKey *key, int type) {
    robj *obj;


    if (!(key->mode & (1<<1)) || key->value)
        return 1;

    switch(type) {
    case 2:
        obj = createQuicklistObject();
        quicklistSetOptions(obj->ptr, server.list_max_ziplist_size,
                            server.list_compress_depth);
        break;
    case 5:
        obj = createZsetZiplistObject();
        break;
    case 3:
        obj = createHashObject();
        break;
    default: return 1;
    }
    dbAdd(key->db,key->key,obj);
    key->value = obj;
    return 0;
}
# 307 "module.c"
int moduleDelKeyIfEmpty(RedisModuleKey *key) {
    if (!(key->mode & (1<<1)) || key->value == ((void *)0)) return 0;
    int isempty;
    robj *o = key->value;

    switch(o->type) {
    case 1: isempty = listTypeLength(o) == 0; break;
    case 2: isempty = setTypeSize(o) == 0; break;
    case 3: isempty = zsetLength(o) == 0; break;
    case 4 : isempty = hashTypeLength(o) == 0; break;
    default: isempty = 0;
    }

    if (isempty) {
        dbDelete(key->db,key->key);
        key->value = ((void *)0);
        return 1;
    } else {
        return 0;
    }
}
# 345 "module.c"
int RM_GetApi(const char *funcname, void **targetPtrPtr) {
    dictEntry *he = dictFind(server.moduleapi, funcname);
    if (!he) return 1;
    *targetPtrPtr = ((he)->v.val);
    return 0;
}


void moduleFreeContext(RedisModuleCtx *ctx) {
    autoMemoryCollect(ctx);
    poolAllocRelease(ctx);
    if (ctx->postponed_arrays) {
        zfree(ctx->postponed_arrays);
        ctx->postponed_arrays_count = 0;
        serverLog(3,
            "API misuse detected in module %s: "
            "RedisModule_ReplyWithArray(REDISMODULE_POSTPONED_ARRAY_LEN) "
            "not matched by the same number of RedisModule_SetReplyArrayLen() "
            "calls.",
            ctx->module->name);
    }
}



void RedisModuleCommandDispatcher(client *c) {
    RedisModuleCommandProxy *cp = (void*)(unsigned long)c->cmd->getkeys_proc;
    RedisModuleCtx ctx = {(void*)(unsigned long)&RM_GetApi, ((void *)0), ((void *)0), ((void *)0), 0, 0, 0, ((void *)0), 0, ((void *)0), 0, ((void *)0)};

    ctx.module = cp->module;
    ctx.client = c;
    cp->func(&ctx,(void**)c->argv,c->argc);
    preventCommandPropagation(c);



    if (ctx.flags & (1<<0)) {
        robj *propargv[1];
        propargv[0] = createStringObject("EXEC",4);
        alsoPropagate(server.execCommand,c->db->id,propargv,1,
            1|2);
        decrRefCount(propargv[0]);
    }
    moduleFreeContext(&ctx);
}
# 400 "module.c"
int *moduleGetCommandKeysViaAPI(struct redisCommand *cmd, robj **argv, int argc, int *numkeys) {
    RedisModuleCommandProxy *cp = (void*)(unsigned long)cmd->getkeys_proc;
    RedisModuleCtx ctx = {(void*)(unsigned long)&RM_GetApi, ((void *)0), ((void *)0), ((void *)0), 0, 0, 0, ((void *)0), 0, ((void *)0), 0, ((void *)0)};

    ctx.module = cp->module;
    ctx.client = ((void *)0);
    ctx.flags |= (1<<2);
    cp->func(&ctx,(void**)argv,argc);
    int *res = ctx.keys_pos;
    if (numkeys) *numkeys = ctx.keys_count;
    moduleFreeContext(&ctx);
    return res;
}




int RM_IsKeysPositionRequest(RedisModuleCtx *ctx) {
    return (ctx->flags & (1<<2)) != 0;
}
# 435 "module.c"
void RM_KeyAtPos(RedisModuleCtx *ctx, int pos) {
    if (!(ctx->flags & (1<<2))) return;
    if (pos <= 0) return;
    ctx->keys_pos = zrealloc(ctx->keys_pos,sizeof(int)*(ctx->keys_count+1));
    ctx->keys_pos[ctx->keys_count++] = pos;
}





int commandFlagsFromString(char *s) {
    int count, j;
    int flags = 0;
    sds *tokens = sdssplitlen(s,strlen(s)," ",1,&count);
    for (j = 0; j < count; j++) {
        char *t = tokens[j];
        if (!strcasecmp(t,"write")) flags |= (1<<0);
        else if (!strcasecmp(t,"readonly")) flags |= (1<<1);
        else if (!strcasecmp(t,"admin")) flags |= (1<<4);
        else if (!strcasecmp(t,"deny-oom")) flags |= (1<<2);
        else if (!strcasecmp(t,"deny-script")) flags |= (1<<6);
        else if (!strcasecmp(t,"allow-loading")) flags |= (1<<9);
        else if (!strcasecmp(t,"pubsub")) flags |= (1<<5);
        else if (!strcasecmp(t,"random")) flags |= (1<<7);
        else if (!strcasecmp(t,"allow-stale")) flags |= (1<<10);
        else if (!strcasecmp(t,"no-monitor")) flags |= (1<<11);
        else if (!strcasecmp(t,"fast")) flags |= (1<<13);
        else if (!strcasecmp(t,"getkeys-api")) flags |= (1<<14);
        else if (!strcasecmp(t,"no-cluster")) flags |= (1<<15);
        else break;
    }
    sdsfreesplitres(tokens,count);
    if (j != count) return -1;
    return flags;
}
# 525 "module.c"
int RM_CreateCommand(RedisModuleCtx *ctx, const char *name, RedisModuleCmdFunc cmdfunc, const char *strflags, int firstkey, int lastkey, int keystep) {
    int flags = strflags ? commandFlagsFromString((char*)strflags) : 0;
    if (flags == -1) return 1;
    if ((flags & (1<<15)) && server.cluster_enabled)
        return 1;

    struct redisCommand *rediscmd;
    RedisModuleCommandProxy *cp;
    sds cmdname = sdsnew(name);


    if (lookupCommand((char*)name) != ((void *)0)) {
        sdsfree(cmdname);
        return 1;
    }
# 548 "module.c"
    cp = zmalloc(sizeof(*cp));
    cp->module = ctx->module;
    cp->func = cmdfunc;
    cp->rediscmd = zmalloc(sizeof(*rediscmd));
    cp->rediscmd->name = cmdname;
    cp->rediscmd->proc = RedisModuleCommandDispatcher;
    cp->rediscmd->arity = -1;
    cp->rediscmd->flags = flags | (1<<3);
    cp->rediscmd->getkeys_proc = (redisGetKeysProc*)(unsigned long)cp;
    cp->rediscmd->firstkey = firstkey;
    cp->rediscmd->lastkey = lastkey;
    cp->rediscmd->keystep = keystep;
    cp->rediscmd->microseconds = 0;
    cp->rediscmd->calls = 0;
    dictAdd(server.commands,sdsdup(cmdname),cp->rediscmd);
    dictAdd(server.orig_commands,sdsdup(cmdname),cp->rediscmd);
    return 0;
}





void RM_SetModuleAttribs(RedisModuleCtx *ctx, const char *name, int ver, int apiver){
    RedisModule *module;

    if (ctx->module != ((void *)0)) return;
    module = zmalloc(sizeof(*module));
    module->name = sdsnew((char*)name);
    module->ver = ver;
    module->apiver = apiver;
    module->types = listCreate();
    ctx->module = module;
}
# 591 "module.c"
void RM_AutoMemory(RedisModuleCtx *ctx) {
    ctx->flags |= (1<<1);
}


void autoMemoryAdd(RedisModuleCtx *ctx, int type, void *ptr) {
    if (!(ctx->flags & (1<<1))) return;
    if (ctx->amqueue_used == ctx->amqueue_len) {
        ctx->amqueue_len *= 2;
        if (ctx->amqueue_len < 16) ctx->amqueue_len = 16;
        ctx->amqueue = zrealloc(ctx->amqueue,sizeof(struct AutoMemEntry)*ctx->amqueue_len);
    }
    ctx->amqueue[ctx->amqueue_used].type = type;
    ctx->amqueue[ctx->amqueue_used].ptr = ptr;
    ctx->amqueue_used++;
}



void autoMemoryFreed(RedisModuleCtx *ctx, int type, void *ptr) {
    if (!(ctx->flags & (1<<1))) return;

    int j;
    for (j = ctx->amqueue_used - 1; j >= 0; j--) {
        if (ctx->amqueue[j].type == type &&
            ctx->amqueue[j].ptr == ptr)
        {
            ctx->amqueue[j].type = 3;



            if (j != ctx->amqueue_used-1) {
                ctx->amqueue[j] = ctx->amqueue[ctx->amqueue_used-1];
            }


            ctx->amqueue_used--;

            break;
        }
    }
}


void autoMemoryCollect(RedisModuleCtx *ctx) {
    if (!(ctx->flags & (1<<1))) return;



    ctx->flags &= ~(1<<1);
    int j;
    for (j = 0; j < ctx->amqueue_used; j++) {
        void *ptr = ctx->amqueue[j].ptr;
        switch(ctx->amqueue[j].type) {
        case 1: decrRefCount(ptr); break;
        case 2: RM_FreeCallReply(ptr); break;
        case 0: RM_CloseKey(ptr); break;
        }
    }
    ctx->flags |= (1<<1);
    zfree(ctx->amqueue);
    ctx->amqueue = ((void *)0);
    ctx->amqueue_len = 0;
    ctx->amqueue_used = 0;
}
# 666 "module.c"
robj *RM_CreateString(RedisModuleCtx *ctx, const char *ptr, size_t len)
{
    robj *o = createStringObject(ptr,len);
    autoMemoryAdd(ctx,1,o);
    return o;
}






robj *RM_CreateStringFromLongLong(RedisModuleCtx *ctx, long long ll) {
    char buf[21];
    size_t len = ll2string(buf,sizeof(buf),ll);
    return RM_CreateString(ctx,buf,len);
}







void RM_FreeString(RedisModuleCtx *ctx, robj *str) {
    decrRefCount(str);
    autoMemoryFreed(ctx,1,str);
}




const char *RM_StringPtrLen(robj *str, size_t *len) {
    if (len) *len = sdslen(str->ptr);
    return str->ptr;
}





int RM_StringToLongLong(robj *str, long long *ll) {
    return string2ll(str->ptr,sdslen(str->ptr),ll) ? 0 :
                                                     1;
}




int RM_StringToDouble(robj *str, double *d) {
    int retval = getDoubleFromObject(str,d);
    return (retval == 0) ? 0 : 1;
}
# 737 "module.c"
int RM_WrongArity(RedisModuleCtx *ctx) {
    addReplyErrorFormat(ctx->client,
        "wrong number of arguments for '%s' command",
        (char*)ctx->client->argv[0]->ptr);
    return 0;
}



int RM_ReplyWithLongLong(RedisModuleCtx *ctx, long long ll) {
    addReplyLongLong(ctx->client,ll);
    return 0;
}




int replyWithStatus(RedisModuleCtx *ctx, const char *msg, char *prefix) {
    sds strmsg = sdsnewlen(prefix,1);
    strmsg = sdscat(strmsg,msg);
    strmsg = sdscatlen(strmsg,"\r\n",2);
    addReplySds(ctx->client,strmsg);
    return 0;
}
# 776 "module.c"
int RM_ReplyWithError(RedisModuleCtx *ctx, const char *err) {
    return replyWithStatus(ctx,err,"-");
}






int RM_ReplyWithSimpleString(RedisModuleCtx *ctx, const char *msg) {
    return replyWithStatus(ctx,msg,"+");
}
# 800 "module.c"
int RM_ReplyWithArray(RedisModuleCtx *ctx, long len) {
    if (len == -1) {
        ctx->postponed_arrays = zrealloc(ctx->postponed_arrays,sizeof(void*)*
                (ctx->postponed_arrays_count+1));
        ctx->postponed_arrays[ctx->postponed_arrays_count] =
            addDeferredMultiBulkLength(ctx->client);
        ctx->postponed_arrays_count++;
    } else {
        addReplyMultiBulkLen(ctx->client,len);
    }
    return 0;
}
# 839 "module.c"
void RM_ReplySetArrayLength(RedisModuleCtx *ctx, long len) {
    if (ctx->postponed_arrays_count == 0) {
        serverLog(3,
            "API misuse detected in module %s: "
            "RedisModule_ReplySetArrayLength() called without previous "
            "RedisModule_ReplyWithArray(ctx,REDISMODULE_POSTPONED_ARRAY_LEN) "
            "call.", ctx->module->name);
            return;
    }
    ctx->postponed_arrays_count--;
    setDeferredMultiBulkLength(ctx->client,
            ctx->postponed_arrays[ctx->postponed_arrays_count],
            len);
    if (ctx->postponed_arrays_count == 0) {
        zfree(ctx->postponed_arrays);
        ctx->postponed_arrays = ((void *)0);
    }
}




int RM_ReplyWithStringBuffer(RedisModuleCtx *ctx, const char *buf, size_t len) {
    addReplyBulkCBuffer(ctx->client,(char*)buf,len);
    return 0;
}




int RM_ReplyWithString(RedisModuleCtx *ctx, robj *str) {
    addReplyBulk(ctx->client,str);
    return 0;
}





int RM_ReplyWithNull(RedisModuleCtx *ctx) {
    addReply(ctx->client,shared.nullbulk);
    return 0;
}







int RM_ReplyWithCallReply(RedisModuleCtx *ctx, RedisModuleCallReply *reply) {
    sds proto = sdsnewlen(reply->proto, reply->protolen);
    addReplySds(ctx->client,proto);
    return 0;
}







int RM_ReplyWithDouble(RedisModuleCtx *ctx, double d) {
    addReplyDouble(ctx->client,d);
    return 0;
}
# 913 "module.c"
void moduleReplicateMultiIfNeeded(RedisModuleCtx *ctx) {
    if (ctx->flags & (1<<0)) return;
    execCommandPropagateMulti(ctx->client);
    ctx->flags |= (1<<0);
}
# 938 "module.c"
int RM_Replicate(RedisModuleCtx *ctx, const char *cmdname, const char *fmt, ...) {
    struct redisCommand *cmd;
    robj **argv = ((void *)0);
    int argc = 0, flags = 0, j;
    va_list ap;

    cmd = lookupCommandByCString((char*)cmdname);
    if (!cmd) return 1;


    __builtin_va_start(ap,fmt);
    argv = moduleCreateArgvFromUserFormat(cmdname,fmt,&argc,&flags,ap);
    __builtin_va_end(ap);
    if (argv == ((void *)0)) return 1;


    moduleReplicateMultiIfNeeded(ctx);
    alsoPropagate(cmd,ctx->client->db->id,argv,argc,
        1|2);


    for (j = 0; j < argc; j++) decrRefCount(argv[j]);
    zfree(argv);
    return 0;
}
# 975 "module.c"
int RM_ReplicateVerbatim(RedisModuleCtx *ctx) {
    alsoPropagate(ctx->client->cmd,ctx->client->db->id,
        ctx->client->argv,ctx->client->argc,
        1|2);
    return 0;
}
# 997 "module.c"
unsigned long long RM_GetClientId(RedisModuleCtx *ctx) {
    if (ctx->client == ((void *)0)) return 0;
    return ctx->client->id;
}


int RM_GetSelectedDb(RedisModuleCtx *ctx) {
    return ctx->client->db->id;
}
# 1017 "module.c"
int RM_SelectDb(RedisModuleCtx *ctx, int newid) {
    int retval = selectDb(ctx->client,newid);
    return (retval == 0) ? 0 : 1;
}
# 1036 "module.c"
void *RM_OpenKey(RedisModuleCtx *ctx, robj *keyname, int mode) {
    RedisModuleKey *kp;
    robj *value;

    if (mode & (1<<1)) {
        value = lookupKeyWrite(ctx->client->db,keyname);
    } else {
        value = lookupKeyRead(ctx->client->db,keyname);
        if (value == ((void *)0)) {
            return ((void *)0);
        }
    }


    kp = zmalloc(sizeof(*kp));
    kp->ctx = ctx;
    kp->db = ctx->client->db;
    kp->key = keyname;
    incrRefCount(keyname);
    kp->value = value;
    kp->iter = ((void *)0);
    kp->mode = mode;
    RM_ZsetRangeStop(kp);
    autoMemoryAdd(ctx,0,kp);
    return (void*)kp;
}


void RM_CloseKey(RedisModuleKey *key) {
    if (key == ((void *)0)) return;
    if (key->mode & (1<<1)) signalModifiedKey(key->db,key->key);

    RM_ZsetRangeStop(key);
    decrRefCount(key->key);
    autoMemoryFreed(key->ctx,0,key);
    zfree(key);
}



int RM_KeyType(RedisModuleKey *key) {
    if (key == ((void *)0) || key->value == ((void *)0)) return 0;


    switch(key->value->type) {
    case 0: return 1;
    case 1: return 2;
    case 2: return 4;
    case 3: return 5;
    case 4: return 3;
    case 5: return 6;
    default: return 0;
    }
}






size_t RM_ValueLength(RedisModuleKey *key) {
    if (key == ((void *)0) || key->value == ((void *)0)) return 0;
    switch(key->value->type) {
    case 0: return stringObjectLen(key->value);
    case 1: return listTypeLength(key->value);
    case 2: return setTypeSize(key->value);
    case 3: return zsetLength(key->value);
    case 4: return hashTypeLength(key->value);
    default: return 0;
    }
}





int RM_DeleteKey(RedisModuleKey *key) {
    if (!(key->mode & (1<<1))) return 1;
    if (key->value) {
        dbDelete(key->db,key->key);
        key->value = ((void *)0);
    }
    return 0;
}




mstime_t RM_GetExpire(RedisModuleKey *key) {
    mstime_t expire = getExpire(key->db,key->key);
    if (expire == -1 || key->value == ((void *)0)) return -1;
    expire -= mstime();
    return expire >= 0 ? expire : 0;
}
# 1140 "module.c"
int RM_SetExpire(RedisModuleKey *key, mstime_t expire) {
    if (!(key->mode & (1<<1)) || key->value == ((void *)0))
        return 1;
    if (expire != -1) {
        expire += mstime();
        setExpire(key->db,key->key,expire);
    } else {
        removeExpire(key->db,key->key);
    }
    return 0;
}
# 1160 "module.c"
int RM_StringSet(RedisModuleKey *key, robj *str) {
    if (!(key->mode & (1<<1)) || key->iter) return 1;
    RM_DeleteKey(key);
    setKey(key->db,key->key,str);
    key->value = str;
    return 0;
}
# 1197 "module.c"
char *RM_StringDMA(RedisModuleKey *key, size_t *len, int mode) {




    char *emptystring = "<dma-empty-string>";
    if (key->value == ((void *)0)) {
        *len = 0;
        return emptystring;
    }

    if (key->value->type != 0) return ((void *)0);



    if ((mode & (1<<1)) || key->value->encoding != 0)
        key->value = dbUnshareStringValue(key->db, key->key, key->value);

    *len = sdslen(key->value->ptr);
    return key->value->ptr;
}
# 1231 "module.c"
int RM_StringTruncate(RedisModuleKey *key, size_t newlen) {
    if (!(key->mode & (1<<1))) return 1;
    if (key->value && key->value->type != 0) return 1;
    if (newlen > 512*1024*1024) return 1;



    if (key->value == ((void *)0) && newlen == 0) return 0;

    if (key->value == ((void *)0)) {

        robj *o = createObject(0,sdsnewlen(((void *)0), newlen));
        setKey(key->db,key->key,o);
        key->value = o;
        decrRefCount(o);
    } else {

        key->value = dbUnshareStringValue(key->db, key->key, key->value);
        size_t curlen = sdslen(key->value->ptr);
        if (newlen > curlen) {
            key->value->ptr = sdsgrowzero(key->value->ptr,newlen);
        } else if (newlen < curlen) {
            sdsrange(key->value->ptr,0,newlen-1);

            if (sdslen(key->value->ptr) < sdsavail(key->value->ptr))
                key->value->ptr = sdsRemoveFreeSpace(key->value->ptr);
        }
    }
    return 0;
}
# 1270 "module.c"
int RM_ListPush(RedisModuleKey *key, int where, robj *ele) {
    if (!(key->mode & (1<<1))) return 1;
    if (key->value && key->value->type != 1) return 1;
    if (key->value == ((void *)0)) moduleCreateEmptyKey(key,2);
    listTypePush(key->value, ele,
        (where == 0) ? 0 : -1);
    return 0;
}
# 1286 "module.c"
robj *RM_ListPop(RedisModuleKey *key, int where) {
    if (!(key->mode & (1<<1)) ||
        key->value == ((void *)0) ||
        key->value->type != 1) return ((void *)0);
    robj *ele = listTypePop(key->value,
        (where == 0) ? 0 : -1);
    robj *decoded = getDecodedObject(ele);
    decrRefCount(ele);
    moduleDelKeyIfEmpty(key);
    autoMemoryAdd(key->ctx,1,decoded);
    return decoded;
}







int RM_ZsetAddFlagsToCoreFlags(int flags) {
    int retflags = 0;
    if (flags & (1<<0)) retflags |= (1<<2);
    if (flags & (1<<1)) retflags |= (1<<1);
    return retflags;
}


int RM_ZsetAddFlagsFromCoreFlags(int flags) {
    int retflags = 0;
    if (flags & (1<<5)) retflags |= (1<<2);
    if (flags & (1<<6)) retflags |= (1<<3);
    if (flags & (1<<3)) retflags |= (1<<4);
    return retflags;
}
# 1349 "module.c"
int RM_ZsetAdd(RedisModuleKey *key, double score, robj *ele, int *flagsptr) {
    int flags = 0;
    if (!(key->mode & (1<<1))) return 1;
    if (key->value && key->value->type != 3) return 1;
    if (key->value == ((void *)0)) moduleCreateEmptyKey(key,5);
    if (flagsptr) flags = RM_ZsetAddFlagsToCoreFlags(*flagsptr);
    if (zsetAdd(key->value,score,ele->ptr,&flags,((void *)0)) == 0) {
        if (flagsptr) *flagsptr = 0;
        return 1;
    }
    if (flagsptr) *flagsptr = RM_ZsetAddFlagsFromCoreFlags(flags);
    return 0;
}
# 1376 "module.c"
int RM_ZsetIncrby(RedisModuleKey *key, double score, robj *ele, int *flagsptr, double *newscore) {
    int flags = 0;
    if (!(key->mode & (1<<1))) return 1;
    if (key->value && key->value->type != 3) return 1;
    if (key->value == ((void *)0)) moduleCreateEmptyKey(key,5);
    if (flagsptr) flags = RM_ZsetAddFlagsToCoreFlags(*flagsptr);
    flags |= (1<<0);
    if (zsetAdd(key->value,score,ele->ptr,&flags,newscore) == 0) {
        if (flagsptr) *flagsptr = 0;
        return 1;
    }

    if (flagsptr && (*flagsptr & (1<<4))) {
        *flagsptr = 0;
        return 1;
    }
    if (flagsptr) *flagsptr = RM_ZsetAddFlagsFromCoreFlags(flags);
    return 0;
}
# 1414 "module.c"
int RM_ZsetRem(RedisModuleKey *key, robj *ele, int *deleted) {
    if (!(key->mode & (1<<1))) return 1;
    if (key->value && key->value->type != 3) return 1;
    if (key->value != ((void *)0) && zsetDel(key->value,ele->ptr)) {
        if (deleted) *deleted = 1;
    } else {
        if (deleted) *deleted = 0;
    }
    return 0;
}
# 1433 "module.c"
int RM_ZsetScore(RedisModuleKey *key, robj *ele, double *score) {
    if (key->value == ((void *)0)) return 1;
    if (key->value->type != 3) return 1;
    if (zsetScore(key->value,ele->ptr,score) == -1) return 1;
    return 0;
}






void RM_ZsetRangeStop(RedisModuleKey *key) {

    if (key->ztype == 1)
        zslFreeLexRange(&key->zlrs);



    key->ztype = 0;
    key->zcurrent = ((void *)0);
    key->zer = 1;
}


int RM_ZsetRangeEndReached(RedisModuleKey *key) {
    return key->zer;
}







int zsetInitScoreRange(RedisModuleKey *key, double min, double max, int minex, int maxex, int first) {
    if (!key->value || key->value->type != 3) return 1;

    RM_ZsetRangeStop(key);
    key->ztype = 2;
    key->zer = 0;



    zrangespec *zrs = &key->zrs;
    zrs->min = min;
    zrs->max = max;
    zrs->minex = minex;
    zrs->maxex = maxex;

    if (key->value->encoding == 5) {
        key->zcurrent = first ? zzlFirstInRange(key->value->ptr,zrs) :
                                zzlLastInRange(key->value->ptr,zrs);
    } else if (key->value->encoding == 7) {
        zset *zs = key->value->ptr;
        zskiplist *zsl = zs->zsl;
        key->zcurrent = first ? zslFirstInRange(zsl,zrs) :
                                zslLastInRange(zsl,zrs);
    } else {
        _serverPanic("\"Unsupported zset encoding\"","module.c",1492),_exit(1);
    }
    if (key->zcurrent == ((void *)0)) key->zer = 1;
    return 0;
}
# 1513 "module.c"
int RM_ZsetFirstInScoreRange(RedisModuleKey *key, double min, double max, int minex, int maxex) {
    return zsetInitScoreRange(key,min,max,minex,maxex,1);
}



int RM_ZsetLastInScoreRange(RedisModuleKey *key, double min, double max, int minex, int maxex) {
    return zsetInitScoreRange(key,min,max,minex,maxex,0);
}
# 1532 "module.c"
int zsetInitLexRange(RedisModuleKey *key, robj *min, robj *max, int first) {
    if (!key->value || key->value->type != 3) return 1;

    RM_ZsetRangeStop(key);
    key->zer = 0;



    zlexrangespec *zlrs = &key->zlrs;
    if (zslParseLexRange(min, max, zlrs) == -1) return 1;



    key->ztype = 1;

    if (key->value->encoding == 5) {
        key->zcurrent = first ? zzlFirstInLexRange(key->value->ptr,zlrs) :
                                zzlLastInLexRange(key->value->ptr,zlrs);
    } else if (key->value->encoding == 7) {
        zset *zs = key->value->ptr;
        zskiplist *zsl = zs->zsl;
        key->zcurrent = first ? zslFirstInLexRange(zsl,zlrs) :
                                zslLastInLexRange(zsl,zlrs);
    } else {
        _serverPanic("\"Unsupported zset encoding\"","module.c",1556),_exit(1);
    }
    if (key->zcurrent == ((void *)0)) key->zer = 1;

    return 0;
}
# 1575 "module.c"
int RM_ZsetFirstInLexRange(RedisModuleKey *key, robj *min, robj *max) {
    return zsetInitLexRange(key,min,max,1);
}



int RM_ZsetLastInLexRange(RedisModuleKey *key, robj *min, robj *max) {
    return zsetInitLexRange(key,min,max,0);
}




robj *RM_ZsetRangeCurrentElement(RedisModuleKey *key, double *score) {
    robj *str;

    if (key->zcurrent == ((void *)0)) return ((void *)0);
    if (key->value->encoding == 5) {
        unsigned char *eptr, *sptr;
        eptr = key->zcurrent;
        sds ele = ziplistGetObject(eptr);
        if (score) {
            sptr = ziplistNext(key->value->ptr,eptr);
            *score = zzlGetScore(sptr);
        }
        str = createObject(0,ele);
    } else if (key->value->encoding == 7) {
        zskiplistNode *ln = key->zcurrent;
        if (score) *score = ln->score;
        str = createStringObject(ln->ele,sdslen(ln->ele));
    } else {
        _serverPanic("\"Unsupported zset encoding\"","module.c",1606),_exit(1);
    }
    autoMemoryAdd(key->ctx,1,str);
    return str;
}




int RM_ZsetRangeNext(RedisModuleKey *key) {
    if (!key->ztype || !key->zcurrent) return 0;

    if (key->value->encoding == 5) {
        unsigned char *zl = key->value->ptr;
        unsigned char *eptr = key->zcurrent;
        unsigned char *next;
        next = ziplistNext(zl,eptr);
        if (next) next = ziplistNext(zl,next);
        if (next == ((void *)0)) {
            key->zer = 1;
            return 0;
        } else {

            if (key->ztype == 2) {


                unsigned char *saved_next = next;
                next = ziplistNext(zl,next);
                double score = zzlGetScore(next);
                if (!zslValueLteMax(score,&key->zrs)) {
                    key->zer = 1;
                    return 0;
                }
                next = saved_next;
            } else if (key->ztype == 1) {
                if (!zzlLexValueLteMax(next,&key->zlrs)) {
                    key->zer = 1;
                    return 0;
                }
            }
            key->zcurrent = next;
            return 1;
        }
    } else if (key->value->encoding == 7) {
        zskiplistNode *ln = key->zcurrent, *next = ln->level[0].forward;
        if (next == ((void *)0)) {
            key->zer = 1;
            return 0;
        } else {

            if (key->ztype == 2 &&
                !zslValueLteMax(ln->score,&key->zrs))
            {
                key->zer = 1;
                return 0;
            } else if (key->ztype == 1) {
                if (!zslLexValueLteMax(ln->ele,&key->zlrs)) {
                    key->zer = 1;
                    return 0;
                }
            }
            key->zcurrent = next;
            return 1;
        }
    } else {
        _serverPanic("\"Unsupported zset encoding\"","module.c",1671),_exit(1);
    }
}




int RM_ZsetRangePrev(RedisModuleKey *key) {
    if (!key->ztype || !key->zcurrent) return 0;

    if (key->value->encoding == 5) {
        unsigned char *zl = key->value->ptr;
        unsigned char *eptr = key->zcurrent;
        unsigned char *prev;
        prev = ziplistPrev(zl,eptr);
        if (prev) prev = ziplistPrev(zl,prev);
        if (prev == ((void *)0)) {
            key->zer = 1;
            return 0;
        } else {

            if (key->ztype == 2) {


                unsigned char *saved_prev = prev;
                prev = ziplistNext(zl,prev);
                double score = zzlGetScore(prev);
                if (!zslValueGteMin(score,&key->zrs)) {
                    key->zer = 1;
                    return 0;
                }
                prev = saved_prev;
            } else if (key->ztype == 1) {
                if (!zzlLexValueGteMin(prev,&key->zlrs)) {
                    key->zer = 1;
                    return 0;
                }
            }
            key->zcurrent = prev;
            return 1;
        }
    } else if (key->value->encoding == 7) {
        zskiplistNode *ln = key->zcurrent, *prev = ln->backward;
        if (prev == ((void *)0)) {
            key->zer = 1;
            return 0;
        } else {

            if (key->ztype == 2 &&
                !zslValueGteMin(ln->score,&key->zrs))
            {
                key->zer = 1;
                return 0;
            } else if (key->ztype == 1) {
                if (!zslLexValueGteMin(prev->ele,&key->zlrs)) {
                    key->zer = 1;
                    return 0;
                }
            }
            key->zcurrent = prev;
            return 1;
        }
    } else {
        _serverPanic("\"Unsupported zset encoding\"","module.c",1734),_exit(1);
    }
}
# 1792 "module.c"
int RM_HashSet(RedisModuleKey *key, int flags, ...) {
    va_list ap;
    if (!(key->mode & (1<<1))) return 0;
    if (key->value && key->value->type != 4) return 0;
    if (key->value == ((void *)0)) moduleCreateEmptyKey(key,3);

    int updated = 0;
    __builtin_va_start(ap,flags);
    while(1) {
        robj *field, *value;

        if (flags & (1<<2)) {
            char *cfield = __builtin_va_arg(ap,char*);
            if (cfield == ((void *)0)) break;
            field = createRawStringObject(cfield,strlen(cfield));
        } else {
            field = __builtin_va_arg(ap,robj*);
            if (field == ((void *)0)) break;
        }
        value = __builtin_va_arg(ap,robj*);


        if (flags & ((1<<1)|(1<<0))) {
            int exists = hashTypeExists(key->value, field->ptr);
            if (((flags & (1<<1)) && !exists) ||
                ((flags & (1<<0)) && exists))
            {
                if (flags & (1<<2)) decrRefCount(field);
                continue;
            }
        }


        if (value == ((robj*)(long)1)) {
            updated += hashTypeDelete(key->value, field->ptr);
            if (flags & (1<<2)) decrRefCount(field);
            continue;
        }

        int low_flags = 0;



        if (flags & (1<<2))
            low_flags |= (1<<0);
        updated += hashTypeSet(key->value, field->ptr, value->ptr, low_flags);



        if (flags & (1<<2)) {
           field->ptr = ((void *)0);
           decrRefCount(field);
        }
    }
    __builtin_va_end(ap);
    moduleDelKeyIfEmpty(key);
    return updated;
}
# 1892 "module.c"
int RM_HashGet(RedisModuleKey *key, int flags, ...) {
    va_list ap;
    if (key->value && key->value->type != 4) return 1;

    __builtin_va_start(ap,flags);
    while(1) {
        robj *field, **valueptr;
        int *existsptr;

        if (flags & (1<<2)) {
            char *cfield = __builtin_va_arg(ap,char*);
            if (cfield == ((void *)0)) break;
            field = createRawStringObject(cfield,strlen(cfield));
        } else {
            field = __builtin_va_arg(ap,robj*);
            if (field == ((void *)0)) break;
        }


        if (flags & (1<<3)) {
            existsptr = __builtin_va_arg(ap,int*);
            if (key->value)
                *existsptr = hashTypeExists(key->value,field->ptr);
            else
                *existsptr = 0;
        } else {
            valueptr = __builtin_va_arg(ap,robj**);
            if (key->value) {
                *valueptr = hashTypeGetValueObject(key->value,field->ptr);
                if (*valueptr) {
                    robj *decoded = getDecodedObject(*valueptr);
                    decrRefCount(*valueptr);
                    *valueptr = decoded;
                }
                if (*valueptr)
                    autoMemoryAdd(key->ctx,1,*valueptr);
            } else {
                *valueptr = ((void *)0);
            }
        }


        if (flags & (1<<2)) decrRefCount(field);
    }
    __builtin_va_end(ap);
    return 0;
}
# 1948 "module.c"
RedisModuleCallReply *moduleCreateCallReplyFromProto(RedisModuleCtx *ctx, sds proto) {
    RedisModuleCallReply *reply = zmalloc(sizeof(*reply));
    reply->ctx = ctx;
    reply->proto = proto;
    reply->protolen = sdslen(proto);
    reply->flags = (1<<0);
    switch(proto[0]) {
    case '$':
    case '+': reply->type = 0; break;
    case '-': reply->type = 1; break;
    case ':': reply->type = 2; break;
    case '*': reply->type = 3; break;
    default: reply->type = -1; break;
    }
    if ((proto[0] == '*' || proto[0] == '$') && proto[1] == '-')
        reply->type = 4;
    return reply;
}

void moduleParseCallReply_Int(RedisModuleCallReply *reply);
void moduleParseCallReply_BulkString(RedisModuleCallReply *reply);
void moduleParseCallReply_SimpleString(RedisModuleCallReply *reply);
void moduleParseCallReply_Array(RedisModuleCallReply *reply);




void moduleParseCallReply(RedisModuleCallReply *reply) {
    if (!(reply->flags & (1<<0))) return;
    reply->flags &= ~(1<<0);

    switch(reply->proto[0]) {
    case ':': moduleParseCallReply_Int(reply); break;
    case '$': moduleParseCallReply_BulkString(reply); break;
    case '-':
    case '+': moduleParseCallReply_SimpleString(reply); break;
    case '*': moduleParseCallReply_Array(reply); break;
    }
}

void moduleParseCallReply_Int(RedisModuleCallReply *reply) {
    char *proto = reply->proto;
    char *p = (__extension__ (__builtin_constant_p ('\r') && !__builtin_constant_p (proto+1) && ('\r') == '\0' ? (char *) __rawmemchr (proto+1, '\r') : __builtin_strchr (proto+1, '\r')));

    string2ll(proto+1,p-proto-1,&reply->val.ll);
    reply->protolen = p-proto+2;
    reply->type = 2;
}

void moduleParseCallReply_BulkString(RedisModuleCallReply *reply) {
    char *proto = reply->proto;
    char *p = (__extension__ (__builtin_constant_p ('\r') && !__builtin_constant_p (proto+1) && ('\r') == '\0' ? (char *) __rawmemchr (proto+1, '\r') : __builtin_strchr (proto+1, '\r')));
    long long bulklen;

    string2ll(proto+1,p-proto-1,&bulklen);
    if (bulklen == -1) {
        reply->protolen = p-proto+2;
        reply->type = 4;
    } else {
        reply->val.str = p+2;
        reply->len = bulklen;
        reply->protolen = p-proto+2+bulklen+2;
        reply->type = 0;
    }
}

void moduleParseCallReply_SimpleString(RedisModuleCallReply *reply) {
    char *proto = reply->proto;
    char *p = (__extension__ (__builtin_constant_p ('\r') && !__builtin_constant_p (proto+1) && ('\r') == '\0' ? (char *) __rawmemchr (proto+1, '\r') : __builtin_strchr (proto+1, '\r')));

    reply->val.str = proto+1;
    reply->len = p-proto-1;
    reply->protolen = p-proto+2;
    reply->type = proto[0] == '+' ? 0 :
                                    1;
}

void moduleParseCallReply_Array(RedisModuleCallReply *reply) {
    char *proto = reply->proto;
    char *p = (__extension__ (__builtin_constant_p ('\r') && !__builtin_constant_p (proto+1) && ('\r') == '\0' ? (char *) __rawmemchr (proto+1, '\r') : __builtin_strchr (proto+1, '\r')));
    long long arraylen, j;

    string2ll(proto+1,p-proto-1,&arraylen);
    p += 2;

    if (arraylen == -1) {
        reply->protolen = p-proto;
        reply->type = 4;
        return;
    }

    reply->val.array = zmalloc(sizeof(RedisModuleCallReply)*arraylen);
    reply->len = arraylen;
    for (j = 0; j < arraylen; j++) {
        RedisModuleCallReply *ele = reply->val.array+j;
        ele->flags = (1<<1) |
                     (1<<0);
        ele->proto = p;
        ele->ctx = reply->ctx;
        moduleParseCallReply(ele);
        p += ele->protolen;
    }
    reply->protolen = p-proto;
    reply->type = 3;
}



void RM_FreeCallReply_Rec(RedisModuleCallReply *reply, int freenested){



    if (!freenested && reply->flags & (1<<1)) return;

    if (!(reply->flags & (1<<0))) {
        if (reply->type == 3) {
            size_t j;
            for (j = 0; j < reply->len; j++)
                RM_FreeCallReply_Rec(reply->val.array+j,1);
            zfree(reply->val.array);
        }
    }





    if (!(reply->flags & (1<<1))) {
        if (reply->proto) sdsfree(reply->proto);
        zfree(reply);
    }
}




void RM_FreeCallReply(RedisModuleCallReply *reply) {
    RM_FreeCallReply_Rec(reply,0);
    autoMemoryFreed(reply->ctx,2,reply);
}


int RM_CallReplyType(RedisModuleCallReply *reply) {
    return reply->type;
}


size_t RM_CallReplyLength(RedisModuleCallReply *reply) {
    moduleParseCallReply(reply);
    switch(reply->type) {
    case 0:
    case 1:
    case 3:
        return reply->len;
    default:
        return 0;
    }
}



RedisModuleCallReply *RM_CallReplyArrayElement(RedisModuleCallReply *reply, size_t idx) {
    moduleParseCallReply(reply);
    if (reply->type != 3) return ((void *)0);
    if (idx >= reply->len) return ((void *)0);
    return reply->val.array+idx;
}


long long RM_CallReplyInteger(RedisModuleCallReply *reply) {
    moduleParseCallReply(reply);
    if (reply->type != 2) return (-9223372036854775807LL - 1LL);
    return reply->val.ll;
}


const char *RM_CallReplyStringPtr(RedisModuleCallReply *reply, size_t *len) {
    moduleParseCallReply(reply);
    if (reply->type != 0 &&
        reply->type != 1) return ((void *)0);
    if (len) *len = reply->len;
    return reply->val.str;
}



robj *RM_CreateStringFromCallReply(RedisModuleCallReply *reply) {
    moduleParseCallReply(reply);
    switch(reply->type) {
    case 0:
    case 1:
        return RM_CreateString(reply->ctx,reply->val.str,reply->len);
    case 2: {
        char buf[64];
        int len = ll2string(buf,sizeof(buf),reply->val.ll);
        return RM_CreateString(reply->ctx,buf,len);
        }
    default: return ((void *)0);
    }
}
# 2163 "module.c"
robj **moduleCreateArgvFromUserFormat(const char *cmdname, const char *fmt, int *argcp, int *flags, va_list ap) {
    int argc = 0, argv_size, j;
    robj **argv = ((void *)0);



    argv_size = strlen(fmt)+1;
    argv = zrealloc(argv,sizeof(robj*)*argv_size);


    argv[0] = createStringObject(cmdname,strlen(cmdname));
    argc++;


    const char *p = fmt;
    while(*p) {
        if (*p == 'c') {
            char *cstr = __builtin_va_arg(ap,char*);
            argv[argc++] = createStringObject(cstr,strlen(cstr));
        } else if (*p == 's') {
            robj *obj = __builtin_va_arg(ap,void*);
            argv[argc++] = obj;
            incrRefCount(obj);
        } else if (*p == 'b') {
            char *buf = __builtin_va_arg(ap,char*);
            size_t len = __builtin_va_arg(ap,size_t);
            argv[argc++] = createStringObject(buf,len);
        } else if (*p == 'l') {
            long ll = __builtin_va_arg(ap,long long);
            argv[argc++] = createStringObjectFromLongLong(ll);
        } else if (*p == 'v') {

             robj **v = __builtin_va_arg(ap,void*);
             size_t vlen = __builtin_va_arg(ap,size_t);




             argv_size += vlen-1;
             argv = zrealloc(argv,sizeof(robj*)*argv_size);

             size_t i = 0;
             for (i = 0; i < vlen; i++) {
                 incrRefCount(v[i]);
                 argv[argc++] = v[i];
             }
        } else if (*p == '!') {
            if (flags) (*flags) |= (1<<0);
        } else {
            goto fmterr;
        }
        p++;
    }
    *argcp = argc;
    return argv;

fmterr:
    for (j = 0; j < argc; j++)
        decrRefCount(argv[j]);
    zfree(argv);
    return ((void *)0);
}







RedisModuleCallReply *RM_Call(RedisModuleCtx *ctx, const char *cmdname, const char *fmt, ...) {
    struct redisCommand *cmd;
    client *c = ((void *)0);
    robj **argv = ((void *)0);
    int argc = 0, flags = 0;
    va_list ap;
    RedisModuleCallReply *reply = ((void *)0);
    int replicate = 0;

    cmd = lookupCommandByCString((char*)cmdname);
    if (!cmd) {
        (*__errno_location ()) = 22;
        return ((void *)0);
    }


    __builtin_va_start(ap,fmt);
    c = createClient(-1);
    argv = moduleCreateArgvFromUserFormat(cmdname,fmt,&argc,&flags,ap);
    replicate = flags & (1<<0);
    __builtin_va_end(ap);


    c->flags |= (1<<27);
    c->argv = argv;
    c->argc = argc;
    c->cmd = c->lastcmd = cmd;


    if (argv == ((void *)0)) goto cleanup;


    if ((cmd->arity > 0 && cmd->arity != argc) || (argc < -cmd->arity)) {
        (*__errno_location ()) = 22;
        goto cleanup;
    }




    if (server.cluster_enabled && !(ctx->client->flags & (1<<1))) {

        c->flags &= ~((1<<17)|(1<<9));
        c->flags |= ctx->client->flags & ((1<<17)|(1<<9));
        if (getNodeByQuery(c,c->cmd,c->argv,c->argc,((void *)0),((void *)0)) !=
                           server.cluster->myself)
        {
            (*__errno_location ()) = 1;
            goto cleanup;
        }
    }




    if (replicate) moduleReplicateMultiIfNeeded(ctx);


    int call_flags = (1<<0) | (1<<1);
    if (replicate) {
        call_flags |= (1<<2);
        call_flags |= (1<<3);
    }
    call(c,call_flags);




    sds proto = sdsnewlen(c->buf,c->bufpos);
    c->bufpos = 0;
    while(((c->reply)->len)) {
        sds o = ((((c->reply)->head))->value);

        proto = sdscatsds(proto,o);
        listDelNode(c->reply,((c->reply)->head));
    }
    reply = moduleCreateCallReplyFromProto(ctx,proto);
    autoMemoryAdd(ctx,2,reply);

cleanup:
    freeClient(c);
    return reply;
}



const char *RM_CallReplyProto(RedisModuleCallReply *reply, size_t *len) {
    if (reply->proto) *len = sdslen(reply->proto);
    return reply->proto;
}
# 2356 "module.c"
const char *ModuleTypeNameCharSet =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789-_";

uint64_t moduleTypeEncodeId(const char *name, int encver) {


    const char *cset = ModuleTypeNameCharSet;
    if (strlen(name) != 9) return 0;
    if (encver < 0 || encver > 1023) return 0;

    uint64_t id = 0;
    for (int j = 0; j < 9; j++) {
        char *p = (__extension__ (__builtin_constant_p (name[j]) && !__builtin_constant_p (cset) && (name[j]) == '\0' ? (char *) __rawmemchr (cset, name[j]) : __builtin_strchr (cset, name[j])));
        if (!p) return 0;
        unsigned long pos = p-cset;
        id = (id << 6) | pos;
    }
    id = (id << 10) | encver;
    return id;
}




moduleType *moduleTypeLookupModuleByName(const char *name) {
    dictIterator *di = dictGetIterator(modules);
    dictEntry *de;

    while ((de = dictNext(di)) != ((void *)0)) {
        struct RedisModule *module = ((de)->v.val);
        listIter li;
        listNode *ln;

        listRewind(module->types,&li);
        while((ln = listNext(&li))) {
            moduleType *mt = ln->value;
            if (memcmp(name,mt->name,sizeof(mt->name)) == 0) {
                dictReleaseIterator(di);
                return mt;
            }
        }
    }
    dictReleaseIterator(di);
    return ((void *)0);
}






moduleType *moduleTypeLookupModuleByID(uint64_t id) {
    static struct {
        uint64_t id;
        moduleType *mt;
    } cache[3];


    int j;
    for (j = 0; j < 3; j++)
        if (cache[j].id == id) return cache[j].mt;


    moduleType *mt = ((void *)0);
    dictIterator *di = dictGetIterator(modules);
    dictEntry *de;

    while ((de = dictNext(di)) != ((void *)0)) {
        struct RedisModule *module = ((de)->v.val);
        listIter li;
        listNode *ln;

        listRewind(module->types,&li);
        while((ln = listNext(&li))) {
            mt = ln->value;


            if (mt->id >> 10 == id >> 10) break;
        }
    }
    dictReleaseIterator(di);


    if (mt && j < 3) {
        cache[j].id = id;
        cache[j].mt = mt;
    }
    return mt;
}



void moduleTypeNameByID(char *name, uint64_t moduleid) {
    const char *cset = ModuleTypeNameCharSet;

    name[0] = '\0';
    char *p = name+8;
    moduleid >>= 10;
    for (int j = 0; j < 9; j++) {
        *p-- = cset[moduleid & 63];
        moduleid >>= 6;
    }
}
# 2507 "module.c"
moduleType *RM_CreateDataType(RedisModuleCtx *ctx, const char *name, int encver, moduleTypeLoadFunc rdb_load, moduleTypeSaveFunc rdb_save, moduleTypeRewriteFunc aof_rewrite, moduleTypeDigestFunc digest, moduleTypeFreeFunc free) {
    uint64_t id = moduleTypeEncodeId(name,encver);
    if (id == 0) return ((void *)0);
    if (moduleTypeLookupModuleByName(name) != ((void *)0)) return ((void *)0);

    moduleType *mt = zmalloc(sizeof(*mt));
    mt->id = id;
    mt->module = ctx->module;
    mt->rdb_load = rdb_load;
    mt->rdb_save = rdb_save;
    mt->aof_rewrite = aof_rewrite;
    mt->digest = digest;
    mt->free = free;
    memcpy(mt->name,name,sizeof(mt->name));
    listAddNodeTail(ctx->module->types,mt);
    return mt;
}





int RM_ModuleTypeSetValue(RedisModuleKey *key, moduleType *mt, void *value) {
    if (!(key->mode & (1<<1)) || key->iter) return 1;
    RM_DeleteKey(key);
    robj *o = createModuleObject(mt,value);
    setKey(key->db,key->key,o);
    decrRefCount(o);
    key->value = o;
    return 0;
}






moduleType *RM_ModuleTypeGetType(RedisModuleKey *key) {
    if (key == ((void *)0) ||
        key->value == ((void *)0) ||
        RM_KeyType(key) != 6) return ((void *)0);
    moduleValue *mv = key->value->ptr;
    return mv->type;
}







void *RM_ModuleTypeGetValue(RedisModuleKey *key) {
    if (key == ((void *)0) ||
        key->value == ((void *)0) ||
        RM_KeyType(key) != 6) return ((void *)0);
    moduleValue *mv = key->value->ptr;
    return mv->value;
}







void moduleRDBLoadError(RedisModuleIO *io) {
    serverLog(3,
        "Error loading data from RDB (short read or EOF). "
        "Read performed by module '%s' about type '%s' "
        "after reading '%llu' bytes of a value.",
        io->type->module->name,
        io->type->name,
        (unsigned long long)io->bytes);
    exit(1);
}




void RM_SaveUnsigned(RedisModuleIO *io, uint64_t value) {
    if (io->error) return;
    int retval = rdbSaveLen(io->rio, value);
    if (retval == -1) {
        io->error = 1;
    } else {
        io->bytes += retval;
    }
}




uint64_t RM_LoadUnsigned(RedisModuleIO *io) {
    uint64_t value;
    int retval = rdbLoadLenByRef(io->rio, ((void *)0), &value);
    if (retval == -1) {
        moduleRDBLoadError(io);
        return 0;
    }
    return value;
}


void RM_SaveSigned(RedisModuleIO *io, int64_t value) {
    union {uint64_t u; int64_t i;} conv;
    conv.i = value;
    RM_SaveUnsigned(io,conv.u);
}


int64_t RM_LoadSigned(RedisModuleIO *io) {
    union {uint64_t u; int64_t i;} conv;
    conv.u = RM_LoadUnsigned(io);
    return conv.i;
}







void RM_SaveString(RedisModuleIO *io, robj *s) {
    if (io->error) return;
    int retval = rdbSaveStringObject(io->rio,s);
    if (retval == -1) {
        io->error = 1;
    } else {
        io->bytes += retval;
    }
}



void RM_SaveStringBuffer(RedisModuleIO *io, const char *str, size_t len) {
    if (io->error) return;
    int retval = rdbSaveRawString(io->rio,(unsigned char*)str,len);
    if (retval == -1) {
        io->error = 1;
    } else {
        io->bytes += retval;
    }
}


void *moduleLoadString(RedisModuleIO *io, int plain, size_t *lenptr) {
    void *s = rdbGenericLoadStringObject(io->rio,
              plain ? (1<<1) : 0, lenptr);
    if (s == ((void *)0)) {
        moduleRDBLoadError(io);
        return ((void *)0);
    }
    return s;
}
# 2671 "module.c"
robj *RM_LoadString(RedisModuleIO *io) {
    return moduleLoadString(io,0,((void *)0));
}
# 2682 "module.c"
char *RM_LoadStringBuffer(RedisModuleIO *io, size_t *lenptr) {
    return moduleLoadString(io,1,lenptr);
}




void RM_SaveDouble(RedisModuleIO *io, double value) {
    if (io->error) return;
    int retval = rdbSaveBinaryDoubleValue(io->rio, value);
    if (retval == -1) {
        io->error = 1;
    } else {
        io->bytes += retval;
    }
}



double RM_LoadDouble(RedisModuleIO *io) {
    double value;
    int retval = rdbLoadBinaryDoubleValue(io->rio, &value);
    if (retval == -1) {
        moduleRDBLoadError(io);
        return 0;
    }
    return value;
}
# 2720 "module.c"
void RM_EmitAOF(RedisModuleIO *io, const char *cmdname, const char *fmt, ...) {
    if (io->error) return;
    struct redisCommand *cmd;
    robj **argv = ((void *)0);
    int argc = 0, flags = 0, j;
    va_list ap;

    cmd = lookupCommandByCString((char*)cmdname);
    if (!cmd) {
        serverLog(3,
            "Fatal: AOF method for module data type '%s' tried to "
            "emit unknown command '%s'",
            io->type->name, cmdname);
        io->error = 1;
        (*__errno_location ()) = 22;
        return;
    }


    __builtin_va_start(ap,fmt);
    argv = moduleCreateArgvFromUserFormat(cmdname,fmt,&argc,&flags,ap);
    __builtin_va_end(ap);
    if (argv == ((void *)0)) {
        serverLog(3,
            "Fatal: AOF method for module data type '%s' tried to "
            "call RedisModule_EmitAOF() with wrong format specifiers '%s'",
            io->type->name, fmt);
        io->error = 1;
        (*__errno_location ()) = 22;
        return;
    }


    if (!io->error && rioWriteBulkCount(io->rio,'*',argc) == 0)
        io->error = 1;


    for (j = 0; j < argc; j++) {
        if (!io->error && rioWriteBulkObject(io->rio,argv[j]) == 0)
            io->error = 1;
        decrRefCount(argv[j]);
    }
    zfree(argv);
    return;
}
# 2773 "module.c"
unsigned int dictCStringKeyHash(const void *key) {
    return dictGenHashFunction((unsigned char*)key, strlen((char*)key));
}

int dictCStringKeyCompare(void *privdata, const void *key1, const void *key2) {
    ((void) privdata);
    return __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (key1) && __builtin_constant_p (key2) && (__s1_len = __builtin_strlen (key1), __s2_len = __builtin_strlen (key2), (!((size_t)(const void *)((key1) + 1) - (size_t)(const void *)(key1) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((key2) + 1) - (size_t)(const void *)(key2) == 1) || __s2_len >= 4)) ? __builtin_strcmp (key1, key2) : (__builtin_constant_p (key1) && ((size_t)(const void *)((key1) + 1) - (size_t)(const void *)(key1) == 1) && (__s1_len = __builtin_strlen (key1), __s1_len < 4) ? (__builtin_constant_p (key2) && ((size_t)(const void *)((key2) + 1) - (size_t)(const void *)(key2) == 1) ? __builtin_strcmp (key1, key2) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (key2); int __result = (((const unsigned char *) (const char *) (key1))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (key1))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (key1))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (key1))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (key2) && ((size_t)(const void *)((key2) + 1) - (size_t)(const void *)(key2) == 1) && (__s2_len = __builtin_strlen (key2), __s2_len < 4) ? (__builtin_constant_p (key1) && ((size_t)(const void *)((key1) + 1) - (size_t)(const void *)(key1) == 1) ? __builtin_strcmp (key1, key2) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (key1); int __result = (((const unsigned char *) (const char *) (key2))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (key2))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (key2))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (key2))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (key1, key2)))); }) == 0;
}

dictType moduleAPIDictType = {
    dictCStringKeyHash,
    ((void *)0),
    ((void *)0),
    dictCStringKeyCompare,
    ((void *)0),
    ((void *)0)
};

int moduleRegisterApi(const char *funcname, void *funcptr) {
    return dictAdd(server.moduleapi, (char*)funcname, funcptr);
}





void moduleRegisterCoreAPI(void) {
    server.moduleapi = dictCreate(&moduleAPIDictType,((void *)0));
    moduleRegisterApi("RedisModule_" "Alloc", (void *)(unsigned long)RM_Alloc);
    moduleRegisterApi("RedisModule_" "Realloc", (void *)(unsigned long)RM_Realloc);
    moduleRegisterApi("RedisModule_" "Free", (void *)(unsigned long)RM_Free);
    moduleRegisterApi("RedisModule_" "Strdup", (void *)(unsigned long)RM_Strdup);
    moduleRegisterApi("RedisModule_" "CreateCommand", (void *)(unsigned long)RM_CreateCommand);
    moduleRegisterApi("RedisModule_" "SetModuleAttribs", (void *)(unsigned long)RM_SetModuleAttribs);
    moduleRegisterApi("RedisModule_" "WrongArity", (void *)(unsigned long)RM_WrongArity);
    moduleRegisterApi("RedisModule_" "ReplyWithLongLong", (void *)(unsigned long)RM_ReplyWithLongLong);
    moduleRegisterApi("RedisModule_" "ReplyWithError", (void *)(unsigned long)RM_ReplyWithError);
    moduleRegisterApi("RedisModule_" "ReplyWithSimpleString", (void *)(unsigned long)RM_ReplyWithSimpleString);
    moduleRegisterApi("RedisModule_" "ReplyWithArray", (void *)(unsigned long)RM_ReplyWithArray);
    moduleRegisterApi("RedisModule_" "ReplySetArrayLength", (void *)(unsigned long)RM_ReplySetArrayLength);
    moduleRegisterApi("RedisModule_" "ReplyWithString", (void *)(unsigned long)RM_ReplyWithString);
    moduleRegisterApi("RedisModule_" "ReplyWithStringBuffer", (void *)(unsigned long)RM_ReplyWithStringBuffer);
    moduleRegisterApi("RedisModule_" "ReplyWithNull", (void *)(unsigned long)RM_ReplyWithNull);
    moduleRegisterApi("RedisModule_" "ReplyWithCallReply", (void *)(unsigned long)RM_ReplyWithCallReply);
    moduleRegisterApi("RedisModule_" "ReplyWithDouble", (void *)(unsigned long)RM_ReplyWithDouble);
    moduleRegisterApi("RedisModule_" "GetSelectedDb", (void *)(unsigned long)RM_GetSelectedDb);
    moduleRegisterApi("RedisModule_" "SelectDb", (void *)(unsigned long)RM_SelectDb);
    moduleRegisterApi("RedisModule_" "OpenKey", (void *)(unsigned long)RM_OpenKey);
    moduleRegisterApi("RedisModule_" "CloseKey", (void *)(unsigned long)RM_CloseKey);
    moduleRegisterApi("RedisModule_" "KeyType", (void *)(unsigned long)RM_KeyType);
    moduleRegisterApi("RedisModule_" "ValueLength", (void *)(unsigned long)RM_ValueLength);
    moduleRegisterApi("RedisModule_" "ListPush", (void *)(unsigned long)RM_ListPush);
    moduleRegisterApi("RedisModule_" "ListPop", (void *)(unsigned long)RM_ListPop);
    moduleRegisterApi("RedisModule_" "StringToLongLong", (void *)(unsigned long)RM_StringToLongLong);
    moduleRegisterApi("RedisModule_" "StringToDouble", (void *)(unsigned long)RM_StringToDouble);
    moduleRegisterApi("RedisModule_" "Call", (void *)(unsigned long)RM_Call);
    moduleRegisterApi("RedisModule_" "CallReplyProto", (void *)(unsigned long)RM_CallReplyProto);
    moduleRegisterApi("RedisModule_" "FreeCallReply", (void *)(unsigned long)RM_FreeCallReply);
    moduleRegisterApi("RedisModule_" "CallReplyInteger", (void *)(unsigned long)RM_CallReplyInteger);
    moduleRegisterApi("RedisModule_" "CallReplyType", (void *)(unsigned long)RM_CallReplyType);
    moduleRegisterApi("RedisModule_" "CallReplyLength", (void *)(unsigned long)RM_CallReplyLength);
    moduleRegisterApi("RedisModule_" "CallReplyArrayElement", (void *)(unsigned long)RM_CallReplyArrayElement);
    moduleRegisterApi("RedisModule_" "CallReplyStringPtr", (void *)(unsigned long)RM_CallReplyStringPtr);
    moduleRegisterApi("RedisModule_" "CreateStringFromCallReply", (void *)(unsigned long)RM_CreateStringFromCallReply);
    moduleRegisterApi("RedisModule_" "CreateString", (void *)(unsigned long)RM_CreateString);
    moduleRegisterApi("RedisModule_" "CreateStringFromLongLong", (void *)(unsigned long)RM_CreateStringFromLongLong);
    moduleRegisterApi("RedisModule_" "FreeString", (void *)(unsigned long)RM_FreeString);
    moduleRegisterApi("RedisModule_" "StringPtrLen", (void *)(unsigned long)RM_StringPtrLen);
    moduleRegisterApi("RedisModule_" "AutoMemory", (void *)(unsigned long)RM_AutoMemory);
    moduleRegisterApi("RedisModule_" "Replicate", (void *)(unsigned long)RM_Replicate);
    moduleRegisterApi("RedisModule_" "ReplicateVerbatim", (void *)(unsigned long)RM_ReplicateVerbatim);
    moduleRegisterApi("RedisModule_" "DeleteKey", (void *)(unsigned long)RM_DeleteKey);
    moduleRegisterApi("RedisModule_" "StringSet", (void *)(unsigned long)RM_StringSet);
    moduleRegisterApi("RedisModule_" "StringDMA", (void *)(unsigned long)RM_StringDMA);
    moduleRegisterApi("RedisModule_" "StringTruncate", (void *)(unsigned long)RM_StringTruncate);
    moduleRegisterApi("RedisModule_" "SetExpire", (void *)(unsigned long)RM_SetExpire);
    moduleRegisterApi("RedisModule_" "GetExpire", (void *)(unsigned long)RM_GetExpire);
    moduleRegisterApi("RedisModule_" "ZsetAdd", (void *)(unsigned long)RM_ZsetAdd);
    moduleRegisterApi("RedisModule_" "ZsetIncrby", (void *)(unsigned long)RM_ZsetIncrby);
    moduleRegisterApi("RedisModule_" "ZsetScore", (void *)(unsigned long)RM_ZsetScore);
    moduleRegisterApi("RedisModule_" "ZsetRem", (void *)(unsigned long)RM_ZsetRem);
    moduleRegisterApi("RedisModule_" "ZsetRangeStop", (void *)(unsigned long)RM_ZsetRangeStop);
    moduleRegisterApi("RedisModule_" "ZsetFirstInScoreRange", (void *)(unsigned long)RM_ZsetFirstInScoreRange);
    moduleRegisterApi("RedisModule_" "ZsetLastInScoreRange", (void *)(unsigned long)RM_ZsetLastInScoreRange);
    moduleRegisterApi("RedisModule_" "ZsetFirstInLexRange", (void *)(unsigned long)RM_ZsetFirstInLexRange);
    moduleRegisterApi("RedisModule_" "ZsetLastInLexRange", (void *)(unsigned long)RM_ZsetLastInLexRange);
    moduleRegisterApi("RedisModule_" "ZsetRangeCurrentElement", (void *)(unsigned long)RM_ZsetRangeCurrentElement);
    moduleRegisterApi("RedisModule_" "ZsetRangeNext", (void *)(unsigned long)RM_ZsetRangeNext);
    moduleRegisterApi("RedisModule_" "ZsetRangePrev", (void *)(unsigned long)RM_ZsetRangePrev);
    moduleRegisterApi("RedisModule_" "ZsetRangeEndReached", (void *)(unsigned long)RM_ZsetRangeEndReached);
    moduleRegisterApi("RedisModule_" "HashSet", (void *)(unsigned long)RM_HashSet);
    moduleRegisterApi("RedisModule_" "HashGet", (void *)(unsigned long)RM_HashGet);
    moduleRegisterApi("RedisModule_" "IsKeysPositionRequest", (void *)(unsigned long)RM_IsKeysPositionRequest);
    moduleRegisterApi("RedisModule_" "KeyAtPos", (void *)(unsigned long)RM_KeyAtPos);
    moduleRegisterApi("RedisModule_" "GetClientId", (void *)(unsigned long)RM_GetClientId);
    moduleRegisterApi("RedisModule_" "PoolAlloc", (void *)(unsigned long)RM_PoolAlloc);
    moduleRegisterApi("RedisModule_" "CreateDataType", (void *)(unsigned long)RM_CreateDataType);
    moduleRegisterApi("RedisModule_" "ModuleTypeSetValue", (void *)(unsigned long)RM_ModuleTypeSetValue);
    moduleRegisterApi("RedisModule_" "ModuleTypeGetType", (void *)(unsigned long)RM_ModuleTypeGetType);
    moduleRegisterApi("RedisModule_" "ModuleTypeGetValue", (void *)(unsigned long)RM_ModuleTypeGetValue);
    moduleRegisterApi("RedisModule_" "SaveUnsigned", (void *)(unsigned long)RM_SaveUnsigned);
    moduleRegisterApi("RedisModule_" "LoadUnsigned", (void *)(unsigned long)RM_LoadUnsigned);
    moduleRegisterApi("RedisModule_" "SaveSigned", (void *)(unsigned long)RM_SaveSigned);
    moduleRegisterApi("RedisModule_" "LoadSigned", (void *)(unsigned long)RM_LoadSigned);
    moduleRegisterApi("RedisModule_" "SaveString", (void *)(unsigned long)RM_SaveString);
    moduleRegisterApi("RedisModule_" "SaveStringBuffer", (void *)(unsigned long)RM_SaveStringBuffer);
    moduleRegisterApi("RedisModule_" "LoadString", (void *)(unsigned long)RM_LoadString);
    moduleRegisterApi("RedisModule_" "LoadStringBuffer", (void *)(unsigned long)RM_LoadStringBuffer);
    moduleRegisterApi("RedisModule_" "SaveDouble", (void *)(unsigned long)RM_SaveDouble);
    moduleRegisterApi("RedisModule_" "LoadDouble", (void *)(unsigned long)RM_LoadDouble);
    moduleRegisterApi("RedisModule_" "EmitAOF", (void *)(unsigned long)RM_EmitAOF);
}


void moduleInitModulesSystem(void) {
    server.loadmodule_queue = listCreate();
    modules = dictCreate(&modulesDictType,((void *)0));
    moduleRegisterCoreAPI();
}
# 2902 "module.c"
void moduleLoadFromQueue(void) {
    listIter li;
    listNode *ln;

    listRewind(server.loadmodule_queue,&li);
    while((ln = listNext(&li))) {
        struct moduleLoadQueueEntry *loadmod = ln->value;
        if (moduleLoad(loadmod->path,(void **)loadmod->argv,loadmod->argc)
            == -1)
        {
            serverLog(3,
                "Can't load module from %s: server aborting",
                loadmod->path);
            exit(1);
        }
    }
}

void moduleFreeModuleStructure(struct RedisModule *module) {
    listRelease(module->types);
    sdsfree(module->name);
    zfree(module);
}



int moduleLoad(const char *path, void **module_argv, int module_argc) {
    int (*onload)(void *, void **, int);
    void *handle;
    RedisModuleCtx ctx = {(void*)(unsigned long)&RM_GetApi, ((void *)0), ((void *)0), ((void *)0), 0, 0, 0, ((void *)0), 0, ((void *)0), 0, ((void *)0)};

    handle = dlopen(path,0x00002|0);
    if (handle == ((void *)0)) {
        serverLog(3, "Module %s failed to load: %s", path, dlerror());
        return -1;
    }
    onload = (int (*)(void *, void **, int))(unsigned long) dlsym(handle,"RedisModule_OnLoad");
    if (onload == ((void *)0)) {
        serverLog(3,
            "Module %s does not export RedisModule_OnLoad() "
            "symbol. Module not loaded.",path);
        return -1;
    }
    if (onload((void*)&ctx,module_argv,module_argc) == 1) {
        if (ctx.module) moduleFreeModuleStructure(ctx.module);
        dlclose(handle);
        serverLog(3,
            "Module %s initialization failed. Module not loaded",path);
        return -1;
    }


    dictAdd(modules,ctx.module->name,ctx.module);
    ctx.module->handle = handle;
    serverLog(2,"Module '%s' loaded from %s",ctx.module->name,path);
    moduleFreeContext(&ctx);
    return 0;
}







int moduleUnload(sds name) {
    struct RedisModule *module = dictFetchValue(modules,name);

    if (module == ((void *)0)) {
        (*__errno_location ()) = 2;
        return 1;
    }

    if (((module->types)->len)) {
        (*__errno_location ()) = 16;
        return 1;
    }


    dictIterator *di = dictGetSafeIterator(server.commands);
    dictEntry *de;
    while ((de = dictNext(di)) != ((void *)0)) {
        struct redisCommand *cmd = ((de)->v.val);
        if (cmd->proc == RedisModuleCommandDispatcher) {
            RedisModuleCommandProxy *cp =
                (void*)(unsigned long)cmd->getkeys_proc;
            sds cmdname = cp->rediscmd->name;
            if (cp->module == module) {
                dictDelete(server.commands,cmdname);
                dictDelete(server.orig_commands,cmdname);
                sdsfree(cmdname);
                zfree(cp->rediscmd);
                zfree(cp);
            }
        }
    }
    dictReleaseIterator(di);




    if (dlclose(module->handle) == -1) {
        char *error = dlerror();
        if (error == ((void *)0)) error = "Unknown error";
        serverLog(3,"Error when trying to close the %s module: %s",
            module->name, error);
    }


    serverLog(2,"Module %s unloaded",module->name);
    dictDelete(modules,module->name);
    moduleFreeModuleStructure(module);

    return 0;
}




void moduleCommand(client *c) {
    char *subcmd = c->argv[1]->ptr;

    if (!strcasecmp(subcmd,"load") && c->argc >= 3) {
        robj **argv = ((void *)0);
        int argc = 0;

        if (c->argc > 3) {
            argc = c->argc - 3;
            argv = &c->argv[3];
        }

        if (moduleLoad(c->argv[2]->ptr,(void **)argv,argc) == 0)
            addReply(c,shared.ok);
        else
            addReplyError(c,
                "Error loading the extension. Please check the server logs.");
    } else if (!strcasecmp(subcmd,"unload") && c->argc == 3) {
        if (moduleUnload(c->argv[2]->ptr) == 0)
            addReply(c,shared.ok);
        else {
            char *errmsg;
            switch((*__errno_location ())) {
            case 2:
                errmsg = "no such module with that name";
                break;
            case 16:
                errmsg = "the module exports one or more module-side data types, can't unload";
                break;
            default:
                errmsg = "operation not possible.";
                break;
            }
            addReplyErrorFormat(c,"Error unloading module: %s",errmsg);
        }
    } else if (!strcasecmp(subcmd,"list") && c->argc == 2) {
        dictIterator *di = dictGetIterator(modules);
        dictEntry *de;

        addReplyMultiBulkLen(c,((modules)->ht[0].used+(modules)->ht[1].used));
        while ((de = dictNext(di)) != ((void *)0)) {
            sds name = ((de)->key);
            struct RedisModule *module = ((de)->v.val);
            addReplyMultiBulkLen(c,4);
            addReplyBulkCString(c,"name");
            addReplyBulkCBuffer(c,name,sdslen(name));
            addReplyBulkCString(c,"ver");
            addReplyLongLong(c,module->ver);
        }
        dictReleaseIterator(di);
    } else {
        addReply(c,shared.syntaxerr);
    }
}
