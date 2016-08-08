# 1 "redis.c"
# 1 "/home/ct584/git/bughunter/repositories/redis//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "redis.c"
# 32 "redis.c"
# 1 "fmacros.h" 1
# 33 "redis.c" 2
# 1 "config.h" 1
# 34 "redis.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

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
# 36 "/usr/include/stdio.h" 2 3 4
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
# 390 "/usr/include/libio.h" 3 4
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
# 329 "/usr/include/stdio.h" 3 4



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

# 420 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 463 "/usr/include/stdio.h" 3 4

# 526 "/usr/include/stdio.h" 3 4





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


# 684 "/usr/include/stdio.h" 3 4





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





extern char *cuserid (char *__s);
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







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
# 929 "/usr/include/stdio.h" 2 3 4
# 943 "/usr/include/stdio.h" 3 4

# 36 "redis.c" 2
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

# 181 "/usr/include/stdlib.h" 3 4


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

# 314 "/usr/include/stdlib.h" 3 4
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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





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
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

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
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));








# 562 "/usr/include/stdlib.h" 3 4


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












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 830 "/usr/include/stdlib.h" 3 4
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

# 908 "/usr/include/stdlib.h" 3 4
extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 924 "/usr/include/stdlib.h" 3 4
extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 37 "redis.c" 2
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

# 176 "/usr/include/string.h" 3 4
extern char *strdup (const char *__s)
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

# 411 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 451 "/usr/include/string.h" 3 4
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
# 644 "/usr/include/string.h" 3 4

# 38 "redis.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
extern long int __sysconf (int);
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
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 430 "/usr/include/time.h" 3 4

# 39 "redis.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
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
# 497 "/usr/include/unistd.h" 3 4
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
# 563 "/usr/include/unistd.h" 3 4
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
# 646 "/usr/include/unistd.h" 3 4
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));







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
# 803 "/usr/include/unistd.h" 3 4
extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 826 "/usr/include/unistd.h" 3 4
extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 835 "/usr/include/unistd.h" 3 4
extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);
# 862 "/usr/include/unistd.h" 3 4
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
# 1120 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 1151 "/usr/include/unistd.h" 3 4

# 40 "redis.c" 2

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
# 303 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef union pthread_attr_t pthread_attr_t;



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





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));






extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));

# 151 "/usr/include/signal.h" 3 4
extern void psignal (int __sig, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);



extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
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
# 395 "/usr/include/signal.h" 3 4
extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 42 "redis.c" 2


# 1 "/usr/include/execinfo.h" 1 3 4
# 23 "/usr/include/execinfo.h" 3 4




extern int backtrace (void **__array, int __size) __attribute__ ((__nonnull__ (1)));




extern char **backtrace_symbols (void *const *__array, int __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern void backtrace_symbols_fd (void *const *__array, int __size, int __fd)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 45 "redis.c" 2
# 1 "/usr/include/ucontext.h" 1 3 4
# 28 "/usr/include/ucontext.h" 3 4



extern int getcontext (ucontext_t *__ucp) __attribute__ ((__nothrow__));


extern int setcontext (const ucontext_t *__ucp) __attribute__ ((__nothrow__));



extern int swapcontext (ucontext_t *__restrict __oucp,
   const ucontext_t *__restrict __ucp) __attribute__ ((__nothrow__));







extern void makecontext (ucontext_t *__ucp, void (*__func) (void),
    int __argc, ...) __attribute__ ((__nothrow__ , __leaf__));


# 46 "redis.c" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 102 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (__WAIT_STATUS __stat_loc);
# 125 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 135 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 136 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 148 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));




# 49 "redis.c" 2
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

# 50 "redis.c" 2
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



# 51 "redis.c" 2
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


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 52 "redis.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 53 "redis.c" 2
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
# 122 "/usr/include/stdint.h" 3 4
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

# 54 "redis.c" 2
# 1 "/usr/include/arpa/inet.h" 1 3 4
# 22 "/usr/include/arpa/inet.h" 3 4
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
# 274 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));
# 283 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4

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
# 628 "/usr/include/netinet/in.h" 3 4

# 23 "/usr/include/arpa/inet.h" 2 3 4











extern in_addr_t inet_addr (const char *__cp) __attribute__ ((__nothrow__ , __leaf__));


extern in_addr_t inet_lnaof (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     __attribute__ ((__nothrow__ , __leaf__));


extern in_addr_t inet_netof (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));



extern in_addr_t inet_network (const char *__cp) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_ntoa (struct in_addr __in) __attribute__ ((__nothrow__ , __leaf__));




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));






extern int inet_aton (const char *__cp, struct in_addr *__inp) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
       char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int inet_net_pton (int __af, const char *__cp,
     void *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern unsigned int inet_nsap_addr (const char *__cp,
        unsigned char *__buf, int __len) __attribute__ ((__nothrow__ , __leaf__));



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
        char *__buf) __attribute__ ((__nothrow__ , __leaf__));



# 55 "redis.c" 2
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
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));
# 312 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 336 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 350 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
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

# 56 "redis.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 341 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 415 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 68 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 282 "/usr/include/fcntl.h" 3 4

# 57 "redis.c" 2
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

# 58 "redis.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/resource.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/resource.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 131 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
typedef __rlim_t rlim_t;







struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };
# 158 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1
# 176 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
};


# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 180 "/usr/include/x86_64-linux-gnu/bits/resource.h" 2 3 4







struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};



# 328 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4

# 25 "/usr/include/x86_64-linux-gnu/sys/resource.h" 2 3 4







# 42 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) __attribute__ ((__nothrow__ , __leaf__));
# 69 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) __attribute__ ((__nothrow__ , __leaf__));
# 87 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrusage (__rusage_who_t __who, struct rusage *__usage) __attribute__ ((__nothrow__ , __leaf__));





extern int getpriority (__priority_which_t __which, id_t __who) __attribute__ ((__nothrow__ , __leaf__));



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));


# 59 "redis.c" 2
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
# 60 "redis.c" 2

# 1 "redis.h" 1
# 33 "redis.h"
enum
{
  REG_GS = 0,

  REG_FS,

  REG_ES,

  REG_DS,

  REG_EDI,

  REG_ESI,

  REG_EBP,

  REG_ESP,

  REG_EBX,

  REG_EDX,

  REG_ECX,

  REG_EAX,

  REG_TRAPNO,

  REG_ERR,

  REG_EIP,

  REG_CS,

  REG_EFL,

  REG_UESP,

  REG_SS

};
# 62 "redis.c" 2
# 1 "ae.h" 1
# 36 "ae.h"
struct aeEventLoop;


typedef void aeFileProc(struct aeEventLoop *eventLoop, int fd, void *clientData, int mask);
typedef int aeTimeProc(struct aeEventLoop *eventLoop, long long id, void *clientData);
typedef void aeEventFinalizerProc(struct aeEventLoop *eventLoop, void *clientData);


typedef struct aeFileEvent {
    int fd;
    int mask;
    aeFileProc *fileProc;
    aeEventFinalizerProc *finalizerProc;
    void *clientData;
    struct aeFileEvent *next;
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


typedef struct aeEventLoop {
    long long timeEventNextId;
    aeFileEvent *fileEventHead;
    aeTimeEvent *timeEventHead;
    int stop;
} aeEventLoop;
# 91 "ae.h"
aeEventLoop *aeCreateEventLoop(void);
void aeDeleteEventLoop(aeEventLoop *eventLoop);
void aeStop(aeEventLoop *eventLoop);
int aeCreateFileEvent(aeEventLoop *eventLoop, int fd, int mask,
        aeFileProc *proc, void *clientData,
        aeEventFinalizerProc *finalizerProc);
void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask);
long long aeCreateTimeEvent(aeEventLoop *eventLoop, long long milliseconds,
        aeTimeProc *proc, void *clientData,
        aeEventFinalizerProc *finalizerProc);
int aeDeleteTimeEvent(aeEventLoop *eventLoop, long long id);
int aeProcessEvents(aeEventLoop *eventLoop, int flags);
int aeWait(int fd, int mask, long long milliseconds);
void aeMain(aeEventLoop *eventLoop);
# 63 "redis.c" 2
# 1 "sds.h" 1
# 36 "sds.h"
typedef char *sds;

struct sdshdr {
    long len;
    long free;
    char buf[];
};

sds sdsnewlen(const void *init, size_t initlen);
sds sdsnew(const char *init);
sds sdsempty();
size_t sdslen(const sds s);
sds sdsdup(const sds s);
void sdsfree(sds s);
size_t sdsavail(sds s);
sds sdscatlen(sds s, void *t, size_t len);
sds sdscat(sds s, char *t);
sds sdscpylen(sds s, char *t, size_t len);
sds sdscpy(sds s, char *t);
sds sdscatprintf(sds s, const char *fmt, ...);
sds sdstrim(sds s, const char *cset);
sds sdsrange(sds s, long start, long end);
void sdsupdatelen(sds s);
int sdscmp(sds s1, sds s2);
sds *sdssplitlen(char *s, int len, char *sep, int seplen, int *count);
void sdstolower(sds s);
# 64 "redis.c" 2
# 1 "anet.h" 1
# 38 "anet.h"
int anetTcpConnect(char *err, char *addr, int port);
int anetTcpNonBlockConnect(char *err, char *addr, int port);
int anetRead(int fd, char *buf, int count);
int anetResolve(char *err, char *host, char *ipbuf);
int anetTcpServer(char *err, int port, char *bindaddr);
int anetAccept(char *err, int serversock, char *ip, int *port);
int anetWrite(int fd, char *buf, int count);
int anetNonBlock(char *err, int fd);
int anetTcpNoDelay(char *err, int fd);
int anetTcpKeepAlive(char *err, int fd);
# 65 "redis.c" 2
# 1 "dict.h" 1
# 45 "dict.h"
typedef struct dictEntry {
    void *key;
    void *val;
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

typedef struct dict {
    dictEntry **table;
    dictType *type;
    unsigned long size;
    unsigned long sizemask;
    unsigned long used;
    void *privdata;
} dict;

typedef struct dictIterator {
    dict *ht;
    int index;
    dictEntry *entry, *nextEntry;
} dictIterator;
# 114 "dict.h"
dict *dictCreate(dictType *type, void *privDataPtr);
int dictExpand(dict *ht, unsigned long size);
int dictAdd(dict *ht, void *key, void *val);
int dictReplace(dict *ht, void *key, void *val);
int dictDelete(dict *ht, const void *key);
int dictDeleteNoFree(dict *ht, const void *key);
void dictRelease(dict *ht);
dictEntry * dictFind(dict *ht, const void *key);
int dictResize(dict *ht);
dictIterator *dictGetIterator(dict *ht);
dictEntry *dictNext(dictIterator *iter);
void dictReleaseIterator(dictIterator *iter);
dictEntry *dictGetRandomKey(dict *ht);
void dictPrintStats(dict *ht);
unsigned int dictGenHashFunction(const unsigned char *buf, int len);
void dictEmpty(dict *ht);


extern dictType dictTypeHeapStringCopyKey;
extern dictType dictTypeHeapStrings;
extern dictType dictTypeHeapStringCopyKeyValue;
# 66 "redis.c" 2
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
    unsigned int len;
    listIter iter;
} list;
# 74 "adlist.h"
list *listCreate(void);
void listRelease(list *list);
list *listAddNodeHead(list *list, void *value);
list *listAddNodeTail(list *list, void *value);
void listDelNode(list *list, listNode *node);
listIter *listGetIterator(list *list, int direction);
listNode *listNext(listIter *iter);
void listReleaseIterator(listIter *iter);
list *listDup(list *orig);
listNode *listSearchKey(list *list, void *key);
listNode *listIndex(list *list, int index);
void listRewind(list *list);
void listRewindTail(list *list);
listNode *listYield(list *list);
# 67 "redis.c" 2
# 1 "zmalloc.h" 1
# 34 "zmalloc.h"
void *zmalloc(size_t size);
void *zrealloc(void *ptr, size_t size);
void zfree(void *ptr);
char *zstrdup(const char *s);
size_t zmalloc_used_memory(void);
# 68 "redis.c" 2
# 1 "lzf.h" 1
# 76 "lzf.h"
unsigned int
lzf_compress (const void *const in_data, unsigned int in_len,
              void *out_data, unsigned int out_len);
# 95 "lzf.h"
unsigned int
lzf_decompress (const void *const in_data, unsigned int in_len,
                void *out_data, unsigned int out_len);
# 69 "redis.c" 2
# 1 "pqsort.h" 1
# 11 "pqsort.h"
void
pqsort(void *a, size_t n, size_t es,
    int (*cmp) (const void *, const void *), size_t lrange, size_t rrange);
# 70 "redis.c" 2
# 188 "redis.c"
typedef struct redisObject {
    void *ptr;
    unsigned char type;
    unsigned char encoding;
    unsigned char notused[2];
    int refcount;
} robj;

typedef struct redisDb {
    dict *dict;
    dict *expires;
    int id;
} redisDb;



typedef struct redisClient {
    int fd;
    redisDb *db;
    int dictid;
    sds querybuf;
    robj **argv;
    int argc;
    int bulklen;
    list *reply;
    int sentlen;
    time_t lastinteraction;
    int flags;
    int slaveseldb;
    int authenticated;
    int replstate;
    int repldbfd;
    long repldboff;
    off_t repldbsize;
} redisClient;

struct saveparam {
    time_t seconds;
    int changes;
};


struct redisServer {
    int port;
    int fd;
    redisDb *db;
    dict *sharingpool;
    unsigned int sharingpoolsize;
    long long dirty;
    list *clients;
    list *slaves, *monitors;
    char neterr[256];
    aeEventLoop *el;
    int cronloops;
    list *objfreelist;
    time_t lastsave;
    size_t usedmemory;

    time_t stat_starttime;
    long long stat_numcommands;
    long long stat_numconnections;

    int verbosity;
    int glueoutputbuf;
    int maxidletime;
    int dbnum;
    int daemonize;
    char *pidfile;
    int bgsaveinprogress;
    pid_t bgsavechildpid;
    struct saveparam *saveparams;
    int saveparamslen;
    char *logfile;
    char *bindaddr;
    char *dbfilename;
    char *requirepass;
    int shareobjects;

    int isslave;
    char *masterhost;
    int masterport;
    redisClient *master;
    int replstate;
    unsigned int maxclients;
    unsigned int maxmemory;


    int sort_desc;
    int sort_alpha;
    int sort_bypattern;
};

typedef void redisCommandProc(redisClient *c);
struct redisCommand {
    char *name;
    redisCommandProc *proc;
    int arity;
    int flags;
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

struct sharedObjectsStruct {
    robj *crlf, *ok, *err, *emptybulk, *czero, *cone, *pong, *space,
    *colon, *nullbulk, *nullmultibulk,
    *emptymultibulk, *wrongtypeerr, *nokeyerr, *syntaxerr, *sameobjecterr,
    *outofrangeerr, *plus,
    *select0, *select1, *select2, *select3, *select4,
    *select5, *select6, *select7, *select8, *select9;
} shared;



static void freeStringObject(robj *o);
static void freeListObject(robj *o);
static void freeSetObject(robj *o);
static void decrRefCount(void *o);
static robj *createObject(int type, void *ptr);
static void freeClient(redisClient *c);
static int rdbLoad(char *filename);
static void addReply(redisClient *c, robj *obj);
static void addReplySds(redisClient *c, sds s);
static void incrRefCount(robj *o);
static int rdbSaveBackground(char *filename);
static robj *createStringObject(char *ptr, size_t len);
static void replicationFeedSlaves(list *slaves, struct redisCommand *cmd, int dictid, robj **argv, int argc);
static int syncWithMaster(void);
static robj *tryObjectSharing(robj *o);
static int tryObjectEncoding(robj *o);
static robj *getDecodedObject(const robj *o);
static int removeExpire(redisDb *db, robj *key);
static int expireIfNeeded(redisDb *db, robj *key);
static int deleteIfVolatile(redisDb *db, robj *key);
static int deleteKey(redisDb *db, robj *key);
static time_t getExpire(redisDb *db, robj *key);
static int setExpire(redisDb *db, robj *key, time_t when);
static void updateSlavesWaitingBgsave(int bgsaveerr);
static void freeMemoryIfNeeded(void);
static int processCommand(redisClient *c);
static void setupSigSegvAction(void);
static void rdbRemoveTempFile(pid_t childpid);

static void authCommand(redisClient *c);
static void pingCommand(redisClient *c);
static void echoCommand(redisClient *c);
static void setCommand(redisClient *c);
static void setnxCommand(redisClient *c);
static void getCommand(redisClient *c);
static void delCommand(redisClient *c);
static void existsCommand(redisClient *c);
static void incrCommand(redisClient *c);
static void decrCommand(redisClient *c);
static void incrbyCommand(redisClient *c);
static void decrbyCommand(redisClient *c);
static void selectCommand(redisClient *c);
static void randomkeyCommand(redisClient *c);
static void keysCommand(redisClient *c);
static void dbsizeCommand(redisClient *c);
static void lastsaveCommand(redisClient *c);
static void saveCommand(redisClient *c);
static void bgsaveCommand(redisClient *c);
static void shutdownCommand(redisClient *c);
static void moveCommand(redisClient *c);
static void renameCommand(redisClient *c);
static void renamenxCommand(redisClient *c);
static void lpushCommand(redisClient *c);
static void rpushCommand(redisClient *c);
static void lpopCommand(redisClient *c);
static void rpopCommand(redisClient *c);
static void llenCommand(redisClient *c);
static void lindexCommand(redisClient *c);
static void lrangeCommand(redisClient *c);
static void ltrimCommand(redisClient *c);
static void typeCommand(redisClient *c);
static void lsetCommand(redisClient *c);
static void saddCommand(redisClient *c);
static void sremCommand(redisClient *c);
static void smoveCommand(redisClient *c);
static void sismemberCommand(redisClient *c);
static void scardCommand(redisClient *c);
static void spopCommand(redisClient *c);
static void sinterCommand(redisClient *c);
static void sinterstoreCommand(redisClient *c);
static void sunionCommand(redisClient *c);
static void sunionstoreCommand(redisClient *c);
static void sdiffCommand(redisClient *c);
static void sdiffstoreCommand(redisClient *c);
static void syncCommand(redisClient *c);
static void flushdbCommand(redisClient *c);
static void flushallCommand(redisClient *c);
static void sortCommand(redisClient *c);
static void lremCommand(redisClient *c);
static void infoCommand(redisClient *c);
static void mgetCommand(redisClient *c);
static void monitorCommand(redisClient *c);
static void expireCommand(redisClient *c);
static void getSetCommand(redisClient *c);
static void ttlCommand(redisClient *c);
static void slaveofCommand(redisClient *c);
static void debugCommand(redisClient *c);



static struct redisServer server;
static struct redisCommand cmdTable[] = {
    {"get",getCommand,2,2},
    {"set",setCommand,3,1|4},
    {"setnx",setnxCommand,3,1|4},
    {"del",delCommand,-2,2},
    {"exists",existsCommand,2,2},
    {"incr",incrCommand,2,2|4},
    {"decr",decrCommand,2,2|4},
    {"mget",mgetCommand,-2,2},
    {"rpush",rpushCommand,3,1|4},
    {"lpush",lpushCommand,3,1|4},
    {"rpop",rpopCommand,2,2},
    {"lpop",lpopCommand,2,2},
    {"llen",llenCommand,2,2},
    {"lindex",lindexCommand,3,2},
    {"lset",lsetCommand,4,1|4},
    {"lrange",lrangeCommand,4,2},
    {"ltrim",ltrimCommand,4,2},
    {"lrem",lremCommand,4,1},
    {"sadd",saddCommand,3,1|4},
    {"srem",sremCommand,3,1},
    {"smove",smoveCommand,4,1},
    {"sismember",sismemberCommand,3,1},
    {"scard",scardCommand,2,2},
    {"spop",spopCommand,2,2},
    {"sinter",sinterCommand,-2,2|4},
    {"sinterstore",sinterstoreCommand,-3,2|4},
    {"sunion",sunionCommand,-2,2|4},
    {"sunionstore",sunionstoreCommand,-3,2|4},
    {"sdiff",sdiffCommand,-2,2|4},
    {"sdiffstore",sdiffstoreCommand,-3,2|4},
    {"smembers",sinterCommand,2,2},
    {"incrby",incrbyCommand,3,2|4},
    {"decrby",decrbyCommand,3,2|4},
    {"getset",getSetCommand,3,1|4},
    {"randomkey",randomkeyCommand,1,2},
    {"select",selectCommand,2,2},
    {"move",moveCommand,3,2},
    {"rename",renameCommand,3,2},
    {"renamenx",renamenxCommand,3,2},
    {"expire",expireCommand,3,2},
    {"keys",keysCommand,2,2},
    {"dbsize",dbsizeCommand,1,2},
    {"auth",authCommand,2,2},
    {"ping",pingCommand,1,2},
    {"echo",echoCommand,2,1},
    {"save",saveCommand,1,2},
    {"bgsave",bgsaveCommand,1,2},
    {"shutdown",shutdownCommand,1,2},
    {"lastsave",lastsaveCommand,1,2},
    {"type",typeCommand,2,2},
    {"sync",syncCommand,1,2},
    {"flushdb",flushdbCommand,1,2},
    {"flushall",flushallCommand,1,2},
    {"sort",sortCommand,-2,2|4},
    {"info",infoCommand,1,2},
    {"monitor",monitorCommand,1,2},
    {"ttl",ttlCommand,2,2},
    {"slaveof",slaveofCommand,3,2},
    {"debug",debugCommand,-2,2},
    {((void *)0),((void *)0),0,0}
};



int stringmatchlen(const char *pattern, int patternLen,
        const char *string, int stringLen, int nocase)
{
    while(patternLen) {
        switch(pattern[0]) {
        case '*':
            while (pattern[1] == '*') {
                pattern++;
                patternLen--;
            }
            if (patternLen == 1)
                return 1;
            while(stringLen) {
                if (stringmatchlen(pattern+1, patternLen-1,
                            string, stringLen, nocase))
                    return 1;
                string++;
                stringLen--;
            }
            return 0;
            break;
        case '?':
            if (stringLen == 0)
                return 0;
            string++;
            stringLen--;
            break;
        case '[':
        {
            int not, match;

            pattern++;
            patternLen--;
            not = pattern[0] == '^';
            if (not) {
                pattern++;
                patternLen--;
            }
            match = 0;
            while(1) {
                if (pattern[0] == '\\') {
                    pattern++;
                    patternLen--;
                    if (pattern[0] == string[0])
                        match = 1;
                } else if (pattern[0] == ']') {
                    break;
                } else if (patternLen == 0) {
                    pattern--;
                    patternLen++;
                    break;
                } else if (pattern[1] == '-' && patternLen >= 3) {
                    int start = pattern[0];
                    int end = pattern[2];
                    int c = string[0];
                    if (start > end) {
                        int t = start;
                        start = end;
                        end = t;
                    }
                    if (nocase) {
                        start = tolower(start);
                        end = tolower(end);
                        c = tolower(c);
                    }
                    pattern += 2;
                    patternLen -= 2;
                    if (c >= start && c <= end)
                        match = 1;
                } else {
                    if (!nocase) {
                        if (pattern[0] == string[0])
                            match = 1;
                    } else {
                        if (tolower((int)pattern[0]) == tolower((int)string[0]))
                            match = 1;
                    }
                }
                pattern++;
                patternLen--;
            }
            if (not)
                match = !match;
            if (!match)
                return 0;
            string++;
            stringLen--;
            break;
        }
        case '\\':
            if (patternLen >= 2) {
                pattern++;
                patternLen--;
            }

        default:
            if (!nocase) {
                if (pattern[0] != string[0])
                    return 0;
            } else {
                if (tolower((int)pattern[0]) != tolower((int)string[0]))
                    return 0;
            }
            string++;
            stringLen--;
            break;
        }
        pattern++;
        patternLen--;
        if (stringLen == 0) {
            while(*pattern == '*') {
                pattern++;
                patternLen--;
            }
            break;
        }
    }
    if (patternLen == 0 && stringLen == 0)
        return 1;
    return 0;
}

static void redisLog(int level, const char *fmt, ...) {
    va_list ap;
    FILE *fp;

    fp = (server.logfile == ((void *)0)) ? stdout : fopen(server.logfile,"a");
    if (!fp) return;

    __builtin_va_start(ap,fmt);
    if (level >= server.verbosity) {
        char *c = ".-*";
        char buf[64];
        time_t now;

        now = time(((void *)0));
        strftime(buf,64,"%d %b %H:%M:%S",gmtime(&now));
        fprintf(fp,"%s %c ",buf,c[level]);
        vfprintf(fp, fmt, ap);
        fprintf(fp,"\n");
        fflush(fp);
    }
    __builtin_va_end(ap);

    if (server.logfile) fclose(fp);
}







static int sdsDictKeyCompare(void *privdata, const void *key1,
        const void *key2)
{
    int l1,l2;
    ((void) privdata);

    l1 = sdslen((sds)key1);
    l2 = sdslen((sds)key2);
    if (l1 != l2) return 0;
    return memcmp(key1, key2, l1) == 0;
}

static void dictRedisObjectDestructor(void *privdata, void *val)
{
    ((void) privdata);

    decrRefCount(val);
}

static int dictObjKeyCompare(void *privdata, const void *key1,
        const void *key2)
{
    const robj *o1 = key1, *o2 = key2;
    return sdsDictKeyCompare(privdata,o1->ptr,o2->ptr);
}

static unsigned int dictObjHash(const void *key) {
    const robj *o = key;
    return dictGenHashFunction(o->ptr, sdslen((sds)o->ptr));
}

static int dictEncObjKeyCompare(void *privdata, const void *key1,
        const void *key2)
{
    const robj *o1 = key1, *o2 = key2;

    if (o1->encoding == 0 &&
        o2->encoding == 0)
        return sdsDictKeyCompare(privdata,o1->ptr,o2->ptr);
    else {
        robj *dec1, *dec2;
        int cmp;

        dec1 = o1->encoding != 0 ?
            getDecodedObject(o1) : (robj*)o1;
        dec2 = o2->encoding != 0 ?
            getDecodedObject(o2) : (robj*)o2;
        cmp = sdsDictKeyCompare(privdata,dec1->ptr,dec2->ptr);
        if (dec1 != o1) decrRefCount(dec1);
        if (dec2 != o2) decrRefCount(dec2);
        return cmp;
    }
}

static unsigned int dictEncObjHash(const void *key) {
    const robj *o = key;

    if (o->encoding == 0)
        return dictGenHashFunction(o->ptr, sdslen((sds)o->ptr));
    else {
        robj *dec = getDecodedObject(o);
        unsigned int hash = dictGenHashFunction(dec->ptr, sdslen((sds)dec->ptr));
        decrRefCount(dec);
        return hash;
    }
}

static dictType setDictType = {
    dictEncObjHash,
    ((void *)0),
    ((void *)0),
    dictEncObjKeyCompare,
    dictRedisObjectDestructor,
    ((void *)0)
};

static dictType hashDictType = {
    dictObjHash,
    ((void *)0),
    ((void *)0),
    dictObjKeyCompare,
    dictRedisObjectDestructor,
    dictRedisObjectDestructor
};
# 718 "redis.c"
static void oom(const char *msg) {
    fprintf(stderr, "%s: Out of memory\n",msg);
    fflush(stderr);
    sleep(1);
    abort();
}


static void closeTimedoutClients(void) {
    redisClient *c;
    listNode *ln;
    time_t now = time(((void *)0));

    listRewind(server.clients);
    while ((ln = listYield(server.clients)) != ((void *)0)) {
        c = ((ln)->value);
        if (!(c->flags & 2) &&
            !(c->flags & 4) &&
             (now - c->lastinteraction > server.maxidletime)) {
            redisLog(0,"Closing idle client");
            freeClient(c);
        }
    }
}

static int htNeedsResize(dict *dict) {
    long long size, used;

    size = ((dict)->size);
    used = ((dict)->used);
    return (size && used && size > 4 &&
            (used*100/size < 10));
}



static void tryResizeHashTables(void) {
    int j;

    for (j = 0; j < server.dbnum; j++) {
        if (htNeedsResize(server.db[j].dict)) {
            redisLog(0,"The hash table %d is too sparse, resize it...",j);
            dictResize(server.db[j].dict);
            redisLog(0,"Hash table %d resized.",j);
        }
        if (htNeedsResize(server.db[j].expires))
            dictResize(server.db[j].expires);
    }
}

static int serverCron(struct aeEventLoop *eventLoop, long long id, void *clientData) {
    int j, loops = server.cronloops++;
    ((void) eventLoop);
    ((void) id);
    ((void) clientData);


    server.usedmemory = zmalloc_used_memory();


    for (j = 0; j < server.dbnum; j++) {
        long long size, used, vkeys;

        size = ((server.db[j].dict)->size);
        used = ((server.db[j].dict)->used);
        vkeys = ((server.db[j].expires)->used);
        if (!(loops % 5) && (used || vkeys)) {
            redisLog(0,"DB %d: %lld keys (%lld volatile) in %lld slots HT.",j,used,vkeys,size);

        }
    }







    if (!server.bgsaveinprogress) tryResizeHashTables();


    if (!(loops % 5)) {
        redisLog(0,"%d clients connected (%d slaves), %zu bytes in use, %d shared objects",
            ((server.clients)->len)-((server.slaves)->len),
            ((server.slaves)->len),
            server.usedmemory,
            ((server.sharingpool)->used));
    }


    if (server.maxidletime && !(loops % 10))
        closeTimedoutClients();


    if (server.bgsaveinprogress) {
        int statloc;
        if (wait4(-1,&statloc,1,((void *)0))) {
            int exitcode = ((((__extension__ (((union { __typeof(statloc) __in; int __i; }) { .__in = (statloc) }).__i))) & 0xff00) >> 8);
            int bysignal = (((signed char) ((((__extension__ (((union { __typeof(statloc) __in; int __i; }) { .__in = (statloc) }).__i))) & 0x7f) + 1) >> 1) > 0);

            if (!bysignal && exitcode == 0) {
                redisLog(1,
                    "Background saving terminated with success");
                server.dirty = 0;
                server.lastsave = time(((void *)0));
            } else if (!bysignal && exitcode != 0) {
                redisLog(2, "Background saving error");
            } else {
                redisLog(2,
                    "Background saving terminated by signal");
                rdbRemoveTempFile(server.bgsavechildpid);
            }
            server.bgsaveinprogress = 0;
            server.bgsavechildpid = -1;
            updateSlavesWaitingBgsave(exitcode == 0 ? 0 : -1);
        }
    } else {


         time_t now = time(((void *)0));
         for (j = 0; j < server.saveparamslen; j++) {
            struct saveparam *sp = server.saveparams+j;

            if (server.dirty >= sp->changes &&
                now-server.lastsave > sp->seconds) {
                redisLog(1,"%d changes in %d seconds. Saving...",
                    sp->changes, sp->seconds);
                rdbSaveBackground(server.dbfilename);
                break;
            }
         }
    }


    for (j = 0; j < server.dbnum; j++) {
        redisDb *db = server.db+j;
        int num = ((db->expires)->used);

        if (num) {
            time_t now = time(((void *)0));

            if (num > 100)
                num = 100;
            while (num--) {
                dictEntry *de;
                time_t t;

                if ((de = dictGetRandomKey(db->expires)) == ((void *)0)) break;
                t = (time_t) ((de)->val);
                if (now > t) {
                    deleteKey(db,((de)->key));
                }
            }
        }
    }


    if (server.replstate == 1) {
        redisLog(1,"Connecting to MASTER...");
        if (syncWithMaster() == 0) {
            redisLog(1,"MASTER <-> SLAVE sync succeeded");
        }
    }
    return 1000;
}

static void createSharedObjects(void) {
    shared.crlf = createObject(0,sdsnew("\r\n"));
    shared.ok = createObject(0,sdsnew("+OK\r\n"));
    shared.err = createObject(0,sdsnew("-ERR\r\n"));
    shared.emptybulk = createObject(0,sdsnew("$0\r\n\r\n"));
    shared.czero = createObject(0,sdsnew(":0\r\n"));
    shared.cone = createObject(0,sdsnew(":1\r\n"));
    shared.nullbulk = createObject(0,sdsnew("$-1\r\n"));
    shared.nullmultibulk = createObject(0,sdsnew("*-1\r\n"));
    shared.emptymultibulk = createObject(0,sdsnew("*0\r\n"));

    shared.pong = createObject(0,sdsnew("+PONG\r\n"));
    shared.wrongtypeerr = createObject(0,sdsnew(
        "-ERR Operation against a key holding the wrong kind of value\r\n"));
    shared.nokeyerr = createObject(0,sdsnew(
        "-ERR no such key\r\n"));
    shared.syntaxerr = createObject(0,sdsnew(
        "-ERR syntax error\r\n"));
    shared.sameobjecterr = createObject(0,sdsnew(
        "-ERR source and destination objects are the same\r\n"));
    shared.outofrangeerr = createObject(0,sdsnew(
        "-ERR index out of range\r\n"));
    shared.space = createObject(0,sdsnew(" "));
    shared.colon = createObject(0,sdsnew(":"));
    shared.plus = createObject(0,sdsnew("+"));
    shared.select0 = createStringObject("select 0\r\n",10);
    shared.select1 = createStringObject("select 1\r\n",10);
    shared.select2 = createStringObject("select 2\r\n",10);
    shared.select3 = createStringObject("select 3\r\n",10);
    shared.select4 = createStringObject("select 4\r\n",10);
    shared.select5 = createStringObject("select 5\r\n",10);
    shared.select6 = createStringObject("select 6\r\n",10);
    shared.select7 = createStringObject("select 7\r\n",10);
    shared.select8 = createStringObject("select 8\r\n",10);
    shared.select9 = createStringObject("select 9\r\n",10);
}

static void appendServerSaveParams(time_t seconds, int changes) {
    server.saveparams = zrealloc(server.saveparams,sizeof(struct saveparam)*(server.saveparamslen+1));
    if (server.saveparams == ((void *)0)) oom("appendServerSaveParams");
    server.saveparams[server.saveparamslen].seconds = seconds;
    server.saveparams[server.saveparamslen].changes = changes;
    server.saveparamslen++;
}

static void ResetServerSaveParams() {
    zfree(server.saveparams);
    server.saveparams = ((void *)0);
    server.saveparamslen = 0;
}

static void initServerConfig() {
    server.dbnum = 16;
    server.port = 6379;
    server.verbosity = 0;
    server.maxidletime = (60*5);
    server.saveparams = ((void *)0);
    server.logfile = ((void *)0);
    server.bindaddr = ((void *)0);
    server.glueoutputbuf = 1;
    server.daemonize = 0;
    server.pidfile = "/var/run/redis.pid";
    server.dbfilename = "dump.rdb";
    server.requirepass = ((void *)0);
    server.shareobjects = 0;
    server.sharingpoolsize = 1024;
    server.maxclients = 0;
    server.maxmemory = 0;
    ResetServerSaveParams();

    appendServerSaveParams(60*60,1);
    appendServerSaveParams(300,100);
    appendServerSaveParams(60,10000);

    server.isslave = 0;
    server.masterhost = ((void *)0);
    server.masterport = 6379;
    server.master = ((void *)0);
    server.replstate = 0;
}

static void initServer() {
    int j;

    signal(1, ((__sighandler_t) 1));
    signal(13, ((__sighandler_t) 1));
    setupSigSegvAction();

    server.clients = listCreate();
    server.slaves = listCreate();
    server.monitors = listCreate();
    server.objfreelist = listCreate();
    createSharedObjects();
    server.el = aeCreateEventLoop();
    server.db = zmalloc(sizeof(redisDb)*server.dbnum);
    server.sharingpool = dictCreate(&setDictType,((void *)0));
    if (!server.db || !server.clients || !server.slaves || !server.monitors || !server.el || !server.objfreelist)
        oom("server initialization");
    server.fd = anetTcpServer(server.neterr, server.port, server.bindaddr);
    if (server.fd == -1) {
        redisLog(2, "Opening TCP port: %s", server.neterr);
        exit(1);
    }
    for (j = 0; j < server.dbnum; j++) {
        server.db[j].dict = dictCreate(&hashDictType,((void *)0));
        server.db[j].expires = dictCreate(&setDictType,((void *)0));
        server.db[j].id = j;
    }
    server.cronloops = 0;
    server.bgsaveinprogress = 0;
    server.bgsavechildpid = -1;
    server.lastsave = time(((void *)0));
    server.dirty = 0;
    server.usedmemory = 0;
    server.stat_numcommands = 0;
    server.stat_numconnections = 0;
    server.stat_starttime = time(((void *)0));
    aeCreateTimeEvent(server.el, 1000, serverCron, ((void *)0), ((void *)0));
}


static long long emptyDb() {
    int j;
    long long removed = 0;

    for (j = 0; j < server.dbnum; j++) {
        removed += ((server.db[j].dict)->used);
        dictEmpty(server.db[j].dict);
        dictEmpty(server.db[j].expires);
    }
    return removed;
}

static int yesnotoi(char *s) {
    if (!strcasecmp(s,"yes")) return 1;
    else if (!strcasecmp(s,"no")) return 0;
    else return -1;
}



static void loadServerConfig(char *filename) {
    FILE *fp;
    char buf[1024 +1], *err = ((void *)0);
    int linenum = 0;
    sds line = ((void *)0);

    if (filename[0] == '-' && filename[1] == '\0')
        fp = stdin;
    else {
        if ((fp = fopen(filename,"r")) == ((void *)0)) {
            redisLog(2,"Fatal error, can't open config file");
            exit(1);
        }
    }

    while(fgets(buf,1024 +1,fp) != ((void *)0)) {
        sds *argv;
        int argc, j;

        linenum++;
        line = sdsnew(buf);
        line = sdstrim(line," \t\r\n");


        if (line[0] == '#' || line[0] == '\0') {
            sdsfree(line);
            continue;
        }


        argv = sdssplitlen(line,sdslen(line)," ",1,&argc);
        sdstolower(argv[0]);


        if (!strcasecmp(argv[0],"timeout") && argc == 2) {
            server.maxidletime = atoi(argv[1]);
            if (server.maxidletime < 0) {
                err = "Invalid timeout value"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"port") && argc == 2) {
            server.port = atoi(argv[1]);
            if (server.port < 1 || server.port > 65535) {
                err = "Invalid port"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"bind") && argc == 2) {
            server.bindaddr = zstrdup(argv[1]);
        } else if (!strcasecmp(argv[0],"save") && argc == 3) {
            int seconds = atoi(argv[1]);
            int changes = atoi(argv[2]);
            if (seconds < 1 || changes < 0) {
                err = "Invalid save parameters"; goto loaderr;
            }
            appendServerSaveParams(seconds,changes);
        } else if (!strcasecmp(argv[0],"dir") && argc == 2) {
            if (chdir(argv[1]) == -1) {
                redisLog(2,"Can't chdir to '%s': %s",
                    argv[1], strerror((*__errno_location ())));
                exit(1);
            }
        } else if (!strcasecmp(argv[0],"loglevel") && argc == 2) {
            if (!strcasecmp(argv[1],"debug")) server.verbosity = 0;
            else if (!strcasecmp(argv[1],"notice")) server.verbosity = 1;
            else if (!strcasecmp(argv[1],"warning")) server.verbosity = 2;
            else {
                err = "Invalid log level. Must be one of debug, notice, warning";
                goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"logfile") && argc == 2) {
            FILE *logfp;

            server.logfile = zstrdup(argv[1]);
            if (!strcasecmp(server.logfile,"stdout")) {
                zfree(server.logfile);
                server.logfile = ((void *)0);
            }
            if (server.logfile) {


                logfp = fopen(server.logfile,"a");
                if (logfp == ((void *)0)) {
                    err = sdscatprintf(sdsempty(),
                        "Can't open the log file: %s", strerror((*__errno_location ())));
                    goto loaderr;
                }
                fclose(logfp);
            }
        } else if (!strcasecmp(argv[0],"databases") && argc == 2) {
            server.dbnum = atoi(argv[1]);
            if (server.dbnum < 1) {
                err = "Invalid number of databases"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"maxclients") && argc == 2) {
            server.maxclients = atoi(argv[1]);
        } else if (!strcasecmp(argv[0],"maxmemory") && argc == 2) {
            server.maxmemory = atoi(argv[1]);
        } else if (!strcasecmp(argv[0],"slaveof") && argc == 3) {
            server.masterhost = sdsnew(argv[1]);
            server.masterport = atoi(argv[2]);
            server.replstate = 1;
        } else if (!strcasecmp(argv[0],"glueoutputbuf") && argc == 2) {
            if ((server.glueoutputbuf = yesnotoi(argv[1])) == -1) {
                err = "argument must be 'yes' or 'no'"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"shareobjects") && argc == 2) {
            if ((server.shareobjects = yesnotoi(argv[1])) == -1) {
                err = "argument must be 'yes' or 'no'"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"shareobjectspoolsize") && argc == 2) {
            server.sharingpoolsize = atoi(argv[1]);
            if (server.sharingpoolsize < 1) {
                err = "invalid object sharing pool size"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"daemonize") && argc == 2) {
            if ((server.daemonize = yesnotoi(argv[1])) == -1) {
                err = "argument must be 'yes' or 'no'"; goto loaderr;
            }
        } else if (!strcasecmp(argv[0],"requirepass") && argc == 2) {
          server.requirepass = zstrdup(argv[1]);
        } else if (!strcasecmp(argv[0],"pidfile") && argc == 2) {
          server.pidfile = zstrdup(argv[1]);
        } else if (!strcasecmp(argv[0],"dbfilename") && argc == 2) {
          server.dbfilename = zstrdup(argv[1]);
        } else {
            err = "Bad directive or wrong number of arguments"; goto loaderr;
        }
        for (j = 0; j < argc; j++)
            sdsfree(argv[j]);
        zfree(argv);
        sdsfree(line);
    }
    if (fp != stdin) fclose(fp);
    return;

loaderr:
    fprintf(stderr, "\n*** FATAL CONFIG FILE ERROR ***\n");
    fprintf(stderr, "Reading the configuration file, at line %d\n", linenum);
    fprintf(stderr, ">>> '%s'\n", line);
    fprintf(stderr, "%s\n", err);
    exit(1);
}

static void freeClientArgv(redisClient *c) {
    int j;

    for (j = 0; j < c->argc; j++)
        decrRefCount(c->argv[j]);
    c->argc = 0;
}

static void freeClient(redisClient *c) {
    listNode *ln;

    aeDeleteFileEvent(server.el,c->fd,1);
    aeDeleteFileEvent(server.el,c->fd,2);
    sdsfree(c->querybuf);
    listRelease(c->reply);
    freeClientArgv(c);
    close(c->fd);
    ln = listSearchKey(server.clients,c);
    ((ln != ((void *)0)) ? (void) (0) : __assert_fail ("ln != ((void *)0)", "redis.c", 1184, __PRETTY_FUNCTION__));
    listDelNode(server.clients,ln);
    if (c->flags & 2) {
        if (c->replstate == 5 && c->repldbfd != -1)
            close(c->repldbfd);
        list *l = (c->flags & 8) ? server.monitors : server.slaves;
        ln = listSearchKey(l,c);
        ((ln != ((void *)0)) ? (void) (0) : __assert_fail ("ln != ((void *)0)", "redis.c", 1191, __PRETTY_FUNCTION__));
        listDelNode(l,ln);
    }
    if (c->flags & 4) {
        server.master = ((void *)0);
        server.replstate = 1;
    }
    zfree(c->argv);
    zfree(c);
}

static void glueReplyBuffersIfNeeded(redisClient *c) {
    int totlen = 0;
    listNode *ln;
    robj *o;

    listRewind(c->reply);
    while((ln = listYield(c->reply))) {
        o = ln->value;
        totlen += sdslen(o->ptr);


        if (totlen > 1024) return;
    }
    if (totlen > 0) {
        char buf[1024];
        int copylen = 0;

        listRewind(c->reply);
        while((ln = listYield(c->reply))) {
            o = ln->value;
            memcpy(buf+copylen,o->ptr,sdslen(o->ptr));
            copylen += sdslen(o->ptr);
            listDelNode(c->reply,ln);
        }

        o = createObject(0,sdsnewlen(buf,totlen));
        if (!listAddNodeTail(c->reply,o)) oom("listAddNodeTail");
    }
}

static void sendReplyToClient(aeEventLoop *el, int fd, void *privdata, int mask) {
    redisClient *c = privdata;
    int nwritten = 0, totwritten = 0, objlen;
    robj *o;
    ((void) el);
    ((void) mask);

    if (server.glueoutputbuf && ((c->reply)->len) > 1)
        glueReplyBuffersIfNeeded(c);
    while(((c->reply)->len)) {
        o = ((((c->reply)->head))->value);
        objlen = sdslen(o->ptr);

        if (objlen == 0) {
            listDelNode(c->reply,((c->reply)->head));
            continue;
        }

        if (c->flags & 4) {

            nwritten = objlen - c->sentlen;
        } else {
            nwritten = write(fd, ((char*)o->ptr)+c->sentlen, objlen - c->sentlen);
            if (nwritten <= 0) break;
        }
        c->sentlen += nwritten;
        totwritten += nwritten;

        if (c->sentlen == objlen) {
            listDelNode(c->reply,((c->reply)->head));
            c->sentlen = 0;
        }





        if (totwritten > (1024*64)) break;
    }
    if (nwritten == -1) {
        if ((*__errno_location ()) == 11) {
            nwritten = 0;
        } else {
            redisLog(0,
                "Error writing to client: %s", strerror((*__errno_location ())));
            freeClient(c);
            return;
        }
    }
    if (totwritten > 0) c->lastinteraction = time(((void *)0));
    if (((c->reply)->len) == 0) {
        c->sentlen = 0;
        aeDeleteFileEvent(server.el,c->fd,2);
    }
}

static struct redisCommand *lookupCommand(char *name) {
    int j = 0;
    while(cmdTable[j].name != ((void *)0)) {
        if (!strcasecmp(name,cmdTable[j].name)) return &cmdTable[j];
        j++;
    }
    return ((void *)0);
}


static void resetClient(redisClient *c) {
    freeClientArgv(c);
    c->bulklen = -1;
}
# 1311 "redis.c"
static int processCommand(redisClient *c) {
    struct redisCommand *cmd;
    long long dirty;


    if (server.maxmemory) freeMemoryIfNeeded();



    if (!strcasecmp(c->argv[0]->ptr,"quit")) {
        freeClient(c);
        return 0;
    }
    cmd = lookupCommand(c->argv[0]->ptr);
    if (!cmd) {
        addReplySds(c,sdsnew("-ERR unknown command\r\n"));
        resetClient(c);
        return 1;
    } else if ((cmd->arity > 0 && cmd->arity != c->argc) ||
               (c->argc < -cmd->arity)) {
        addReplySds(c,sdsnew("-ERR wrong number of arguments\r\n"));
        resetClient(c);
        return 1;
    } else if (server.maxmemory && cmd->flags & 4 && zmalloc_used_memory() > server.maxmemory) {
        addReplySds(c,sdsnew("-ERR command not allowed when used memory > 'maxmemory'\r\n"));
        resetClient(c);
        return 1;
    } else if (cmd->flags & 1 && c->bulklen == -1) {
        int bulklen = atoi(c->argv[c->argc-1]->ptr);

        decrRefCount(c->argv[c->argc-1]);
        if (bulklen < 0 || bulklen > 1024*1024*1024) {
            c->argc--;
            addReplySds(c,sdsnew("-ERR invalid bulk write count\r\n"));
            resetClient(c);
            return 1;
        }
        c->argc--;
        c->bulklen = bulklen+2;


        if ((signed)sdslen(c->querybuf) >= c->bulklen) {
            c->argv[c->argc] = createStringObject(c->querybuf,c->bulklen-2);
            c->argc++;
            c->querybuf = sdsrange(c->querybuf,c->bulklen,-1);
        } else {
            return 1;
        }
    }

    if (server.shareobjects) {
        int j;
        for(j = 1; j < c->argc; j++)
            c->argv[j] = tryObjectSharing(c->argv[j]);
    }

    if (cmd->flags & 1)
        tryObjectEncoding(c->argv[c->argc-1]);


    if (server.requirepass && !c->authenticated && cmd->proc != authCommand) {
        addReplySds(c,sdsnew("-ERR operation not permitted\r\n"));
        resetClient(c);
        return 1;
    }


    dirty = server.dirty;
    cmd->proc(c);
    if (server.dirty-dirty != 0 && ((server.slaves)->len))
        replicationFeedSlaves(server.slaves,cmd,c->db->id,c->argv,c->argc);
    if (((server.monitors)->len))
        replicationFeedSlaves(server.monitors,cmd,c->db->id,c->argv,c->argc);
    server.stat_numcommands++;


    if (c->flags & 1) {
        freeClient(c);
        return 0;
    }
    resetClient(c);
    return 1;
}

static void replicationFeedSlaves(list *slaves, struct redisCommand *cmd, int dictid, robj **argv, int argc) {
    listNode *ln;
    int outc = 0, j;
    robj **outv;

    robj *static_outv[4*2+1];

    if (argc <= 4) {
        outv = static_outv;
    } else {
        outv = zmalloc(sizeof(robj*)*(argc*2+1));
        if (!outv) oom("replicationFeedSlaves");
    }

    for (j = 0; j < argc; j++) {
        if (j != 0) outv[outc++] = shared.space;
        if ((cmd->flags & 1) && j == argc-1) {
            robj *lenobj;

            lenobj = createObject(0,
                sdscatprintf(sdsempty(),"%d\r\n",sdslen(argv[j]->ptr)));
            lenobj->refcount = 0;
            outv[outc++] = lenobj;
        }
        outv[outc++] = argv[j];
    }
    outv[outc++] = shared.crlf;




    for (j = 0; j < outc; j++) incrRefCount(outv[j]);
    listRewind(slaves);
    while((ln = listYield(slaves))) {
        redisClient *slave = ln->value;


        if (slave->replstate == 3) continue;


        if (slave->slaveseldb != dictid) {
            robj *selectcmd;

            switch(dictid) {
            case 0: selectcmd = shared.select0; break;
            case 1: selectcmd = shared.select1; break;
            case 2: selectcmd = shared.select2; break;
            case 3: selectcmd = shared.select3; break;
            case 4: selectcmd = shared.select4; break;
            case 5: selectcmd = shared.select5; break;
            case 6: selectcmd = shared.select6; break;
            case 7: selectcmd = shared.select7; break;
            case 8: selectcmd = shared.select8; break;
            case 9: selectcmd = shared.select9; break;
            default:
                selectcmd = createObject(0,
                    sdscatprintf(sdsempty(),"select %d\r\n",dictid));
                selectcmd->refcount = 0;
                break;
            }
            addReply(slave,selectcmd);
            slave->slaveseldb = dictid;
        }
        for (j = 0; j < outc; j++) addReply(slave,outv[j]);
    }
    for (j = 0; j < outc; j++) decrRefCount(outv[j]);
    if (outv != static_outv) zfree(outv);
}

static void readQueryFromClient(aeEventLoop *el, int fd, void *privdata, int mask) {
    redisClient *c = (redisClient*) privdata;
    char buf[1024];
    int nread;
    ((void) el);
    ((void) mask);

    nread = read(fd, buf, 1024);
    if (nread == -1) {
        if ((*__errno_location ()) == 11) {
            nread = 0;
        } else {
            redisLog(0, "Reading from client: %s",strerror((*__errno_location ())));
            freeClient(c);
            return;
        }
    } else if (nread == 0) {
        redisLog(0, "Client closed connection");
        freeClient(c);
        return;
    }
    if (nread) {
        c->querybuf = sdscatlen(c->querybuf, buf, nread);
        c->lastinteraction = time(((void *)0));
    } else {
        return;
    }

again:
    if (c->bulklen == -1) {

        char *p = strchr(c->querybuf,'\n');
        size_t querylen;

        if (p) {
            sds query, *argv;
            int argc, j;

            query = c->querybuf;
            c->querybuf = sdsempty();
            querylen = 1+(p-(query));
            if (sdslen(query) > querylen) {

                c->querybuf = sdscatlen(c->querybuf,query+querylen,sdslen(query)-querylen);
            }
            *p = '\0';
            if (*(p-1) == '\r') *(p-1) = '\0';
            sdsupdatelen(query);


            if (sdslen(query) == 0) {

                sdsfree(query);
                return;
            }
            argv = sdssplitlen(query,sdslen(query)," ",1,&argc);
            if (argv == ((void *)0)) oom("sdssplitlen");
            sdsfree(query);

            if (c->argv) zfree(c->argv);
            c->argv = zmalloc(sizeof(robj*)*argc);
            if (c->argv == ((void *)0)) oom("allocating arguments list for client");

            for (j = 0; j < argc; j++) {
                if (sdslen(argv[j])) {
                    c->argv[c->argc] = createObject(0,argv[j]);
                    c->argc++;
                } else {
                    sdsfree(argv[j]);
                }
            }
            zfree(argv);



            if (c->argc && processCommand(c) && sdslen(c->querybuf)) goto again;
            return;
        } else if (sdslen(c->querybuf) >= (1024*1024*256)) {
            redisLog(0, "Client protocol error");
            freeClient(c);
            return;
        }
    } else {




        int qbl = sdslen(c->querybuf);

        if (c->bulklen <= qbl) {

            c->argv[c->argc] = createStringObject(c->querybuf,c->bulklen-2);
            c->argc++;
            c->querybuf = sdsrange(c->querybuf,c->bulklen,-1);
            processCommand(c);
            return;
        }
    }
}

static int selectDb(redisClient *c, int id) {
    if (id < 0 || id >= server.dbnum)
        return -1;
    c->db = &server.db[id];
    return 0;
}

static void *dupClientReplyValue(void *o) {
    incrRefCount((robj*)o);
    return 0;
}

static redisClient *createClient(int fd) {
    redisClient *c = zmalloc(sizeof(*c));

    anetNonBlock(((void *)0),fd);
    anetTcpNoDelay(((void *)0),fd);
    if (!c) return ((void *)0);
    selectDb(c,0);
    c->fd = fd;
    c->querybuf = sdsempty();
    c->argc = 0;
    c->argv = ((void *)0);
    c->bulklen = -1;
    c->sentlen = 0;
    c->flags = 0;
    c->lastinteraction = time(((void *)0));
    c->authenticated = 0;
    c->replstate = 0;
    if ((c->reply = listCreate()) == ((void *)0)) oom("listCreate");
    ((c->reply)->free = (decrRefCount));
    ((c->reply)->dup = (dupClientReplyValue));
    if (aeCreateFileEvent(server.el, c->fd, 1,
        readQueryFromClient, c, ((void *)0)) == -1) {
        freeClient(c);
        return ((void *)0);
    }
    if (!listAddNodeTail(server.clients,c)) oom("listAddNodeTail");
    return c;
}

static void addReply(redisClient *c, robj *obj) {
    if (((c->reply)->len) == 0 &&
        (c->replstate == 0 ||
         c->replstate == 6) &&
        aeCreateFileEvent(server.el, c->fd, 2,
        sendReplyToClient, c, ((void *)0)) == -1) return;
    if (obj->encoding != 0) {
        obj = getDecodedObject(obj);
    } else {
        incrRefCount(obj);
    }
    if (!listAddNodeTail(c->reply,obj)) oom("listAddNodeTail");
}

static void addReplySds(redisClient *c, sds s) {
    robj *o = createObject(0,s);
    addReply(c,o);
    decrRefCount(o);
}

static void addReplyBulkLen(redisClient *c, robj *obj) {
    size_t len;

    if (obj->encoding == 0) {
        len = sdslen(obj->ptr);
    } else {
        long n = (long)obj->ptr;

        len = 1;
        if (n < 0) {
            len++;
            n = -n;
        }
        while((n = n/10) != 0) {
            len++;
        }
    }
    addReplySds(c,sdscatprintf(sdsempty(),"$%d\r\n",len));
}

static void acceptHandler(aeEventLoop *el, int fd, void *privdata, int mask) {
    int cport, cfd;
    char cip[128];
    redisClient *c;
    ((void) el);
    ((void) mask);
    ((void) privdata);

    cfd = anetAccept(server.neterr, fd, cip, &cport);
    if (cfd == -1) {
        redisLog(0,"Accepting client connection: %s", server.neterr);
        return;
    }
    redisLog(0,"Accepted %s:%d", cip, cport);
    if ((c = createClient(cfd)) == ((void *)0)) {
        redisLog(2,"Error allocating resoures for the client");
        close(cfd);
        return;
    }




    if (server.maxclients && ((server.clients)->len) > server.maxclients) {
        char *err = "-ERR max number of clients reached\r\n";


        (void) write(c->fd,err,strlen(err));
        freeClient(c);
        return;
    }
    server.stat_numconnections++;
}



static robj *createObject(int type, void *ptr) {
    robj *o;

    if (((server.objfreelist)->len)) {
        listNode *head = ((server.objfreelist)->head);
        o = ((head)->value);
        listDelNode(server.objfreelist,head);
    } else {
        o = zmalloc(sizeof(*o));
    }
    if (!o) oom("createObject");
    o->type = type;
    o->encoding = 0;
    o->ptr = ptr;
    o->refcount = 1;
    return o;
}

static robj *createStringObject(char *ptr, size_t len) {
    return createObject(0,sdsnewlen(ptr,len));
}

static robj *createListObject(void) {
    list *l = listCreate();

    if (!l) oom("listCreate");
    ((l)->free = (decrRefCount));
    return createObject(1,l);
}

static robj *createSetObject(void) {
    dict *d = dictCreate(&setDictType,((void *)0));
    if (!d) oom("dictCreate");
    return createObject(2,d);
}

static void freeStringObject(robj *o) {
    if (o->encoding == 0) {
        sdsfree(o->ptr);
    }
}

static void freeListObject(robj *o) {
    listRelease((list*) o->ptr);
}

static void freeSetObject(robj *o) {
    dictRelease((dict*) o->ptr);
}

static void freeHashObject(robj *o) {
    dictRelease((dict*) o->ptr);
}

static void incrRefCount(robj *o) {
    o->refcount++;




}

static void decrRefCount(void *obj) {
    robj *o = obj;





    if (--(o->refcount) == 0) {
        switch(o->type) {
        case 0: freeStringObject(o); break;
        case 1: freeListObject(o); break;
        case 2: freeSetObject(o); break;
        case 3: freeHashObject(o); break;
        default: ((0 != 0) ? (void) (0) : __assert_fail ("0 != 0", "redis.c", 1756, __PRETTY_FUNCTION__)); break;
        }
        if (((server.objfreelist)->len) > 1000000 ||
            !listAddNodeHead(server.objfreelist,o))
            zfree(o);
    }
}

static robj *lookupKey(redisDb *db, robj *key) {
    dictEntry *de = dictFind(db->dict,key);
    return de ? ((de)->val) : ((void *)0);
}

static robj *lookupKeyRead(redisDb *db, robj *key) {
    expireIfNeeded(db,key);
    return lookupKey(db,key);
}

static robj *lookupKeyWrite(redisDb *db, robj *key) {
    deleteIfVolatile(db,key);
    return lookupKey(db,key);
}

static int deleteKey(redisDb *db, robj *key) {
    int retval;





    incrRefCount(key);
    if (((db->expires)->used)) dictDelete(db->expires,key);
    retval = dictDelete(db->dict,key);
    decrRefCount(key);

    return retval == 0;
}


static robj *tryObjectSharing(robj *o) {
    struct dictEntry *de;
    unsigned long c;

    if (o == ((void *)0) || server.shareobjects == 0) return o;

    ((o->type == 0) ? (void) (0) : __assert_fail ("o->type == 0", "redis.c", 1801, __PRETTY_FUNCTION__));
    de = dictFind(server.sharingpool,o);
    if (de) {
        robj *shared = ((de)->key);

        c = ((unsigned long) ((de)->val))+1;
        ((de)->val) = (void*) c;
        incrRefCount(shared);
        decrRefCount(o);
        return shared;
    } else {




        if (((server.sharingpool)->used) >=
                server.sharingpoolsize) {
            de = dictGetRandomKey(server.sharingpool);
            ((de != ((void *)0)) ? (void) (0) : __assert_fail ("de != ((void *)0)", "redis.c", 1819, __PRETTY_FUNCTION__));
            c = ((unsigned long) ((de)->val))-1;
            ((de)->val) = (void*) c;
            if (c == 0) {
                dictDelete(server.sharingpool,de->key);
            }
        } else {
            c = 0;
        }
        if (c == 0) {
            int retval;

            retval = dictAdd(server.sharingpool,o,(void*)1);
            ((retval == 0) ? (void) (0) : __assert_fail ("retval == 0", "redis.c", 1832, __PRETTY_FUNCTION__));
            incrRefCount(o);
        }
        return o;
    }
}


static int tryObjectEncoding(robj *o) {
    long value;
    char *endptr, buf[32];
    sds s = o->ptr;

    if (o->encoding != 0)
        return -1;




     if (o->refcount > 1) return -1;


    ((o->type == 0) ? (void) (0) : __assert_fail ("o->type == 0", "redis.c", 1854, __PRETTY_FUNCTION__));



    value = strtol(s, &endptr, 10);
    if (endptr[0] != '\0') return -1;
    snprintf(buf,32,"%ld",value);



    if (strlen(buf) != sdslen(s) || memcmp(buf,s,sdslen(s))) return -1;


    o->encoding = 1;
    sdsfree(o->ptr);
    o->ptr = (void*) value;
    return 0;
}


static robj *getDecodedObject(const robj *o) {
    robj *dec;

    ((o->encoding != 0) ? (void) (0) : __assert_fail ("o->encoding != 0", "redis.c", 1877, __PRETTY_FUNCTION__));
    if (o->type == 0 && o->encoding == 1) {
        char buf[32];

        snprintf(buf,32,"%ld",(long)o->ptr);
        dec = createStringObject(buf,strlen(buf));
        return dec;
    } else {
        ((1 != 1) ? (void) (0) : __assert_fail ("1 != 1", "redis.c", 1885, __PRETTY_FUNCTION__));
    }
}



static int rdbSaveType(FILE *fp, unsigned char type) {
    if (fwrite(&type,1,1,fp) == 0) return -1;
    return 0;
}

static int rdbSaveTime(FILE *fp, time_t t) {
    int32_t t32 = (int32_t) t;
    if (fwrite(&t32,4,1,fp) == 0) return -1;
    return 0;
}


static int rdbSaveLen(FILE *fp, uint32_t len) {
    unsigned char buf[2];

    if (len < (1<<6)) {

        buf[0] = (len&0xFF)|(0<<6);
        if (fwrite(buf,1,1,fp) == 0) return -1;
    } else if (len < (1<<14)) {

        buf[0] = ((len>>8)&0xFF)|(1<<6);
        buf[1] = len&0xFF;
        if (fwrite(buf,2,1,fp) == 0) return -1;
    } else {

        buf[0] = (2<<6);
        if (fwrite(buf,1,1,fp) == 0) return -1;
        len = htonl(len);
        if (fwrite(&len,4,1,fp) == 0) return -1;
    }
    return 0;
}




static int rdbTryIntegerEncoding(sds s, unsigned char *enc) {
    long long value;
    char *endptr, buf[32];


    value = strtoll(s, &endptr, 10);
    if (endptr[0] != '\0') return 0;
    snprintf(buf,32,"%lld",value);



    if (strlen(buf) != sdslen(s) || memcmp(buf,s,sdslen(s))) return 0;


    if (value >= -(1<<7) && value <= (1<<7)-1) {
        enc[0] = (3<<6)|0;
        enc[1] = value&0xFF;
        return 2;
    } else if (value >= -(1<<15) && value <= (1<<15)-1) {
        enc[0] = (3<<6)|1;
        enc[1] = value&0xFF;
        enc[2] = (value>>8)&0xFF;
        return 3;
    } else if (value >= -((long long)1<<31) && value <= ((long long)1<<31)-1) {
        enc[0] = (3<<6)|2;
        enc[1] = value&0xFF;
        enc[2] = (value>>8)&0xFF;
        enc[3] = (value>>16)&0xFF;
        enc[4] = (value>>24)&0xFF;
        return 5;
    } else {
        return 0;
    }
}

static int rdbSaveLzfStringObject(FILE *fp, robj *obj) {
    unsigned int comprlen, outlen;
    unsigned char byte;
    void *out;


    outlen = sdslen(obj->ptr)-4;
    if (outlen <= 0) return 0;
    if ((out = zmalloc(outlen+1)) == ((void *)0)) return 0;
    comprlen = lzf_compress(obj->ptr, sdslen(obj->ptr), out, outlen);
    if (comprlen == 0) {
        zfree(out);
        return 0;
    }

    byte = (3<<6)|3;
    if (fwrite(&byte,1,1,fp) == 0) goto writeerr;
    if (rdbSaveLen(fp,comprlen) == -1) goto writeerr;
    if (rdbSaveLen(fp,sdslen(obj->ptr)) == -1) goto writeerr;
    if (fwrite(out,comprlen,1,fp) == 0) goto writeerr;
    zfree(out);
    return comprlen;

writeerr:
    zfree(out);
    return -1;
}



static int rdbSaveStringObjectRaw(FILE *fp, robj *obj) {
    size_t len;
    int enclen;

    len = sdslen(obj->ptr);


    if (len <= 11) {
        unsigned char buf[5];
        if ((enclen = rdbTryIntegerEncoding(obj->ptr,buf)) > 0) {
            if (fwrite(buf,enclen,1,fp) == 0) return -1;
            return 0;
        }
    }



    if (len > 20) {
        int retval;

        retval = rdbSaveLzfStringObject(fp,obj);
        if (retval == -1) return -1;
        if (retval > 0) return 0;

    }


    if (rdbSaveLen(fp,len) == -1) return -1;
    if (len && fwrite(obj->ptr,len,1,fp) == 0) return -1;
    return 0;
}


static int rdbSaveStringObject(FILE *fp, robj *obj) {
    int retval;
    robj *dec;

    if (obj->encoding != 0) {
        dec = getDecodedObject(obj);
        retval = rdbSaveStringObjectRaw(fp,dec);
        decrRefCount(dec);
        return retval;
    } else {
        return rdbSaveStringObjectRaw(fp,obj);
    }
}


static int rdbSave(char *filename) {
    dictIterator *di = ((void *)0);
    dictEntry *de;
    FILE *fp;
    char tmpfile[256];
    int j;
    time_t now = time(((void *)0));

    snprintf(tmpfile,256,"temp-%d.rdb", (int) getpid());
    fp = fopen(tmpfile,"w");
    if (!fp) {
        redisLog(2, "Failed saving the DB: %s", strerror((*__errno_location ())));
        return -1;
    }
    if (fwrite("REDIS0001",9,1,fp) == 0) goto werr;
    for (j = 0; j < server.dbnum; j++) {
        redisDb *db = server.db+j;
        dict *d = db->dict;
        if (((d)->used) == 0) continue;
        di = dictGetIterator(d);
        if (!di) {
            fclose(fp);
            return -1;
        }


        if (rdbSaveType(fp,254) == -1) goto werr;
        if (rdbSaveLen(fp,j) == -1) goto werr;


        while((de = dictNext(di)) != ((void *)0)) {
            robj *key = ((de)->key);
            robj *o = ((de)->val);
            time_t expiretime = getExpire(db,key);


            if (expiretime != -1) {

                if (expiretime < now) continue;
                if (rdbSaveType(fp,253) == -1) goto werr;
                if (rdbSaveTime(fp,expiretime) == -1) goto werr;
            }

            if (rdbSaveType(fp,o->type) == -1) goto werr;
            if (rdbSaveStringObject(fp,key) == -1) goto werr;
            if (o->type == 0) {

                if (rdbSaveStringObject(fp,o) == -1) goto werr;
            } else if (o->type == 1) {

                list *list = o->ptr;
                listNode *ln;

                listRewind(list);
                if (rdbSaveLen(fp,((list)->len)) == -1) goto werr;
                while((ln = listYield(list))) {
                    robj *eleobj = ((ln)->value);

                    if (rdbSaveStringObject(fp,eleobj) == -1) goto werr;
                }
            } else if (o->type == 2) {

                dict *set = o->ptr;
                dictIterator *di = dictGetIterator(set);
                dictEntry *de;

                if (!set) oom("dictGetIteraotr");
                if (rdbSaveLen(fp,((set)->used)) == -1) goto werr;
                while((de = dictNext(di)) != ((void *)0)) {
                    robj *eleobj = ((de)->key);

                    if (rdbSaveStringObject(fp,eleobj) == -1) goto werr;
                }
                dictReleaseIterator(di);
            } else {
                ((0 != 0) ? (void) (0) : __assert_fail ("0 != 0", "redis.c", 2116, __PRETTY_FUNCTION__));
            }
        }
        dictReleaseIterator(di);
    }

    if (rdbSaveType(fp,255) == -1) goto werr;


    fflush(fp);
    fsync(fileno(fp));
    fclose(fp);



    if (rename(tmpfile,filename) == -1) {
        redisLog(2,"Error moving temp DB file on the final destionation: %s", strerror((*__errno_location ())));
        unlink(tmpfile);
        return -1;
    }
    redisLog(1,"DB saved on disk");
    server.dirty = 0;
    server.lastsave = time(((void *)0));
    return 0;

werr:
    fclose(fp);
    unlink(tmpfile);
    redisLog(2,"Write error saving DB on disk: %s", strerror((*__errno_location ())));
    if (di) dictReleaseIterator(di);
    return -1;
}

static int rdbSaveBackground(char *filename) {
    pid_t childpid;

    if (server.bgsaveinprogress) return -1;
    if ((childpid = fork()) == 0) {

        close(server.fd);
        if (rdbSave(filename) == 0) {
            exit(0);
        } else {
            exit(1);
        }
    } else {

        if (childpid == -1) {
            redisLog(2,"Can't save in background: fork: %s",
                strerror((*__errno_location ())));
            return -1;
        }
        redisLog(1,"Background saving started by pid %d",childpid);
        server.bgsaveinprogress = 1;
        server.bgsavechildpid = childpid;
        return 0;
    }
    return 0;
}

static void rdbRemoveTempFile(pid_t childpid) {
    char tmpfile[256];

    snprintf(tmpfile,256,"temp-%d.rdb", (int) childpid);
    unlink(tmpfile);
}

static int rdbLoadType(FILE *fp) {
    unsigned char type;
    if (fread(&type,1,1,fp) == 0) return -1;
    return type;
}

static time_t rdbLoadTime(FILE *fp) {
    int32_t t32;
    if (fread(&t32,4,1,fp) == 0) return -1;
    return (time_t) t32;
}






static uint32_t rdbLoadLen(FILE *fp, int rdbver, int *isencoded) {
    unsigned char buf[2];
    uint32_t len;

    if (isencoded) *isencoded = 0;
    if (rdbver == 0) {
        if (fread(&len,4,1,fp) == 0) return (2147483647 * 2U + 1U);
        return ntohl(len);
    } else {
        int type;

        if (fread(buf,1,1,fp) == 0) return (2147483647 * 2U + 1U);
        type = (buf[0]&0xC0)>>6;
        if (type == 0) {

            return buf[0]&0x3F;
        } else if (type == 3) {

            if (isencoded) *isencoded = 1;
            return buf[0]&0x3F;
        } else if (type == 1) {

            if (fread(buf+1,1,1,fp) == 0) return (2147483647 * 2U + 1U);
            return ((buf[0]&0x3F)<<8)|buf[1];
        } else {

            if (fread(&len,4,1,fp) == 0) return (2147483647 * 2U + 1U);
            return ntohl(len);
        }
    }
}

static robj *rdbLoadIntegerObject(FILE *fp, int enctype) {
    unsigned char enc[4];
    long long val;

    if (enctype == 0) {
        if (fread(enc,1,1,fp) == 0) return ((void *)0);
        val = (signed char)enc[0];
    } else if (enctype == 1) {
        uint16_t v;
        if (fread(enc,2,1,fp) == 0) return ((void *)0);
        v = enc[0]|(enc[1]<<8);
        val = (int16_t)v;
    } else if (enctype == 2) {
        uint32_t v;
        if (fread(enc,4,1,fp) == 0) return ((void *)0);
        v = enc[0]|(enc[1]<<8)|(enc[2]<<16)|(enc[3]<<24);
        val = (int32_t)v;
    } else {
        val = 0;
        ((0!=0) ? (void) (0) : __assert_fail ("0!=0", "redis.c", 2251, __PRETTY_FUNCTION__));
    }
    return createObject(0,sdscatprintf(sdsempty(),"%lld",val));
}

static robj *rdbLoadLzfStringObject(FILE*fp, int rdbver) {
    unsigned int len, clen;
    unsigned char *c = ((void *)0);
    sds val = ((void *)0);

    if ((clen = rdbLoadLen(fp,rdbver,((void *)0))) == (2147483647 * 2U + 1U)) return ((void *)0);
    if ((len = rdbLoadLen(fp,rdbver,((void *)0))) == (2147483647 * 2U + 1U)) return ((void *)0);
    if ((c = zmalloc(clen)) == ((void *)0)) goto err;
    if ((val = sdsnewlen(((void *)0),len)) == ((void *)0)) goto err;
    if (fread(c,clen,1,fp) == 0) goto err;
    if (lzf_decompress(c,clen,val,len) == 0) goto err;
    zfree(c);
    return createObject(0,val);
err:
    zfree(c);
    sdsfree(val);
    return ((void *)0);
}

static robj *rdbLoadStringObject(FILE*fp, int rdbver) {
    int isencoded;
    uint32_t len;
    sds val;

    len = rdbLoadLen(fp,rdbver,&isencoded);
    if (isencoded) {
        switch(len) {
        case 0:
        case 1:
        case 2:
            return tryObjectSharing(rdbLoadIntegerObject(fp,len));
        case 3:
            return tryObjectSharing(rdbLoadLzfStringObject(fp,rdbver));
        default:
            ((0!=0) ? (void) (0) : __assert_fail ("0!=0", "redis.c", 2290, __PRETTY_FUNCTION__));
        }
    }

    if (len == (2147483647 * 2U + 1U)) return ((void *)0);
    val = sdsnewlen(((void *)0),len);
    if (len && fread(val,len,1,fp) == 0) {
        sdsfree(val);
        return ((void *)0);
    }
    return tryObjectSharing(createObject(0,val));
}

static int rdbLoad(char *filename) {
    FILE *fp;
    robj *keyobj = ((void *)0);
    uint32_t dbid;
    int type, retval, rdbver;
    dict *d = server.db[0].dict;
    redisDb *db = server.db+0;
    char buf[1024];
    time_t expiretime = -1, now = time(((void *)0));

    fp = fopen(filename,"r");
    if (!fp) return -1;
    if (fread(buf,9,1,fp) == 0) goto eoferr;
    buf[9] = '\0';
    if (memcmp(buf,"REDIS",5) != 0) {
        fclose(fp);
        redisLog(2,"Wrong signature trying to load DB from file");
        return -1;
    }
    rdbver = atoi(buf+5);
    if (rdbver > 1) {
        fclose(fp);
        redisLog(2,"Can't handle RDB format version %d",rdbver);
        return -1;
    }
    while(1) {
        robj *o;


        if ((type = rdbLoadType(fp)) == -1) goto eoferr;
        if (type == 253) {
            if ((expiretime = rdbLoadTime(fp)) == -1) goto eoferr;

            if ((type = rdbLoadType(fp)) == -1) goto eoferr;
        }
        if (type == 255) break;

        if (type == 254) {
            if ((dbid = rdbLoadLen(fp,rdbver,((void *)0))) == (2147483647 * 2U + 1U))
                goto eoferr;
            if (dbid >= (unsigned)server.dbnum) {
                redisLog(2,"FATAL: Data file was created with a Redis server configured to handle more than %d databases. Exiting\n", server.dbnum);
                exit(1);
            }
            db = server.db+dbid;
            d = db->dict;
            continue;
        }

        if ((keyobj = rdbLoadStringObject(fp,rdbver)) == ((void *)0)) goto eoferr;

        if (type == 0) {

            if ((o = rdbLoadStringObject(fp,rdbver)) == ((void *)0)) goto eoferr;
            tryObjectEncoding(o);
        } else if (type == 1 || type == 2) {

            uint32_t listlen;

            if ((listlen = rdbLoadLen(fp,rdbver,((void *)0))) == (2147483647 * 2U + 1U))
                goto eoferr;
            o = (type == 1) ? createListObject() : createSetObject();

            while(listlen--) {
                robj *ele;

                if ((ele = rdbLoadStringObject(fp,rdbver)) == ((void *)0)) goto eoferr;
                tryObjectEncoding(ele);
                if (type == 1) {
                    if (!listAddNodeTail((list*)o->ptr,ele))
                        oom("listAddNodeTail");
                } else {
                    if (dictAdd((dict*)o->ptr,ele,((void *)0)) == 1)
                        oom("dictAdd");
                }
            }
        } else {
            ((0 != 0) ? (void) (0) : __assert_fail ("0 != 0", "redis.c", 2380, __PRETTY_FUNCTION__));
        }

        retval = dictAdd(d,keyobj,o);
        if (retval == 1) {
            redisLog(2,"Loading DB, duplicated key (%s) found! Unrecoverable error, exiting now.", keyobj->ptr);
            exit(1);
        }

        if (expiretime != -1) {
            setExpire(db,keyobj,expiretime);

            if (expiretime < now) deleteKey(db,keyobj);
            expiretime = -1;
        }
        keyobj = o = ((void *)0);
    }
    fclose(fp);
    return 0;

eoferr:
    if (keyobj) decrRefCount(keyobj);
    redisLog(2,"Short read or OOM loading DB. Unrecoverable error, exiting now.");
    exit(1);
    return -1;
}



static void authCommand(redisClient *c) {
    if (!server.requirepass || !strcmp(c->argv[1]->ptr, server.requirepass)) {
      c->authenticated = 1;
      addReply(c,shared.ok);
    } else {
      c->authenticated = 0;
      addReply(c,shared.err);
    }
}

static void pingCommand(redisClient *c) {
    addReply(c,shared.pong);
}

static void echoCommand(redisClient *c) {
    addReplyBulkLen(c,c->argv[1]);
    addReply(c,c->argv[1]);
    addReply(c,shared.crlf);
}



static void setGenericCommand(redisClient *c, int nx) {
    int retval;

    retval = dictAdd(c->db->dict,c->argv[1],c->argv[2]);
    if (retval == 1) {
        if (!nx) {
            dictReplace(c->db->dict,c->argv[1],c->argv[2]);
            incrRefCount(c->argv[2]);
        } else {
            addReply(c,shared.czero);
            return;
        }
    } else {
        incrRefCount(c->argv[1]);
        incrRefCount(c->argv[2]);
    }
    server.dirty++;
    removeExpire(c->db,c->argv[1]);
    addReply(c, nx ? shared.cone : shared.ok);
}

static void setCommand(redisClient *c) {
    setGenericCommand(c,0);
}

static void setnxCommand(redisClient *c) {
    setGenericCommand(c,1);
}

static void getCommand(redisClient *c) {
    robj *o = lookupKeyRead(c->db,c->argv[1]);

    if (o == ((void *)0)) {
        addReply(c,shared.nullbulk);
    } else {
        if (o->type != 0) {
            addReply(c,shared.wrongtypeerr);
        } else {
            addReplyBulkLen(c,o);
            addReply(c,o);
            addReply(c,shared.crlf);
        }
    }
}

static void getSetCommand(redisClient *c) {
    getCommand(c);
    if (dictAdd(c->db->dict,c->argv[1],c->argv[2]) == 1) {
        dictReplace(c->db->dict,c->argv[1],c->argv[2]);
    } else {
        incrRefCount(c->argv[1]);
    }
    incrRefCount(c->argv[2]);
    server.dirty++;
    removeExpire(c->db,c->argv[1]);
}

static void mgetCommand(redisClient *c) {
    int j;

    addReplySds(c,sdscatprintf(sdsempty(),"*%d\r\n",c->argc-1));
    for (j = 1; j < c->argc; j++) {
        robj *o = lookupKeyRead(c->db,c->argv[j]);
        if (o == ((void *)0)) {
            addReply(c,shared.nullbulk);
        } else {
            if (o->type != 0) {
                addReply(c,shared.nullbulk);
            } else {
                addReplyBulkLen(c,o);
                addReply(c,o);
                addReply(c,shared.crlf);
            }
        }
    }
}

static void incrDecrCommand(redisClient *c, long long incr) {
    long long value;
    int retval;
    robj *o;

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        value = 0;
    } else {
        if (o->type != 0) {
            value = 0;
        } else {
            char *eptr;

            if (o->encoding == 0)
                value = strtoll(o->ptr, &eptr, 10);
            else if (o->encoding == 1)
                value = (long)o->ptr;
            else
                ((1 != 1) ? (void) (0) : __assert_fail ("1 != 1", "redis.c", 2527, __PRETTY_FUNCTION__));
        }
    }

    value += incr;
    o = createObject(0,sdscatprintf(sdsempty(),"%lld",value));
    tryObjectEncoding(o);
    retval = dictAdd(c->db->dict,c->argv[1],o);
    if (retval == 1) {
        dictReplace(c->db->dict,c->argv[1],o);
        removeExpire(c->db,c->argv[1]);
    } else {
        incrRefCount(c->argv[1]);
    }
    server.dirty++;
    addReply(c,shared.colon);
    addReply(c,o);
    addReply(c,shared.crlf);
}

static void incrCommand(redisClient *c) {
    incrDecrCommand(c,1);
}

static void decrCommand(redisClient *c) {
    incrDecrCommand(c,-1);
}

static void incrbyCommand(redisClient *c) {
    long long incr = strtoll(c->argv[2]->ptr, ((void *)0), 10);
    incrDecrCommand(c,incr);
}

static void decrbyCommand(redisClient *c) {
    long long incr = strtoll(c->argv[2]->ptr, ((void *)0), 10);
    incrDecrCommand(c,-incr);
}



static void delCommand(redisClient *c) {
    int deleted = 0, j;

    for (j = 1; j < c->argc; j++) {
        if (deleteKey(c->db,c->argv[j])) {
            server.dirty++;
            deleted++;
        }
    }
    switch(deleted) {
    case 0:
        addReply(c,shared.czero);
        break;
    case 1:
        addReply(c,shared.cone);
        break;
    default:
        addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",deleted));
        break;
    }
}

static void existsCommand(redisClient *c) {
    addReply(c,lookupKeyRead(c->db,c->argv[1]) ? shared.cone : shared.czero);
}

static void selectCommand(redisClient *c) {
    int id = atoi(c->argv[1]->ptr);

    if (selectDb(c,id) == -1) {
        addReplySds(c,sdsnew("-ERR invalid DB index\r\n"));
    } else {
        addReply(c,shared.ok);
    }
}

static void randomkeyCommand(redisClient *c) {
    dictEntry *de;

    while(1) {
        de = dictGetRandomKey(c->db->dict);
        if (!de || expireIfNeeded(c->db,((de)->key)) == 0) break;
    }
    if (de == ((void *)0)) {
        addReply(c,shared.plus);
        addReply(c,shared.crlf);
    } else {
        addReply(c,shared.plus);
        addReply(c,((de)->key));
        addReply(c,shared.crlf);
    }
}

static void keysCommand(redisClient *c) {
    dictIterator *di;
    dictEntry *de;
    sds pattern = c->argv[1]->ptr;
    int plen = sdslen(pattern);
    int numkeys = 0, keyslen = 0;
    robj *lenobj = createObject(0,((void *)0));

    di = dictGetIterator(c->db->dict);
    if (!di) oom("dictGetIterator");
    addReply(c,lenobj);
    decrRefCount(lenobj);
    while((de = dictNext(di)) != ((void *)0)) {
        robj *keyobj = ((de)->key);

        sds key = keyobj->ptr;
        if ((pattern[0] == '*' && pattern[1] == '\0') ||
            stringmatchlen(pattern,plen,key,sdslen(key),0)) {
            if (expireIfNeeded(c->db,keyobj) == 0) {
                if (numkeys != 0)
                    addReply(c,shared.space);
                addReply(c,keyobj);
                numkeys++;
                keyslen += sdslen(key);
            }
        }
    }
    dictReleaseIterator(di);
    lenobj->ptr = sdscatprintf(sdsempty(),"$%lu\r\n",keyslen+(numkeys ? (numkeys-1) : 0));
    addReply(c,shared.crlf);
}

static void dbsizeCommand(redisClient *c) {
    addReplySds(c,
        sdscatprintf(sdsempty(),":%lu\r\n",((c->db->dict)->used)));
}

static void lastsaveCommand(redisClient *c) {
    addReplySds(c,
        sdscatprintf(sdsempty(),":%lu\r\n",server.lastsave));
}

static void typeCommand(redisClient *c) {
    robj *o;
    char *type;

    o = lookupKeyRead(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        type = "+none";
    } else {
        switch(o->type) {
        case 0: type = "+string"; break;
        case 1: type = "+list"; break;
        case 2: type = "+set"; break;
        default: type = "unknown"; break;
        }
    }
    addReplySds(c,sdsnew(type));
    addReply(c,shared.crlf);
}

static void saveCommand(redisClient *c) {
    if (server.bgsaveinprogress) {
        addReplySds(c,sdsnew("-ERR background save in progress\r\n"));
        return;
    }
    if (rdbSave(server.dbfilename) == 0) {
        addReply(c,shared.ok);
    } else {
        addReply(c,shared.err);
    }
}

static void bgsaveCommand(redisClient *c) {
    if (server.bgsaveinprogress) {
        addReplySds(c,sdsnew("-ERR background save already in progress\r\n"));
        return;
    }
    if (rdbSaveBackground(server.dbfilename) == 0) {
        addReply(c,shared.ok);
    } else {
        addReply(c,shared.err);
    }
}

static void shutdownCommand(redisClient *c) {
    redisLog(2,"User requested shutdown, saving DB...");



    if (server.bgsaveinprogress) {
        redisLog(2,"There is a live saving child. Killing it!");
        kill(server.bgsavechildpid,9);
        rdbRemoveTempFile(server.bgsavechildpid);
    }

    if (rdbSave(server.dbfilename) == 0) {
        if (server.daemonize)
            unlink(server.pidfile);
        redisLog(2,"%zu bytes used at exit",zmalloc_used_memory());
        redisLog(2,"Server exit now, bye bye...");
        exit(1);
    } else {




        redisLog(2,"Error trying to save the DB, can't exit");
        addReplySds(c,sdsnew("-ERR can't quit, problems saving the DB\r\n"));
    }
}

static void renameGenericCommand(redisClient *c, int nx) {
    robj *o;


    if (sdscmp(c->argv[1]->ptr,c->argv[2]->ptr) == 0) {
        addReply(c,shared.sameobjecterr);
        return;
    }

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nokeyerr);
        return;
    }
    incrRefCount(o);
    deleteIfVolatile(c->db,c->argv[2]);
    if (dictAdd(c->db->dict,c->argv[2],o) == 1) {
        if (nx) {
            decrRefCount(o);
            addReply(c,shared.czero);
            return;
        }
        dictReplace(c->db->dict,c->argv[2],o);
    } else {
        incrRefCount(c->argv[2]);
    }
    deleteKey(c->db,c->argv[1]);
    server.dirty++;
    addReply(c,nx ? shared.cone : shared.ok);
}

static void renameCommand(redisClient *c) {
    renameGenericCommand(c,0);
}

static void renamenxCommand(redisClient *c) {
    renameGenericCommand(c,1);
}

static void moveCommand(redisClient *c) {
    robj *o;
    redisDb *src, *dst;
    int srcid;


    src = c->db;
    srcid = c->db->id;
    if (selectDb(c,atoi(c->argv[2]->ptr)) == -1) {
        addReply(c,shared.outofrangeerr);
        return;
    }
    dst = c->db;
    selectDb(c,srcid);



    if (src == dst) {
        addReply(c,shared.sameobjecterr);
        return;
    }


    o = lookupKeyWrite(c->db,c->argv[1]);
    if (!o) {
        addReply(c,shared.czero);
        return;
    }


    deleteIfVolatile(dst,c->argv[1]);
    if (dictAdd(dst->dict,c->argv[1],o) == 1) {
        addReply(c,shared.czero);
        return;
    }
    incrRefCount(c->argv[1]);
    incrRefCount(o);


    deleteKey(src,c->argv[1]);
    server.dirty++;
    addReply(c,shared.cone);
}


static void pushGenericCommand(redisClient *c, int where) {
    robj *lobj;
    list *list;

    lobj = lookupKeyWrite(c->db,c->argv[1]);
    if (lobj == ((void *)0)) {
        lobj = createListObject();
        list = lobj->ptr;
        if (where == 0) {
            if (!listAddNodeHead(list,c->argv[2])) oom("listAddNodeHead");
        } else {
            if (!listAddNodeTail(list,c->argv[2])) oom("listAddNodeTail");
        }
        dictAdd(c->db->dict,c->argv[1],lobj);
        incrRefCount(c->argv[1]);
        incrRefCount(c->argv[2]);
    } else {
        if (lobj->type != 1) {
            addReply(c,shared.wrongtypeerr);
            return;
        }
        list = lobj->ptr;
        if (where == 0) {
            if (!listAddNodeHead(list,c->argv[2])) oom("listAddNodeHead");
        } else {
            if (!listAddNodeTail(list,c->argv[2])) oom("listAddNodeTail");
        }
        incrRefCount(c->argv[2]);
    }
    server.dirty++;
    addReply(c,shared.ok);
}

static void lpushCommand(redisClient *c) {
    pushGenericCommand(c,0);
}

static void rpushCommand(redisClient *c) {
    pushGenericCommand(c,1);
}

static void llenCommand(redisClient *c) {
    robj *o;
    list *l;

    o = lookupKeyRead(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.czero);
        return;
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            l = o->ptr;
            addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",((l)->len)));
        }
    }
}

static void lindexCommand(redisClient *c) {
    robj *o;
    int index = atoi(c->argv[2]->ptr);

    o = lookupKeyRead(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nullbulk);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln;

            ln = listIndex(list, index);
            if (ln == ((void *)0)) {
                addReply(c,shared.nullbulk);
            } else {
                robj *ele = ((ln)->value);
                addReplyBulkLen(c,ele);
                addReply(c,ele);
                addReply(c,shared.crlf);
            }
        }
    }
}

static void lsetCommand(redisClient *c) {
    robj *o;
    int index = atoi(c->argv[2]->ptr);

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nokeyerr);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln;

            ln = listIndex(list, index);
            if (ln == ((void *)0)) {
                addReply(c,shared.outofrangeerr);
            } else {
                robj *ele = ((ln)->value);

                decrRefCount(ele);
                ((ln)->value) = c->argv[3];
                incrRefCount(c->argv[3]);
                addReply(c,shared.ok);
                server.dirty++;
            }
        }
    }
}

static void popGenericCommand(redisClient *c, int where) {
    robj *o;

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nullbulk);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln;

            if (where == 0)
                ln = ((list)->head);
            else
                ln = ((list)->tail);

            if (ln == ((void *)0)) {
                addReply(c,shared.nullbulk);
            } else {
                robj *ele = ((ln)->value);
                addReplyBulkLen(c,ele);
                addReply(c,ele);
                addReply(c,shared.crlf);
                listDelNode(list,ln);
                server.dirty++;
            }
        }
    }
}

static void lpopCommand(redisClient *c) {
    popGenericCommand(c,0);
}

static void rpopCommand(redisClient *c) {
    popGenericCommand(c,1);
}

static void lrangeCommand(redisClient *c) {
    robj *o;
    int start = atoi(c->argv[2]->ptr);
    int end = atoi(c->argv[3]->ptr);

    o = lookupKeyRead(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nullmultibulk);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln;
            int llen = ((list)->len);
            int rangelen, j;
            robj *ele;


            if (start < 0) start = llen+start;
            if (end < 0) end = llen+end;
            if (start < 0) start = 0;
            if (end < 0) end = 0;


            if (start > end || start >= llen) {

                addReply(c,shared.emptymultibulk);
                return;
            }
            if (end >= llen) end = llen-1;
            rangelen = (end-start)+1;


            ln = listIndex(list, start);
            addReplySds(c,sdscatprintf(sdsempty(),"*%d\r\n",rangelen));
            for (j = 0; j < rangelen; j++) {
                ele = ((ln)->value);
                addReplyBulkLen(c,ele);
                addReply(c,ele);
                addReply(c,shared.crlf);
                ln = ln->next;
            }
        }
    }
}

static void ltrimCommand(redisClient *c) {
    robj *o;
    int start = atoi(c->argv[2]->ptr);
    int end = atoi(c->argv[3]->ptr);

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.nokeyerr);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln;
            int llen = ((list)->len);
            int j, ltrim, rtrim;


            if (start < 0) start = llen+start;
            if (end < 0) end = llen+end;
            if (start < 0) start = 0;
            if (end < 0) end = 0;


            if (start > end || start >= llen) {

                ltrim = llen;
                rtrim = 0;
            } else {
                if (end >= llen) end = llen-1;
                ltrim = start;
                rtrim = llen-end-1;
            }


            for (j = 0; j < ltrim; j++) {
                ln = ((list)->head);
                listDelNode(list,ln);
            }
            for (j = 0; j < rtrim; j++) {
                ln = ((list)->tail);
                listDelNode(list,ln);
            }
            server.dirty++;
            addReply(c,shared.ok);
        }
    }
}

static void lremCommand(redisClient *c) {
    robj *o;

    o = lookupKeyWrite(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.czero);
    } else {
        if (o->type != 1) {
            addReply(c,shared.wrongtypeerr);
        } else {
            list *list = o->ptr;
            listNode *ln, *next;
            int toremove = atoi(c->argv[2]->ptr);
            int removed = 0;
            int fromtail = 0;

            if (toremove < 0) {
                toremove = -toremove;
                fromtail = 1;
            }
            ln = fromtail ? list->tail : list->head;
            while (ln) {
                robj *ele = ((ln)->value);

                next = fromtail ? ln->prev : ln->next;
                if (sdscmp(ele->ptr,c->argv[3]->ptr) == 0) {
                    listDelNode(list,ln);
                    server.dirty++;
                    removed++;
                    if (toremove && removed == toremove) break;
                }
                ln = next;
            }
            addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",removed));
        }
    }
}



static void saddCommand(redisClient *c) {
    robj *set;

    set = lookupKeyWrite(c->db,c->argv[1]);
    if (set == ((void *)0)) {
        set = createSetObject();
        dictAdd(c->db->dict,c->argv[1],set);
        incrRefCount(c->argv[1]);
    } else {
        if (set->type != 2) {
            addReply(c,shared.wrongtypeerr);
            return;
        }
    }
    if (dictAdd(set->ptr,c->argv[2],((void *)0)) == 0) {
        incrRefCount(c->argv[2]);
        server.dirty++;
        addReply(c,shared.cone);
    } else {
        addReply(c,shared.czero);
    }
}

static void sremCommand(redisClient *c) {
    robj *set;

    set = lookupKeyWrite(c->db,c->argv[1]);
    if (set == ((void *)0)) {
        addReply(c,shared.czero);
    } else {
        if (set->type != 2) {
            addReply(c,shared.wrongtypeerr);
            return;
        }
        if (dictDelete(set->ptr,c->argv[2]) == 0) {
            server.dirty++;
            if (htNeedsResize(set->ptr)) dictResize(set->ptr);
            addReply(c,shared.cone);
        } else {
            addReply(c,shared.czero);
        }
    }
}

static void smoveCommand(redisClient *c) {
    robj *srcset, *dstset;

    srcset = lookupKeyWrite(c->db,c->argv[1]);
    dstset = lookupKeyWrite(c->db,c->argv[2]);



    if (srcset == ((void *)0) || srcset->type != 2) {
        addReply(c, srcset ? shared.wrongtypeerr : shared.czero);
        return;
    }

    if (dstset && dstset->type != 2) {
        addReply(c,shared.wrongtypeerr);
        return;
    }

    if (dictDelete(srcset->ptr,c->argv[3]) == 1) {

        addReply(c,shared.czero);
        return;
    }
    server.dirty++;

    if (!dstset) {
        dstset = createSetObject();
        dictAdd(c->db->dict,c->argv[2],dstset);
        incrRefCount(c->argv[2]);
    }
    if (dictAdd(dstset->ptr,c->argv[3],((void *)0)) == 0)
        incrRefCount(c->argv[3]);
    addReply(c,shared.cone);
}

static void sismemberCommand(redisClient *c) {
    robj *set;

    set = lookupKeyRead(c->db,c->argv[1]);
    if (set == ((void *)0)) {
        addReply(c,shared.czero);
    } else {
        if (set->type != 2) {
            addReply(c,shared.wrongtypeerr);
            return;
        }
        if (dictFind(set->ptr,c->argv[2]))
            addReply(c,shared.cone);
        else
            addReply(c,shared.czero);
    }
}

static void scardCommand(redisClient *c) {
    robj *o;
    dict *s;

    o = lookupKeyRead(c->db,c->argv[1]);
    if (o == ((void *)0)) {
        addReply(c,shared.czero);
        return;
    } else {
        if (o->type != 2) {
            addReply(c,shared.wrongtypeerr);
        } else {
            s = o->ptr;
            addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",
                ((s)->used)));
        }
    }
}

static void spopCommand(redisClient *c) {
    robj *set;
    dictEntry *de;

    set = lookupKeyWrite(c->db,c->argv[1]);
    if (set == ((void *)0)) {
        addReply(c,shared.nullbulk);
    } else {
        if (set->type != 2) {
            addReply(c,shared.wrongtypeerr);
            return;
        }
        de = dictGetRandomKey(set->ptr);
        if (de == ((void *)0)) {
            addReply(c,shared.nullbulk);
        } else {
            robj *ele = ((de)->key);

            addReplyBulkLen(c,ele);
            addReply(c,ele);
            addReply(c,shared.crlf);
            dictDelete(set->ptr,ele);
            if (htNeedsResize(set->ptr)) dictResize(set->ptr);
            server.dirty++;
        }
    }
}

static int qsortCompareSetsByCardinality(const void *s1, const void *s2) {
    dict **d1 = (void*) s1, **d2 = (void*) s2;

    return ((*d1)->used)-((*d2)->used);
}

static void sinterGenericCommand(redisClient *c, robj **setskeys, int setsnum, robj *dstkey) {
    dict **dv = zmalloc(sizeof(dict*)*setsnum);
    dictIterator *di;
    dictEntry *de;
    robj *lenobj = ((void *)0), *dstset = ((void *)0);
    int j, cardinality = 0;

    if (!dv) oom("sinterGenericCommand");
    for (j = 0; j < setsnum; j++) {
        robj *setobj;

        setobj = dstkey ?
                    lookupKeyWrite(c->db,setskeys[j]) :
                    lookupKeyRead(c->db,setskeys[j]);
        if (!setobj) {
            zfree(dv);
            if (dstkey) {
                deleteKey(c->db,dstkey);
                addReply(c,shared.ok);
            } else {
                addReply(c,shared.nullmultibulk);
            }
            return;
        }
        if (setobj->type != 2) {
            zfree(dv);
            addReply(c,shared.wrongtypeerr);
            return;
        }
        dv[j] = setobj->ptr;
    }


    qsort(dv,setsnum,sizeof(dict*),qsortCompareSetsByCardinality);






    if (!dstkey) {
        lenobj = createObject(0,((void *)0));
        addReply(c,lenobj);
        decrRefCount(lenobj);
    } else {


        dstset = createSetObject();
    }




    di = dictGetIterator(dv[0]);
    if (!di) oom("dictGetIterator");

    while((de = dictNext(di)) != ((void *)0)) {
        robj *ele;

        for (j = 1; j < setsnum; j++)
            if (dictFind(dv[j],((de)->key)) == ((void *)0)) break;
        if (j != setsnum)
            continue;
        ele = ((de)->key);
        if (!dstkey) {
            addReplyBulkLen(c,ele);
            addReply(c,ele);
            addReply(c,shared.crlf);
            cardinality++;
        } else {
            dictAdd(dstset->ptr,ele,((void *)0));
            incrRefCount(ele);
        }
    }
    dictReleaseIterator(di);

    if (dstkey) {

        deleteKey(c->db,dstkey);
        dictAdd(c->db->dict,dstkey,dstset);
        incrRefCount(dstkey);
    }

    if (!dstkey) {
        lenobj->ptr = sdscatprintf(sdsempty(),"*%d\r\n",cardinality);
    } else {
        addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",
            (((dict*)dstset->ptr)->used)));
        server.dirty++;
    }
    zfree(dv);
}

static void sinterCommand(redisClient *c) {
    sinterGenericCommand(c,c->argv+1,c->argc-1,((void *)0));
}

static void sinterstoreCommand(redisClient *c) {
    sinterGenericCommand(c,c->argv+2,c->argc-2,c->argv[1]);
}




static void sunionDiffGenericCommand(redisClient *c, robj **setskeys, int setsnum, robj *dstkey, int op) {
    dict **dv = zmalloc(sizeof(dict*)*setsnum);
    dictIterator *di;
    dictEntry *de;
    robj *dstset = ((void *)0);
    int j, cardinality = 0;

    if (!dv) oom("sunionDiffGenericCommand");
    for (j = 0; j < setsnum; j++) {
        robj *setobj;

        setobj = dstkey ?
                    lookupKeyWrite(c->db,setskeys[j]) :
                    lookupKeyRead(c->db,setskeys[j]);
        if (!setobj) {
            dv[j] = ((void *)0);
            continue;
        }
        if (setobj->type != 2) {
            zfree(dv);
            addReply(c,shared.wrongtypeerr);
            return;
        }
        dv[j] = setobj->ptr;
    }




    dstset = createSetObject();



    for (j = 0; j < setsnum; j++) {
        if (op == 1 && j == 0 && !dv[j]) break;
        if (!dv[j]) continue;

        di = dictGetIterator(dv[j]);
        if (!di) oom("dictGetIterator");

        while((de = dictNext(di)) != ((void *)0)) {
            robj *ele;


            ele = ((de)->key);
            if (op == 0 || j == 0) {
                if (dictAdd(dstset->ptr,ele,((void *)0)) == 0) {
                    incrRefCount(ele);
                    cardinality++;
                }
            } else if (op == 1) {
                if (dictDelete(dstset->ptr,ele) == 0) {
                    cardinality--;
                }
            }
        }
        dictReleaseIterator(di);

        if (op == 1 && cardinality == 0) break;
    }


    if (!dstkey) {
        addReplySds(c,sdscatprintf(sdsempty(),"*%d\r\n",cardinality));
        di = dictGetIterator(dstset->ptr);
        if (!di) oom("dictGetIterator");
        while((de = dictNext(di)) != ((void *)0)) {
            robj *ele;

            ele = ((de)->key);
            addReplyBulkLen(c,ele);
            addReply(c,ele);
            addReply(c,shared.crlf);
        }
        dictReleaseIterator(di);
    } else {


        deleteKey(c->db,dstkey);
        dictAdd(c->db->dict,dstkey,dstset);
        incrRefCount(dstkey);
    }


    if (!dstkey) {
        decrRefCount(dstset);
    } else {
        addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",
            (((dict*)dstset->ptr)->used)));
        server.dirty++;
    }
    zfree(dv);
}

static void sunionCommand(redisClient *c) {
    sunionDiffGenericCommand(c,c->argv+1,c->argc-1,((void *)0),0);
}

static void sunionstoreCommand(redisClient *c) {
    sunionDiffGenericCommand(c,c->argv+2,c->argc-2,c->argv[1],0);
}

static void sdiffCommand(redisClient *c) {
    sunionDiffGenericCommand(c,c->argv+1,c->argc-1,((void *)0),1);
}

static void sdiffstoreCommand(redisClient *c) {
    sunionDiffGenericCommand(c,c->argv+2,c->argc-2,c->argv[1],1);
}

static void flushdbCommand(redisClient *c) {
    server.dirty += ((c->db->dict)->used);
    dictEmpty(c->db->dict);
    dictEmpty(c->db->expires);
    addReply(c,shared.ok);
}

static void flushallCommand(redisClient *c) {
    server.dirty += emptyDb();
    addReply(c,shared.ok);
    rdbSave(server.dbfilename);
    server.dirty++;
}

static redisSortOperation *createSortOperation(int type, robj *pattern) {
    redisSortOperation *so = zmalloc(sizeof(*so));
    if (!so) oom("createSortOperation");
    so->type = type;
    so->pattern = pattern;
    return so;
}



static robj *lookupKeyByPattern(redisDb *db, robj *pattern, robj *subst) {
    char *p;
    sds spat, ssub;
    robj keyobj;
    int prefixlen, sublen, postfixlen;

    struct {
        long len;
        long free;
        char buf[1024 +1];
    } keyname;

    if (subst->encoding == 0)
        incrRefCount(subst);
    else {
        subst = getDecodedObject(subst);
    }

    spat = pattern->ptr;
    ssub = subst->ptr;
    if (sdslen(spat)+sdslen(ssub)-1 > 1024) return ((void *)0);
    p = strchr(spat,'*');
    if (!p) return ((void *)0);

    prefixlen = p-spat;
    sublen = sdslen(ssub);
    postfixlen = sdslen(spat)-(prefixlen+1);
    memcpy(keyname.buf,spat,prefixlen);
    memcpy(keyname.buf+prefixlen,ssub,sublen);
    memcpy(keyname.buf+prefixlen+sublen,p+1,postfixlen);
    keyname.buf[prefixlen+sublen+postfixlen] = '\0';
    keyname.len = prefixlen+sublen+postfixlen;

    keyobj.refcount = 1;
    keyobj.type = 0;
    keyobj.ptr = ((char*)&keyname)+(sizeof(long)*2);

    decrRefCount(subst);


    return lookupKeyRead(db,&keyobj);
}




static int sortCompare(const void *s1, const void *s2) {
    const redisSortObject *so1 = s1, *so2 = s2;
    int cmp;

    if (!server.sort_alpha) {

        if (so1->u.score > so2->u.score) {
            cmp = 1;
        } else if (so1->u.score < so2->u.score) {
            cmp = -1;
        } else {
            cmp = 0;
        }
    } else {

        if (server.sort_bypattern) {
            if (!so1->u.cmpobj || !so2->u.cmpobj) {

                if (so1->u.cmpobj == so2->u.cmpobj)
                    cmp = 0;
                else if (so1->u.cmpobj == ((void *)0))
                    cmp = -1;
                else
                    cmp = 1;
            } else {

                cmp = strcoll(so1->u.cmpobj->ptr,so2->u.cmpobj->ptr);
            }
        } else {

            if (so1->obj->encoding == 0 &&
                so2->obj->encoding == 0) {
                cmp = strcoll(so1->obj->ptr,so2->obj->ptr);
            } else {
                robj *dec1, *dec2;

                dec1 = so1->obj->encoding == 0 ?
                    so1->obj : getDecodedObject(so1->obj);
                dec2 = so2->obj->encoding == 0 ?
                    so2->obj : getDecodedObject(so2->obj);
                cmp = strcoll(dec1->ptr,dec2->ptr);
                if (dec1 != so1->obj) decrRefCount(dec1);
                if (dec2 != so2->obj) decrRefCount(dec2);
            }
        }
    }
    return server.sort_desc ? -cmp : cmp;
}



static void sortCommand(redisClient *c) {
    list *operations;
    int outputlen = 0;
    int desc = 0, alpha = 0;
    int limit_start = 0, limit_count = -1, start, end;
    int j, dontsort = 0, vectorlen;
    int getop = 0;
    robj *sortval, *sortby = ((void *)0);
    redisSortObject *vector;


    sortval = lookupKeyRead(c->db,c->argv[1]);
    if (sortval == ((void *)0)) {
        addReply(c,shared.nokeyerr);
        return;
    }
    if (sortval->type != 2 && sortval->type != 1) {
        addReply(c,shared.wrongtypeerr);
        return;
    }



    operations = listCreate();
    ((operations)->free = (zfree));
    j = 2;




    incrRefCount(sortval);


    while(j < c->argc) {
        int leftargs = c->argc-j-1;
        if (!strcasecmp(c->argv[j]->ptr,"asc")) {
            desc = 0;
        } else if (!strcasecmp(c->argv[j]->ptr,"desc")) {
            desc = 1;
        } else if (!strcasecmp(c->argv[j]->ptr,"alpha")) {
            alpha = 1;
        } else if (!strcasecmp(c->argv[j]->ptr,"limit") && leftargs >= 2) {
            limit_start = atoi(c->argv[j+1]->ptr);
            limit_count = atoi(c->argv[j+2]->ptr);
            j+=2;
        } else if (!strcasecmp(c->argv[j]->ptr,"by") && leftargs >= 1) {
            sortby = c->argv[j+1];


            if (strchr(c->argv[j+1]->ptr,'*') == ((void *)0)) dontsort = 1;
            j++;
        } else if (!strcasecmp(c->argv[j]->ptr,"get") && leftargs >= 1) {
            listAddNodeTail(operations,createSortOperation(
                0,c->argv[j+1]));
            getop++;
            j++;
        } else if (!strcasecmp(c->argv[j]->ptr,"del") && leftargs >= 1) {
            listAddNodeTail(operations,createSortOperation(
                1,c->argv[j+1]));
            j++;
        } else if (!strcasecmp(c->argv[j]->ptr,"incr") && leftargs >= 1) {
            listAddNodeTail(operations,createSortOperation(
                2,c->argv[j+1]));
            j++;
        } else if (!strcasecmp(c->argv[j]->ptr,"get") && leftargs >= 1) {
            listAddNodeTail(operations,createSortOperation(
                3,c->argv[j+1]));
            j++;
        } else {
            decrRefCount(sortval);
            listRelease(operations);
            addReply(c,shared.syntaxerr);
            return;
        }
        j++;
    }


    vectorlen = (sortval->type == 1) ?
        (((list*)sortval->ptr)->len) :
        (((dict*)sortval->ptr)->used);
    vector = zmalloc(sizeof(redisSortObject)*vectorlen);
    if (!vector) oom("allocating objects vector for SORT");
    j = 0;
    if (sortval->type == 1) {
        list *list = sortval->ptr;
        listNode *ln;

        listRewind(list);
        while((ln = listYield(list))) {
            robj *ele = ln->value;
            vector[j].obj = ele;
            vector[j].u.score = 0;
            vector[j].u.cmpobj = ((void *)0);
            j++;
        }
    } else {
        dict *set = sortval->ptr;
        dictIterator *di;
        dictEntry *setele;

        di = dictGetIterator(set);
        if (!di) oom("dictGetIterator");
        while((setele = dictNext(di)) != ((void *)0)) {
            vector[j].obj = ((setele)->key);
            vector[j].u.score = 0;
            vector[j].u.cmpobj = ((void *)0);
            j++;
        }
        dictReleaseIterator(di);
    }
    ((j == vectorlen) ? (void) (0) : __assert_fail ("j == vectorlen", "redis.c", 3704, __PRETTY_FUNCTION__));


    if (dontsort == 0) {
        for (j = 0; j < vectorlen; j++) {
            if (sortby) {
                robj *byval;

                byval = lookupKeyByPattern(c->db,sortby,vector[j].obj);
                if (!byval || byval->type != 0) continue;
                if (alpha) {
                    if (byval->encoding == 0) {
                        vector[j].u.cmpobj = byval;
                        incrRefCount(byval);
                    } else {
                        vector[j].u.cmpobj = getDecodedObject(byval);
                    }
                } else {
                    if (byval->encoding == 0) {
                        vector[j].u.score = strtod(byval->ptr,((void *)0));
                    } else {
                        if (byval->encoding == 1)
                            vector[j].u.score = (long)byval->ptr;
                        else
                            ((1 != 1) ? (void) (0) : __assert_fail ("1 != 1", "redis.c", 3728, __PRETTY_FUNCTION__));
                    }
                }
            } else {
                if (!alpha) {
                    if (vector[j].obj->encoding == 0)
                        vector[j].u.score = strtod(vector[j].obj->ptr,((void *)0));
                    else {
                        if (vector[j].obj->encoding == 1)
                            vector[j].u.score = (long) vector[j].obj->ptr;
                        else
                            ((1 != 1) ? (void) (0) : __assert_fail ("1 != 1", "redis.c", 3739, __PRETTY_FUNCTION__));
                    }
                }
            }
        }
    }



    start = (limit_start < 0) ? 0 : limit_start;
    end = (limit_count < 0) ? vectorlen-1 : start+limit_count-1;
    if (start >= vectorlen) {
        start = vectorlen-1;
        end = vectorlen-2;
    }
    if (end >= vectorlen) end = vectorlen-1;

    if (dontsort == 0) {
        server.sort_desc = desc;
        server.sort_alpha = alpha;
        server.sort_bypattern = sortby ? 1 : 0;
        if (sortby && (start != 0 || end != vectorlen-1))
            pqsort(vector,vectorlen,sizeof(redisSortObject),sortCompare, start,end);
        else
            qsort(vector,vectorlen,sizeof(redisSortObject),sortCompare);
    }



    outputlen = getop ? getop*(end-start+1) : end-start+1;
    addReplySds(c,sdscatprintf(sdsempty(),"*%d\r\n",outputlen));
    for (j = start; j <= end; j++) {
        listNode *ln;
        if (!getop) {
            addReplyBulkLen(c,vector[j].obj);
            addReply(c,vector[j].obj);
            addReply(c,shared.crlf);
        }
        listRewind(operations);
        while((ln = listYield(operations))) {
            redisSortOperation *sop = ln->value;
            robj *val = lookupKeyByPattern(c->db,sop->pattern,
                vector[j].obj);

            if (sop->type == 0) {
                if (!val || val->type != 0) {
                    addReply(c,shared.nullbulk);
                } else {
                    addReplyBulkLen(c,val);
                    addReply(c,val);
                    addReply(c,shared.crlf);
                }
            } else if (sop->type == 1) {

            }
        }
    }


    decrRefCount(sortval);
    listRelease(operations);
    for (j = 0; j < vectorlen; j++) {
        if (sortby && alpha && vector[j].u.cmpobj)
            decrRefCount(vector[j].u.cmpobj);
    }
    zfree(vector);
}

static void infoCommand(redisClient *c) {
    sds info;
    time_t uptime = time(((void *)0))-server.stat_starttime;
    int j;

    info = sdscatprintf(sdsempty(),
        "redis_version:%s\r\n"
        "uptime_in_seconds:%d\r\n"
        "uptime_in_days:%d\r\n"
        "connected_clients:%d\r\n"
        "connected_slaves:%d\r\n"
        "used_memory:%zu\r\n"
        "changes_since_last_save:%lld\r\n"
        "bgsave_in_progress:%d\r\n"
        "last_save_time:%d\r\n"
        "total_connections_received:%lld\r\n"
        "total_commands_processed:%lld\r\n"
        "role:%s\r\n"
        ,"1.001",
        uptime,
        uptime/(3600*24),
        ((server.clients)->len)-((server.slaves)->len),
        ((server.slaves)->len),
        server.usedmemory,
        server.dirty,
        server.bgsaveinprogress,
        server.lastsave,
        server.stat_numconnections,
        server.stat_numcommands,
        server.masterhost == ((void *)0) ? "master" : "slave"
    );
    if (server.masterhost) {
        info = sdscatprintf(info,
            "master_host:%s\r\n"
            "master_port:%d\r\n"
            "master_link_status:%s\r\n"
            "master_last_io_seconds_ago:%d\r\n"
            ,server.masterhost,
            server.masterport,
            (server.replstate == 2) ?
                "up" : "down",
            (int)(time(((void *)0))-server.master->lastinteraction)
        );
    }
    for (j = 0; j < server.dbnum; j++) {
        long long keys, vkeys;

        keys = ((server.db[j].dict)->used);
        vkeys = ((server.db[j].expires)->used);
        if (keys || vkeys) {
            info = sdscatprintf(info, "db%d: keys=%lld,expires=%lld\r\n",
                j, keys, vkeys);
        }
    }
    addReplySds(c,sdscatprintf(sdsempty(),"$%d\r\n",sdslen(info)));
    addReplySds(c,info);
    addReply(c,shared.crlf);
}

static void monitorCommand(redisClient *c) {

    if (c->flags & 2) return;

    c->flags |= (2|8);
    c->slaveseldb = 0;
    if (!listAddNodeTail(server.monitors,c)) oom("listAddNodeTail");
    addReply(c,shared.ok);
}


static int removeExpire(redisDb *db, robj *key) {
    if (dictDelete(db->expires,key) == 0) {
        return 1;
    } else {
        return 0;
    }
}

static int setExpire(redisDb *db, robj *key, time_t when) {
    if (dictAdd(db->expires,key,(void*)when) == 1) {
        return 0;
    } else {
        incrRefCount(key);
        return 1;
    }
}



static time_t getExpire(redisDb *db, robj *key) {
    dictEntry *de;


    if (((db->expires)->used) == 0 ||
       (de = dictFind(db->expires,key)) == ((void *)0)) return -1;

    return (time_t) ((de)->val);
}

static int expireIfNeeded(redisDb *db, robj *key) {
    time_t when;
    dictEntry *de;


    if (((db->expires)->used) == 0 ||
       (de = dictFind(db->expires,key)) == ((void *)0)) return 0;


    when = (time_t) ((de)->val);
    if (time(((void *)0)) <= when) return 0;


    dictDelete(db->expires,key);
    return dictDelete(db->dict,key) == 0;
}

static int deleteIfVolatile(redisDb *db, robj *key) {
    dictEntry *de;


    if (((db->expires)->used) == 0 ||
       (de = dictFind(db->expires,key)) == ((void *)0)) return 0;


    server.dirty++;
    dictDelete(db->expires,key);
    return dictDelete(db->dict,key) == 0;
}

static void expireCommand(redisClient *c) {
    dictEntry *de;
    int seconds = atoi(c->argv[2]->ptr);

    de = dictFind(c->db->dict,c->argv[1]);
    if (de == ((void *)0)) {
        addReply(c,shared.czero);
        return;
    }
    if (seconds <= 0) {
        addReply(c, shared.czero);
        return;
    } else {
        time_t when = time(((void *)0))+seconds;
        if (setExpire(c->db,c->argv[1],when)) {
            addReply(c,shared.cone);
            server.dirty++;
        } else {
            addReply(c,shared.czero);
        }
        return;
    }
}

static void ttlCommand(redisClient *c) {
    time_t expire;
    int ttl = -1;

    expire = getExpire(c->db,c->argv[1]);
    if (expire != -1) {
        ttl = (int) (expire-time(((void *)0)));
        if (ttl < 0) ttl = -1;
    }
    addReplySds(c,sdscatprintf(sdsempty(),":%d\r\n",ttl));
}



static int syncWrite(int fd, char *ptr, ssize_t size, int timeout) {
    ssize_t nwritten, ret = size;
    time_t start = time(((void *)0));

    timeout++;
    while(size) {
        if (aeWait(fd,2,1000) & 2) {
            nwritten = write(fd,ptr,size);
            if (nwritten == -1) return -1;
            ptr += nwritten;
            size -= nwritten;
        }
        if ((time(((void *)0))-start) > timeout) {
            (*__errno_location ()) = 110;
            return -1;
        }
    }
    return ret;
}

static int syncRead(int fd, char *ptr, ssize_t size, int timeout) {
    ssize_t nread, totread = 0;
    time_t start = time(((void *)0));

    timeout++;
    while(size) {
        if (aeWait(fd,1,1000) & 1) {
            nread = read(fd,ptr,size);
            if (nread == -1) return -1;
            ptr += nread;
            size -= nread;
            totread += nread;
        }
        if ((time(((void *)0))-start) > timeout) {
            (*__errno_location ()) = 110;
            return -1;
        }
    }
    return totread;
}

static int syncReadLine(int fd, char *ptr, ssize_t size, int timeout) {
    ssize_t nread = 0;

    size--;
    while(size) {
        char c;

        if (syncRead(fd,&c,1,timeout) == -1) return -1;
        if (c == '\n') {
            *ptr = '\0';
            if (nread && *(ptr-1) == '\r') *(ptr-1) = '\0';
            return nread;
        } else {
            *ptr++ = c;
            *ptr = '\0';
            nread++;
        }
    }
    return nread;
}

static void syncCommand(redisClient *c) {

    if (c->flags & 2) return;





    if (((c->reply)->len) != 0) {
        addReplySds(c,sdsnew("-ERR SYNC is invalid with pending input\r\n"));
        return;
    }

    redisLog(1,"Slave ask for synchronization");


    if (server.bgsaveinprogress) {



        redisClient *slave;
        listNode *ln;

        listRewind(server.slaves);
        while((ln = listYield(server.slaves))) {
            slave = ln->value;
            if (slave->replstate == 4) break;
        }
        if (ln) {


            listRelease(c->reply);
            c->reply = listDup(slave->reply);
            if (!c->reply) oom("listDup copying slave reply list");
            c->replstate = 4;
            redisLog(1,"Waiting for end of BGSAVE for SYNC");
        } else {


            c->replstate = 3;
            redisLog(1,"Waiting for next BGSAVE for SYNC");
        }
    } else {

        redisLog(1,"Starting BGSAVE for SYNC");
        if (rdbSaveBackground(server.dbfilename) != 0) {
            redisLog(1,"Replication failed, can't BGSAVE");
            addReplySds(c,sdsnew("-ERR Unalbe to perform background save\r\n"));
            return;
        }
        c->replstate = 4;
    }
    c->repldbfd = -1;
    c->flags |= 2;
    c->slaveseldb = 0;
    if (!listAddNodeTail(server.slaves,c)) oom("listAddNodeTail");
    return;
}

static void sendBulkToSlave(aeEventLoop *el, int fd, void *privdata, int mask) {
    redisClient *slave = privdata;
    ((void) el);
    ((void) mask);
    char buf[1024];
    ssize_t nwritten, buflen;

    if (slave->repldboff == 0) {




        sds bulkcount;

        bulkcount = sdscatprintf(sdsempty(),"$%lld\r\n",(unsigned long long)
            slave->repldbsize);
        if (write(fd,bulkcount,sdslen(bulkcount)) != (signed)sdslen(bulkcount))
        {
            sdsfree(bulkcount);
            freeClient(slave);
            return;
        }
        sdsfree(bulkcount);
    }
    lseek(slave->repldbfd,slave->repldboff,0);
    buflen = read(slave->repldbfd,buf,1024);
    if (buflen <= 0) {
        redisLog(2,"Read error sending DB to slave: %s",
            (buflen == 0) ? "premature EOF" : strerror((*__errno_location ())));
        freeClient(slave);
        return;
    }
    if ((nwritten = write(fd,buf,buflen)) == -1) {
        redisLog(0,"Write error sending DB to slave: %s",
            strerror((*__errno_location ())));
        freeClient(slave);
        return;
    }
    slave->repldboff += nwritten;
    if (slave->repldboff == slave->repldbsize) {
        close(slave->repldbfd);
        slave->repldbfd = -1;
        aeDeleteFileEvent(server.el,slave->fd,2);
        slave->replstate = 6;
        if (aeCreateFileEvent(server.el, slave->fd, 2,
            sendReplyToClient, slave, ((void *)0)) == -1) {
            freeClient(slave);
            return;
        }
        addReplySds(slave,sdsempty());
        redisLog(1,"Synchronization with slave succeeded");
    }
}







static void updateSlavesWaitingBgsave(int bgsaveerr) {
    listNode *ln;
    int startbgsave = 0;

    listRewind(server.slaves);
    while((ln = listYield(server.slaves))) {
        redisClient *slave = ln->value;

        if (slave->replstate == 3) {
            startbgsave = 1;
            slave->replstate = 4;
        } else if (slave->replstate == 4) {
            struct stat buf;

            if (bgsaveerr != 0) {
                freeClient(slave);
                redisLog(2,"SYNC failed. BGSAVE child returned an error");
                continue;
            }
            if ((slave->repldbfd = open(server.dbfilename,00)) == -1 ||
                fstat(slave->repldbfd,&buf) == -1) {
                freeClient(slave);
                redisLog(2,"SYNC failed. Can't open/stat DB after BGSAVE: %s", strerror((*__errno_location ())));
                continue;
            }
            slave->repldboff = 0;
            slave->repldbsize = buf.st_size;
            slave->replstate = 5;
            aeDeleteFileEvent(server.el,slave->fd,2);
            if (aeCreateFileEvent(server.el, slave->fd, 2, sendBulkToSlave, slave, ((void *)0)) == -1) {
                freeClient(slave);
                continue;
            }
        }
    }
    if (startbgsave) {
        if (rdbSaveBackground(server.dbfilename) != 0) {
            listRewind(server.slaves);
            redisLog(2,"SYNC failed. BGSAVE failed");
            while((ln = listYield(server.slaves))) {
                redisClient *slave = ln->value;

                if (slave->replstate == 3)
                    freeClient(slave);
            }
        }
    }
}

static int syncWithMaster(void) {
    char buf[1024], tmpfile[256];
    int dumpsize;
    int fd = anetTcpConnect(((void *)0),server.masterhost,server.masterport);
    int dfd;

    if (fd == -1) {
        redisLog(2,"Unable to connect to MASTER: %s",
            strerror((*__errno_location ())));
        return -1;
    }

    if (syncWrite(fd,"SYNC \r\n",7,5) == -1) {
        close(fd);
        redisLog(2,"I/O error writing to MASTER: %s",
            strerror((*__errno_location ())));
        return -1;
    }

    if (syncReadLine(fd,buf,1024,3600) == -1) {
        close(fd);
        redisLog(2,"I/O error reading bulk count from MASTER: %s",
            strerror((*__errno_location ())));
        return -1;
    }
    dumpsize = atoi(buf+1);
    redisLog(1,"Receiving %d bytes data dump from MASTER",dumpsize);

    snprintf(tmpfile,256,"temp-%d.%ld.rdb",(int)time(((void *)0)),(long int)random());
    dfd = open(tmpfile,0100|01,0644);
    if (dfd == -1) {
        close(fd);
        redisLog(2,"Opening the temp file needed for MASTER <-> SLAVE synchronization: %s",strerror((*__errno_location ())));
        return -1;
    }
    while(dumpsize) {
        int nread, nwritten;

        nread = read(fd,buf,(dumpsize < 1024)?dumpsize:1024);
        if (nread == -1) {
            redisLog(2,"I/O error trying to sync with MASTER: %s",
                strerror((*__errno_location ())));
            close(fd);
            close(dfd);
            return -1;
        }
        nwritten = write(dfd,buf,nread);
        if (nwritten == -1) {
            redisLog(2,"Write error writing to the DB dump file needed for MASTER <-> SLAVE synchrnonization: %s", strerror((*__errno_location ())));
            close(fd);
            close(dfd);
            return -1;
        }
        dumpsize -= nread;
    }
    close(dfd);
    if (rename(tmpfile,server.dbfilename) == -1) {
        redisLog(2,"Failed trying to rename the temp DB into dump.rdb in MASTER <-> SLAVE synchronization: %s", strerror((*__errno_location ())));
        unlink(tmpfile);
        close(fd);
        return -1;
    }
    emptyDb();
    if (rdbLoad(server.dbfilename) != 0) {
        redisLog(2,"Failed trying to load the MASTER synchronization DB from disk");
        close(fd);
        return -1;
    }
    server.master = createClient(fd);
    server.master->flags |= 4;
    server.replstate = 2;
    return 0;
}

static void slaveofCommand(redisClient *c) {
    if (!strcasecmp(c->argv[1]->ptr,"no") &&
        !strcasecmp(c->argv[2]->ptr,"one")) {
        if (server.masterhost) {
            sdsfree(server.masterhost);
            server.masterhost = ((void *)0);
            if (server.master) freeClient(server.master);
            server.replstate = 0;
            redisLog(1,"MASTER MODE enabled (user request)");
        }
    } else {
        sdsfree(server.masterhost);
        server.masterhost = sdsdup(c->argv[1]->ptr);
        server.masterport = atoi(c->argv[2]->ptr);
        if (server.master) freeClient(server.master);
        server.replstate = 1;
        redisLog(1,"SLAVE OF %s:%d enabled (user request)",
            server.masterhost, server.masterport);
    }
    addReply(c,shared.ok);
}
# 4313 "redis.c"
static void freeMemoryIfNeeded(void) {
    while (server.maxmemory && zmalloc_used_memory() > server.maxmemory) {
        if (((server.objfreelist)->len)) {
            robj *o;

            listNode *head = ((server.objfreelist)->head);
            o = ((head)->value);
            listDelNode(server.objfreelist,head);
            zfree(o);
        } else {
            int j, k, freed = 0;

            for (j = 0; j < server.dbnum; j++) {
                int minttl = -1;
                robj *minkey = ((void *)0);
                struct dictEntry *de;

                if (((server.db[j].expires)->used)) {
                    freed = 1;


                    for (k = 0; k < 3; k++) {
                        time_t t;

                        de = dictGetRandomKey(server.db[j].expires);
                        t = (time_t) ((de)->val);
                        if (minttl == -1 || t < minttl) {
                            minkey = ((de)->key);
                            minttl = t;
                        }
                    }
                    deleteKey(server.db+j,minkey);
                }
            }
            if (!freed) return;
        }
    }
}



static void debugCommand(redisClient *c) {
    if (!strcasecmp(c->argv[1]->ptr,"segfault")) {
        *((char*)-1) = 'x';
    } else if (!strcasecmp(c->argv[1]->ptr,"object") && c->argc == 3) {
        dictEntry *de = dictFind(c->db->dict,c->argv[2]);
        robj *key, *val;

        if (!de) {
            addReply(c,shared.nokeyerr);
            return;
        }
        key = ((de)->key);
        val = ((de)->val);
        addReplySds(c,sdscatprintf(sdsempty(),
            "+Key at:%p refcount:%d, value at:%p refcount:%d encoding:%d\r\n",
                key, key->refcount, val, val->refcount, val->encoding));
    } else {
        addReplySds(c,sdsnew(
            "-ERR Syntax error, try DEBUG [SEGFAULT|OBJECT <key>]\r\n"));
    }
}


static struct redisFunctionSym symsTable[] = {
{"dictEncObjKeyCompare", (unsigned long)dictEncObjKeyCompare},
{"dictEncObjHash", (unsigned long)dictEncObjHash},
{"incrDecrCommand", (unsigned long)incrDecrCommand},
{"freeStringObject", (unsigned long)freeStringObject},
{"freeListObject", (unsigned long)freeListObject},
{"freeSetObject", (unsigned long)freeSetObject},
{"decrRefCount", (unsigned long)decrRefCount},
{"createObject", (unsigned long)createObject},
{"freeClient", (unsigned long)freeClient},
{"rdbLoad", (unsigned long)rdbLoad},
{"rdbSaveStringObject", (unsigned long)rdbSaveStringObject},
{"rdbSaveStringObjectRaw", (unsigned long)rdbSaveStringObjectRaw},
{"addReply", (unsigned long)addReply},
{"addReplySds", (unsigned long)addReplySds},
{"incrRefCount", (unsigned long)incrRefCount},
{"rdbSaveBackground", (unsigned long)rdbSaveBackground},
{"createStringObject", (unsigned long)createStringObject},
{"replicationFeedSlaves", (unsigned long)replicationFeedSlaves},
{"syncWithMaster", (unsigned long)syncWithMaster},
{"tryObjectSharing", (unsigned long)tryObjectSharing},
{"tryObjectEncoding", (unsigned long)tryObjectEncoding},
{"getDecodedObject", (unsigned long)getDecodedObject},
{"removeExpire", (unsigned long)removeExpire},
{"expireIfNeeded", (unsigned long)expireIfNeeded},
{"deleteIfVolatile", (unsigned long)deleteIfVolatile},
{"deleteKey", (unsigned long)deleteKey},
{"getExpire", (unsigned long)getExpire},
{"setExpire", (unsigned long)setExpire},
{"updateSlavesWaitingBgsave", (unsigned long)updateSlavesWaitingBgsave},
{"freeMemoryIfNeeded", (unsigned long)freeMemoryIfNeeded},
{"authCommand", (unsigned long)authCommand},
{"pingCommand", (unsigned long)pingCommand},
{"echoCommand", (unsigned long)echoCommand},
{"setCommand", (unsigned long)setCommand},
{"setnxCommand", (unsigned long)setnxCommand},
{"getCommand", (unsigned long)getCommand},
{"delCommand", (unsigned long)delCommand},
{"existsCommand", (unsigned long)existsCommand},
{"incrCommand", (unsigned long)incrCommand},
{"decrCommand", (unsigned long)decrCommand},
{"incrbyCommand", (unsigned long)incrbyCommand},
{"decrbyCommand", (unsigned long)decrbyCommand},
{"selectCommand", (unsigned long)selectCommand},
{"randomkeyCommand", (unsigned long)randomkeyCommand},
{"keysCommand", (unsigned long)keysCommand},
{"dbsizeCommand", (unsigned long)dbsizeCommand},
{"lastsaveCommand", (unsigned long)lastsaveCommand},
{"saveCommand", (unsigned long)saveCommand},
{"bgsaveCommand", (unsigned long)bgsaveCommand},
{"shutdownCommand", (unsigned long)shutdownCommand},
{"moveCommand", (unsigned long)moveCommand},
{"renameCommand", (unsigned long)renameCommand},
{"renamenxCommand", (unsigned long)renamenxCommand},
{"lpushCommand", (unsigned long)lpushCommand},
{"rpushCommand", (unsigned long)rpushCommand},
{"lpopCommand", (unsigned long)lpopCommand},
{"rpopCommand", (unsigned long)rpopCommand},
{"llenCommand", (unsigned long)llenCommand},
{"lindexCommand", (unsigned long)lindexCommand},
{"lrangeCommand", (unsigned long)lrangeCommand},
{"ltrimCommand", (unsigned long)ltrimCommand},
{"typeCommand", (unsigned long)typeCommand},
{"lsetCommand", (unsigned long)lsetCommand},
{"saddCommand", (unsigned long)saddCommand},
{"sremCommand", (unsigned long)sremCommand},
{"smoveCommand", (unsigned long)smoveCommand},
{"sismemberCommand", (unsigned long)sismemberCommand},
{"scardCommand", (unsigned long)scardCommand},
{"spopCommand", (unsigned long)spopCommand},
{"sinterCommand", (unsigned long)sinterCommand},
{"sinterstoreCommand", (unsigned long)sinterstoreCommand},
{"sunionCommand", (unsigned long)sunionCommand},
{"sunionstoreCommand", (unsigned long)sunionstoreCommand},
{"sdiffCommand", (unsigned long)sdiffCommand},
{"sdiffstoreCommand", (unsigned long)sdiffstoreCommand},
{"syncCommand", (unsigned long)syncCommand},
{"flushdbCommand", (unsigned long)flushdbCommand},
{"flushallCommand", (unsigned long)flushallCommand},
{"sortCommand", (unsigned long)sortCommand},
{"lremCommand", (unsigned long)lremCommand},
{"infoCommand", (unsigned long)infoCommand},
{"mgetCommand", (unsigned long)mgetCommand},
{"monitorCommand", (unsigned long)monitorCommand},
{"expireCommand", (unsigned long)expireCommand},
{"getSetCommand", (unsigned long)getSetCommand},
{"ttlCommand", (unsigned long)ttlCommand},
{"slaveofCommand", (unsigned long)slaveofCommand},
{"debugCommand", (unsigned long)debugCommand},
{"processCommand", (unsigned long)processCommand},
{"setupSigSegvAction", (unsigned long)setupSigSegvAction},
{"readQueryFromClient", (unsigned long)readQueryFromClient},
{"rdbRemoveTempFile", (unsigned long)rdbRemoveTempFile},
{((void *)0),0}
};




static char *findFuncName(void *pointer, unsigned long *offset){
    int i, ret = -1;
    unsigned long off, minoff = 0;


    for (i=0; symsTable[i].pointer; i++) {
        unsigned long lp = (unsigned long) pointer;

        if (lp != (unsigned long)-1 && lp >= symsTable[i].pointer) {
            off=lp-symsTable[i].pointer;
            if (ret < 0 || off < minoff) {
                minoff=off;
                ret=i;
            }
        }
    }
    if (ret == -1) return ((void *)0);
    *offset = minoff;
    return symsTable[ret].name;
}

static void *getMcontextEip(ucontext_t *uc) {
# 4515 "redis.c"
    return ((void *)0);

}

static void segvHandler(int sig, siginfo_t *info, void *secret) {
    void *trace[100];
    char **messages = ((void *)0);
    int i, trace_size = 0;
    unsigned long offset=0;
    time_t uptime = time(((void *)0))-server.stat_starttime;
    ucontext_t *uc = (ucontext_t*) secret;
    ((void) info);

    redisLog(2,
        "======= Ooops! Redis %s got signal: -%d- =======", "1.001", sig);
    redisLog(2, "%s", sdscatprintf(sdsempty(),
        "redis_version:%s; "
        "uptime_in_seconds:%d; "
        "connected_clients:%d; "
        "connected_slaves:%d; "
        "used_memory:%zu; "
        "changes_since_last_save:%lld; "
        "bgsave_in_progress:%d; "
        "last_save_time:%d; "
        "total_connections_received:%lld; "
        "total_commands_processed:%lld; "
        "role:%s;"
        ,"1.001",
        uptime,
        ((server.clients)->len)-((server.slaves)->len),
        ((server.slaves)->len),
        server.usedmemory,
        server.dirty,
        server.bgsaveinprogress,
        server.lastsave,
        server.stat_numconnections,
        server.stat_numcommands,
        server.masterhost == ((void *)0) ? "master" : "slave"
    ));

    trace_size = backtrace(trace, 100);

    if (getMcontextEip(uc) != ((void *)0)) {
        trace[1] = getMcontextEip(uc);
    }
    messages = backtrace_symbols(trace, trace_size);

    for (i=1; i<trace_size; ++i) {
        char *fn = findFuncName(trace[i], &offset), *p;

        p = strchr(messages[i],'+');
        if (!fn || (p && ((unsigned long)strtol(p+1,((void *)0),10)) < offset)) {
            redisLog(2,"%s", messages[i]);
        } else {
            redisLog(2,"%d redis-server %p %s + %d", i, trace[i], fn, (unsigned int)offset);
        }
    }
    free(messages);
    exit(0);
}

static void setupSigSegvAction(void) {
    struct sigaction act;

    sigemptyset (&act.sa_mask);


    act.sa_flags = 0x40000000 | 0x08000000 | 0x80000000 | 4;
    act.__sigaction_handler.sa_sigaction = segvHandler;
    sigaction (11, &act, ((void *)0));
    sigaction (7, &act, ((void *)0));
    sigaction (8, &act, ((void *)0));
    sigaction (4, &act, ((void *)0));
    sigaction (7, &act, ((void *)0));
    return;
}
# 4599 "redis.c"
int linuxOvercommitMemoryValue(void) {
    FILE *fp = fopen("/proc/sys/vm/overcommit_memory","r");
    char buf[64];

    if (!fp) return -1;
    if (fgets(buf,64,fp) == ((void *)0)) {
        fclose(fp);
        return -1;
    }
    fclose(fp);

    return atoi(buf);
}

void linuxOvercommitMemoryWarning(void) {
    if (linuxOvercommitMemoryValue() == 0) {
        redisLog(2,"WARNING overcommit_memory is set to 0! Background save may fail under low condition memory. To fix this issue add 'vm.overcommit_memory = 1' to /etc/sysctl.conf and then reboot or run the command 'sysctl vm.overcommit_memory=1' for this to take effect.");
    }
}


static void daemonize(void) {
    int fd;
    FILE *fp;

    if (fork() != 0) exit(0);
    setsid();




    if ((fd = open("/dev/null", 02, 0)) != -1) {
        dup2(fd, 0);
        dup2(fd, 1);
        dup2(fd, 2);
        if (fd > 2) close(fd);
    }

    fp = fopen(server.pidfile,"w");
    if (fp) {
        fprintf(fp,"%d\n",getpid());
        fclose(fp);
    }
}

int main(int argc, char **argv) {
    initServerConfig();
    if (argc == 2) {
        ResetServerSaveParams();
        loadServerConfig(argv[1]);
    } else if (argc > 2) {
        fprintf(stderr,"Usage: ./redis-server [/path/to/redis.conf]\n");
        exit(1);
    } else {
        redisLog(2,"Warning: no config file specified, using the default config. In order to specify a config file use 'redis-server /path/to/redis.conf'");
    }
    initServer();
    if (server.daemonize) daemonize();
    redisLog(1,"Server started, Redis version " "1.001");

    linuxOvercommitMemoryWarning();

    if (rdbLoad(server.dbfilename) == 0)
        redisLog(1,"DB loaded from disk");
    if (aeCreateFileEvent(server.el, server.fd, 1,
        acceptHandler, ((void *)0), ((void *)0)) == -1) oom("creating file event");
    redisLog(1,"The server is now ready to accept connections on port %d", server.port);
    aeMain(server.el);
    aeDeleteEventLoop(server.el);
    return 0;
}
