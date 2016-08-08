# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
# 22 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
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
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







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

# 23 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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

# 24 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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
# 67 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 68 "/usr/include/fcntl.h" 2 3 4
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
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 170 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 221 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 282 "/usr/include/fcntl.h" 3 4

# 25 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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



# 26 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 35 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 2508 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h"
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

# 2509 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 2
# 2519 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h"
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

# 2520 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 2
# 36 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 44 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
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

# 223 "/usr/include/time.h" 3 4
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

# 45 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


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

# 48 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


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
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4

# 51 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


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




# 54 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


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








# 57 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


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

# 60 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 1
# 34 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_version.h" 1
# 35 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 1
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
# 2 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_config.h" 2
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
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

# 70 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 2
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
typedef intptr_t tsrm_intptr_t;
typedef uintptr_t tsrm_uintptr_t;
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2


# 1 "/usr/include/assert.h" 1 3 4
# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2







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
  uint32_t var_flags;
  uint32_t next;
  uint32_t cache_slot;
  uint32_t lineno;
  uint32_t num_args;
  uint32_t fe_pos;
  uint32_t fe_iter_idx;
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
# 268 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
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
# 326 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 810 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) uint32_t zval_refcount_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0) || (((*(pz)).u1.v.type_flags & (1<<1)) != 0) || (((*(pz)).u1.v.type_flags & (1<<5)) != 0)), 0)) __builtin_unreachable(); } while (0);
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
 register zend_ulong hash = 5381UL;


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
# 195 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, zend_bool overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) void zend_hash_bucket_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_renum_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_packed_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered);
__attribute__ ((visibility("default"))) int zend_hash_sort_ex(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, zend_bool renumber);
__attribute__ ((visibility("default"))) zval* zend_hash_minmax(const HashTable *ht, compare_func_t compar, uint32_t flag);
# 217 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
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
 register const char *tmp = key;

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
# 274 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
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
# 906 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
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
 ZEND_AST_CONST_ELEM,
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

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval *p, int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) size_t zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval *zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor_for_ptr(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 141 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"
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
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
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
# 97 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
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
# 239 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

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

# 274 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

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

# 321 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
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
# 191 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"

# 341 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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

# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2






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
# 277 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 435 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) void fast_long_increment_function(zval *op1)
{
# 451 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 471 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_decrement_function(zval *op1)
{
# 489 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 509 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_add_function(zval *result, zval *op1, zval *op2)
{
# 537 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 573 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 627 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 661 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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
# 792 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
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


# 342 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 36 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_sort.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_sort.h"

__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t cmp, swap_func_t swp);
__attribute__ ((visibility("default"))) void zend_sort(void *base, size_t nmemb, size_t siz, compare_func_t cmp, swap_func_t swp);
__attribute__ ((visibility("default"))) void zend_insert_sort(void *base, size_t nmemb, size_t siz, compare_func_t cmp, swap_func_t swp);

# 37 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/main/php_compat.h" 2
# 38 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 55 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;
# 73 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
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


typedef struct _zend_oparray_context {
 uint32_t opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 int in_finally;
 uint32_t fast_call_var;
 HashTable *labels;
} zend_oparray_context;


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
# 279 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
char *zend_visibility_string(uint32_t fn_flags);

typedef struct _zend_property_info {
 uint32_t offset;

 uint32_t flags;
 zend_string *name;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_property_info;
# 300 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
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

 int last_brk_cont;
 int last_try_catch;
 zend_brk_cont_element *brk_cont_array;
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
 zend_class_entry *called_scope;
 zend_execute_data *prev_execute_data;
 zend_array *symbol_table;

 void **run_time_cache;


 zval *literals;

};
# 657 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
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
 zend_class_entry *scope;

 zend_long precision;

 int ticks_count;

 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






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
# 658 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2



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
void zend_emit_final_return(zval *zv);
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
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name);
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers);
uint32_t zend_get_class_fetch_type(zend_string *name);
__attribute__ ((visibility("default"))) zend_uchar zend_get_call_op(zend_uchar init_op, zend_function *fbc);

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
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h"


__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);


# 789 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2
# 894 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
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
# 963 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"

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
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2
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
    if (value_type == (1<<0)) {

     if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<4) << 8)) != 0)), 0)) {
      _zval_copy_ctor_func(variable_ptr );
     }
    } else if (value_type == (1<<4)) {
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
 if (value_type == (1<<0)) {

  if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<4) << 8)) != 0)), 0)) {
   _zval_copy_ctor_func(variable_ptr );
  }
 } else if (value_type == (1<<4)) {
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

__attribute__ ((visibility("default"))) int zval_update_constant(zval *pp, zend_bool inline_change);
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval *pp, zend_bool inline_change, zend_class_entry *scope);


struct _zend_vm_stack {
 zval *top;
 zval *end;
 zend_vm_stack prev;
};
# 166 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) void zend_vm_stack_init(void);
__attribute__ ((visibility("default"))) void zend_vm_stack_destroy(void);
__attribute__ ((visibility("default"))) void* zend_vm_stack_extend(size_t size);

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame_ex(uint32_t used_stack, uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 zend_execute_data *call = (zend_execute_data*)(executor_globals.vm_stack_top);

 ;

 if (__builtin_expect(!!(used_stack > (size_t)(((char*)(executor_globals.vm_stack_end)) - (char*)call)), 0)) {
  call = (zend_execute_data*)zend_vm_stack_extend(used_stack);
  do { ((call)->This).u1.type_info = (8 | (( (1<<2) | (1<<3) ) << 8)) | ((call_info | (1 << 7)) << 24); } while (0);
 } else {
  (executor_globals.vm_stack_top) = (zval*)((char*)call + used_stack);
  do { ((call)->This).u1.type_info = (8 | (( (1<<2) | (1<<3) ) << 8)) | ((call_info) << 24); } while (0);
 }

 ;

 call->func = func;
 (call->This).value.obj = object;
 (call)->This.u2.num_args = num_args;
 call->called_scope = called_scope;
 return call;
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
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(zend_long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type);
void zend_verify_abstract_class(zend_class_entry *ce);

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim);
__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval_is(zval *result, zval *container, zval *dim, int dim_type);

__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, uint32_t var);
# 311 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef zval* zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type);

__attribute__ ((visibility("default"))) void zend_clean_and_cache_symbol_table(zend_array *symbol_table);
void zend_free_compiled_variables(zend_execute_data *execute_data);
void zend_cleanup_unfinished_execution(zend_execute_data *execute_data, uint32_t op_num, uint32_t catch_op_num);
# 366 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

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
 HashTable *function_table;
 zval function_name;
 zend_array *symbol_table;
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
# 245 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array);


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array);
# 266 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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
# 313 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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
# 380 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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
# 416 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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
# 471 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, uint32_t param_count, zval params[]);
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, uint32_t param_count, zval params[], int no_separation, zend_array *symbol_table);

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 486 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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

# 689 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
typedef enum _zend_expected_type {
 Z_EXPECTED_LONG, Z_EXPECTED_BOOL, Z_EXPECTED_STRING, Z_EXPECTED_ARRAY, Z_EXPECTED_FUNC, Z_EXPECTED_RESOURCE, Z_EXPECTED_PATH, Z_EXPECTED_OBJECT, Z_EXPECTED_DOUBLE,
 Z_EXPECTED_LAST
} zend_expected_type;

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramers_count_error(int num_args, int min_num_args, int max_num_args);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramer_type_error(int num, zend_expected_type expected_type, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramer_class_error(int num, char *name, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_callback_error(int severity, int num, char *error);
# 1043 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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


# 40 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 83 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 84 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 99 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/build-defs.h" 1
# 100 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 124 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);

# 164 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
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

# 165 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 184 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 1
# 185 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h" 1
# 187 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 1
# 188 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h" 1
# 189 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 209 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
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

# 210 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 211 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 216 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 238 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

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
__attribute__ ((visibility("default"))) int php_sprintf (char* s, const char* format, ...) ;
__attribute__ ((visibility("default"))) char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__ ((visibility("default"))) char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, size_t *len);


# 127 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE,
 LM_PHP_INT_T
} length_modifier_e;
# 153 "/home/ct584/git/bughunter/repositories/php-src/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

__attribute__ ((visibility("default"))) char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register size_t *len);

__attribute__ ((visibility("default"))) char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register size_t *len);
# 240 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/spprintf.h" 1
# 39 "/home/ct584/git/bughunter/repositories/php-src/main/spprintf.h"

__attribute__ ((visibility("default"))) size_t spprintf( char **pbuf, size_t max_len, const char *format, ...) ;

__attribute__ ((visibility("default"))) size_t vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) ;

__attribute__ ((visibility("default"))) zend_string *vstrpprintf(size_t max_len, const char *format, va_list ap) ;

__attribute__ ((visibility("default"))) zend_string *strpprintf(size_t max_len, const char *format, ...) ;

# 242 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 266 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
extern char **environ;
# 277 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

void phperror(char *error);
__attribute__ ((visibility("default"))) size_t php_write(void *buf, size_t size);
__attribute__ ((visibility("default"))) size_t php_printf(const char *format, ...)
    ;
__attribute__ ((visibility("default"))) int php_get_module_initialized(void);
__attribute__ ((visibility("default"))) __attribute__((cold)) void php_log_err(char *log_message);
int Debug(char *format, ...) ;
int cfgparse(void);






static inline __attribute__((deprecated)) void php_set_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class)
{
 zend_replace_error_handling(error_handling, exception_class, ((void *)0));
}
static inline __attribute__((deprecated)) void php_std_error_handling() {}

__attribute__ ((visibility("default"))) __attribute__((cold)) void php_verror(const char *docref, const char *params, int type, const char *format, va_list args) ;


__attribute__ ((visibility("default"))) __attribute__((cold)) void php_error_docref0(const char *docref, int type, const char *format, ...)
 ;
__attribute__ ((visibility("default"))) __attribute__((cold)) void php_error_docref1(const char *docref, const char *param1, int type, const char *format, ...)
 ;
__attribute__ ((visibility("default"))) __attribute__((cold)) void php_error_docref2(const char *docref, const char *param1, const char *param2, int type, const char *format, ...)
 ;




# 324 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"

__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void *));
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);

# 385 "/home/ct584/git/bughunter/repositories/php-src/main/php.h"
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
 uint _reserved:31;
} php_output_buffer;

typedef struct _php_output_context {
 int op;
 php_output_buffer in;
 php_output_buffer out;
} php_output_context;


typedef void (*php_output_handler_func_t)(char *output, size_t output_len, char **handled_output, size_t *handled_output_len, int mode);

typedef int (*php_output_handler_context_func_t)(void **handler_context, php_output_context *output_context);

typedef void (*php_output_handler_context_dtor_t)(void *opaq);

typedef int (*php_output_handler_conflict_check_t)(const char *handler_name, size_t handler_name_len);

typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(const char *handler_name, size_t handler_name_len, size_t chunk_size, int flags);

typedef struct _php_output_handler_user_func_t {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval zoh;
} php_output_handler_user_func_t;

typedef struct _php_output_handler {
 zend_string *name;
 int flags;
 int level;
 size_t size;
 php_output_buffer buffer;

 void *opaq;
 void (*dtor)(void *opaq);

 union {
  php_output_handler_user_func_t *user;
  php_output_handler_context_func_t internal;
 } func;
} php_output_handler;

typedef struct _zend_output_globals {
 zend_stack handlers;
 php_output_handler *active;
 php_output_handler *running;
 const char *output_start_filename;
 int output_start_lineno;
 int flags;
} zend_output_globals;

__attribute__ ((visibility("default"))) extern zend_output_globals output_globals;
# 175 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"


extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 189 "/home/ct584/git/bughunter/repositories/php-src/main/php_output.h"
__attribute__ ((visibility("default"))) void php_output_startup(void);

__attribute__ ((visibility("default"))) void php_output_shutdown(void);

__attribute__ ((visibility("default"))) void php_output_register_constants(void);


__attribute__ ((visibility("default"))) int php_output_activate(void);

__attribute__ ((visibility("default"))) void php_output_deactivate(void);

__attribute__ ((visibility("default"))) void php_output_set_status(int status);
__attribute__ ((visibility("default"))) int php_output_get_status(void);
__attribute__ ((visibility("default"))) void php_output_set_implicit_flush(int flush);
__attribute__ ((visibility("default"))) const char *php_output_get_start_filename(void);
__attribute__ ((visibility("default"))) int php_output_get_start_lineno(void);

__attribute__ ((visibility("default"))) size_t php_output_write_unbuffered(const char *str, size_t len);
__attribute__ ((visibility("default"))) size_t php_output_write(const char *str, size_t len);

__attribute__ ((visibility("default"))) int php_output_flush(void);
__attribute__ ((visibility("default"))) void php_output_flush_all(void);
__attribute__ ((visibility("default"))) int php_output_clean(void);
__attribute__ ((visibility("default"))) void php_output_clean_all(void);
__attribute__ ((visibility("default"))) int php_output_end(void);
__attribute__ ((visibility("default"))) void php_output_end_all(void);
__attribute__ ((visibility("default"))) int php_output_discard(void);
__attribute__ ((visibility("default"))) void php_output_discard_all(void);

__attribute__ ((visibility("default"))) int php_output_get_contents(zval *p);
__attribute__ ((visibility("default"))) int php_output_get_length(zval *p);
__attribute__ ((visibility("default"))) int php_output_get_level(void);
__attribute__ ((visibility("default"))) php_output_handler* php_output_get_active_handler(void);

__attribute__ ((visibility("default"))) int php_output_start_default(void);
__attribute__ ((visibility("default"))) int php_output_start_devnull(void);

__attribute__ ((visibility("default"))) int php_output_start_user(zval *output_handler, size_t chunk_size, int flags);
__attribute__ ((visibility("default"))) int php_output_start_internal(const char *name, size_t name_len, php_output_handler_func_t output_handler, size_t chunk_size, int flags);

__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_user(zval *handler, size_t chunk_size, int flags);
__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_internal(const char *name, size_t name_len, php_output_handler_context_func_t handler, size_t chunk_size, int flags);

__attribute__ ((visibility("default"))) void php_output_handler_set_context(php_output_handler *handler, void *opaq, void (*dtor)(void*));
__attribute__ ((visibility("default"))) int php_output_handler_start(php_output_handler *handler);
__attribute__ ((visibility("default"))) int php_output_handler_started(const char *name, size_t name_len);
__attribute__ ((visibility("default"))) int php_output_handler_hook(php_output_handler_hook_t type, void *arg);
__attribute__ ((visibility("default"))) void php_output_handler_dtor(php_output_handler *handler);
__attribute__ ((visibility("default"))) void php_output_handler_free(php_output_handler **handler);

__attribute__ ((visibility("default"))) int php_output_handler_conflict(const char *handler_new, size_t handler_new_len, const char *handler_set, size_t handler_set_len);
__attribute__ ((visibility("default"))) int php_output_handler_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func);
__attribute__ ((visibility("default"))) int php_output_handler_reverse_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func);

__attribute__ ((visibility("default"))) php_output_handler_alias_ctor_t php_output_handler_alias(const char *handler_name, size_t handler_name_len);
__attribute__ ((visibility("default"))) int php_output_handler_alias_register(const char *handler_name, size_t handler_name_len, php_output_handler_alias_ctor_t func);




void zif_ob_start(zend_execute_data *execute_data, zval *return_value);
void zif_ob_flush(zend_execute_data *execute_data, zval *return_value);
void zif_ob_clean(zend_execute_data *execute_data, zval *return_value);
void zif_ob_end_flush(zend_execute_data *execute_data, zval *return_value);
void zif_ob_end_clean(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_flush(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_clean(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_contents(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_length(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_level(zend_execute_data *execute_data, zval *return_value);
void zif_ob_get_status(zend_execute_data *execute_data, zval *return_value);
void zif_ob_implicit_flush(zend_execute_data *execute_data, zval *return_value);
void zif_ob_list_handlers(zend_execute_data *execute_data, zval *return_value);

void zif_output_add_rewrite_var(zend_execute_data *execute_data, zval *return_value);
void zif_output_reset_rewrite_vars(zend_execute_data *execute_data, zval *return_value);
# 386 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2


__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);

# 100 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
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
  void * ptr);
# 43 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h"
typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
 php_stream_notification_func func;
 void (*dtor)(php_stream_notifier *notifier);
 zval ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval options;
 zend_resource *res;
};


__attribute__ ((visibility("default"))) void php_stream_context_free(php_stream_context *context);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_alloc(void);
__attribute__ ((visibility("default"))) zval *php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname);
__attribute__ ((visibility("default"))) int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

__attribute__ ((visibility("default"))) php_stream_notifier *php_stream_notification_alloc(void);
__attribute__ ((visibility("default"))) void php_stream_notification_free(php_stream_notifier *notifier);

# 87 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_context.h"

__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 106 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
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



__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent);
__attribute__ ((visibility("default"))) int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length);
__attribute__ ((visibility("default"))) void php_stream_bucket_delref(php_stream_bucket *bucket);

__attribute__ ((visibility("default"))) void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket);
__attribute__ ((visibility("default"))) void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket);
__attribute__ ((visibility("default"))) void php_stream_bucket_unlink(php_stream_bucket *bucket);
__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket);






typedef struct _php_stream_filter_ops {

 php_stream_filter_status_t (*filter)(
   php_stream *stream,
   php_stream_filter *thisfilter,
   php_stream_bucket_brigade *buckets_in,
   php_stream_bucket_brigade *buckets_out,
   size_t *bytes_consumed,
   int flags
   );

 void (*dtor)(php_stream_filter *thisfilter);

 const char *label;

} php_stream_filter_ops;

typedef struct _php_stream_filter_chain {
 php_stream_filter *head, *tail;


 php_stream *stream;
} php_stream_filter_chain;

struct _php_stream_filter {
 php_stream_filter_ops *fops;
 zval abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 zend_resource *res;
};



__attribute__ ((visibility("default"))) void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter);
__attribute__ ((visibility("default"))) int php_stream_filter_prepend_ex(php_stream_filter_chain *chain, php_stream_filter *filter);
__attribute__ ((visibility("default"))) void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter);
__attribute__ ((visibility("default"))) int php_stream_filter_append_ex(php_stream_filter_chain *chain, php_stream_filter *filter);
__attribute__ ((visibility("default"))) int _php_stream_filter_flush(php_stream_filter *filter, int finish);
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor);
__attribute__ ((visibility("default"))) void php_stream_filter_free(php_stream_filter *filter);
__attribute__ ((visibility("default"))) php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );

# 144 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent);
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory);
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern);
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory);
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent);

# 107 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2

typedef struct _php_stream_statbuf {
 zend_stat_t sb;

} php_stream_statbuf;

typedef struct _php_stream_dirent {
 char d_name[4096];
} php_stream_dirent;


typedef struct _php_stream_ops {

 size_t (*write)(php_stream *stream, const char *buf, size_t count);
 size_t (*read)(php_stream *stream, char *buf, size_t count);
 int (*close)(php_stream *stream, int close_handle);
 int (*flush)(php_stream *stream);

 const char *label;


 int (*seek)(php_stream *stream, zend_off_t offset, int whence, zend_off_t *newoffset);
 int (*cast)(php_stream *stream, int castas, void **ret);
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb);
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam);
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, const char *filename, const char *mode,
   int options, zend_string **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream);

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb);

 int (*url_stat)(php_stream_wrapper *wrapper, const char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context);

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, const char *filename, const char *mode,
   int options, zend_string **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, const char *url, int options, php_stream_context *context);


 int (*rename)(php_stream_wrapper *wrapper, const char *url_from, const char *url_to, int options, php_stream_context *context);


 int (*stream_mkdir)(php_stream_wrapper *wrapper, const char *url, int mode, int options, php_stream_context *context);
 int (*stream_rmdir)(php_stream_wrapper *wrapper, const char *url, int options, php_stream_context *context);

 int (*stream_metadata)(php_stream_wrapper *wrapper, const char *url, int options, void *value, php_stream_context *context);
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;
};
# 190 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 zend_resource *res;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;
 int __exposed;
 char *orig_path;

 zend_resource *ctx;
 int flags;

 int eof;


 zend_off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 zend_off_t readpos;
 zend_off_t writepos;


 size_t chunk_size;






 struct _php_stream *enclosing_stream;
};
# 244 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );

# 273 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options);

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream);
# 294 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_free(php_stream *stream, int close_options);




__attribute__ ((visibility("default"))) int _php_stream_seek(php_stream *stream, zend_off_t offset, int whence);



__attribute__ ((visibility("default"))) zend_off_t _php_stream_tell(php_stream *stream);


__attribute__ ((visibility("default"))) size_t _php_stream_read(php_stream *stream, char *buf, size_t count);


__attribute__ ((visibility("default"))) size_t _php_stream_write(php_stream *stream, const char *buf, size_t count);



__attribute__ ((visibility("default"))) void _php_stream_fill_read_buffer(php_stream *stream, size_t size);


__attribute__ ((visibility("default"))) size_t _php_stream_printf(php_stream *stream, const char *fmt, ...) ;




__attribute__ ((visibility("default"))) int _php_stream_eof(php_stream *stream);


__attribute__ ((visibility("default"))) int _php_stream_getc(php_stream *stream);


__attribute__ ((visibility("default"))) int _php_stream_putc(php_stream *stream, int c);


__attribute__ ((visibility("default"))) int _php_stream_flush(php_stream *stream, int closing);


__attribute__ ((visibility("default"))) char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len);



__attribute__ ((visibility("default"))) zend_string *php_stream_get_record(php_stream *stream, size_t maxlen, const char *delim, size_t delim_len);


__attribute__ ((visibility("default"))) int _php_stream_puts(php_stream *stream, const char *buf);


__attribute__ ((visibility("default"))) int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb);


__attribute__ ((visibility("default"))) int _php_stream_stat_path(const char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context);



__attribute__ ((visibility("default"))) int _php_stream_mkdir(const char *path, int mode, int options, php_stream_context *context);


__attribute__ ((visibility("default"))) int _php_stream_rmdir(const char *path, int options, php_stream_context *context);


__attribute__ ((visibility("default"))) php_stream *_php_stream_opendir(const char *path, int options, php_stream_context *context );

__attribute__ ((visibility("default"))) php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent);




__attribute__ ((visibility("default"))) int php_stream_dirent_alphasort(const zend_string **a, const zend_string **b);
__attribute__ ((visibility("default"))) int php_stream_dirent_alphasortr(const zend_string **a, const zend_string **b);

__attribute__ ((visibility("default"))) int _php_stream_scandir(const char *dirname, zend_string **namelist[], int flags, php_stream_context *context,
   int (*compare) (const zend_string **a, const zend_string **b));


__attribute__ ((visibility("default"))) int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam);





# 429 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize);


# 449 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) zend_string *_php_stream_copy_to_mem(php_stream *src, size_t maxlen, int persistent );



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


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, size_t protolen,
  const char *resourcename, size_t resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(const char *protocol, php_stream_transport_factory factory);
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(const char *protocol);
# 49 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_transport.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_xport_create(const char *name, size_t namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  zend_string **error_string,
  int *error_code
  );





__attribute__ ((visibility("default"))) int php_stream_xport_bind(php_stream *stream,
  const char *name, size_t namelen,
  zend_string **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_connect(php_stream *stream,
  const char *name, size_t namelen,
  int asynchronous,
  struct timeval *timeout,
  zend_string **error_text,
  int *error_code
  );


__attribute__ ((visibility("default"))) int php_stream_xport_listen(php_stream *stream,
  int backlog,
  zend_string **error_text
  );



__attribute__ ((visibility("default"))) int php_stream_xport_accept(php_stream *stream, php_stream **client,
  zend_string **textaddr,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  zend_string **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_get_name(php_stream *stream, int want_peer,
  zend_string **textaddr,
  void **addr, socklen_t *addrlen
  );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



__attribute__ ((visibility("default"))) int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  int flags, void **addr, socklen_t *addrlen,
  zend_string **textaddr);



__attribute__ ((visibility("default"))) int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  int flags, void *addr, socklen_t addrlen);

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



__attribute__ ((visibility("default"))) int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how);





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
  size_t namelen;
  struct timeval *timeout;
  struct sockaddr *addr;
  char *buf;
  size_t buflen;
  socklen_t addrlen;
  int backlog;
  int flags;
 } inputs;
 struct {
  php_stream *client;
  struct sockaddr *addr;
  socklen_t addrlen;
  zend_string *textaddr;
  zend_string *error_text;
  int returncode;
  int error_code;
 } outputs;
} php_stream_xport_param;




typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT = (1 << 1 | 1),
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT = (1 << 2 | 1),

 STREAM_CRYPTO_METHOD_SSLv23_CLIENT = ((1 << 3) | (1 << 4) | (1 << 5) | 1),
 STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT = (1 << 3 | 1),
 STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT = (1 << 4 | 1),
 STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT = (1 << 5 | 1),

 STREAM_CRYPTO_METHOD_TLS_CLIENT = (1 << 3 | 1),
 STREAM_CRYPTO_METHOD_TLS_ANY_CLIENT = ((1 << 3) | (1 << 4) | (1 << 5) | 1),
 STREAM_CRYPTO_METHOD_ANY_CLIENT = ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | 1),
 STREAM_CRYPTO_METHOD_SSLv2_SERVER = (1 << 1),
 STREAM_CRYPTO_METHOD_SSLv3_SERVER = (1 << 2),

 STREAM_CRYPTO_METHOD_SSLv23_SERVER = ((1 << 3) | (1 << 4) | (1 << 5)),
 STREAM_CRYPTO_METHOD_TLSv1_0_SERVER = (1 << 3),
 STREAM_CRYPTO_METHOD_TLSv1_1_SERVER = (1 << 4),
 STREAM_CRYPTO_METHOD_TLSv1_2_SERVER = (1 << 5),

 STREAM_CRYPTO_METHOD_TLS_SERVER = (1 << 3),
 STREAM_CRYPTO_METHOD_TLS_ANY_SERVER = ((1 << 3) | (1 << 4) | (1 << 5)),
 STREAM_CRYPTO_METHOD_ANY_SERVER = ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5))
} php_stream_xport_crypt_method_t;




__attribute__ ((visibility("default"))) int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream);
__attribute__ ((visibility("default"))) int php_stream_xport_crypto_enable(php_stream *stream, int activate);


typedef struct _php_stream_xport_crypto_param {
 struct {
  php_stream *session;
  int activate;
  php_stream_xport_crypt_method_t method;
 } inputs;
 struct {
  int returncode;
 } outputs;
 enum {
  STREAM_XPORT_CRYPTO_OP_SETUP,
  STREAM_XPORT_CRYPTO_OP_ENABLE
 } op;
} php_stream_xport_crypto_param;


__attribute__ ((visibility("default"))) HashTable *php_stream_xport_get_hash(void);
__attribute__ ((visibility("default"))) php_stream_transport_factory_func php_stream_generic_socket_factory;

# 468 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, zend_string **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(const char *filename, const char *mode, const char *path, zend_string **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, zend_string **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, zend_string **opened_path );



# 469 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, size_t *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, size_t *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );



# 470 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_userspace.h" 1
# 23 "/home/ct584/git/bughunter/repositories/php-src/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 471 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
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

__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_access_t mode, size_t *mapped_len);



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream);


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, zend_off_t readden);


# 472 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 2
# 488 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err);

# 554 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
int php_init_stream_wrappers(int module_number);
int php_shutdown_stream_wrappers(int module_number);
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number);


__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper(const char *protocol, php_stream_wrapper *wrapper);
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper(const char *protocol);
__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper_volatile(const char *protocol, php_stream_wrapper *wrapper);
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper_volatile(const char *protocol);
__attribute__ ((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(const char *path, const char *mode, int options, zend_string **opened_path, php_stream_context *context );
__attribute__ ((visibility("default"))) php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, const char **path_for_open, int options);
__attribute__ ((visibility("default"))) const char *php_stream_locate_eol(php_stream *stream, zend_string *buf);





__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options, const char *fmt, ...) ;
# 582 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;

# 389 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h" 2
# 43 "/home/ct584/git/bughunter/repositories/php-src/main/php_memory_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create_ex(int mode, size_t max_memory_usage, const char *tmpdir );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 390 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
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

 zend_long output_buffering;

 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 zend_long serialize_precision;

 zend_long memory_limit;
 zend_long max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 zend_long log_errors_max_len;
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
 zend_long upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 char *input_encoding;
 char *internal_encoding;
 char *output_encoding;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval http_globals[6];

 zend_bool expose_php;

 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 zend_long xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool enable_post_data_reading;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;

 char *php_sys_temp_dir;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;
 zend_bool exit_on_timeout;



 zend_long max_input_nesting_level;
 zend_long max_input_vars;
 zend_bool in_user_include;

 char *user_ini_filename;
 zend_long user_ini_cache_ttl;

 char *request_order;

 zend_bool mail_x_header;
 char *mail_log;

 zend_bool in_error_log;




};
# 26 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"
typedef struct _zend_ini_entry_def {
 const char *name;
 int (*on_modify)(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
 void *mh_arg1;
 void *mh_arg2;
 void *mh_arg3;
 const char *value;
 void (*displayer)(zend_ini_entry *ini_entry, int type);
 int modifiable;

 uint name_length;
 uint value_length;
} zend_ini_entry_def;

struct _zend_ini_entry {
 zend_string *name;
 int (*on_modify)(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
 void *mh_arg1;
 void *mh_arg2;
 void *mh_arg3;
 zend_string *value;
 zend_string *orig_value;
 void (*displayer)(zend_ini_entry *ini_entry, int type);
 int modifiable;

 int orig_modifiable;
 int modified;
 int module_number;
};


__attribute__ ((visibility("default"))) int zend_ini_startup(void);
__attribute__ ((visibility("default"))) int zend_ini_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_global_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_deactivate(void);
__attribute__ ((visibility("default"))) void zend_ini_dtor(HashTable *ini_directives);

__attribute__ ((visibility("default"))) int zend_copy_ini_directives(void);

__attribute__ ((visibility("default"))) void zend_ini_sort_entries(void);

__attribute__ ((visibility("default"))) int zend_register_ini_entries(const zend_ini_entry_def *ini_entry, int module_number);
__attribute__ ((visibility("default"))) void zend_unregister_ini_entries(int module_number);
__attribute__ ((visibility("default"))) void zend_ini_refresh_caches(int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry(zend_string *name, zend_string *new_value, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_ex(zend_string *name, zend_string *new_value, int modify_type, int stage, int force_change);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_chars(zend_string *name, const char *value, size_t value_length, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_chars_ex(zend_string *name, const char *value, size_t value_length, int modify_type, int stage, int force_change);
__attribute__ ((visibility("default"))) int zend_restore_ini_entry(zend_string *name, int stage);
__attribute__ ((visibility("default"))) void display_ini_entries(zend_module_entry *module);

__attribute__ ((visibility("default"))) zend_long zend_ini_long(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) double zend_ini_double(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string_ex(char *name, uint name_length, int orig, zend_bool *exists);

__attribute__ ((visibility("default"))) int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

__attribute__ ((visibility("default"))) void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void display_link_numbers(zend_ini_entry *ini_entry, int type);

# 157 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);

# 177 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg);

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg);
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg);







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 2


__attribute__ ((visibility("default"))) void config_zval_dtor(zval *zvalue);
int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
__attribute__ ((visibility("default"))) zval *cfg_get_entry_ex(zend_string *name);
__attribute__ ((visibility("default"))) zval *cfg_get_entry(const char *name, size_t name_length);
__attribute__ ((visibility("default"))) int cfg_get_long(const char *varname, zend_long *result);
__attribute__ ((visibility("default"))) int cfg_get_double(const char *varname, double *result);
__attribute__ ((visibility("default"))) int cfg_get_string(const char *varname, char **result);
__attribute__ ((visibility("default"))) int php_parse_user_ini_file(const char *dirname, char *ini_filename, HashTable *target_hash);
__attribute__ ((visibility("default"))) void php_ini_activate_config(HashTable *source_hash, int modify_type, int stage);
__attribute__ ((visibility("default"))) int php_ini_has_per_dir_config(void);
__attribute__ ((visibility("default"))) int php_ini_has_per_host_config(void);
__attribute__ ((visibility("default"))) void php_ini_activate_per_dir_config(char *path, size_t path_len);
__attribute__ ((visibility("default"))) void php_ini_activate_per_host_config(const char *host, size_t host_len);
__attribute__ ((visibility("default"))) HashTable* php_ini_get_configuration_hash(void);

# 27 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle);
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path);
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len);
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int use_realpath);

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path);
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn);
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path);
# 47 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path);

__attribute__ ((visibility("default"))) zend_string *php_resolve_path(const char *filename, int filename_len, const char *path);

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, zend_string **opened_path);

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, zend_string *new_value, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage);

# 391 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/TSRM.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 1
# 13 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 14 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 41 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 42 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2






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
# 395 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2

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
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name);
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, size_t name_len);
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, zend_ulong flags);
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, size_t name_len, zend_bool bval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, size_t name_len, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, size_t name_len, zend_long lval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, size_t name_len, double dval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, size_t name_len, char *strval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, size_t name_len, char *strval, size_t strlen, int flags, int module_number);
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c);
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, zend_ulong flags);

# 397 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2






# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h" 2
# 52 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 119 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 404 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 2
# 53 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
typedef struct {
 char *header;
 size_t header_len;
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
 char *cookie_data;
 zend_long content_length;

 char *path_translated;
 char *request_uri;


 struct _php_stream *request_body;

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
 int64_t read_post_bytes;
 unsigned char post_read;
 unsigned char headers_sent;
 zend_stat_t global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 zend_long post_max_size;
 int options;
 zend_bool sapi_started;
 double global_request_time;
 HashTable known_post_content_types;
 zval callback_func;
 zend_fcall_info_cache fci_cache;
} sapi_globals_struct;








extern __attribute__ ((visibility("default"))) sapi_globals_struct sapi_globals;


__attribute__ ((visibility("default"))) void sapi_startup(sapi_module_struct *sf);
__attribute__ ((visibility("default"))) void sapi_shutdown(void);
__attribute__ ((visibility("default"))) void sapi_activate(void);
__attribute__ ((visibility("default"))) void sapi_deactivate(void);
__attribute__ ((visibility("default"))) void sapi_initialize_empty_request(void);

# 169 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
typedef struct {
 char *line;
 size_t line_len;
 zend_long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_DELETE,
 SAPI_HEADER_DELETE_ALL,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


__attribute__ ((visibility("default"))) int sapi_header_op(sapi_header_op_enum op, void *arg);


__attribute__ ((visibility("default"))) int sapi_add_header_ex(char *header_line, size_t header_line_len, zend_bool duplicate, zend_bool replace);



__attribute__ ((visibility("default"))) int sapi_send_headers(void);
__attribute__ ((visibility("default"))) void sapi_free_header(sapi_header_struct *sapi_header);
__attribute__ ((visibility("default"))) void sapi_handle_post(void *arg);
__attribute__ ((visibility("default"))) size_t sapi_read_post_block(char *buffer, size_t buflen);
__attribute__ ((visibility("default"))) int sapi_register_post_entries(sapi_post_entry *post_entry);
__attribute__ ((visibility("default"))) int sapi_register_post_entry(sapi_post_entry *post_entry);
__attribute__ ((visibility("default"))) void sapi_unregister_post_entry(sapi_post_entry *post_entry);
__attribute__ ((visibility("default"))) int sapi_register_default_post_reader(void (*default_post_reader)(void));
__attribute__ ((visibility("default"))) int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray));
__attribute__ ((visibility("default"))) int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, size_t val_len, size_t *new_val_len), unsigned int (*input_filter_init)(void));

__attribute__ ((visibility("default"))) int sapi_flush(void);
__attribute__ ((visibility("default"))) zend_stat_t *sapi_get_stat(void);
__attribute__ ((visibility("default"))) char *sapi_getenv(char *name, size_t name_len);

__attribute__ ((visibility("default"))) char *sapi_get_default_content_type(void);
__attribute__ ((visibility("default"))) void sapi_get_default_content_type_header(sapi_header_struct *default_header);
__attribute__ ((visibility("default"))) size_t sapi_apply_default_charset(char **mimetype, size_t len);
__attribute__ ((visibility("default"))) void sapi_activate_headers_only(void);

__attribute__ ((visibility("default"))) int sapi_get_fd(int *fd);
__attribute__ ((visibility("default"))) int sapi_force_http_10(void);

__attribute__ ((visibility("default"))) int sapi_get_target_uid(uid_t *);
__attribute__ ((visibility("default"))) int sapi_get_target_gid(gid_t *);
__attribute__ ((visibility("default"))) double sapi_get_request_time(void);
__attribute__ ((visibility("default"))) void sapi_terminate_process(void);


struct _sapi_module_struct {
 char *name;
 char *pretty_name;

 int (*startup)(struct _sapi_module_struct *sapi_module);
 int (*shutdown)(struct _sapi_module_struct *sapi_module);

 int (*activate)(void);
 int (*deactivate)(void);

 size_t (*ub_write)(const char *str, size_t str_length);
 void (*flush)(void *server_context);
 zend_stat_t *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len);

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_header_op_enum op, sapi_headers_struct *sapi_headers);
 int (*send_headers)(sapi_headers_struct *sapi_headers);
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context);

 size_t (*read_post)(char *buffer, size_t count_bytes);
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array);
 void (*log_message)(char *message);
 double (*get_request_time)(void);
 void (*terminate_process)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray);
 char *executable_location;

 int php_ini_ignore;
 int php_ini_ignore_cwd;

 int (*get_fd)(int *fd);

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t *);
 int (*get_target_gid)(gid_t *);

 unsigned int (*input_filter)(int arg, char *var, char **val, size_t val_len, size_t *new_val_len);

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
 void (*post_handler)(char *content_type_dup, void *arg);
};
# 304 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"

__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray);
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, size_t val_len, size_t *new_val_len);

# 63 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 1
# 64 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_ini.h" 1
# 65 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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

__attribute__ ((visibility("default"))) int php_register_extensions(zend_module_entry **ptr, int count);

__attribute__ ((visibility("default"))) int php_execute_script(zend_file_handle *primary_file);
__attribute__ ((visibility("default"))) int php_execute_simple_script(zend_file_handle *primary_file, zval *ret);
__attribute__ ((visibility("default"))) int php_handle_special_queries(void);
__attribute__ ((visibility("default"))) int php_lint_script(zend_file_handle *file);

__attribute__ ((visibility("default"))) void php_handle_aborted_connection(void);
__attribute__ ((visibility("default"))) int php_handle_auth_data(const char *auth);

__attribute__ ((visibility("default"))) void php_html_puts(const char *str, size_t siz);
__attribute__ ((visibility("default"))) int php_stream_open_for_zend_ex(const char *filename, zend_file_handle *handle, int mode);


extern int php_init_environ(void);
extern int php_shutdown_environ(void);

# 66 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h" 1
# 67 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h" 1
# 36 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h"

void php_startup_auto_globals(void);
extern __attribute__ ((visibility("default"))) void (*php_import_environment_variables)(zval *array_ptr);
__attribute__ ((visibility("default"))) void php_register_variable(char *var, char *val, zval *track_vars_array);

__attribute__ ((visibility("default"))) void php_register_variable_safe(char *var, char *val, size_t val_len, zval *track_vars_array);
__attribute__ ((visibility("default"))) void php_register_variable_ex(char *var, zval *val, zval *track_vars_array);

__attribute__ ((visibility("default"))) void php_build_argv(char *s, zval *track_vars_array);
__attribute__ ((visibility("default"))) int php_hash_environment(void);

# 68 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 70 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/fopen_wrappers.h" 1
# 71 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/http_status_codes.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/main/http_status_codes.h"
typedef struct _http_response_status_code_pair {
 const int code;
 const char *str;
} http_response_status_code_pair;

static http_response_status_code_pair http_status_map[] = {
 { 100, "Continue" },
 { 101, "Switching Protocols" },
 { 200, "OK" },
 { 201, "Created" },
 { 202, "Accepted" },
 { 203, "Non-Authoritative Information" },
 { 204, "No Content" },
 { 205, "Reset Content" },
 { 206, "Partial Content" },
 { 300, "Multiple Choices" },
 { 301, "Moved Permanently" },
 { 302, "Found" },
 { 303, "See Other" },
 { 304, "Not Modified" },
 { 305, "Use Proxy" },
 { 307, "Temporary Redirect" },
 { 308, "Permanent Redirect" },
 { 400, "Bad Request" },
 { 401, "Unauthorized" },
 { 402, "Payment Required" },
 { 403, "Forbidden" },
 { 404, "Not Found" },
 { 405, "Method Not Allowed" },
 { 406, "Not Acceptable" },
 { 407, "Proxy Authentication Required" },
 { 408, "Request Timeout" },
 { 409, "Conflict" },
 { 410, "Gone" },
 { 411, "Length Required" },
 { 412, "Precondition Failed" },
 { 413, "Request Entity Too Large" },
 { 414, "Request-URI Too Long" },
 { 415, "Unsupported Media Type" },
 { 416, "Requested Range Not Satisfiable" },
 { 417, "Expectation Failed" },
 { 426, "Upgrade Required" },
 { 428, "Precondition Required" },
 { 429, "Too Many Requests" },
 { 431, "Request Header Fields Too Large" },
 { 451, "Unavailable For Legal Reasons"},
 { 500, "Internal Server Error" },
 { 501, "Not Implemented" },
 { 502, "Bad Gateway" },
 { 503, "Service Unavailable" },
 { 504, "Gateway Timeout" },
 { 505, "HTTP Version Not Supported" },
 { 506, "Variant Also Negotiates" },
 { 511, "Network Authentication Required" },

 { 0, ((void *)0) }
};

static const size_t http_status_map_len = (sizeof(http_status_map) / sizeof(http_response_status_code_pair)) - 1;
# 72 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 74 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 75 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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
# 76 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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


# 77 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_getopt.h" 1
# 36 "/home/ct584/git/bughunter/repositories/php-src/main/php_getopt.h"
typedef struct _opt_struct {
 char opt_char;
 int need_param;
 char * opt_name;
} opt_struct;



extern __attribute__ ((visibility("default"))) int php_optidx;
__attribute__ ((visibility("default"))) int php_getopt(int argc, char* const *argv, const opt_struct opts[], char **optarg, int *optind, int show_err, int arg_start);

# 79 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 94 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h" 1
# 64 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"

__attribute__ ((visibility("default"))) char *php_socket_strerror(long err, char *buf, size_t bufsize);
__attribute__ ((visibility("default"))) zend_string *php_socket_error_str(long err);



# 1 "/usr/include/netinet/in.h" 1 3 4
# 27 "/usr/include/netinet/in.h" 3 4



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

# 71 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h" 2







# 1 "/usr/include/netdb.h" 1 3 4
# 32 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__ , __leaf__));
extern void endrpcent (void) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbyname (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));



# 33 "/usr/include/netdb.h" 2 3 4
# 42 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 43 "/usr/include/netdb.h" 2 3 4
# 53 "/usr/include/netdb.h" 3 4








extern int *__h_errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 92 "/usr/include/netdb.h" 3 4
extern void herror (const char *__str) __attribute__ ((__nothrow__ , __leaf__));


extern const char *hstrerror (int __err_num) __attribute__ ((__nothrow__ , __leaf__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
# 155 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (const char *__name, int __af);
# 167 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 198 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
# 237 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
# 308 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 374 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 395 "/usr/include/netdb.h" 3 4
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
# 412 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 423 "/usr/include/netdb.h" 3 4
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 451 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
# 463 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 479 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
# 491 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 505 "/usr/include/netdb.h" 3 4
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
# 515 "/usr/include/netdb.h" 3 4
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
# 528 "/usr/include/netdb.h" 3 4
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
# 539 "/usr/include/netdb.h" 3 4
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
# 551 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 560 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
# 662 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__ , __leaf__));


extern const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__ , __leaf__));





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);
# 713 "/usr/include/netdb.h" 3 4

# 79 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h" 2
# 100 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"
typedef int php_socket_t;
# 124 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/poll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/poll.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 57 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 71 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4

# 125 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h" 2
typedef struct pollfd php_pollfd;
# 156 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"
static inline int php_tvtoto(struct timeval *timeouttv)
{
 if (timeouttv) {
  return (timeouttv->tv_sec * 1000) + (timeouttv->tv_usec / 1000);
 }
 return -1;
}





static inline int php_pollfd_for(php_socket_t fd, int events, struct timeval *timeouttv)
{
 php_pollfd p;
 int n;

 p.fd = fd;
 p.events = events;
 p.revents = 0;

 n = poll(&p, 1, php_tvtoto(timeouttv));

 if (n > 0) {
  return p.revents;
 }

 return n;
}

static inline int php_pollfd_for_ms(php_socket_t fd, int events, int timeout)
{
 php_pollfd p;
 int n;

 p.fd = fd;
 p.events = events;
 p.revents = 0;

 n = poll(&p, 1, timeout);

 if (n > 0) {
  return p.revents;
 }

 return n;
}


__attribute__ ((visibility("default"))) void _php_emit_fd_setsize_warning(int max_fd);
# 225 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"
typedef struct sockaddr_storage php_sockaddr_storage;
# 238 "/home/ct584/git/bughunter/repositories/php-src/main/php_network.h"

__attribute__ ((visibility("default"))) int php_network_getaddresses(const char *host, int socktype, struct sockaddr ***sal, zend_string **error_string);
__attribute__ ((visibility("default"))) void php_network_freeaddresses(struct sockaddr **sal);

__attribute__ ((visibility("default"))) php_socket_t php_network_connect_socket_to_host(const char *host, unsigned short port,
  int socktype, int asynchronous, struct timeval *timeout, zend_string **error_string,
  int *error_code, char *bindto, unsigned short bindport, long sockopts
  );

__attribute__ ((visibility("default"))) int php_network_connect_socket(php_socket_t sockfd,
  const struct sockaddr *addr,
  socklen_t addrlen,
  int asynchronous,
  struct timeval *timeout,
  zend_string **error_string,
  int *error_code);




__attribute__ ((visibility("default"))) php_socket_t php_network_bind_socket_to_local_addr(const char *host, unsigned port,
  int socktype, long sockopts, zend_string **error_string, int *error_code
  );

__attribute__ ((visibility("default"))) php_socket_t php_network_accept_incoming(php_socket_t srvsock,
  zend_string **textaddr,
  struct sockaddr **addr,
  socklen_t *addrlen,
  struct timeval *timeout,
  zend_string **error_string,
  int *error_code
  );

__attribute__ ((visibility("default"))) int php_network_get_sock_name(php_socket_t sock,
  zend_string **textaddr,
  struct sockaddr **addr,
  socklen_t *addrlen
  );

__attribute__ ((visibility("default"))) int php_network_get_peer_name(php_socket_t sock,
  zend_string **textaddr,
  struct sockaddr **addr,
  socklen_t *addrlen
  );

__attribute__ ((visibility("default"))) void php_any_addr(int family, php_sockaddr_storage *addr, unsigned short port);
__attribute__ ((visibility("default"))) int php_sockaddr_size(php_sockaddr_storage *addr);


struct _php_netstream_data_t {
 php_socket_t socket;
 char is_blocked;
 struct timeval timeout;
 char timeout_event;
 size_t ownsize;
};
typedef struct _php_netstream_data_t php_netstream_data_t;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_socket_ops;
extern php_stream_ops php_stream_generic_socket_ops;



__attribute__ ((visibility("default"))) php_stream *_php_stream_sock_open_from_socket(php_socket_t socket, const char *persistent_id );

__attribute__ ((visibility("default"))) php_stream *_php_stream_sock_open_host(const char *host, unsigned short port,
  int socktype, struct timeval *timeout, const char *persistent_id );
__attribute__ ((visibility("default"))) void php_network_populate_name_from_sockaddr(

  struct sockaddr *sa, socklen_t sl,

  zend_string **textaddr,

  struct sockaddr **addr,
  socklen_t *addrlen
  );

__attribute__ ((visibility("default"))) int php_network_parse_network_address_with_port(const char *addr,
  zend_long addrlen, struct sockaddr *sa, socklen_t *sl);

__attribute__ ((visibility("default"))) struct hostent* php_network_gethostbyname(char *name);

__attribute__ ((visibility("default"))) int php_set_sock_blocking(php_socket_t socketd, int block);

# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h" 2

int zm_startup_file(int type, int module_number);
int zm_shutdown_file(int type, int module_number);

void zif_tempnam(zend_execute_data *execute_data, zval *return_value);
void php_if_tmpfile(zend_execute_data *execute_data, zval *return_value);
void php_if_fopen(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fclose(zend_execute_data *execute_data, zval *return_value);
void zif_popen(zend_execute_data *execute_data, zval *return_value);
void zif_pclose(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_feof(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fread(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fgetc(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fgets(zend_execute_data *execute_data, zval *return_value);
void zif_fscanf(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fgetss(zend_execute_data *execute_data, zval *return_value);
void zif_fgetcsv(zend_execute_data *execute_data, zval *return_value);
void zif_fputcsv(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fwrite(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fflush(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_rewind(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_ftell(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fseek(zend_execute_data *execute_data, zval *return_value);
void zif_mkdir(zend_execute_data *execute_data, zval *return_value);
void zif_rmdir(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_fpassthru(zend_execute_data *execute_data, zval *return_value);
void zif_readfile(zend_execute_data *execute_data, zval *return_value);
void zif_umask(zend_execute_data *execute_data, zval *return_value);
void zif_rename(zend_execute_data *execute_data, zval *return_value);
void zif_unlink(zend_execute_data *execute_data, zval *return_value);
void zif_copy(zend_execute_data *execute_data, zval *return_value);
void zif_file(zend_execute_data *execute_data, zval *return_value);
void zif_file_get_contents(zend_execute_data *execute_data, zval *return_value);
void zif_file_put_contents(zend_execute_data *execute_data, zval *return_value);
void zif_get_meta_tags(zend_execute_data *execute_data, zval *return_value);
void zif_flock(zend_execute_data *execute_data, zval *return_value);
void zif_fd_set(zend_execute_data *execute_data, zval *return_value);
void zif_fd_isset(zend_execute_data *execute_data, zval *return_value);

void zif_realpath(zend_execute_data *execute_data, zval *return_value);


void zif_fnmatch(zend_execute_data *execute_data, zval *return_value);

void php_if_ftruncate(zend_execute_data *execute_data, zval *return_value);
void php_if_fstat(zend_execute_data *execute_data, zval *return_value);
void zif_sys_get_temp_dir(zend_execute_data *execute_data, zval *return_value);

int zm_startup_user_streams(int type, int module_number);

__attribute__ ((visibility("default"))) int php_le_stream_context(void);
__attribute__ ((visibility("default"))) int php_set_sock_blocking(php_socket_t socketd, int block);
__attribute__ ((visibility("default"))) int php_copy_file(const char *src, const char *dest);
__attribute__ ((visibility("default"))) int php_copy_file_ex(const char *src, const char *dest, int src_chk);
__attribute__ ((visibility("default"))) int php_copy_file_ctx(const char *src, const char *dest, int src_chk, php_stream_context *ctx);
__attribute__ ((visibility("default"))) int php_mkdir_ex(const char *dir, zend_long mode, int options);
__attribute__ ((visibility("default"))) int php_mkdir(const char *dir, zend_long mode);
__attribute__ ((visibility("default"))) void php_fgetcsv(php_stream *stream, char delimiter, char enclosure, char escape_char, size_t buf_len, char *buf, zval *return_value);
__attribute__ ((visibility("default"))) size_t php_fputcsv(php_stream *stream, zval *fields, char delimiter, char enclosure, char escape_char);
# 95 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/file.h"
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

php_meta_tags_token php_next_meta_token(php_meta_tags_data *);

typedef struct {
 int pclose_ret;
 size_t def_chunk_size;
 zend_long auto_detect_line_endings;
 zend_long default_socket_timeout;
 char *user_agent;
 char *from_address;
 const char *user_stream_current_filename;
 php_stream_context *default_context;
 HashTable *stream_wrappers;
 HashTable *stream_filters;
 HashTable *wrapper_errors;
 int pclose_wait;

 struct hostent tmp_host_info;
 char *tmp_host_buf;
 size_t tmp_host_buf_len;

} php_file_globals;






extern __attribute__ ((visibility("default"))) php_file_globals file_globals;
# 95 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h" 1
# 23 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h"
typedef struct {
 zend_string *s;
 size_t a;
} smart_str;
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h" 2
# 44 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h"


__attribute__ ((visibility("default"))) void smart_str_erealloc(smart_str *str, size_t len);
__attribute__ ((visibility("default"))) void smart_str_realloc(smart_str *str, size_t len);



static inline __attribute__((always_inline)) size_t smart_str_alloc(smart_str *str, size_t len, zend_bool persistent) {
 if (__builtin_expect(!!(!str->s), 0)) {
  goto do_smart_str_realloc;
 } else {
  len += (str->s)->len;
  if (__builtin_expect(!!(len >= str->a), 0)) {
do_smart_str_realloc:
   if (persistent) {
    smart_str_realloc(str, len);
   } else {
    smart_str_erealloc(str, len);
   }
  }
 }
 return len;
}

static inline __attribute__((always_inline)) void smart_str_free(smart_str *str) {
 if (str->s) {
  zend_string_release(str->s);
  str->s = ((void *)0);
 }
 str->a = 0;
}

static inline __attribute__((always_inline)) void smart_str_0(smart_str *str) {
 if (str->s) {
  (str->s)->val[(str->s)->len] = '\0';
 }
}

static inline __attribute__((always_inline)) void smart_str_appendc_ex(smart_str *dest, char ch, zend_bool persistent) {
 size_t new_len = smart_str_alloc(dest, 1, persistent);
 (dest->s)->val[new_len - 1] = ch;
 (dest->s)->len = new_len;
}

static inline __attribute__((always_inline)) void smart_str_appendl_ex(smart_str *dest, const char *str, size_t len, zend_bool persistent) {
 size_t new_len = smart_str_alloc(dest, len, persistent);
 memcpy((dest->s)->val + (dest->s)->len, str, len);
 (dest->s)->len = new_len;
}

static inline __attribute__((always_inline)) void smart_str_append_ex(smart_str *dest, const zend_string *src, zend_bool persistent) {
 smart_str_appendl_ex(dest, (src)->val, (src)->len, persistent);
}

static inline __attribute__((always_inline)) void smart_str_append_smart_str_ex(smart_str *dest, const smart_str *src, zend_bool persistent) {
 if (src->s && (src->s)->len) {
  smart_str_append_ex(dest, src->s, persistent);
 }
}

static inline __attribute__((always_inline)) void smart_str_append_long_ex(smart_str *dest, zend_long num, zend_bool persistent) {
 char buf[32];
 char *result = zend_print_long_to_buf(buf + sizeof(buf) - 1, num);
 smart_str_appendl_ex(dest, result, buf + sizeof(buf) - 1 - result, persistent);
}

static inline __attribute__((always_inline)) void smart_str_append_unsigned_ex(smart_str *dest, zend_ulong num, zend_bool persistent) {
 char buf[32];
 char *result = zend_print_ulong_to_buf(buf + sizeof(buf) - 1, num);
 smart_str_appendl_ex(dest, result, buf + sizeof(buf) - 1 - result, persistent);
}

static inline __attribute__((always_inline)) void smart_str_setl(smart_str *dest, const char *src, size_t len) {
 smart_str_free(dest);
 smart_str_appendl_ex((dest), (src), (len), 0);
}
# 96 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/html.h" 1
# 49 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/html.h"
void register_html_constants(int type, int module_number);

void zif_htmlspecialchars(zend_execute_data *execute_data, zval *return_value);
void zif_htmlentities(zend_execute_data *execute_data, zval *return_value);
void zif_htmlspecialchars_decode(zend_execute_data *execute_data, zval *return_value);
void zif_html_entity_decode(zend_execute_data *execute_data, zval *return_value);
void zif_get_html_translation_table(zend_execute_data *execute_data, zval *return_value);

__attribute__ ((visibility("default"))) zend_string *php_escape_html_entities(unsigned char *old, size_t oldlen, int all, int flags, char *hint_charset);
__attribute__ ((visibility("default"))) zend_string *php_escape_html_entities_ex(unsigned char *old, size_t oldlen, int all, int flags, char *hint_charset, zend_bool double_encode);
__attribute__ ((visibility("default"))) zend_string *php_unescape_html_entities(unsigned char *old, size_t oldlen, int all, int flags, char *hint_charset);
__attribute__ ((visibility("default"))) unsigned int php_next_utf8_char(const unsigned char *str, size_t str_len, size_t *cursor, int *status);
# 97 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
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
__attribute__ ((visibility("default"))) php_url *php_url_parse_ex(char const *str, size_t length);
__attribute__ ((visibility("default"))) size_t php_url_decode(char *str, size_t len);
__attribute__ ((visibility("default"))) size_t php_raw_url_decode(char *str, size_t len);
__attribute__ ((visibility("default"))) zend_string *php_url_encode(char const *s, size_t len);
__attribute__ ((visibility("default"))) zend_string *php_raw_url_encode(char const *s, size_t len);
__attribute__ ((visibility("default"))) char *php_replace_controlchars_ex(char *str, size_t len);

void zif_parse_url(zend_execute_data *execute_data, zval *return_value);
void zif_urlencode(zend_execute_data *execute_data, zval *return_value);
void zif_urldecode(zend_execute_data *execute_data, zval *return_value);
void zif_rawurlencode(zend_execute_data *execute_data, zval *return_value);
void zif_rawurldecode(zend_execute_data *execute_data, zval *return_value);
void zif_get_headers(zend_execute_data *execute_data, zval *return_value);
# 98 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h"
void zif_strspn(zend_execute_data *execute_data, zval *return_value);
void zif_strcspn(zend_execute_data *execute_data, zval *return_value);
void zif_str_replace(zend_execute_data *execute_data, zval *return_value);
void zif_str_ireplace(zend_execute_data *execute_data, zval *return_value);
void zif_rtrim(zend_execute_data *execute_data, zval *return_value);
void zif_trim(zend_execute_data *execute_data, zval *return_value);
void zif_ltrim(zend_execute_data *execute_data, zval *return_value);
void zif_soundex(zend_execute_data *execute_data, zval *return_value);
void zif_levenshtein(zend_execute_data *execute_data, zval *return_value);

void zif_count_chars(zend_execute_data *execute_data, zval *return_value);
void zif_wordwrap(zend_execute_data *execute_data, zval *return_value);
void zif_explode(zend_execute_data *execute_data, zval *return_value);
void zif_implode(zend_execute_data *execute_data, zval *return_value);
void zif_strtok(zend_execute_data *execute_data, zval *return_value);
void zif_strtoupper(zend_execute_data *execute_data, zval *return_value);
void zif_strtolower(zend_execute_data *execute_data, zval *return_value);
void zif_basename(zend_execute_data *execute_data, zval *return_value);
void zif_dirname(zend_execute_data *execute_data, zval *return_value);
void zif_pathinfo(zend_execute_data *execute_data, zval *return_value);
void zif_strstr(zend_execute_data *execute_data, zval *return_value);
void zif_strpos(zend_execute_data *execute_data, zval *return_value);
void zif_stripos(zend_execute_data *execute_data, zval *return_value);
void zif_strrpos(zend_execute_data *execute_data, zval *return_value);
void zif_strripos(zend_execute_data *execute_data, zval *return_value);
void zif_strrchr(zend_execute_data *execute_data, zval *return_value);
void zif_substr(zend_execute_data *execute_data, zval *return_value);
void zif_quotemeta(zend_execute_data *execute_data, zval *return_value);
void zif_ucfirst(zend_execute_data *execute_data, zval *return_value);
void zif_lcfirst(zend_execute_data *execute_data, zval *return_value);
void zif_ucwords(zend_execute_data *execute_data, zval *return_value);
void zif_strtr(zend_execute_data *execute_data, zval *return_value);
void zif_strrev(zend_execute_data *execute_data, zval *return_value);
void zif_hebrev(zend_execute_data *execute_data, zval *return_value);
void zif_hebrevc(zend_execute_data *execute_data, zval *return_value);
void zif_user_sprintf(zend_execute_data *execute_data, zval *return_value);
void zif_user_printf(zend_execute_data *execute_data, zval *return_value);
void zif_vprintf(zend_execute_data *execute_data, zval *return_value);
void zif_vsprintf(zend_execute_data *execute_data, zval *return_value);
void zif_addcslashes(zend_execute_data *execute_data, zval *return_value);
void zif_addslashes(zend_execute_data *execute_data, zval *return_value);
void zif_stripcslashes(zend_execute_data *execute_data, zval *return_value);
void zif_stripslashes(zend_execute_data *execute_data, zval *return_value);
void zif_chr(zend_execute_data *execute_data, zval *return_value);
void zif_ord(zend_execute_data *execute_data, zval *return_value);
void zif_nl2br(zend_execute_data *execute_data, zval *return_value);
void zif_setlocale(zend_execute_data *execute_data, zval *return_value);
void zif_localeconv(zend_execute_data *execute_data, zval *return_value);
void zif_nl_langinfo(zend_execute_data *execute_data, zval *return_value);
void zif_stristr(zend_execute_data *execute_data, zval *return_value);
void zif_chunk_split(zend_execute_data *execute_data, zval *return_value);
void zif_parse_str(zend_execute_data *execute_data, zval *return_value);
void zif_str_getcsv(zend_execute_data *execute_data, zval *return_value);
void zif_bin2hex(zend_execute_data *execute_data, zval *return_value);
void zif_hex2bin(zend_execute_data *execute_data, zval *return_value);
void zif_similar_text(zend_execute_data *execute_data, zval *return_value);
void zif_strip_tags(zend_execute_data *execute_data, zval *return_value);
void zif_str_repeat(zend_execute_data *execute_data, zval *return_value);
void zif_substr_replace(zend_execute_data *execute_data, zval *return_value);
void zif_strnatcmp(zend_execute_data *execute_data, zval *return_value);
void zif_strnatcasecmp(zend_execute_data *execute_data, zval *return_value);
void zif_substr_count(zend_execute_data *execute_data, zval *return_value);
void zif_str_pad(zend_execute_data *execute_data, zval *return_value);
void zif_sscanf(zend_execute_data *execute_data, zval *return_value);
void zif_str_shuffle(zend_execute_data *execute_data, zval *return_value);
void zif_str_word_count(zend_execute_data *execute_data, zval *return_value);
void zif_str_split(zend_execute_data *execute_data, zval *return_value);
void zif_strpbrk(zend_execute_data *execute_data, zval *return_value);
void zif_substr_compare(zend_execute_data *execute_data, zval *return_value);

void zif_strcoll(zend_execute_data *execute_data, zval *return_value);


void zif_money_format(zend_execute_data *execute_data, zval *return_value);







int zm_startup_nl_langinfo(int type, int module_number);






__attribute__ ((visibility("default"))) int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out);


__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len);
__attribute__ ((visibility("default"))) zend_string *php_string_toupper(zend_string *s);
__attribute__ ((visibility("default"))) zend_string *php_string_tolower(zend_string *s);
__attribute__ ((visibility("default"))) char *php_strtr(char *str, size_t len, char *str_from, char *str_to, size_t trlen);
__attribute__ ((visibility("default"))) zend_string *php_addslashes(zend_string *str, int should_free);
__attribute__ ((visibility("default"))) zend_string *php_addcslashes(zend_string *str, int freeit, char *what, size_t what_len);
__attribute__ ((visibility("default"))) void php_stripslashes(zend_string *str);
__attribute__ ((visibility("default"))) void php_stripcslashes(zend_string *str);
__attribute__ ((visibility("default"))) zend_string *php_basename(const char *s, size_t len, char *suffix, size_t sufflen);
__attribute__ ((visibility("default"))) size_t php_dirname(char *str, size_t len);
__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len);
__attribute__ ((visibility("default"))) zend_string *php_str_to_str(char *haystack, size_t length, char *needle,
  size_t needle_len, char *str, size_t str_len);
__attribute__ ((visibility("default"))) zend_string *php_trim(zend_string *str, char *what, size_t what_len, int mode);
__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, size_t len, int *state, const char *allow, size_t allow_len);
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, size_t len, int *stateptr, const char *allow, size_t allow_len, zend_bool allow_tag_spaces);
__attribute__ ((visibility("default"))) void php_implode(const zend_string *delim, zval *arr, zval *return_value);
__attribute__ ((visibility("default"))) void php_explode(const zend_string *delim, zend_string *str, zval *return_value, zend_long limit);

__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);

__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive);
__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2);
# 167 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_string.h"
void register_string_constants(int type, int module_number);
# 99 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h" 1
# 34 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 35 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 1
# 38 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h" 2
# 53 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h"
typedef struct php_http_parser php_http_parser;
typedef struct php_http_parser_settings php_http_parser_settings;
# 70 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h"
typedef int (*php_http_data_cb) (php_http_parser*, const char *at, size_t length);
typedef int (*php_http_cb) (php_http_parser*);



enum php_http_method
  { PHP_HTTP_DELETE = 0
  , PHP_HTTP_GET
  , PHP_HTTP_HEAD
  , PHP_HTTP_POST
  , PHP_HTTP_PUT
  , PHP_HTTP_PATCH

  , PHP_HTTP_CONNECT
  , PHP_HTTP_OPTIONS
  , PHP_HTTP_TRACE

  , PHP_HTTP_COPY
  , PHP_HTTP_LOCK
  , PHP_HTTP_MKCOL
  , PHP_HTTP_MOVE
  , PHP_HTTP_MKCALENDAR
  , PHP_HTTP_PROPFIND
  , PHP_HTTP_PROPPATCH
  , PHP_HTTP_SEARCH
  , PHP_HTTP_UNLOCK

  , PHP_HTTP_REPORT
  , PHP_HTTP_MKACTIVITY
  , PHP_HTTP_CHECKOUT
  , PHP_HTTP_MERGE

  , PHP_HTTP_MSEARCH
  , PHP_HTTP_NOTIFY
  , PHP_HTTP_SUBSCRIBE
  , PHP_HTTP_UNSUBSCRIBE

  , PHP_HTTP_NOT_IMPLEMENTED
  };


enum php_http_parser_type { PHP_HTTP_REQUEST, PHP_HTTP_RESPONSE, PHP_HTTP_BOTH };


struct php_http_parser {

  unsigned char type : 2;
  unsigned char flags : 6;
  unsigned char state;
  unsigned char header_state;
  unsigned char index;

  uint32_t nread;
  ssize_t content_length;


  unsigned short http_major;
  unsigned short http_minor;
  unsigned short status_code;
  unsigned char method;






  char upgrade;


  void *data;
};


struct php_http_parser_settings {
  php_http_cb on_message_begin;
  php_http_data_cb on_path;
  php_http_data_cb on_query_string;
  php_http_data_cb on_url;
  php_http_data_cb on_fragment;
  php_http_data_cb on_header_field;
  php_http_data_cb on_header_value;
  php_http_cb on_headers_complete;
  php_http_data_cb on_body;
  php_http_cb on_message_complete;
};


void php_http_parser_init(php_http_parser *parser, enum php_http_parser_type type);


size_t php_http_parser_execute(php_http_parser *parser,
                           const php_http_parser_settings *settings,
                           const char *data,
                           size_t len);
# 172 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_http_parser.h"
int php_http_should_keep_alive(php_http_parser *parser);


const char *php_http_method_str(enum php_http_method);
# 102 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.h"
extern const zend_function_entry server_additional_functions[];
extern sapi_module_struct cli_server_sapi_module;
extern int do_cli_server(int argc, char **argv);

typedef struct _zend_cli_server_globals {
 short color;
} zend_cli_server_globals;
# 103 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/mime_type_map.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/mime_type_map.h"
typedef struct php_cli_server_ext_mime_type_pair {
 const char *ext;
 const char *mime_type;
} php_cli_server_ext_mime_type_pair;

static php_cli_server_ext_mime_type_pair mime_type_map[] = {
 { "ez", "application/andrew-inset" },
 { "aw", "application/applixware" },
 { "atom", "application/atom+xml" },
 { "atomcat", "application/atomcat+xml" },
 { "atomsvc", "application/atomsvc+xml" },
 { "ccxml", "application/ccxml+xml" },
 { "cdmia", "application/cdmi-capability" },
 { "cdmic", "application/cdmi-container" },
 { "cdmid", "application/cdmi-domain" },
 { "cdmio", "application/cdmi-object" },
 { "cdmiq", "application/cdmi-queue" },
 { "cu", "application/cu-seeme" },
 { "davmount", "application/davmount+xml" },
 { "dbk", "application/docbook+xml" },
 { "dssc", "application/dssc+der" },
 { "xdssc", "application/dssc+xml" },
 { "ecma", "application/ecmascript" },
 { "emma", "application/emma+xml" },
 { "epub", "application/epub+zip" },
 { "exi", "application/exi" },
 { "pfr", "application/font-tdpfr" },
 { "gml", "application/gml+xml" },
 { "gpx", "application/gpx+xml" },
 { "gxf", "application/gxf" },
 { "stk", "application/hyperstudio" },
 { "ink", "application/inkml+xml" },
 { "inkml", "application/inkml+xml" },
 { "ipfix", "application/ipfix" },
 { "jar", "application/java-archive" },
 { "ser", "application/java-serialized-object" },
 { "class", "application/java-vm" },
 { "js", "application/javascript" },
 { "json", "application/json" },
 { "jsonml", "application/jsonml+json" },
 { "lostxml", "application/lost+xml" },
 { "hqx", "application/mac-binhex40" },
 { "cpt", "application/mac-compactpro" },
 { "mads", "application/mads+xml" },
 { "mrc", "application/marc" },
 { "mrcx", "application/marcxml+xml" },
 { "ma", "application/mathematica" },
 { "nb", "application/mathematica" },
 { "mb", "application/mathematica" },
 { "mathml", "application/mathml+xml" },
 { "mbox", "application/mbox" },
 { "mscml", "application/mediaservercontrol+xml" },
 { "metalink", "application/metalink+xml" },
 { "meta4", "application/metalink4+xml" },
 { "mets", "application/mets+xml" },
 { "mods", "application/mods+xml" },
 { "m21", "application/mp21" },
 { "mp21", "application/mp21" },
 { "mp4s", "application/mp4" },
 { "doc", "application/msword" },
 { "dot", "application/msword" },
 { "mxf", "application/mxf" },
 { "bin", "application/octet-stream" },
 { "dms", "application/octet-stream" },
 { "lrf", "application/octet-stream" },
 { "mar", "application/octet-stream" },
 { "so", "application/octet-stream" },
 { "dist", "application/octet-stream" },
 { "distz", "application/octet-stream" },
 { "pkg", "application/octet-stream" },
 { "bpk", "application/octet-stream" },
 { "dump", "application/octet-stream" },
 { "elc", "application/octet-stream" },
 { "deploy", "application/octet-stream" },
 { "oda", "application/oda" },
 { "opf", "application/oebps-package+xml" },
 { "ogx", "application/ogg" },
 { "omdoc", "application/omdoc+xml" },
 { "onetoc", "application/onenote" },
 { "onetoc2", "application/onenote" },
 { "onetmp", "application/onenote" },
 { "onepkg", "application/onenote" },
 { "oxps", "application/oxps" },
 { "xer", "application/patch-ops-error+xml" },
 { "pdf", "application/pdf" },
 { "pgp", "application/pgp-encrypted" },
 { "asc", "application/pgp-signature" },
 { "sig", "application/pgp-signature" },
 { "prf", "application/pics-rules" },
 { "p10", "application/pkcs10" },
 { "p7m", "application/pkcs7-mime" },
 { "p7c", "application/pkcs7-mime" },
 { "p7s", "application/pkcs7-signature" },
 { "p8", "application/pkcs8" },
 { "ac", "application/pkix-attr-cert" },
 { "cer", "application/pkix-cert" },
 { "crl", "application/pkix-crl" },
 { "pkipath", "application/pkix-pkipath" },
 { "pki", "application/pkixcmp" },
 { "pls", "application/pls+xml" },
 { "ai", "application/postscript" },
 { "eps", "application/postscript" },
 { "ps", "application/postscript" },
 { "cww", "application/prs.cww" },
 { "pskcxml", "application/pskc+xml" },
 { "rdf", "application/rdf+xml" },
 { "rif", "application/reginfo+xml" },
 { "rnc", "application/relax-ng-compact-syntax" },
 { "rl", "application/resource-lists+xml" },
 { "rld", "application/resource-lists-diff+xml" },
 { "rs", "application/rls-services+xml" },
 { "gbr", "application/rpki-ghostbusters" },
 { "mft", "application/rpki-manifest" },
 { "roa", "application/rpki-roa" },
 { "rsd", "application/rsd+xml" },
 { "rss", "application/rss+xml" },
 { "rtf", "application/rtf" },
 { "sbml", "application/sbml+xml" },
 { "scq", "application/scvp-cv-request" },
 { "scs", "application/scvp-cv-response" },
 { "spq", "application/scvp-vp-request" },
 { "spp", "application/scvp-vp-response" },
 { "sdp", "application/sdp" },
 { "setpay", "application/set-payment-initiation" },
 { "setreg", "application/set-registration-initiation" },
 { "shf", "application/shf+xml" },
 { "smi", "application/smil+xml" },
 { "smil", "application/smil+xml" },
 { "rq", "application/sparql-query" },
 { "srx", "application/sparql-results+xml" },
 { "gram", "application/srgs" },
 { "grxml", "application/srgs+xml" },
 { "sru", "application/sru+xml" },
 { "ssdl", "application/ssdl+xml" },
 { "ssml", "application/ssml+xml" },
 { "tei", "application/tei+xml" },
 { "teicorpus", "application/tei+xml" },
 { "tfi", "application/thraud+xml" },
 { "tsd", "application/timestamped-data" },
 { "plb", "application/vnd.3gpp.pic-bw-large" },
 { "psb", "application/vnd.3gpp.pic-bw-small" },
 { "pvb", "application/vnd.3gpp.pic-bw-var" },
 { "tcap", "application/vnd.3gpp2.tcap" },
 { "pwn", "application/vnd.3m.post-it-notes" },
 { "aso", "application/vnd.accpac.simply.aso" },
 { "imp", "application/vnd.accpac.simply.imp" },
 { "acu", "application/vnd.acucobol" },
 { "atc", "application/vnd.acucorp" },
 { "acutc", "application/vnd.acucorp" },
 { "air", "application/vnd.adobe.air-application-installer-package+zip" },
 { "fcdt", "application/vnd.adobe.formscentral.fcdt" },
 { "fxp", "application/vnd.adobe.fxp" },
 { "fxpl", "application/vnd.adobe.fxp" },
 { "xdp", "application/vnd.adobe.xdp+xml" },
 { "xfdf", "application/vnd.adobe.xfdf" },
 { "ahead", "application/vnd.ahead.space" },
 { "azf", "application/vnd.airzip.filesecure.azf" },
 { "azs", "application/vnd.airzip.filesecure.azs" },
 { "azw", "application/vnd.amazon.ebook" },
 { "acc", "application/vnd.americandynamics.acc" },
 { "ami", "application/vnd.amiga.ami" },
 { "apk", "application/vnd.android.package-archive" },
 { "cii", "application/vnd.anser-web-certificate-issue-initiation" },
 { "fti", "application/vnd.anser-web-funds-transfer-initiation" },
 { "atx", "application/vnd.antix.game-component" },
 { "mpkg", "application/vnd.apple.installer+xml" },
 { "m3u8", "application/vnd.apple.mpegurl" },
 { "swi", "application/vnd.aristanetworks.swi" },
 { "iota", "application/vnd.astraea-software.iota" },
 { "aep", "application/vnd.audiograph" },
 { "mpm", "application/vnd.blueice.multipass" },
 { "bmi", "application/vnd.bmi" },
 { "rep", "application/vnd.businessobjects" },
 { "cdxml", "application/vnd.chemdraw+xml" },
 { "mmd", "application/vnd.chipnuts.karaoke-mmd" },
 { "cdy", "application/vnd.cinderella" },
 { "cla", "application/vnd.claymore" },
 { "rp9", "application/vnd.cloanto.rp9" },
 { "c4g", "application/vnd.clonk.c4group" },
 { "c4d", "application/vnd.clonk.c4group" },
 { "c4f", "application/vnd.clonk.c4group" },
 { "c4p", "application/vnd.clonk.c4group" },
 { "c4u", "application/vnd.clonk.c4group" },
 { "c11amc", "application/vnd.cluetrust.cartomobile-config" },
 { "c11amz", "application/vnd.cluetrust.cartomobile-config-pkg" },
 { "csp", "application/vnd.commonspace" },
 { "cdbcmsg", "application/vnd.contact.cmsg" },
 { "cmc", "application/vnd.cosmocaller" },
 { "clkx", "application/vnd.crick.clicker" },
 { "clkk", "application/vnd.crick.clicker.keyboard" },
 { "clkp", "application/vnd.crick.clicker.palette" },
 { "clkt", "application/vnd.crick.clicker.template" },
 { "clkw", "application/vnd.crick.clicker.wordbank" },
 { "wbs", "application/vnd.criticaltools.wbs+xml" },
 { "pml", "application/vnd.ctc-posml" },
 { "ppd", "application/vnd.cups-ppd" },
 { "car", "application/vnd.curl.car" },
 { "pcurl", "application/vnd.curl.pcurl" },
 { "dart", "application/vnd.dart" },
 { "rdz", "application/vnd.data-vision.rdz" },
 { "uvf", "application/vnd.dece.data" },
 { "uvvf", "application/vnd.dece.data" },
 { "uvd", "application/vnd.dece.data" },
 { "uvvd", "application/vnd.dece.data" },
 { "uvt", "application/vnd.dece.ttml+xml" },
 { "uvvt", "application/vnd.dece.ttml+xml" },
 { "uvx", "application/vnd.dece.unspecified" },
 { "uvvx", "application/vnd.dece.unspecified" },
 { "uvz", "application/vnd.dece.zip" },
 { "uvvz", "application/vnd.dece.zip" },
 { "fe_launch", "application/vnd.denovo.fcselayout-link" },
 { "dna", "application/vnd.dna" },
 { "mlp", "application/vnd.dolby.mlp" },
 { "dpg", "application/vnd.dpgraph" },
 { "dfac", "application/vnd.dreamfactory" },
 { "kpxx", "application/vnd.ds-keypoint" },
 { "ait", "application/vnd.dvb.ait" },
 { "svc", "application/vnd.dvb.service" },
 { "geo", "application/vnd.dynageo" },
 { "mag", "application/vnd.ecowin.chart" },
 { "nml", "application/vnd.enliven" },
 { "esf", "application/vnd.epson.esf" },
 { "msf", "application/vnd.epson.msf" },
 { "qam", "application/vnd.epson.quickanime" },
 { "slt", "application/vnd.epson.salt" },
 { "ssf", "application/vnd.epson.ssf" },
 { "es3", "application/vnd.eszigno3+xml" },
 { "et3", "application/vnd.eszigno3+xml" },
 { "ez2", "application/vnd.ezpix-album" },
 { "ez3", "application/vnd.ezpix-package" },
 { "fdf", "application/vnd.fdf" },
 { "mseed", "application/vnd.fdsn.mseed" },
 { "seed", "application/vnd.fdsn.seed" },
 { "dataless", "application/vnd.fdsn.seed" },
 { "gph", "application/vnd.flographit" },
 { "ftc", "application/vnd.fluxtime.clip" },
 { "fm", "application/vnd.framemaker" },
 { "frame", "application/vnd.framemaker" },
 { "maker", "application/vnd.framemaker" },
 { "book", "application/vnd.framemaker" },
 { "fnc", "application/vnd.frogans.fnc" },
 { "ltf", "application/vnd.frogans.ltf" },
 { "fsc", "application/vnd.fsc.weblaunch" },
 { "oas", "application/vnd.fujitsu.oasys" },
 { "oa2", "application/vnd.fujitsu.oasys2" },
 { "oa3", "application/vnd.fujitsu.oasys3" },
 { "fg5", "application/vnd.fujitsu.oasysgp" },
 { "bh2", "application/vnd.fujitsu.oasysprs" },
 { "ddd", "application/vnd.fujixerox.ddd" },
 { "xdw", "application/vnd.fujixerox.docuworks" },
 { "xbd", "application/vnd.fujixerox.docuworks.binder" },
 { "fzs", "application/vnd.fuzzysheet" },
 { "txd", "application/vnd.genomatix.tuxedo" },
 { "ggb", "application/vnd.geogebra.file" },
 { "ggt", "application/vnd.geogebra.tool" },
 { "gex", "application/vnd.geometry-explorer" },
 { "gre", "application/vnd.geometry-explorer" },
 { "gxt", "application/vnd.geonext" },
 { "g2w", "application/vnd.geoplan" },
 { "g3w", "application/vnd.geospace" },
 { "gmx", "application/vnd.gmx" },
 { "kml", "application/vnd.google-earth.kml+xml" },
 { "kmz", "application/vnd.google-earth.kmz" },
 { "gqf", "application/vnd.grafeq" },
 { "gqs", "application/vnd.grafeq" },
 { "gac", "application/vnd.groove-account" },
 { "ghf", "application/vnd.groove-help" },
 { "gim", "application/vnd.groove-identity-message" },
 { "grv", "application/vnd.groove-injector" },
 { "gtm", "application/vnd.groove-tool-message" },
 { "tpl", "application/vnd.groove-tool-template" },
 { "vcg", "application/vnd.groove-vcard" },
 { "hal", "application/vnd.hal+xml" },
 { "zmm", "application/vnd.handheld-entertainment+xml" },
 { "hbci", "application/vnd.hbci" },
 { "les", "application/vnd.hhe.lesson-player" },
 { "hpgl", "application/vnd.hp-hpgl" },
 { "hpid", "application/vnd.hp-hpid" },
 { "hps", "application/vnd.hp-hps" },
 { "jlt", "application/vnd.hp-jlyt" },
 { "pcl", "application/vnd.hp-pcl" },
 { "pclxl", "application/vnd.hp-pclxl" },
 { "sfd-hdstx", "application/vnd.hydrostatix.sof-data" },
 { "mpy", "application/vnd.ibm.minipay" },
 { "afp", "application/vnd.ibm.modcap" },
 { "listafp", "application/vnd.ibm.modcap" },
 { "list3820", "application/vnd.ibm.modcap" },
 { "irm", "application/vnd.ibm.rights-management" },
 { "sc", "application/vnd.ibm.secure-container" },
 { "icc", "application/vnd.iccprofile" },
 { "icm", "application/vnd.iccprofile" },
 { "igl", "application/vnd.igloader" },
 { "ivp", "application/vnd.immervision-ivp" },
 { "ivu", "application/vnd.immervision-ivu" },
 { "igm", "application/vnd.insors.igm" },
 { "xpw", "application/vnd.intercon.formnet" },
 { "xpx", "application/vnd.intercon.formnet" },
 { "i2g", "application/vnd.intergeo" },
 { "qbo", "application/vnd.intu.qbo" },
 { "qfx", "application/vnd.intu.qfx" },
 { "rcprofile", "application/vnd.ipunplugged.rcprofile" },
 { "irp", "application/vnd.irepository.package+xml" },
 { "xpr", "application/vnd.is-xpr" },
 { "fcs", "application/vnd.isac.fcs" },
 { "jam", "application/vnd.jam" },
 { "rms", "application/vnd.jcp.javame.midlet-rms" },
 { "jisp", "application/vnd.jisp" },
 { "joda", "application/vnd.joost.joda-archive" },
 { "ktz", "application/vnd.kahootz" },
 { "ktr", "application/vnd.kahootz" },
 { "karbon", "application/vnd.kde.karbon" },
 { "chrt", "application/vnd.kde.kchart" },
 { "kfo", "application/vnd.kde.kformula" },
 { "flw", "application/vnd.kde.kivio" },
 { "kon", "application/vnd.kde.kontour" },
 { "kpr", "application/vnd.kde.kpresenter" },
 { "kpt", "application/vnd.kde.kpresenter" },
 { "ksp", "application/vnd.kde.kspread" },
 { "kwd", "application/vnd.kde.kword" },
 { "kwt", "application/vnd.kde.kword" },
 { "htke", "application/vnd.kenameaapp" },
 { "kia", "application/vnd.kidspiration" },
 { "kne", "application/vnd.kinar" },
 { "knp", "application/vnd.kinar" },
 { "skp", "application/vnd.koan" },
 { "skd", "application/vnd.koan" },
 { "skt", "application/vnd.koan" },
 { "skm", "application/vnd.koan" },
 { "sse", "application/vnd.kodak-descriptor" },
 { "lasxml", "application/vnd.las.las+xml" },
 { "lbd", "application/vnd.llamagraphics.life-balance.desktop" },
 { "lbe", "application/vnd.llamagraphics.life-balance.exchange+xml" },
 { "123", "application/vnd.lotus-1-2-3" },
 { "apr", "application/vnd.lotus-approach" },
 { "pre", "application/vnd.lotus-freelance" },
 { "nsf", "application/vnd.lotus-notes" },
 { "org", "application/vnd.lotus-organizer" },
 { "scm", "application/vnd.lotus-screencam" },
 { "lwp", "application/vnd.lotus-wordpro" },
 { "portpkg", "application/vnd.macports.portpkg" },
 { "mcd", "application/vnd.mcd" },
 { "mc1", "application/vnd.medcalcdata" },
 { "cdkey", "application/vnd.mediastation.cdkey" },
 { "mwf", "application/vnd.mfer" },
 { "mfm", "application/vnd.mfmp" },
 { "flo", "application/vnd.micrografx.flo" },
 { "igx", "application/vnd.micrografx.igx" },
 { "mif", "application/vnd.mif" },
 { "daf", "application/vnd.mobius.daf" },
 { "dis", "application/vnd.mobius.dis" },
 { "mbk", "application/vnd.mobius.mbk" },
 { "mqy", "application/vnd.mobius.mqy" },
 { "msl", "application/vnd.mobius.msl" },
 { "plc", "application/vnd.mobius.plc" },
 { "txf", "application/vnd.mobius.txf" },
 { "mpn", "application/vnd.mophun.application" },
 { "mpc", "application/vnd.mophun.certificate" },
 { "xul", "application/vnd.mozilla.xul+xml" },
 { "cil", "application/vnd.ms-artgalry" },
 { "cab", "application/vnd.ms-cab-compressed" },
 { "xls", "application/vnd.ms-excel" },
 { "xlm", "application/vnd.ms-excel" },
 { "xla", "application/vnd.ms-excel" },
 { "xlc", "application/vnd.ms-excel" },
 { "xlt", "application/vnd.ms-excel" },
 { "xlw", "application/vnd.ms-excel" },
 { "xlam", "application/vnd.ms-excel.addin.macroenabled.12" },
 { "xlsb", "application/vnd.ms-excel.sheet.binary.macroenabled.12" },
 { "xlsm", "application/vnd.ms-excel.sheet.macroenabled.12" },
 { "xltm", "application/vnd.ms-excel.template.macroenabled.12" },
 { "eot", "application/vnd.ms-fontobject" },
 { "chm", "application/vnd.ms-htmlhelp" },
 { "ims", "application/vnd.ms-ims" },
 { "lrm", "application/vnd.ms-lrm" },
 { "thmx", "application/vnd.ms-officetheme" },
 { "cat", "application/vnd.ms-pki.seccat" },
 { "stl", "application/vnd.ms-pki.stl" },
 { "ppt", "application/vnd.ms-powerpoint" },
 { "pps", "application/vnd.ms-powerpoint" },
 { "pot", "application/vnd.ms-powerpoint" },
 { "ppam", "application/vnd.ms-powerpoint.addin.macroenabled.12" },
 { "pptm", "application/vnd.ms-powerpoint.presentation.macroenabled.12" },
 { "sldm", "application/vnd.ms-powerpoint.slide.macroenabled.12" },
 { "ppsm", "application/vnd.ms-powerpoint.slideshow.macroenabled.12" },
 { "potm", "application/vnd.ms-powerpoint.template.macroenabled.12" },
 { "mpp", "application/vnd.ms-project" },
 { "mpt", "application/vnd.ms-project" },
 { "docm", "application/vnd.ms-word.document.macroenabled.12" },
 { "dotm", "application/vnd.ms-word.template.macroenabled.12" },
 { "wps", "application/vnd.ms-works" },
 { "wks", "application/vnd.ms-works" },
 { "wcm", "application/vnd.ms-works" },
 { "wdb", "application/vnd.ms-works" },
 { "wpl", "application/vnd.ms-wpl" },
 { "xps", "application/vnd.ms-xpsdocument" },
 { "mseq", "application/vnd.mseq" },
 { "mus", "application/vnd.musician" },
 { "msty", "application/vnd.muvee.style" },
 { "taglet", "application/vnd.mynfc" },
 { "nlu", "application/vnd.neurolanguage.nlu" },
 { "ntf", "application/vnd.nitf" },
 { "nitf", "application/vnd.nitf" },
 { "nnd", "application/vnd.noblenet-directory" },
 { "nns", "application/vnd.noblenet-sealer" },
 { "nnw", "application/vnd.noblenet-web" },
 { "ngdat", "application/vnd.nokia.n-gage.data" },
 { "n-gage", "application/vnd.nokia.n-gage.symbian.install" },
 { "rpst", "application/vnd.nokia.radio-preset" },
 { "rpss", "application/vnd.nokia.radio-presets" },
 { "edm", "application/vnd.novadigm.edm" },
 { "edx", "application/vnd.novadigm.edx" },
 { "ext", "application/vnd.novadigm.ext" },
 { "odc", "application/vnd.oasis.opendocument.chart" },
 { "otc", "application/vnd.oasis.opendocument.chart-template" },
 { "odb", "application/vnd.oasis.opendocument.database" },
 { "odf", "application/vnd.oasis.opendocument.formula" },
 { "odft", "application/vnd.oasis.opendocument.formula-template" },
 { "odg", "application/vnd.oasis.opendocument.graphics" },
 { "otg", "application/vnd.oasis.opendocument.graphics-template" },
 { "odi", "application/vnd.oasis.opendocument.image" },
 { "oti", "application/vnd.oasis.opendocument.image-template" },
 { "odp", "application/vnd.oasis.opendocument.presentation" },
 { "otp", "application/vnd.oasis.opendocument.presentation-template" },
 { "ods", "application/vnd.oasis.opendocument.spreadsheet" },
 { "ots", "application/vnd.oasis.opendocument.spreadsheet-template" },
 { "odt", "application/vnd.oasis.opendocument.text" },
 { "odm", "application/vnd.oasis.opendocument.text-master" },
 { "ott", "application/vnd.oasis.opendocument.text-template" },
 { "oth", "application/vnd.oasis.opendocument.text-web" },
 { "xo", "application/vnd.olpc-sugar" },
 { "dd2", "application/vnd.oma.dd2+xml" },
 { "oxt", "application/vnd.openofficeorg.extension" },
 { "pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation" },
 { "sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide" },
 { "ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow" },
 { "potx", "application/vnd.openxmlformats-officedocument.presentationml.template" },
 { "xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet" },
 { "xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template" },
 { "docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document" },
 { "dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template" },
 { "mgp", "application/vnd.osgeo.mapguide.package" },
 { "dp", "application/vnd.osgi.dp" },
 { "esa", "application/vnd.osgi.subsystem" },
 { "pdb", "application/vnd.palm" },
 { "pqa", "application/vnd.palm" },
 { "oprc", "application/vnd.palm" },
 { "paw", "application/vnd.pawaafile" },
 { "str", "application/vnd.pg.format" },
 { "ei6", "application/vnd.pg.osasli" },
 { "efif", "application/vnd.picsel" },
 { "wg", "application/vnd.pmi.widget" },
 { "plf", "application/vnd.pocketlearn" },
 { "pbd", "application/vnd.powerbuilder6" },
 { "box", "application/vnd.previewsystems.box" },
 { "mgz", "application/vnd.proteus.magazine" },
 { "qps", "application/vnd.publishare-delta-tree" },
 { "ptid", "application/vnd.pvi.ptid1" },
 { "qxd", "application/vnd.quark.quarkxpress" },
 { "qxt", "application/vnd.quark.quarkxpress" },
 { "qwd", "application/vnd.quark.quarkxpress" },
 { "qwt", "application/vnd.quark.quarkxpress" },
 { "qxl", "application/vnd.quark.quarkxpress" },
 { "qxb", "application/vnd.quark.quarkxpress" },
 { "bed", "application/vnd.realvnc.bed" },
 { "mxl", "application/vnd.recordare.musicxml" },
 { "musicxml", "application/vnd.recordare.musicxml+xml" },
 { "cryptonote", "application/vnd.rig.cryptonote" },
 { "cod", "application/vnd.rim.cod" },
 { "rm", "application/vnd.rn-realmedia" },
 { "rmvb", "application/vnd.rn-realmedia-vbr" },
 { "link66", "application/vnd.route66.link66+xml" },
 { "st", "application/vnd.sailingtracker.track" },
 { "see", "application/vnd.seemail" },
 { "sema", "application/vnd.sema" },
 { "semd", "application/vnd.semd" },
 { "semf", "application/vnd.semf" },
 { "ifm", "application/vnd.shana.informed.formdata" },
 { "itp", "application/vnd.shana.informed.formtemplate" },
 { "iif", "application/vnd.shana.informed.interchange" },
 { "ipk", "application/vnd.shana.informed.package" },
 { "twd", "application/vnd.simtech-mindmapper" },
 { "twds", "application/vnd.simtech-mindmapper" },
 { "mmf", "application/vnd.smaf" },
 { "teacher", "application/vnd.smart.teacher" },
 { "sdkm", "application/vnd.solent.sdkm+xml" },
 { "sdkd", "application/vnd.solent.sdkm+xml" },
 { "dxp", "application/vnd.spotfire.dxp" },
 { "sfs", "application/vnd.spotfire.sfs" },
 { "sdc", "application/vnd.stardivision.calc" },
 { "sda", "application/vnd.stardivision.draw" },
 { "sdd", "application/vnd.stardivision.impress" },
 { "smf", "application/vnd.stardivision.math" },
 { "sdw", "application/vnd.stardivision.writer" },
 { "vor", "application/vnd.stardivision.writer" },
 { "sgl", "application/vnd.stardivision.writer-global" },
 { "smzip", "application/vnd.stepmania.package" },
 { "sm", "application/vnd.stepmania.stepchart" },
 { "sxc", "application/vnd.sun.xml.calc" },
 { "stc", "application/vnd.sun.xml.calc.template" },
 { "sxd", "application/vnd.sun.xml.draw" },
 { "std", "application/vnd.sun.xml.draw.template" },
 { "sxi", "application/vnd.sun.xml.impress" },
 { "sti", "application/vnd.sun.xml.impress.template" },
 { "sxm", "application/vnd.sun.xml.math" },
 { "sxw", "application/vnd.sun.xml.writer" },
 { "sxg", "application/vnd.sun.xml.writer.global" },
 { "stw", "application/vnd.sun.xml.writer.template" },
 { "sus", "application/vnd.sus-calendar" },
 { "susp", "application/vnd.sus-calendar" },
 { "svd", "application/vnd.svd" },
 { "sis", "application/vnd.symbian.install" },
 { "sisx", "application/vnd.symbian.install" },
 { "xsm", "application/vnd.syncml+xml" },
 { "bdm", "application/vnd.syncml.dm+wbxml" },
 { "xdm", "application/vnd.syncml.dm+xml" },
 { "tao", "application/vnd.tao.intent-module-archive" },
 { "pcap", "application/vnd.tcpdump.pcap" },
 { "cap", "application/vnd.tcpdump.pcap" },
 { "dmp", "application/vnd.tcpdump.pcap" },
 { "tmo", "application/vnd.tmobile-livetv" },
 { "tpt", "application/vnd.trid.tpt" },
 { "mxs", "application/vnd.triscape.mxs" },
 { "tra", "application/vnd.trueapp" },
 { "ufd", "application/vnd.ufdl" },
 { "ufdl", "application/vnd.ufdl" },
 { "utz", "application/vnd.uiq.theme" },
 { "umj", "application/vnd.umajin" },
 { "unityweb", "application/vnd.unity" },
 { "uoml", "application/vnd.uoml+xml" },
 { "vcx", "application/vnd.vcx" },
 { "vsd", "application/vnd.visio" },
 { "vst", "application/vnd.visio" },
 { "vss", "application/vnd.visio" },
 { "vsw", "application/vnd.visio" },
 { "vis", "application/vnd.visionary" },
 { "vsf", "application/vnd.vsf" },
 { "wbxml", "application/vnd.wap.wbxml" },
 { "wmlc", "application/vnd.wap.wmlc" },
 { "wmlsc", "application/vnd.wap.wmlscriptc" },
 { "wtb", "application/vnd.webturbo" },
 { "nbp", "application/vnd.wolfram.player" },
 { "wpd", "application/vnd.wordperfect" },
 { "wqd", "application/vnd.wqd" },
 { "stf", "application/vnd.wt.stf" },
 { "xar", "application/vnd.xara" },
 { "xfdl", "application/vnd.xfdl" },
 { "hvd", "application/vnd.yamaha.hv-dic" },
 { "hvs", "application/vnd.yamaha.hv-script" },
 { "hvp", "application/vnd.yamaha.hv-voice" },
 { "osf", "application/vnd.yamaha.openscoreformat" },
 { "osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml" },
 { "saf", "application/vnd.yamaha.smaf-audio" },
 { "spf", "application/vnd.yamaha.smaf-phrase" },
 { "cmp", "application/vnd.yellowriver-custom-menu" },
 { "zir", "application/vnd.zul" },
 { "zirz", "application/vnd.zul" },
 { "zaz", "application/vnd.zzazz.deck+xml" },
 { "vxml", "application/voicexml+xml" },
 { "wgt", "application/widget" },
 { "hlp", "application/winhlp" },
 { "wsdl", "application/wsdl+xml" },
 { "wspolicy", "application/wspolicy+xml" },
 { "7z", "application/x-7z-compressed" },
 { "abw", "application/x-abiword" },
 { "ace", "application/x-ace-compressed" },
 { "dmg", "application/x-apple-diskimage" },
 { "aab", "application/x-authorware-bin" },
 { "x32", "application/x-authorware-bin" },
 { "u32", "application/x-authorware-bin" },
 { "vox", "application/x-authorware-bin" },
 { "aam", "application/x-authorware-map" },
 { "aas", "application/x-authorware-seg" },
 { "bcpio", "application/x-bcpio" },
 { "torrent", "application/x-bittorrent" },
 { "blb", "application/x-blorb" },
 { "blorb", "application/x-blorb" },
 { "bz", "application/x-bzip" },
 { "bz2", "application/x-bzip2" },
 { "boz", "application/x-bzip2" },
 { "cbr", "application/x-cbr" },
 { "cba", "application/x-cbr" },
 { "cbt", "application/x-cbr" },
 { "cbz", "application/x-cbr" },
 { "cb7", "application/x-cbr" },
 { "vcd", "application/x-cdlink" },
 { "cfs", "application/x-cfs-compressed" },
 { "chat", "application/x-chat" },
 { "pgn", "application/x-chess-pgn" },
 { "nsc", "application/x-conference" },
 { "cpio", "application/x-cpio" },
 { "csh", "application/x-csh" },
 { "deb", "application/x-debian-package" },
 { "udeb", "application/x-debian-package" },
 { "dgc", "application/x-dgc-compressed" },
 { "dir", "application/x-director" },
 { "dcr", "application/x-director" },
 { "dxr", "application/x-director" },
 { "cst", "application/x-director" },
 { "cct", "application/x-director" },
 { "cxt", "application/x-director" },
 { "w3d", "application/x-director" },
 { "fgd", "application/x-director" },
 { "swa", "application/x-director" },
 { "wad", "application/x-doom" },
 { "ncx", "application/x-dtbncx+xml" },
 { "dtb", "application/x-dtbook+xml" },
 { "res", "application/x-dtbresource+xml" },
 { "dvi", "application/x-dvi" },
 { "evy", "application/x-envoy" },
 { "eva", "application/x-eva" },
 { "bdf", "application/x-font-bdf" },
 { "gsf", "application/x-font-ghostscript" },
 { "psf", "application/x-font-linux-psf" },
 { "otf", "application/x-font-otf" },
 { "pcf", "application/x-font-pcf" },
 { "snf", "application/x-font-snf" },
 { "ttf", "application/x-font-ttf" },
 { "ttc", "application/x-font-ttf" },
 { "pfa", "application/x-font-type1" },
 { "pfb", "application/x-font-type1" },
 { "pfm", "application/x-font-type1" },
 { "afm", "application/x-font-type1" },
 { "woff", "application/font-woff" },
 { "arc", "application/x-freearc" },
 { "spl", "application/x-futuresplash" },
 { "gca", "application/x-gca-compressed" },
 { "ulx", "application/x-glulx" },
 { "gnumeric", "application/x-gnumeric" },
 { "gramps", "application/x-gramps-xml" },
 { "gtar", "application/x-gtar" },
 { "hdf", "application/x-hdf" },
 { "install", "application/x-install-instructions" },
 { "iso", "application/x-iso9660-image" },
 { "jnlp", "application/x-java-jnlp-file" },
 { "latex", "application/x-latex" },
 { "lzh", "application/x-lzh-compressed" },
 { "lha", "application/x-lzh-compressed" },
 { "mie", "application/x-mie" },
 { "prc", "application/x-mobipocket-ebook" },
 { "mobi", "application/x-mobipocket-ebook" },
 { "application", "application/x-ms-application" },
 { "lnk", "application/x-ms-shortcut" },
 { "wmd", "application/x-ms-wmd" },
 { "wmz", "application/x-msmetafile" },
 { "xbap", "application/x-ms-xbap" },
 { "mdb", "application/x-msaccess" },
 { "obd", "application/x-msbinder" },
 { "crd", "application/x-mscardfile" },
 { "clp", "application/x-msclip" },
 { "exe", "application/x-msdownload" },
 { "dll", "application/x-msdownload" },
 { "com", "application/x-msdownload" },
 { "bat", "application/x-msdownload" },
 { "msi", "application/x-msdownload" },
 { "mvb", "application/x-msmediaview" },
 { "m13", "application/x-msmediaview" },
 { "m14", "application/x-msmediaview" },
 { "wmf", "application/x-msmetafile" },
 { "emf", "application/x-msmetafile" },
 { "emz", "application/x-msmetafile" },
 { "mny", "application/x-msmoney" },
 { "pub", "application/x-mspublisher" },
 { "scd", "application/x-msschedule" },
 { "trm", "application/x-msterminal" },
 { "wri", "application/x-mswrite" },
 { "nc", "application/x-netcdf" },
 { "cdf", "application/x-netcdf" },
 { "nzb", "application/x-nzb" },
 { "p12", "application/x-pkcs12" },
 { "pfx", "application/x-pkcs12" },
 { "p7b", "application/x-pkcs7-certificates" },
 { "spc", "application/x-pkcs7-certificates" },
 { "p7r", "application/x-pkcs7-certreqresp" },
 { "rar", "application/x-rar-compressed" },
 { "ris", "application/x-research-info-systems" },
 { "sh", "application/x-sh" },
 { "shar", "application/x-shar" },
 { "swf", "application/x-shockwave-flash" },
 { "xap", "application/x-silverlight-app" },
 { "sql", "application/x-sql" },
 { "sit", "application/x-stuffit" },
 { "sitx", "application/x-stuffitx" },
 { "srt", "application/x-subrip" },
 { "sv4cpio", "application/x-sv4cpio" },
 { "sv4crc", "application/x-sv4crc" },
 { "t3", "application/x-t3vm-image" },
 { "gam", "application/x-tads" },
 { "tar", "application/x-tar" },
 { "tcl", "application/x-tcl" },
 { "tex", "application/x-tex" },
 { "tfm", "application/x-tex-tfm" },
 { "texinfo", "application/x-texinfo" },
 { "texi", "application/x-texinfo" },
 { "obj", "application/x-tgif" },
 { "ustar", "application/x-ustar" },
 { "src", "application/x-wais-source" },
 { "der", "application/x-x509-ca-cert" },
 { "crt", "application/x-x509-ca-cert" },
 { "fig", "application/x-xfig" },
 { "xlf", "application/x-xliff+xml" },
 { "xpi", "application/x-xpinstall" },
 { "xz", "application/x-xz" },
 { "z1", "application/x-zmachine" },
 { "z2", "application/x-zmachine" },
 { "z3", "application/x-zmachine" },
 { "z4", "application/x-zmachine" },
 { "z5", "application/x-zmachine" },
 { "z6", "application/x-zmachine" },
 { "z7", "application/x-zmachine" },
 { "z8", "application/x-zmachine" },
 { "xaml", "application/xaml+xml" },
 { "xdf", "application/xcap-diff+xml" },
 { "xenc", "application/xenc+xml" },
 { "xhtml", "application/xhtml+xml" },
 { "xht", "application/xhtml+xml" },
 { "xml", "application/xml" },
 { "xsl", "application/xml" },
 { "dtd", "application/xml-dtd" },
 { "xop", "application/xop+xml" },
 { "xpl", "application/xproc+xml" },
 { "xslt", "application/xslt+xml" },
 { "xspf", "application/xspf+xml" },
 { "mxml", "application/xv+xml" },
 { "xhvml", "application/xv+xml" },
 { "xvml", "application/xv+xml" },
 { "xvm", "application/xv+xml" },
 { "yang", "application/yang" },
 { "yin", "application/yin+xml" },
 { "zip", "application/zip" },
 { "adp", "audio/adpcm" },
 { "au", "audio/basic" },
 { "snd", "audio/basic" },
 { "mid", "audio/midi" },
 { "midi", "audio/midi" },
 { "kar", "audio/midi" },
 { "rmi", "audio/midi" },
 { "mp4a", "audio/mp4" },
 { "mpga", "audio/mpeg" },
 { "mp2", "audio/mpeg" },
 { "mp2a", "audio/mpeg" },
 { "mp3", "audio/mpeg" },
 { "m2a", "audio/mpeg" },
 { "m3a", "audio/mpeg" },
 { "oga", "audio/ogg" },
 { "ogg", "audio/ogg" },
 { "spx", "audio/ogg" },
 { "s3m", "audio/s3m" },
 { "sil", "audio/silk" },
 { "uva", "audio/vnd.dece.audio" },
 { "uvva", "audio/vnd.dece.audio" },
 { "eol", "audio/vnd.digital-winds" },
 { "dra", "audio/vnd.dra" },
 { "dts", "audio/vnd.dts" },
 { "dtshd", "audio/vnd.dts.hd" },
 { "lvp", "audio/vnd.lucent.voice" },
 { "pya", "audio/vnd.ms-playready.media.pya" },
 { "ecelp4800", "audio/vnd.nuera.ecelp4800" },
 { "ecelp7470", "audio/vnd.nuera.ecelp7470" },
 { "ecelp9600", "audio/vnd.nuera.ecelp9600" },
 { "rip", "audio/vnd.rip" },
 { "weba", "audio/webm" },
 { "aac", "audio/x-aac" },
 { "aif", "audio/x-aiff" },
 { "aiff", "audio/x-aiff" },
 { "aifc", "audio/x-aiff" },
 { "caf", "audio/x-caf" },
 { "flac", "audio/x-flac" },
 { "mka", "audio/x-matroska" },
 { "m3u", "audio/x-mpegurl" },
 { "wax", "audio/x-ms-wax" },
 { "wma", "audio/x-ms-wma" },
 { "ram", "audio/x-pn-realaudio" },
 { "ra", "audio/x-pn-realaudio" },
 { "rmp", "audio/x-pn-realaudio-plugin" },
 { "wav", "audio/x-wav" },
 { "xm", "audio/xm" },
 { "cdx", "chemical/x-cdx" },
 { "cif", "chemical/x-cif" },
 { "cmdf", "chemical/x-cmdf" },
 { "cml", "chemical/x-cml" },
 { "csml", "chemical/x-csml" },
 { "xyz", "chemical/x-xyz" },
 { "bmp", "image/bmp" },
 { "cgm", "image/cgm" },
 { "g3", "image/g3fax" },
 { "gif", "image/gif" },
 { "ief", "image/ief" },
 { "jpeg", "image/jpeg" },
 { "jpg", "image/jpeg" },
 { "jpe", "image/jpeg" },
 { "ktx", "image/ktx" },
 { "png", "image/png" },
 { "btif", "image/prs.btif" },
 { "sgi", "image/sgi" },
 { "svg", "image/svg+xml" },
 { "svgz", "image/svg+xml" },
 { "tiff", "image/tiff" },
 { "tif", "image/tiff" },
 { "psd", "image/vnd.adobe.photoshop" },
 { "uvi", "image/vnd.dece.graphic" },
 { "uvvi", "image/vnd.dece.graphic" },
 { "uvg", "image/vnd.dece.graphic" },
 { "uvvg", "image/vnd.dece.graphic" },
 { "sub", "text/vnd.dvb.subtitle" },
 { "djvu", "image/vnd.djvu" },
 { "djv", "image/vnd.djvu" },
 { "dwg", "image/vnd.dwg" },
 { "dxf", "image/vnd.dxf" },
 { "fbs", "image/vnd.fastbidsheet" },
 { "fpx", "image/vnd.fpx" },
 { "fst", "image/vnd.fst" },
 { "mmr", "image/vnd.fujixerox.edmics-mmr" },
 { "rlc", "image/vnd.fujixerox.edmics-rlc" },
 { "mdi", "image/vnd.ms-modi" },
 { "wdp", "image/vnd.ms-photo" },
 { "npx", "image/vnd.net-fpx" },
 { "wbmp", "image/vnd.wap.wbmp" },
 { "xif", "image/vnd.xiff" },
 { "webp", "image/webp" },
 { "3ds", "image/x-3ds" },
 { "ras", "image/x-cmu-raster" },
 { "cmx", "image/x-cmx" },
 { "fh", "image/x-freehand" },
 { "fhc", "image/x-freehand" },
 { "fh4", "image/x-freehand" },
 { "fh5", "image/x-freehand" },
 { "fh7", "image/x-freehand" },
 { "ico", "image/x-icon" },
 { "sid", "image/x-mrsid-image" },
 { "pcx", "image/x-pcx" },
 { "pic", "image/x-pict" },
 { "pct", "image/x-pict" },
 { "pnm", "image/x-portable-anymap" },
 { "pbm", "image/x-portable-bitmap" },
 { "pgm", "image/x-portable-graymap" },
 { "ppm", "image/x-portable-pixmap" },
 { "rgb", "image/x-rgb" },
 { "tga", "image/x-tga" },
 { "xbm", "image/x-xbitmap" },
 { "xpm", "image/x-xpixmap" },
 { "xwd", "image/x-xwindowdump" },
 { "eml", "message/rfc822" },
 { "mime", "message/rfc822" },
 { "igs", "model/iges" },
 { "iges", "model/iges" },
 { "msh", "model/mesh" },
 { "mesh", "model/mesh" },
 { "silo", "model/mesh" },
 { "dae", "model/vnd.collada+xml" },
 { "dwf", "model/vnd.dwf" },
 { "gdl", "model/vnd.gdl" },
 { "gtw", "model/vnd.gtw" },
 { "mts", "model/vnd.mts" },
 { "vtu", "model/vnd.vtu" },
 { "wrl", "model/vrml" },
 { "vrml", "model/vrml" },
 { "x3db", "model/x3d+binary" },
 { "x3dbz", "model/x3d+binary" },
 { "x3dv", "model/x3d+vrml" },
 { "x3dvz", "model/x3d+vrml" },
 { "x3d", "model/x3d+xml" },
 { "x3dz", "model/x3d+xml" },
 { "appcache", "text/cache-manifest" },
 { "ics", "text/calendar" },
 { "ifb", "text/calendar" },
 { "css", "text/css" },
 { "csv", "text/csv" },
 { "html", "text/html" },
 { "htm", "text/html" },
 { "n3", "text/n3" },
 { "txt", "text/plain" },
 { "text", "text/plain" },
 { "conf", "text/plain" },
 { "def", "text/plain" },
 { "list", "text/plain" },
 { "log", "text/plain" },
 { "in", "text/plain" },
 { "dsc", "text/prs.lines.tag" },
 { "rtx", "text/richtext" },
 { "sgml", "text/sgml" },
 { "sgm", "text/sgml" },
 { "tsv", "text/tab-separated-values" },
 { "t", "text/troff" },
 { "tr", "text/troff" },
 { "roff", "text/troff" },
 { "man", "text/troff" },
 { "me", "text/troff" },
 { "ms", "text/troff" },
 { "ttl", "text/turtle" },
 { "uri", "text/uri-list" },
 { "uris", "text/uri-list" },
 { "urls", "text/uri-list" },
 { "vcard", "text/vcard" },
 { "curl", "text/vnd.curl" },
 { "dcurl", "text/vnd.curl.dcurl" },
 { "scurl", "text/vnd.curl.scurl" },
 { "mcurl", "text/vnd.curl.mcurl" },
 { "fly", "text/vnd.fly" },
 { "flx", "text/vnd.fmi.flexstor" },
 { "gv", "text/vnd.graphviz" },
 { "3dml", "text/vnd.in3d.3dml" },
 { "spot", "text/vnd.in3d.spot" },
 { "jad", "text/vnd.sun.j2me.app-descriptor" },
 { "wml", "text/vnd.wap.wml" },
 { "wmls", "text/vnd.wap.wmlscript" },
 { "s", "text/x-asm" },
 { "asm", "text/x-asm" },
 { "c", "text/x-c" },
 { "cc", "text/x-c" },
 { "cxx", "text/x-c" },
 { "cpp", "text/x-c" },
 { "h", "text/x-c" },
 { "hh", "text/x-c" },
 { "dic", "text/x-c" },
 { "f", "text/x-fortran" },
 { "for", "text/x-fortran" },
 { "f77", "text/x-fortran" },
 { "f90", "text/x-fortran" },
 { "java", "text/x-java-source" },
 { "opml", "text/x-opml" },
 { "p", "text/x-pascal" },
 { "pas", "text/x-pascal" },
 { "nfo", "text/x-nfo" },
 { "etx", "text/x-setext" },
 { "sfv", "text/x-sfv" },
 { "uu", "text/x-uuencode" },
 { "vcs", "text/x-vcalendar" },
 { "vcf", "text/x-vcard" },
 { "3gp", "video/3gpp" },
 { "3g2", "video/3gpp2" },
 { "h261", "video/h261" },
 { "h263", "video/h263" },
 { "h264", "video/h264" },
 { "jpgv", "video/jpeg" },
 { "jpm", "video/jpm" },
 { "jpgm", "video/jpm" },
 { "mj2", "video/mj2" },
 { "mjp2", "video/mj2" },
 { "mp4", "video/mp4" },
 { "mp4v", "video/mp4" },
 { "mpg4", "video/mp4" },
 { "mpeg", "video/mpeg" },
 { "mpg", "video/mpeg" },
 { "mpe", "video/mpeg" },
 { "m1v", "video/mpeg" },
 { "m2v", "video/mpeg" },
 { "ogv", "video/ogg" },
 { "qt", "video/quicktime" },
 { "mov", "video/quicktime" },
 { "uvh", "video/vnd.dece.hd" },
 { "uvvh", "video/vnd.dece.hd" },
 { "uvm", "video/vnd.dece.mobile" },
 { "uvvm", "video/vnd.dece.mobile" },
 { "uvp", "video/vnd.dece.pd" },
 { "uvvp", "video/vnd.dece.pd" },
 { "uvs", "video/vnd.dece.sd" },
 { "uvvs", "video/vnd.dece.sd" },
 { "uvv", "video/vnd.dece.video" },
 { "uvvv", "video/vnd.dece.video" },
 { "dvb", "video/vnd.dvb.file" },
 { "fvt", "video/vnd.fvt" },
 { "mxu", "video/vnd.mpegurl" },
 { "m4u", "video/vnd.mpegurl" },
 { "pyv", "video/vnd.ms-playready.media.pyv" },
 { "uvu", "video/vnd.uvvu.mp4" },
 { "uvvu", "video/vnd.uvvu.mp4" },
 { "viv", "video/vnd.vivo" },
 { "webm", "video/webm" },
 { "f4v", "video/x-f4v" },
 { "fli", "video/x-fli" },
 { "flv", "video/x-flv" },
 { "m4v", "video/x-m4v" },
 { "mkv", "video/x-matroska" },
 { "mk3d", "video/x-matroska" },
 { "mks", "video/x-matroska" },
 { "mng", "video/x-mng" },
 { "asf", "video/x-ms-asf" },
 { "asx", "video/x-ms-asf" },
 { "vob", "video/x-ms-vob" },
 { "wm", "video/x-ms-wm" },
 { "wmv", "video/x-ms-wmv" },
 { "wmx", "video/x-ms-wmx" },
 { "wvx", "video/x-ms-wvx" },
 { "avi", "video/x-msvideo" },
 { "movie", "video/x-sgi-movie" },
 { "smv", "video/x-smv" },
 { "ice", "x-conference/x-cooltalk" },
 { "map", "application/json" },
 { ((void *)0), ((void *)0) }
};
# 104 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_process_title.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_process_title.h"
static const zend_internal_arg_info arginfo_cli_set_process_title[] = { { (const char*)(zend_uintptr_t)(-1), ((void *)0), 0, 0, 0, 0 },
    { "title", ((void *)0), 0, 0, 0, 0 },
};

static const zend_internal_arg_info arginfo_cli_get_process_title[] = { { (const char*)(zend_uintptr_t)(-1), ((void *)0), 0, 0, 0, 0 },
};

void zif_cli_set_process_title(zend_execute_data *execute_data, zval *return_value);
void zif_cli_get_process_title(zend_execute_data *execute_data, zval *return_value);
# 106 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c" 2





typedef struct php_cli_server_poller {
 fd_set rfds, wfds;
 struct {
  fd_set rfds, wfds;
 } active;
 php_socket_t max_fd;
} php_cli_server_poller;

typedef struct php_cli_server_request {
 enum php_http_method request_method;
 int protocol_version;
 char *request_uri;
 size_t request_uri_len;
 char *vpath;
 size_t vpath_len;
 char *path_translated;
 size_t path_translated_len;
 char *path_info;
 size_t path_info_len;
 char *query_string;
 size_t query_string_len;
 HashTable headers;
 HashTable headers_original_case;
 char *content;
 size_t content_len;
 const char *ext;
 size_t ext_len;
 zend_stat_t sb;
} php_cli_server_request;

typedef struct php_cli_server_chunk {
 struct php_cli_server_chunk *next;
 enum php_cli_server_chunk_type {
  PHP_CLI_SERVER_CHUNK_HEAP,
  PHP_CLI_SERVER_CHUNK_IMMORTAL
 } type;
 union {
  struct { void *block; char *p; size_t len; } heap;
  struct { const char *p; size_t len; } immortal;
 } data;
} php_cli_server_chunk;

typedef struct php_cli_server_buffer {
 php_cli_server_chunk *first;
 php_cli_server_chunk *last;
} php_cli_server_buffer;

typedef struct php_cli_server_content_sender {
 php_cli_server_buffer buffer;
} php_cli_server_content_sender;

typedef struct php_cli_server_client {
 struct php_cli_server *server;
 php_socket_t sock;
 struct sockaddr *addr;
 socklen_t addr_len;
 char *addr_str;
 size_t addr_str_len;
 php_http_parser parser;
 unsigned int request_read:1;
 char *current_header_name;
 size_t current_header_name_len;
 unsigned int current_header_name_allocated:1;
 size_t post_read_offset;
 php_cli_server_request request;
 unsigned int content_sender_initialized:1;
 php_cli_server_content_sender content_sender;
 int file_fd;
} php_cli_server_client;

typedef struct php_cli_server {
 php_socket_t server_sock;
 php_cli_server_poller poller;
 int is_running;
 char *host;
 int port;
 int address_family;
 char *document_root;
 size_t document_root_len;
 char *router;
 size_t router_len;
 socklen_t socklen;
 HashTable clients;
 HashTable extension_mime_types;
} php_cli_server;

typedef struct php_cli_server_http_response_status_code_pair {
 int code;
 const char *str;
} php_cli_server_http_response_status_code_pair;

static php_cli_server_http_response_status_code_pair template_map[] = {
 { 400, "<h1>%s</h1><p>Your browser sent a request that this server could not understand.</p>" },
 { 404, "<h1>%s</h1><p>The requested resource <code class=\"url\">%s</code> was not found on this server.</p>" },
 { 500, "<h1>%s</h1><p>The server is temporarily unavailable.</p>" },
 { 501, "<h1>%s</h1><p>Request method not supported.</p>" }
};


static int php_cli_output_is_tty = -1;


static size_t php_cli_server_client_send_through(php_cli_server_client *client, const char *str, size_t str_len);
static php_cli_server_chunk *php_cli_server_chunk_heap_new_self_contained(size_t len);
static void php_cli_server_buffer_append(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk);
static void php_cli_server_logf(const char *format, ...);
static void php_cli_server_log_response(php_cli_server_client *client, int status, const char *message);

zend_cli_server_globals cli_server_globals;;




static const char php_cli_server_css[] = "<style>\n"
          "body { background-color: #fcfcfc; color: #333333; margin: 0; padding:0; }\n"
          "h1 { font-size: 1.5em; font-weight: normal; background-color: #9999cc; min-height:2em; line-height:2em; border-bottom: 1px inset black; margin: 0; }\n"
          "h1, p { padding-left: 10px; }\n"
          "code.url { background-color: #eeeeee; font-family:monospace; padding:0 2px;}\n"
          "</style>\n";
# 249 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
int php_cli_server_get_system_time(char *buf) {
 struct timeval tv;
 struct tm tm;

 gettimeofday(&tv, ((void *)0));


 localtime_r(&tv.tv_sec, &tm);
 asctime_r(&tm, buf);
 return 0;
}


static void char_ptr_dtor_p(zval *zv)
{
 ((1)?free((*(zv)).value.ptr):_efree(((*(zv)).value.ptr) ));
}

static char *get_last_error()
{
 return ((1)?strdup(strerror((*__errno_location ()))):_estrdup((strerror((*__errno_location ()))) ));
}

static int status_comp(const void *a, const void *b)
{
 const http_response_status_code_pair *pa = (const http_response_status_code_pair *) a;
 const http_response_status_code_pair *pb = (const http_response_status_code_pair *) b;

 if (pa->code < pb->code) {
  return -1;
 } else if (pa->code > pb->code) {
  return 1;
 }

 return 0;
}

static const char *get_status_string(int code)
{
 http_response_status_code_pair needle = {code, ((void *)0)},
  *result = ((void *)0);

 result = bsearch(&needle, http_status_map, http_status_map_len, sizeof(needle), status_comp);

 if (result) {
  return result->str;
 }





 return "Unknown Status Code";
}

static const char *get_template_string(int code)
{
 size_t e = (sizeof(template_map) / sizeof(php_cli_server_http_response_status_code_pair));
 size_t s = 0;

 while (e != s) {
  size_t c = ((((e + s + 1) / 2)<(e - 1))?((e + s + 1) / 2):(e - 1));
  int d = template_map[c].code;
  if (d > code) {
   e = c;
  } else if (d < code) {
   s = c;
  } else {
   return template_map[c].str;
  }
 }
 return ((void *)0);
}

static void append_http_status_line(smart_str *buffer, int protocol_version, int response_code, int persistent)
{
 if (!response_code) {
  response_code = 200;
 }
 smart_str_appendl_ex(buffer, "HTTP", 4, persistent);
 smart_str_appendc_ex(buffer, '/', persistent);
 smart_str_append_long_ex(buffer, protocol_version / 100, persistent);
 smart_str_appendc_ex(buffer, '.', persistent);
 smart_str_append_long_ex(buffer, protocol_version % 100, persistent);
 smart_str_appendc_ex(buffer, ' ', persistent);
 smart_str_append_long_ex(buffer, response_code, persistent);
 smart_str_appendc_ex(buffer, ' ', persistent);
 smart_str_appendl_ex((buffer), (get_status_string(response_code)), strlen(get_status_string(response_code)), (persistent));
 smart_str_appendl_ex(buffer, "\r\n", 2, persistent);
}

static void append_essential_headers(smart_str* buffer, php_cli_server_client *client, int persistent)
{
 {
  char *val;
  if (((void *)0) != (val = zend_hash_str_find_ptr(&client->request.headers, "host", sizeof("host")-1))) {
   smart_str_appendl_ex(buffer, "Host", sizeof("Host") - 1, persistent);
   smart_str_appendl_ex(buffer, ": ", sizeof(": ") - 1, persistent);
   smart_str_appendl_ex((buffer), (val), strlen(val), (persistent));
   smart_str_appendl_ex(buffer, "\r\n", 2, persistent);
  }
 }
 smart_str_appendl_ex(buffer, "Connection: close\r\n", sizeof("Connection: close\r\n") - 1, persistent);
}

static const char *get_mime_type(const php_cli_server *server, const char *ext, size_t ext_len)
{
 return (const char*)zend_hash_str_find_ptr(&server->extension_mime_types, ext, ext_len);
}

void zif_apache_request_headers(zend_execute_data *execute_data, zval *return_value)
{
 php_cli_server_client *client;
 HashTable *headers;
 zend_string *key;
 char *value;
 zval tmp;

 if ((__builtin_expect(!!((execute_data)->This.u2.num_args == 0), 1) ? SUCCESS : zend_parse_parameters((execute_data)->This.u2.num_args, "")) == FAILURE) {
  return;
 }

 client = (sapi_globals.server_context);
 headers = &client->request.headers_original_case;

 _array_init((return_value), ((headers)->nNumOfElements) );

 do { Bucket *_p = (headers)->arData; Bucket *_end = _p + (headers)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; key = _p->key; value = (*(_z)).value.ptr; {
  do { const char *_s = (value); do { do { zval *__z = (&tmp); zend_string *__s = (zend_string_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); } while (0);
  zend_symtable_update((*(return_value)).value.arr, key, &tmp);
 } } } while (0);
}


static void add_response_header(sapi_header_struct *h, zval *return_value)
{
 char *s, *p;
 ptrdiff_t len;
 zend_bool use_heap;

 if (h->header_len > 0) {
  p = strchr(h->header, ':');
  len = p - h->header;
  if (p && (len > 0)) {
   while (len > 0 && (h->header[len-1] == ' ' || h->header[len-1] == '\t')) {
    len--;
   }
   if (len) {
    s = ((use_heap = (__builtin_expect(!!((len + 1) > ((32 * 1024))), 0))) ? (__builtin_constant_p((len + 1) ) ? (((len + 1) <= 8) ? _emalloc_8() : (((len + 1) <= 16) ? _emalloc_16() : (((len + 1) <= 24) ? _emalloc_24() : (((len + 1) <= 32) ? _emalloc_32() : (((len + 1) <= 40) ? _emalloc_40() : (((len + 1) <= 48) ? _emalloc_48() : (((len + 1) <= 56) ? _emalloc_56() : (((len + 1) <= 64) ? _emalloc_64() : (((len + 1) <= 80) ? _emalloc_80() : (((len + 1) <= 96) ? _emalloc_96() : (((len + 1) <= 112) ? _emalloc_112() : (((len + 1) <= 128) ? _emalloc_128() : (((len + 1) <= 160) ? _emalloc_160() : (((len + 1) <= 192) ? _emalloc_192() : (((len + 1) <= 224) ? _emalloc_224() : (((len + 1) <= 256) ? _emalloc_256() : (((len + 1) <= 320) ? _emalloc_320() : (((len + 1) <= 384) ? _emalloc_384() : (((len + 1) <= 448) ? _emalloc_448() : (((len + 1) <= 512) ? _emalloc_512() : (((len + 1) <= 640) ? _emalloc_640() : (((len + 1) <= 768) ? _emalloc_768() : (((len + 1) <= 896) ? _emalloc_896() : (((len + 1) <= 1024) ? _emalloc_1024() : (((len + 1) <= 1280) ? _emalloc_1280() : (((len + 1) <= 1536) ? _emalloc_1536() : (((len + 1) <= 1792) ? _emalloc_1792() : (((len + 1) <= 2048) ? _emalloc_2048() : (((len + 1) <= 2560) ? _emalloc_2560() : (((len + 1) <= 3072) ? _emalloc_3072() : (((len + 1) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((len + 1)) : _emalloc_huge((len + 1))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((len + 1) ) ) : __builtin_alloca (len + 1));
    memcpy(s, h->header, len);
    s[len] = 0;
    do {
     p++;
    } while (*p == ' ' || *p == '\t');
    add_assoc_stringl_ex(return_value, s, (uint)len, p, h->header_len - (p - h->header));
    do { if (__builtin_expect(!!(use_heap), 0)) _efree((s) ); } while (0);
   }
  }
 }
}


void zif_apache_response_headers(zend_execute_data *execute_data, zval *return_value)
{
 if ((__builtin_expect(!!((execute_data)->This.u2.num_args == 0), 1) ? SUCCESS : zend_parse_parameters((execute_data)->This.u2.num_args, "")) == FAILURE) {
  return;
 }

 _array_init((return_value), 0 );
 zend_llist_apply_with_argument(&(sapi_globals.sapi_headers).headers, (llist_apply_with_arg_func_t)add_response_header, return_value);
}





static void cli_server_init_globals(zend_cli_server_globals *cg)
{
 cg->color = 0;
}

static const zend_ini_entry_def ini_entries[] = {
 { "cli_server.color", OnUpdateBool, (void *) ((zend_long) (((char *) (&(((zend_cli_server_globals*)((void *)0))->color))) - ((char *) ((void *)0)))), (void *) &cli_server_globals, ((void *)0), "0", zend_ini_boolean_displayer_cb, ((1<<0)|(1<<1)|(1<<2)), sizeof("cli_server.color")-1, sizeof("0")-1 },
{ ((void *)0), ((void *)0), ((void *)0), ((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 0, 0} };

static int zm_startup_cli_server(int type, int module_number)
{
 cli_server_init_globals(&cli_server_globals);;
 zend_register_ini_entries(ini_entries, module_number);
 return SUCCESS;
}

static int zm_shutdown_cli_server(int type, int module_number)
{
 zend_unregister_ini_entries(module_number);
 return SUCCESS;
}

static void zm_info_cli_server(zend_module_entry *zend_module)
{
 display_ini_entries(zend_module);
}

zend_module_entry cli_server_module_entry = {
 sizeof(zend_module_entry), 20151012, 0, 0, ((void *)0), ((void *)0),
 "cli_server",
 ((void *)0),
 zm_startup_cli_server,
 zm_shutdown_cli_server,
 ((void *)0),
 ((void *)0),
 zm_info_cli_server,
 "7.0.9-dev",
 0, ((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 0, ((void *)0), 0, "API" "20151012" ",NTS"
};


static const zend_internal_arg_info arginfo_no_args[] = { { (const char*)(zend_uintptr_t)(-1), ((void *)0), 0, 0, 0, 0 },
};

const zend_function_entry server_additional_functions[] = {
 { "cli_set_process_title", zif_cli_set_process_title, arginfo_cli_set_process_title, (uint32_t) (sizeof(arginfo_cli_set_process_title)/sizeof(struct _zend_internal_arg_info)-1), 0 },
 { "cli_get_process_title", zif_cli_get_process_title, arginfo_cli_get_process_title, (uint32_t) (sizeof(arginfo_cli_get_process_title)/sizeof(struct _zend_internal_arg_info)-1), 0 },
 { "apache_request_headers", zif_apache_request_headers, arginfo_no_args, (uint32_t) (sizeof(arginfo_no_args)/sizeof(struct _zend_internal_arg_info)-1), 0 },
 { "apache_response_headers", zif_apache_response_headers, arginfo_no_args, (uint32_t) (sizeof(arginfo_no_args)/sizeof(struct _zend_internal_arg_info)-1), 0 },
 { "getallheaders", zif_apache_request_headers, arginfo_no_args, (uint32_t) (sizeof(arginfo_no_args)/sizeof(struct _zend_internal_arg_info)-1), 0 },
 {((void *)0), ((void *)0), ((void *)0)}
};

static int sapi_cli_server_startup(sapi_module_struct *sapi_module)
{
 if (php_module_startup(sapi_module, &cli_server_module_entry, 1) == FAILURE) {
  return FAILURE;
 }
 return SUCCESS;
}

static size_t sapi_cli_server_ub_write(const char *str, size_t str_length)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 if (!client) {
  return 0;
 }
 return php_cli_server_client_send_through(client, str, str_length);
}

static void sapi_cli_server_flush(void *server_context)
{
 php_cli_server_client *client = server_context;

 if (!client) {
  return;
 }

 if (!((client->sock) >= 0)) {
  php_handle_aborted_connection();
  return;
 }

 if (!(sapi_globals.headers_sent)) {
  sapi_send_headers();
  (sapi_globals.headers_sent) = 1;
 }
}

static int sapi_cli_server_discard_headers(sapi_headers_struct *sapi_headers) {
 return 1;
}


static int sapi_cli_server_send_headers(sapi_headers_struct *sapi_headers)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 smart_str buffer = { 0 };
 sapi_header_struct *h;
 zend_llist_position pos;

 if (client == ((void *)0) || (sapi_globals.request_info).no_headers) {
  return 1;
 }

 if ((sapi_globals.sapi_headers).http_status_line) {
  smart_str_appendl_ex(((&buffer)), (((sapi_globals.sapi_headers).http_status_line)), (strlen((sapi_globals.sapi_headers).http_status_line)), 0);
  smart_str_appendl_ex((&buffer), ("\r\n"), (2), 0);
 } else {
  append_http_status_line(&buffer, client->request.protocol_version, (sapi_globals.sapi_headers).http_response_code, 0);
 }

 append_essential_headers(&buffer, client, 0);

 h = (sapi_header_struct*)zend_llist_get_first_ex(&sapi_headers->headers, &pos);
 while (h) {
  if (h->header_len) {
   smart_str_appendl_ex((&buffer), (h->header), (h->header_len), 0);
   smart_str_appendl_ex((&buffer), ("\r\n"), (2), 0);
  }
  h = (sapi_header_struct*)zend_llist_get_next_ex(&sapi_headers->headers, &pos);
 }
 smart_str_appendl_ex((&buffer), ("\r\n"), (2), 0);

 php_cli_server_client_send_through(client, (buffer.s)->val, (buffer.s)->len);

 smart_str_free(&buffer);
 return 1;
}


static char *sapi_cli_server_read_cookies(void)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 char *val;
 if (((void *)0) == (val = zend_hash_str_find_ptr(&client->request.headers, "cookie", sizeof("cookie")-1))) {
  return ((void *)0);
 }
 return val;
}

static size_t sapi_cli_server_read_post(char *buf, size_t count_bytes)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 if (client->request.content) {
  size_t content_len = client->request.content_len;
  size_t nbytes_copied = (((client->post_read_offset + count_bytes)<(content_len))?(client->post_read_offset + count_bytes):(content_len)) - client->post_read_offset;
  memmove(buf, client->request.content + client->post_read_offset, nbytes_copied);
  client->post_read_offset += nbytes_copied;
  return nbytes_copied;
 }
 return 0;
}

static void sapi_cli_server_register_variable(zval *track_vars_array, const char *key, const char *val)
{
 char *new_val = (char *)val;
 size_t new_val_len;

 if (((void *)0) == val) {
  return;
 }

 if (sapi_module.input_filter(5, (char*)key, &new_val, strlen(val), &new_val_len)) {
  php_register_variable_safe((char *)key, new_val, new_val_len, track_vars_array);
 }
}

static int sapi_cli_server_register_entry_cb(char **entry, int num_args, va_list args, zend_hash_key *hash_key) {
 zval *track_vars_array = __builtin_va_arg(args,zval *);
 if (hash_key->key) {
  char *real_key, *key;
  uint i;
  key = _estrndup(((hash_key->key)->val), ((hash_key->key)->len) );
  for(i=0; i<(hash_key->key)->len; i++) {
   if (key[i] == '-') {
    key[i] = '_';
   } else {
    key[i] = toupper(key[i]);
   }
  }
  spprintf(&real_key, 0, "%s_%s", "HTTP", key);
  if (strcmp(key, "CONTENT_TYPE") == 0 || strcmp(key, "CONTENT_LENGTH") == 0) {
   sapi_cli_server_register_variable(track_vars_array, key, *entry);
  }
  sapi_cli_server_register_variable(track_vars_array, real_key, *entry);
  _efree((key) );
  _efree((real_key) );
 }

 return 0;
}


static void sapi_cli_server_register_variables(zval *track_vars_array)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 sapi_cli_server_register_variable(track_vars_array, "DOCUMENT_ROOT", client->server->document_root);
 {
  char *tmp;
  if ((tmp = strrchr(client->addr_str, ':'))) {
   char addr[64], port[8];
   strncpy(port, tmp + 1, 8);
   port[7] = '\0';
   strncpy(addr, client->addr_str, tmp - client->addr_str);
   addr[tmp - client->addr_str] = '\0';
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_ADDR", addr);
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_PORT", port);
  } else {
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_ADDR", client->addr_str);
  }
 }
 {
  char *tmp;
  spprintf(&tmp, 0, "PHP %s Development Server", "7.0.9-dev");
  sapi_cli_server_register_variable(track_vars_array, "SERVER_SOFTWARE", tmp);
  _efree((tmp) );
 }
 {
  char *tmp;
  spprintf(&tmp, 0, "HTTP/%d.%d", client->request.protocol_version / 100, client->request.protocol_version % 100);
  sapi_cli_server_register_variable(track_vars_array, "SERVER_PROTOCOL", tmp);
  _efree((tmp) );
 }
 sapi_cli_server_register_variable(track_vars_array, "SERVER_NAME", client->server->host);
 {
  char *tmp;
  spprintf(&tmp, 0, "%i", client->server->port);
  sapi_cli_server_register_variable(track_vars_array, "SERVER_PORT", tmp);
  _efree((tmp) );
 }

 sapi_cli_server_register_variable(track_vars_array, "REQUEST_URI", client->request.request_uri);
 sapi_cli_server_register_variable(track_vars_array, "REQUEST_METHOD", (sapi_globals.request_info).request_method);
 sapi_cli_server_register_variable(track_vars_array, "SCRIPT_NAME", client->request.vpath);
 if ((sapi_globals.request_info).path_translated) {
  sapi_cli_server_register_variable(track_vars_array, "SCRIPT_FILENAME", (sapi_globals.request_info).path_translated);
 } else if (client->server->router) {
  sapi_cli_server_register_variable(track_vars_array, "SCRIPT_FILENAME", client->server->router);
 }
 if (client->request.path_info) {
  sapi_cli_server_register_variable(track_vars_array, "PATH_INFO", client->request.path_info);
 }
 if (client->request.path_info_len) {
  char *tmp;
  spprintf(&tmp, 0, "%s%s", client->request.vpath, client->request.path_info);
  sapi_cli_server_register_variable(track_vars_array, "PHP_SELF", tmp);
  _efree((tmp) );
 } else {
  sapi_cli_server_register_variable(track_vars_array, "PHP_SELF", client->request.vpath);
 }
 if (client->request.query_string) {
  sapi_cli_server_register_variable(track_vars_array, "QUERY_STRING", client->request.query_string);
 }
 zend_hash_apply_with_arguments(&client->request.headers, (apply_func_args_t)sapi_cli_server_register_entry_cb, 1, track_vars_array);
}

static void sapi_cli_server_log_message(char *msg)
{
 char buf[52];

 if (php_cli_server_get_system_time(buf) != 0) {
  memmove(buf, "unknown time, can't be fetched", sizeof("unknown time, can't be fetched"));
 } else {
  size_t l = strlen(buf);
  if (l > 0) {
   buf[l - 1] = '\0';
  } else {
   memmove(buf, "unknown", sizeof("unknown"));
  }
 }
 fprintf(stderr, "[%s] %s\n", buf, msg);
}



sapi_module_struct cli_server_sapi_module = {
 "cli-server",
 "Built-in HTTP server",

 sapi_cli_server_startup,
 php_module_shutdown_wrapper,

 ((void *)0),
 ((void *)0),

 sapi_cli_server_ub_write,
 sapi_cli_server_flush,
 ((void *)0),
 ((void *)0),

 zend_error,

 ((void *)0),
 sapi_cli_server_send_headers,
 ((void *)0),

 sapi_cli_server_read_post,
 sapi_cli_server_read_cookies,

 sapi_cli_server_register_variables,
 sapi_cli_server_log_message,
 ((void *)0),
 ((void *)0),


};

static int php_cli_server_poller_ctor(php_cli_server_poller *poller)
{
 do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " "stosq" : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&((&poller->rfds)->__fds_bits)[0]) : "memory"); } while (0);
 do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " "stosq" : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&((&poller->wfds)->__fds_bits)[0]) : "memory"); } while (0);
 poller->max_fd = -1;
 return SUCCESS;
}

static void php_cli_server_poller_add(php_cli_server_poller *poller, int mode, php_socket_t fd)
{
 if (mode & 0x001) {
  do { if (fd < 1024) ((void) (((&poller->rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] |= ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (mode & 0x004) {
  do { if (fd < 1024) ((void) (((&poller->wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] |= ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (fd > poller->max_fd) {
  poller->max_fd = fd;
 }
}

static void php_cli_server_poller_remove(php_cli_server_poller *poller, int mode, php_socket_t fd)
{
 if (mode & 0x001) {
  do { if (fd < 1024) ((void) (((&poller->rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] &= ~((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (mode & 0x004) {
  do { if (fd < 1024) ((void) (((&poller->wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] &= ~((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }

 if (fd == poller->max_fd) {
  while (fd > 0) {
   fd--;
   if (((fd < 1024) && ((((&poller->rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] & ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask))))) != 0)) || ((fd < 1024) && ((((&poller->wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] & ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask))))) != 0))) {
    break;
   }
  }
  poller->max_fd = fd;
 }

}

static int php_cli_server_poller_poll(php_cli_server_poller *poller, struct timeval *tv)
{
 memmove(&poller->active.rfds, &poller->rfds, sizeof(poller->rfds));
 memmove(&poller->active.wfds, &poller->wfds, sizeof(poller->wfds));
 return select(poller->max_fd + 1, &poller->active.rfds, &poller->active.wfds, ((void *)0), tv);
}

static int php_cli_server_poller_iter_on_active(php_cli_server_poller *poller, void *opaque, int(*callback)(void *, php_socket_t fd, int events))
{
 int retval = SUCCESS;
# 826 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
 php_socket_t fd;
 const php_socket_t max_fd = poller->max_fd;

 for (fd=0 ; fd<=max_fd ; fd++) {
  if (((fd < 1024) && ((((&poller->active.rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] & ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask))))) != 0))) {
                if (SUCCESS != callback(opaque, fd, 0x001)) {
                    retval = FAILURE;
                }
  }
  if (((fd < 1024) && ((((&poller->active.wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] & ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask))))) != 0))) {
                if (SUCCESS != callback(opaque, fd, 0x004)) {
                    retval = FAILURE;
                }
  }
 }

 return retval;
}

static size_t php_cli_server_chunk_size(const php_cli_server_chunk *chunk)
{
 switch (chunk->type) {
 case PHP_CLI_SERVER_CHUNK_HEAP:
  return chunk->data.heap.len;
 case PHP_CLI_SERVER_CHUNK_IMMORTAL:
  return chunk->data.immortal.len;
 }
 return 0;
}

static void php_cli_server_chunk_dtor(php_cli_server_chunk *chunk)
{
 switch (chunk->type) {
 case PHP_CLI_SERVER_CHUNK_HEAP:
  if (chunk->data.heap.block != chunk) {
   ((1)?free(chunk->data.heap.block):_efree((chunk->data.heap.block) ));
  }
  break;
 case PHP_CLI_SERVER_CHUNK_IMMORTAL:
  break;
 }
}

static void php_cli_server_buffer_dtor(php_cli_server_buffer *buffer)
{
 php_cli_server_chunk *chunk, *next;
 for (chunk = buffer->first; chunk; chunk = next) {
  next = chunk->next;
  php_cli_server_chunk_dtor(chunk);
  ((1)?free(chunk):_efree((chunk) ));
 }
}

static void php_cli_server_buffer_ctor(php_cli_server_buffer *buffer)
{
 buffer->first = ((void *)0);
 buffer->last = ((void *)0);
}

static void php_cli_server_buffer_append(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk)
{
 php_cli_server_chunk *last;
 for (last = chunk; last->next; last = last->next);
 if (!buffer->last) {
  buffer->first = chunk;
 } else {
  buffer->last->next = chunk;
 }
 buffer->last = last;
}

static void php_cli_server_buffer_prepend(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk)
{
 php_cli_server_chunk *last;
 for (last = chunk; last->next; last = last->next);
 last->next = buffer->first;
 if (!buffer->last) {
  buffer->last = last;
 }
 buffer->first = chunk;
}

static size_t php_cli_server_buffer_size(const php_cli_server_buffer *buffer)
{
 php_cli_server_chunk *chunk;
 size_t retval = 0;
 for (chunk = buffer->first; chunk; chunk = chunk->next) {
  retval += php_cli_server_chunk_size(chunk);
 }
 return retval;
}

static php_cli_server_chunk *php_cli_server_chunk_immortal_new(const char *buf, size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk)):(__builtin_constant_p((sizeof(php_cli_server_chunk)) ) ? (((sizeof(php_cli_server_chunk)) <= 8) ? _emalloc_8() : (((sizeof(php_cli_server_chunk)) <= 16) ? _emalloc_16() : (((sizeof(php_cli_server_chunk)) <= 24) ? _emalloc_24() : (((sizeof(php_cli_server_chunk)) <= 32) ? _emalloc_32() : (((sizeof(php_cli_server_chunk)) <= 40) ? _emalloc_40() : (((sizeof(php_cli_server_chunk)) <= 48) ? _emalloc_48() : (((sizeof(php_cli_server_chunk)) <= 56) ? _emalloc_56() : (((sizeof(php_cli_server_chunk)) <= 64) ? _emalloc_64() : (((sizeof(php_cli_server_chunk)) <= 80) ? _emalloc_80() : (((sizeof(php_cli_server_chunk)) <= 96) ? _emalloc_96() : (((sizeof(php_cli_server_chunk)) <= 112) ? _emalloc_112() : (((sizeof(php_cli_server_chunk)) <= 128) ? _emalloc_128() : (((sizeof(php_cli_server_chunk)) <= 160) ? _emalloc_160() : (((sizeof(php_cli_server_chunk)) <= 192) ? _emalloc_192() : (((sizeof(php_cli_server_chunk)) <= 224) ? _emalloc_224() : (((sizeof(php_cli_server_chunk)) <= 256) ? _emalloc_256() : (((sizeof(php_cli_server_chunk)) <= 320) ? _emalloc_320() : (((sizeof(php_cli_server_chunk)) <= 384) ? _emalloc_384() : (((sizeof(php_cli_server_chunk)) <= 448) ? _emalloc_448() : (((sizeof(php_cli_server_chunk)) <= 512) ? _emalloc_512() : (((sizeof(php_cli_server_chunk)) <= 640) ? _emalloc_640() : (((sizeof(php_cli_server_chunk)) <= 768) ? _emalloc_768() : (((sizeof(php_cli_server_chunk)) <= 896) ? _emalloc_896() : (((sizeof(php_cli_server_chunk)) <= 1024) ? _emalloc_1024() : (((sizeof(php_cli_server_chunk)) <= 1280) ? _emalloc_1280() : (((sizeof(php_cli_server_chunk)) <= 1536) ? _emalloc_1536() : (((sizeof(php_cli_server_chunk)) <= 1792) ? _emalloc_1792() : (((sizeof(php_cli_server_chunk)) <= 2048) ? _emalloc_2048() : (((sizeof(php_cli_server_chunk)) <= 2560) ? _emalloc_2560() : (((sizeof(php_cli_server_chunk)) <= 3072) ? _emalloc_3072() : (((sizeof(php_cli_server_chunk)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(php_cli_server_chunk))) : _emalloc_huge((sizeof(php_cli_server_chunk)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(php_cli_server_chunk)) ) ));
 if (!chunk) {
  return ((void *)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_IMMORTAL;
 chunk->next = ((void *)0);
 chunk->data.immortal.p = buf;
 chunk->data.immortal.len = len;
 return chunk;
}

static php_cli_server_chunk *php_cli_server_chunk_heap_new(void *block, char *buf, size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk)):(__builtin_constant_p((sizeof(php_cli_server_chunk)) ) ? (((sizeof(php_cli_server_chunk)) <= 8) ? _emalloc_8() : (((sizeof(php_cli_server_chunk)) <= 16) ? _emalloc_16() : (((sizeof(php_cli_server_chunk)) <= 24) ? _emalloc_24() : (((sizeof(php_cli_server_chunk)) <= 32) ? _emalloc_32() : (((sizeof(php_cli_server_chunk)) <= 40) ? _emalloc_40() : (((sizeof(php_cli_server_chunk)) <= 48) ? _emalloc_48() : (((sizeof(php_cli_server_chunk)) <= 56) ? _emalloc_56() : (((sizeof(php_cli_server_chunk)) <= 64) ? _emalloc_64() : (((sizeof(php_cli_server_chunk)) <= 80) ? _emalloc_80() : (((sizeof(php_cli_server_chunk)) <= 96) ? _emalloc_96() : (((sizeof(php_cli_server_chunk)) <= 112) ? _emalloc_112() : (((sizeof(php_cli_server_chunk)) <= 128) ? _emalloc_128() : (((sizeof(php_cli_server_chunk)) <= 160) ? _emalloc_160() : (((sizeof(php_cli_server_chunk)) <= 192) ? _emalloc_192() : (((sizeof(php_cli_server_chunk)) <= 224) ? _emalloc_224() : (((sizeof(php_cli_server_chunk)) <= 256) ? _emalloc_256() : (((sizeof(php_cli_server_chunk)) <= 320) ? _emalloc_320() : (((sizeof(php_cli_server_chunk)) <= 384) ? _emalloc_384() : (((sizeof(php_cli_server_chunk)) <= 448) ? _emalloc_448() : (((sizeof(php_cli_server_chunk)) <= 512) ? _emalloc_512() : (((sizeof(php_cli_server_chunk)) <= 640) ? _emalloc_640() : (((sizeof(php_cli_server_chunk)) <= 768) ? _emalloc_768() : (((sizeof(php_cli_server_chunk)) <= 896) ? _emalloc_896() : (((sizeof(php_cli_server_chunk)) <= 1024) ? _emalloc_1024() : (((sizeof(php_cli_server_chunk)) <= 1280) ? _emalloc_1280() : (((sizeof(php_cli_server_chunk)) <= 1536) ? _emalloc_1536() : (((sizeof(php_cli_server_chunk)) <= 1792) ? _emalloc_1792() : (((sizeof(php_cli_server_chunk)) <= 2048) ? _emalloc_2048() : (((sizeof(php_cli_server_chunk)) <= 2560) ? _emalloc_2560() : (((sizeof(php_cli_server_chunk)) <= 3072) ? _emalloc_3072() : (((sizeof(php_cli_server_chunk)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(php_cli_server_chunk))) : _emalloc_huge((sizeof(php_cli_server_chunk)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(php_cli_server_chunk)) ) ));
 if (!chunk) {
  return ((void *)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_HEAP;
 chunk->next = ((void *)0);
 chunk->data.heap.block = block;
 chunk->data.heap.p = buf;
 chunk->data.heap.len = len;
 return chunk;
}

static php_cli_server_chunk *php_cli_server_chunk_heap_new_self_contained(size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk) + len):(__builtin_constant_p((sizeof(php_cli_server_chunk) + len) ) ? (((sizeof(php_cli_server_chunk) + len) <= 8) ? _emalloc_8() : (((sizeof(php_cli_server_chunk) + len) <= 16) ? _emalloc_16() : (((sizeof(php_cli_server_chunk) + len) <= 24) ? _emalloc_24() : (((sizeof(php_cli_server_chunk) + len) <= 32) ? _emalloc_32() : (((sizeof(php_cli_server_chunk) + len) <= 40) ? _emalloc_40() : (((sizeof(php_cli_server_chunk) + len) <= 48) ? _emalloc_48() : (((sizeof(php_cli_server_chunk) + len) <= 56) ? _emalloc_56() : (((sizeof(php_cli_server_chunk) + len) <= 64) ? _emalloc_64() : (((sizeof(php_cli_server_chunk) + len) <= 80) ? _emalloc_80() : (((sizeof(php_cli_server_chunk) + len) <= 96) ? _emalloc_96() : (((sizeof(php_cli_server_chunk) + len) <= 112) ? _emalloc_112() : (((sizeof(php_cli_server_chunk) + len) <= 128) ? _emalloc_128() : (((sizeof(php_cli_server_chunk) + len) <= 160) ? _emalloc_160() : (((sizeof(php_cli_server_chunk) + len) <= 192) ? _emalloc_192() : (((sizeof(php_cli_server_chunk) + len) <= 224) ? _emalloc_224() : (((sizeof(php_cli_server_chunk) + len) <= 256) ? _emalloc_256() : (((sizeof(php_cli_server_chunk) + len) <= 320) ? _emalloc_320() : (((sizeof(php_cli_server_chunk) + len) <= 384) ? _emalloc_384() : (((sizeof(php_cli_server_chunk) + len) <= 448) ? _emalloc_448() : (((sizeof(php_cli_server_chunk) + len) <= 512) ? _emalloc_512() : (((sizeof(php_cli_server_chunk) + len) <= 640) ? _emalloc_640() : (((sizeof(php_cli_server_chunk) + len) <= 768) ? _emalloc_768() : (((sizeof(php_cli_server_chunk) + len) <= 896) ? _emalloc_896() : (((sizeof(php_cli_server_chunk) + len) <= 1024) ? _emalloc_1024() : (((sizeof(php_cli_server_chunk) + len) <= 1280) ? _emalloc_1280() : (((sizeof(php_cli_server_chunk) + len) <= 1536) ? _emalloc_1536() : (((sizeof(php_cli_server_chunk) + len) <= 1792) ? _emalloc_1792() : (((sizeof(php_cli_server_chunk) + len) <= 2048) ? _emalloc_2048() : (((sizeof(php_cli_server_chunk) + len) <= 2560) ? _emalloc_2560() : (((sizeof(php_cli_server_chunk) + len) <= 3072) ? _emalloc_3072() : (((sizeof(php_cli_server_chunk) + len) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(php_cli_server_chunk) + len)) : _emalloc_huge((sizeof(php_cli_server_chunk) + len))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(php_cli_server_chunk) + len) ) ));
 if (!chunk) {
  return ((void *)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_HEAP;
 chunk->next = ((void *)0);
 chunk->data.heap.block = chunk;
 chunk->data.heap.p = (char *)(chunk + 1);
 chunk->data.heap.len = len;
 return chunk;
}

static void php_cli_server_content_sender_dtor(php_cli_server_content_sender *sender)
{
 php_cli_server_buffer_dtor(&sender->buffer);
}

static void php_cli_server_content_sender_ctor(php_cli_server_content_sender *sender)
{
 php_cli_server_buffer_ctor(&sender->buffer);
}

static int php_cli_server_content_sender_send(php_cli_server_content_sender *sender, php_socket_t fd, size_t *nbytes_sent_total)
{
 php_cli_server_chunk *chunk, *next;
 size_t _nbytes_sent_total = 0;

 for (chunk = sender->buffer.first; chunk; chunk = next) {



  ssize_t nbytes_sent;

  next = chunk->next;

  switch (chunk->type) {
  case PHP_CLI_SERVER_CHUNK_HEAP:



   nbytes_sent = send(fd, chunk->data.heap.p, chunk->data.heap.len, 0);

   if (nbytes_sent < 0) {
    *nbytes_sent_total = _nbytes_sent_total;
    return (*__errno_location ());
   } else if (nbytes_sent == chunk->data.heap.len) {
    php_cli_server_chunk_dtor(chunk);
    ((1)?free(chunk):_efree((chunk) ));
    sender->buffer.first = next;
    if (!next) {
     sender->buffer.last = ((void *)0);
    }
   } else {
    chunk->data.heap.p += nbytes_sent;
    chunk->data.heap.len -= nbytes_sent;
   }
   _nbytes_sent_total += nbytes_sent;
   break;

  case PHP_CLI_SERVER_CHUNK_IMMORTAL:



   nbytes_sent = send(fd, chunk->data.immortal.p, chunk->data.immortal.len, 0);

   if (nbytes_sent < 0) {
    *nbytes_sent_total = _nbytes_sent_total;
    return (*__errno_location ());
   } else if (nbytes_sent == chunk->data.immortal.len) {
    php_cli_server_chunk_dtor(chunk);
    ((1)?free(chunk):_efree((chunk) ));
    sender->buffer.first = next;
    if (!next) {
     sender->buffer.last = ((void *)0);
    }
   } else {
    chunk->data.immortal.p += nbytes_sent;
    chunk->data.immortal.len -= nbytes_sent;
   }
   _nbytes_sent_total += nbytes_sent;
   break;
  }
 }
 *nbytes_sent_total = _nbytes_sent_total;
 return 0;
}

static int php_cli_server_content_sender_pull(php_cli_server_content_sender *sender, int fd, size_t *nbytes_read)
{



 ssize_t _nbytes_read;

 php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(131072);




 _nbytes_read = read(fd, chunk->data.heap.p, chunk->data.heap.len);

 if (_nbytes_read < 0) {
  char *errstr = get_last_error();
  php_cli_server_logf("%s", errstr);
  ((1)?free(errstr):_efree((errstr) ));
  php_cli_server_chunk_dtor(chunk);
  ((1)?free(chunk):_efree((chunk) ));
  return 1;
 }
 chunk->data.heap.len = _nbytes_read;
 php_cli_server_buffer_append(&sender->buffer, chunk);
 *nbytes_read = _nbytes_read;
 return 0;
}


static int php_cli_is_output_tty()
{
 if (php_cli_output_is_tty == -1) {
  php_cli_output_is_tty = isatty(1);
 }
 return php_cli_output_is_tty;
}


static void php_cli_server_log_response(php_cli_server_client *client, int status, const char *message)
{
 int color = 0, effective_status = status;
 char *basic_buf, *message_buf = "", *error_buf = "";
 zend_bool append_error_message = 0;

 if ((core_globals.last_error_message)) {
  switch ((core_globals.last_error_type)) {
   case (1<<0L):
   case (1<<4L):
   case (1<<6L):
   case (1<<8L):
   case (1<<2L):
    if (status == 200) {

     effective_status = 500;
    }

    append_error_message = 1;
    break;
  }
 }


 if ((cli_server_globals.color) && php_cli_is_output_tty() == 1) {
  if (effective_status >= 500) {

   color = 1;
  } else if (effective_status >= 400) {

   color = 3;
  } else if (effective_status >= 200) {

   color = 2;
  }
 }



 spprintf(&basic_buf, 0, "%s [%d]: %s", client->addr_str, status, client->request.request_uri);
 if (!basic_buf) {
  return;
 }


 if (message) {
  spprintf(&message_buf, 0, " - %s", message);
  if (!message_buf) {
   _efree((basic_buf) );
   return;
  }
 }


 if (append_error_message) {
  spprintf(&error_buf, 0, " - %s in %s on line %d", (core_globals.last_error_message), (core_globals.last_error_file), (core_globals.last_error_lineno));
  if (!error_buf) {
   _efree((basic_buf) );
   if (message) {
    _efree((message_buf) );
   }
   return;
  }
 }

 if (color) {
  php_cli_server_logf("\x1b[3%dm%s%s%s\x1b[0m", color, basic_buf, message_buf, error_buf);
 } else {
  php_cli_server_logf("%s%s%s", basic_buf, message_buf, error_buf);
 }

 _efree((basic_buf) );
 if (message) {
  _efree((message_buf) );
 }
 if (append_error_message) {
  _efree((error_buf) );
 }
}

static void php_cli_server_logf(const char *format, ...)
{
 char *buf = ((void *)0);
 va_list ap;

 __builtin_va_start(ap,format);
 vspprintf(&buf, 0, format, ap);
 __builtin_va_end(ap);

 if (!buf) {
  return;
 }

 if (sapi_module.log_message) {
  sapi_module.log_message(buf);
 }

 _efree((buf) );
}

static php_socket_t php_network_listen_socket(const char *host, int *port, int socktype, int *af, socklen_t *socklen, zend_string **errstr)
{
 php_socket_t retval = -1;
 int err = 0;
 struct sockaddr *sa = ((void *)0), **p, **sal;

 int num_addrs = php_network_getaddresses(host, socktype, &sal, errstr);
 if (num_addrs == 0) {
  return -1;
 }
 for (p = sal; *p; p++) {
  if (sa) {
   ((1)?free(sa):_efree((sa) ));
   sa = ((void *)0);
  }

  retval = socket((*p)->sa_family, socktype, 0);
  if (retval == -1) {
   continue;
  }

  switch ((*p)->sa_family) {

  case 10:
   sa = ((1)?__zend_malloc(sizeof(struct sockaddr_in6)):(__builtin_constant_p((sizeof(struct sockaddr_in6)) ) ? (((sizeof(struct sockaddr_in6)) <= 8) ? _emalloc_8() : (((sizeof(struct sockaddr_in6)) <= 16) ? _emalloc_16() : (((sizeof(struct sockaddr_in6)) <= 24) ? _emalloc_24() : (((sizeof(struct sockaddr_in6)) <= 32) ? _emalloc_32() : (((sizeof(struct sockaddr_in6)) <= 40) ? _emalloc_40() : (((sizeof(struct sockaddr_in6)) <= 48) ? _emalloc_48() : (((sizeof(struct sockaddr_in6)) <= 56) ? _emalloc_56() : (((sizeof(struct sockaddr_in6)) <= 64) ? _emalloc_64() : (((sizeof(struct sockaddr_in6)) <= 80) ? _emalloc_80() : (((sizeof(struct sockaddr_in6)) <= 96) ? _emalloc_96() : (((sizeof(struct sockaddr_in6)) <= 112) ? _emalloc_112() : (((sizeof(struct sockaddr_in6)) <= 128) ? _emalloc_128() : (((sizeof(struct sockaddr_in6)) <= 160) ? _emalloc_160() : (((sizeof(struct sockaddr_in6)) <= 192) ? _emalloc_192() : (((sizeof(struct sockaddr_in6)) <= 224) ? _emalloc_224() : (((sizeof(struct sockaddr_in6)) <= 256) ? _emalloc_256() : (((sizeof(struct sockaddr_in6)) <= 320) ? _emalloc_320() : (((sizeof(struct sockaddr_in6)) <= 384) ? _emalloc_384() : (((sizeof(struct sockaddr_in6)) <= 448) ? _emalloc_448() : (((sizeof(struct sockaddr_in6)) <= 512) ? _emalloc_512() : (((sizeof(struct sockaddr_in6)) <= 640) ? _emalloc_640() : (((sizeof(struct sockaddr_in6)) <= 768) ? _emalloc_768() : (((sizeof(struct sockaddr_in6)) <= 896) ? _emalloc_896() : (((sizeof(struct sockaddr_in6)) <= 1024) ? _emalloc_1024() : (((sizeof(struct sockaddr_in6)) <= 1280) ? _emalloc_1280() : (((sizeof(struct sockaddr_in6)) <= 1536) ? _emalloc_1536() : (((sizeof(struct sockaddr_in6)) <= 1792) ? _emalloc_1792() : (((sizeof(struct sockaddr_in6)) <= 2048) ? _emalloc_2048() : (((sizeof(struct sockaddr_in6)) <= 2560) ? _emalloc_2560() : (((sizeof(struct sockaddr_in6)) <= 3072) ? _emalloc_3072() : (((sizeof(struct sockaddr_in6)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(struct sockaddr_in6))) : _emalloc_huge((sizeof(struct sockaddr_in6)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(struct sockaddr_in6)) ) ));
   if (!sa) {
    close(retval);
    retval = -1;
    *errstr = ((void *)0);
    goto out;
   }
   *(struct sockaddr_in6 *)sa = *(struct sockaddr_in6 *)*p;
   ((struct sockaddr_in6 *)sa)->sin6_port = htons(*port);
   *socklen = sizeof(struct sockaddr_in6);
   break;

  case 2:
   sa = ((1)?__zend_malloc(sizeof(struct sockaddr_in)):(__builtin_constant_p((sizeof(struct sockaddr_in)) ) ? (((sizeof(struct sockaddr_in)) <= 8) ? _emalloc_8() : (((sizeof(struct sockaddr_in)) <= 16) ? _emalloc_16() : (((sizeof(struct sockaddr_in)) <= 24) ? _emalloc_24() : (((sizeof(struct sockaddr_in)) <= 32) ? _emalloc_32() : (((sizeof(struct sockaddr_in)) <= 40) ? _emalloc_40() : (((sizeof(struct sockaddr_in)) <= 48) ? _emalloc_48() : (((sizeof(struct sockaddr_in)) <= 56) ? _emalloc_56() : (((sizeof(struct sockaddr_in)) <= 64) ? _emalloc_64() : (((sizeof(struct sockaddr_in)) <= 80) ? _emalloc_80() : (((sizeof(struct sockaddr_in)) <= 96) ? _emalloc_96() : (((sizeof(struct sockaddr_in)) <= 112) ? _emalloc_112() : (((sizeof(struct sockaddr_in)) <= 128) ? _emalloc_128() : (((sizeof(struct sockaddr_in)) <= 160) ? _emalloc_160() : (((sizeof(struct sockaddr_in)) <= 192) ? _emalloc_192() : (((sizeof(struct sockaddr_in)) <= 224) ? _emalloc_224() : (((sizeof(struct sockaddr_in)) <= 256) ? _emalloc_256() : (((sizeof(struct sockaddr_in)) <= 320) ? _emalloc_320() : (((sizeof(struct sockaddr_in)) <= 384) ? _emalloc_384() : (((sizeof(struct sockaddr_in)) <= 448) ? _emalloc_448() : (((sizeof(struct sockaddr_in)) <= 512) ? _emalloc_512() : (((sizeof(struct sockaddr_in)) <= 640) ? _emalloc_640() : (((sizeof(struct sockaddr_in)) <= 768) ? _emalloc_768() : (((sizeof(struct sockaddr_in)) <= 896) ? _emalloc_896() : (((sizeof(struct sockaddr_in)) <= 1024) ? _emalloc_1024() : (((sizeof(struct sockaddr_in)) <= 1280) ? _emalloc_1280() : (((sizeof(struct sockaddr_in)) <= 1536) ? _emalloc_1536() : (((sizeof(struct sockaddr_in)) <= 1792) ? _emalloc_1792() : (((sizeof(struct sockaddr_in)) <= 2048) ? _emalloc_2048() : (((sizeof(struct sockaddr_in)) <= 2560) ? _emalloc_2560() : (((sizeof(struct sockaddr_in)) <= 3072) ? _emalloc_3072() : (((sizeof(struct sockaddr_in)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(struct sockaddr_in))) : _emalloc_huge((sizeof(struct sockaddr_in)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(struct sockaddr_in)) ) ));
   if (!sa) {
    close(retval);
    retval = -1;
    *errstr = ((void *)0);
    goto out;
   }
   *(struct sockaddr_in *)sa = *(struct sockaddr_in *)*p;
   ((struct sockaddr_in *)sa)->sin_port = htons(*port);
   *socklen = sizeof(struct sockaddr_in);
   break;
  default:

   *socklen = 0;
   close(retval);
   continue;
  }


  {
   int val = 1;
   setsockopt(retval, 1, 2, (char*)&val, sizeof(val));
  }


  if (bind(retval, sa, *socklen) == -1) {
   err = (*__errno_location ());
   if (err == 22 || err == 98) {
    goto out;
   }
   close(retval);
   retval = -1;
   continue;
  }
  err = 0;

  *af = sa->sa_family;
  if (*port == 0) {
   if (getsockname(retval, sa, socklen)) {
    err = (*__errno_location ());
    goto out;
   }
   switch (sa->sa_family) {

   case 10:
    *port = ntohs(((struct sockaddr_in6 *)sa)->sin6_port);
    break;

   case 2:
    *port = ntohs(((struct sockaddr_in *)sa)->sin_port);
    break;
   }
  }

  break;
 }

 if (retval == -1) {
  goto out;
 }

 if (listen(retval, 128)) {
  err = (*__errno_location ());
  goto out;
 }

out:
 if (sa) {
  ((1)?free(sa):_efree((sa) ));
 }
 if (sal) {
  php_network_freeaddresses(sal);
 }
 if (err) {
  if (((retval) >= 0)) {
   close(retval);
  }
  if (errstr) {
   *errstr = php_socket_error_str(err);
  }
  return -1;
 }
 return retval;
}

static int php_cli_server_request_ctor(php_cli_server_request *req)
{



 req->protocol_version = 0;
 req->request_uri = ((void *)0);
 req->request_uri_len = 0;
 req->vpath = ((void *)0);
 req->vpath_len = 0;
 req->path_translated = ((void *)0);
 req->path_translated_len = 0;
 req->path_info = ((void *)0);
 req->path_info_len = 0;
 req->query_string = ((void *)0);
 req->query_string_len = 0;
 _zend_hash_init((&req->headers), (0), (char_ptr_dtor_p), (1) );
 _zend_hash_init((&req->headers_original_case), (0), (((void *)0)), (1) );
 req->content = ((void *)0);
 req->content_len = 0;
 req->ext = ((void *)0);
 req->ext_len = 0;
 return SUCCESS;
}

static void php_cli_server_request_dtor(php_cli_server_request *req)
{
 if (req->request_uri) {
  ((1)?free(req->request_uri):_efree((req->request_uri) ));
 }
 if (req->vpath) {
  ((1)?free(req->vpath):_efree((req->vpath) ));
 }
 if (req->path_translated) {
  ((1)?free(req->path_translated):_efree((req->path_translated) ));
 }
 if (req->path_info) {
  ((1)?free(req->path_info):_efree((req->path_info) ));
 }
 if (req->query_string) {
  ((1)?free(req->query_string):_efree((req->query_string) ));
 }
 zend_hash_destroy(&req->headers);
 zend_hash_destroy(&req->headers_original_case);
 if (req->content) {
  ((1)?free(req->content):_efree((req->content) ));
 }
}

static void php_cli_server_request_translate_vpath(php_cli_server_request *request, const char *document_root, size_t document_root_len)
{
 zend_stat_t sb;
 static const char *index_files[] = { "index.php", "index.html", ((void *)0) };
 char *buf = ((1)?_safe_malloc(1, request->vpath_len, 1 + document_root_len + 1 + sizeof("index.html")):_safe_emalloc((1), (request->vpath_len), (1 + document_root_len + 1 + sizeof("index.html")) ));
 char *p = buf, *prev_path = ((void *)0), *q, *vpath;
 size_t prev_path_len = 0;
 int is_static_file = 0;

 if (!buf) {
  return;
 }

 memmove(p, document_root, document_root_len);
 p += document_root_len;
 vpath = p;
 if (request->vpath_len > 0 && request->vpath[0] != '/') {
  *p++ = '/';
 }
 q = request->vpath + request->vpath_len;
 while (q > request->vpath) {
  if (*q-- == '.') {
   is_static_file = 1;
   break;
  }
 }
 memmove(p, request->vpath, request->vpath_len);
# 1381 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
 p += request->vpath_len;
 *p = '\0';
 q = p;
 while (q > buf) {
  if (!stat(buf, &sb)) {
   if (sb.st_mode & 0040000) {
    const char **file = index_files;
    if (q[-1] != '/') {
     *q++ = '/';
    }
    while (*file) {
     size_t l = strlen(*file);
     memmove(q, *file, l + 1);
     if (!stat(buf, &sb) && (sb.st_mode & 0100000)) {
      q += l;
      break;
     }
     file++;
    }
    if (!*file || is_static_file) {
     if (prev_path) {
      ((1)?free(prev_path):_efree((prev_path) ));
     }
     ((1)?free(buf):_efree((buf) ));
     return;
    }
   }
   break;
  }
  if (prev_path) {
   ((1)?free(prev_path):_efree((prev_path) ));
   *q = '/';
  }
  while (q > buf && *(--q) != '/');
  prev_path_len = p - q;
  prev_path = ((1)?zend_strndup((q),(prev_path_len)):_estrndup(((q)), ((prev_path_len)) ));
  *q = '\0';
 }
 if (prev_path) {
  request->path_info_len = prev_path_len;







  request->path_info = prev_path;
  ((1)?free(request->vpath):_efree((request->vpath) ));
  request->vpath = ((1)?zend_strndup((vpath),(q - vpath)):_estrndup(((vpath)), ((q - vpath)) ));
  request->vpath_len = q - vpath;
  request->path_translated = buf;
  request->path_translated_len = q - buf;
 } else {
  ((1)?free(request->vpath):_efree((request->vpath) ));
  request->vpath = ((1)?zend_strndup((vpath),(q - vpath)):_estrndup(((vpath)), ((q - vpath)) ));
  request->vpath_len = q - vpath;
  request->path_translated = buf;
  request->path_translated_len = q - buf;
 }
# 1451 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
 request->sb = sb;
}

static void normalize_vpath(char **retval, size_t *retval_len, const char *vpath, size_t vpath_len, int persistent)
{
 char *decoded_vpath = ((void *)0);
 char *decoded_vpath_end;
 char *p;

 *retval = ((void *)0);

 decoded_vpath = ((persistent)?zend_strndup((vpath),(vpath_len)):_estrndup(((vpath)), ((vpath_len)) ));
 if (!decoded_vpath) {
  return;
 }

 decoded_vpath_end = decoded_vpath + php_raw_url_decode(decoded_vpath, (int)vpath_len);
# 1481 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
 p = decoded_vpath;

 if (p < decoded_vpath_end && *p == '/') {
  char *n = p;
  while (n < decoded_vpath_end && *n == '/') n++;
  memmove(++p, n, decoded_vpath_end - n);
  decoded_vpath_end -= n - p;
 }

 while (p < decoded_vpath_end) {
  char *n = p;
  while (n < decoded_vpath_end && *n != '/') n++;
  if (n - p == 2 && p[0] == '.' && p[1] == '.') {
   if (p > decoded_vpath) {
    --p;
    for (;;) {
     if (p == decoded_vpath) {
      if (*p == '/') {
       p++;
      }
      break;
     }
     if (*(--p) == '/') {
      p++;
      break;
     }
    }
   }
   while (n < decoded_vpath_end && *n == '/') n++;
   memmove(p, n, decoded_vpath_end - n);
   decoded_vpath_end -= n - p;
  } else if (n - p == 1 && p[0] == '.') {
   while (n < decoded_vpath_end && *n == '/') n++;
   memmove(p, n, decoded_vpath_end - n);
   decoded_vpath_end -= n - p;
  } else {
   if (n < decoded_vpath_end) {
    char *nn = n;
    while (nn < decoded_vpath_end && *nn == '/') nn++;
    p = n + 1;
    memmove(p, nn, decoded_vpath_end - nn);
    decoded_vpath_end -= nn - p;
   } else {
    p = n;
   }
  }
 }

 *decoded_vpath_end = '\0';
 *retval = decoded_vpath;
 *retval_len = decoded_vpath_end - decoded_vpath;
}


static int php_cli_server_client_read_request_on_message_begin(php_http_parser *parser)
{
 return 0;
}

static int php_cli_server_client_read_request_on_path(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 {
  char *vpath;
  size_t vpath_len;
  normalize_vpath(&vpath, &vpath_len, at, length, 1);
  client->request.vpath = vpath;
  client->request.vpath_len = vpath_len;
 }
 return 0;
}

static int php_cli_server_client_read_request_on_query_string(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 client->request.query_string = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 client->request.query_string_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_url(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 client->request.request_method = parser->method;
 client->request.request_uri = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 client->request.request_uri_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_fragment(php_http_parser *parser, const char *at, size_t length)
{
 return 0;
}

static int php_cli_server_client_read_request_on_header_field(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 client->current_header_name = (char *)at;
 client->current_header_name_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_header_value(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 char *value = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 if (!value) {
  return 1;
 }
 {

  zend_string *orig_header_name = zend_string_init(client->current_header_name, client->current_header_name_len, 1);
  char *lc_header_name = zend_str_tolower_dup(client->current_header_name, client->current_header_name_len);
  zend_hash_str_add_ptr(&client->request.headers, lc_header_name, client->current_header_name_len, value);
  zend_hash_add_ptr(&client->request.headers_original_case, orig_header_name, value);
  _efree((lc_header_name) );
  zend_string_release(orig_header_name);
 }

 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 return 0;
}

static int php_cli_server_client_read_request_on_headers_complete(php_http_parser *parser)
{
 php_cli_server_client *client = parser->data;
 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 client->current_header_name = ((void *)0);
 return 0;
}

static int php_cli_server_client_read_request_on_body(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 if (!client->request.content) {
  client->request.content = ((1)?__zend_malloc(parser->content_length):(__builtin_constant_p((parser->content_length) ) ? (((parser->content_length) <= 8) ? _emalloc_8() : (((parser->content_length) <= 16) ? _emalloc_16() : (((parser->content_length) <= 24) ? _emalloc_24() : (((parser->content_length) <= 32) ? _emalloc_32() : (((parser->content_length) <= 40) ? _emalloc_40() : (((parser->content_length) <= 48) ? _emalloc_48() : (((parser->content_length) <= 56) ? _emalloc_56() : (((parser->content_length) <= 64) ? _emalloc_64() : (((parser->content_length) <= 80) ? _emalloc_80() : (((parser->content_length) <= 96) ? _emalloc_96() : (((parser->content_length) <= 112) ? _emalloc_112() : (((parser->content_length) <= 128) ? _emalloc_128() : (((parser->content_length) <= 160) ? _emalloc_160() : (((parser->content_length) <= 192) ? _emalloc_192() : (((parser->content_length) <= 224) ? _emalloc_224() : (((parser->content_length) <= 256) ? _emalloc_256() : (((parser->content_length) <= 320) ? _emalloc_320() : (((parser->content_length) <= 384) ? _emalloc_384() : (((parser->content_length) <= 448) ? _emalloc_448() : (((parser->content_length) <= 512) ? _emalloc_512() : (((parser->content_length) <= 640) ? _emalloc_640() : (((parser->content_length) <= 768) ? _emalloc_768() : (((parser->content_length) <= 896) ? _emalloc_896() : (((parser->content_length) <= 1024) ? _emalloc_1024() : (((parser->content_length) <= 1280) ? _emalloc_1280() : (((parser->content_length) <= 1536) ? _emalloc_1536() : (((parser->content_length) <= 1792) ? _emalloc_1792() : (((parser->content_length) <= 2048) ? _emalloc_2048() : (((parser->content_length) <= 2560) ? _emalloc_2560() : (((parser->content_length) <= 3072) ? _emalloc_3072() : (((parser->content_length) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((parser->content_length)) : _emalloc_huge((parser->content_length))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((parser->content_length) ) ));
  if (!client->request.content) {
   return -1;
  }
  client->request.content_len = 0;
 }
 client->request.content = ((1)?__zend_realloc((client->request.content), (client->request.content_len + length)):_erealloc(((client->request.content)), ((client->request.content_len + length)) ));
 memmove(client->request.content + client->request.content_len, at, length);
 client->request.content_len += length;
 return 0;
}

static int php_cli_server_client_read_request_on_message_complete(php_http_parser *parser)
{
 php_cli_server_client *client = parser->data;
 client->request.protocol_version = parser->http_major * 100 + parser->http_minor;
 php_cli_server_request_translate_vpath(&client->request, client->server->document_root, client->server->document_root_len);
 {
  const char *vpath = client->request.vpath, *end = vpath + client->request.vpath_len, *p = end;
  client->request.ext = end;
  client->request.ext_len = 0;
  while (p > vpath) {
   --p;
   if (*p == '.') {
    ++p;
    client->request.ext = p;
    client->request.ext_len = end - p;
    break;
   }
  }
 }
 client->request_read = 1;
 return 0;
}

static int php_cli_server_client_read_request(php_cli_server_client *client, char **errstr)
{
 char buf[16384];
 static const php_http_parser_settings settings = {
  php_cli_server_client_read_request_on_message_begin,
  php_cli_server_client_read_request_on_path,
  php_cli_server_client_read_request_on_query_string,
  php_cli_server_client_read_request_on_url,
  php_cli_server_client_read_request_on_fragment,
  php_cli_server_client_read_request_on_header_field,
  php_cli_server_client_read_request_on_header_value,
  php_cli_server_client_read_request_on_headers_complete,
  php_cli_server_client_read_request_on_body,
  php_cli_server_client_read_request_on_message_complete
 };
 size_t nbytes_consumed;
 int nbytes_read;
 if (client->request_read) {
  return 1;
 }
 nbytes_read = recv(client->sock, buf, sizeof(buf) - 1, 0);
 if (nbytes_read < 0) {
  int err = (*__errno_location ());
  if (err == 11) {
   return 0;
  }
  *errstr = php_socket_strerror(err, ((void *)0), 0);
  return -1;
 } else if (nbytes_read == 0) {
  *errstr = _estrdup(("Unexpected EOF") );
  return -1;
 }
 client->parser.data = client;
 nbytes_consumed = php_http_parser_execute(&client->parser, &settings, buf, nbytes_read);
 if (nbytes_consumed != nbytes_read) {
  if (buf[0] & 0x80 || buf[0] == 0x16 ) {
   *errstr = _estrdup(("Unsupported SSL request") );
  } else {
   *errstr = _estrdup(("Malformed HTTP request") );
  }
  return -1;
 }
 if (client->current_header_name) {
  char *header_name = ((1)?_safe_malloc(client->current_header_name_len, 1, 1):_safe_emalloc((client->current_header_name_len), (1), (1) ));
  if (!header_name) {
   return -1;
  }
  memmove(header_name, client->current_header_name, client->current_header_name_len);
  client->current_header_name = header_name;
  client->current_header_name_allocated = 1;
 }
 return client->request_read ? 1: 0;
}


static size_t php_cli_server_client_send_through(php_cli_server_client *client, const char *str, size_t str_len)
{
 struct timeval tv = { 10, 0 };



 ssize_t nbytes_left = (ssize_t)str_len;

 do {



  ssize_t nbytes_sent;


  nbytes_sent = send(client->sock, str + str_len - nbytes_left, nbytes_left, 0);
  if (nbytes_sent < 0) {
   int err = (*__errno_location ());
   if (err == 11) {
    int nfds = php_pollfd_for(client->sock, 0x004, &tv);
    if (nfds > 0) {
     continue;
    } else if (nfds < 0) {

     php_handle_aborted_connection();
     return nbytes_left;
    } else {

     php_handle_aborted_connection();
     return nbytes_left;
    }
   } else {
    php_handle_aborted_connection();
    return nbytes_left;
   }
  }
  nbytes_left -= nbytes_sent;
 } while (nbytes_left > 0);

 return str_len;
}

static void php_cli_server_client_populate_request_info(const php_cli_server_client *client, sapi_request_info *request_info)
{
 char *val;

 request_info->request_method = php_http_method_str(client->request.request_method);
 request_info->proto_num = client->request.protocol_version;
 request_info->request_uri = client->request.request_uri;
 request_info->path_translated = client->request.path_translated;
 request_info->query_string = client->request.query_string;
 request_info->content_length = client->request.content_len;
 request_info->auth_user = request_info->auth_password = request_info->auth_digest = ((void *)0);
 if (((void *)0) != (val = zend_hash_str_find_ptr(&client->request.headers, "content-type", sizeof("content-type")-1))) {
  request_info->content_type = val;
 }
}

static void destroy_request_info(sapi_request_info *request_info)
{
}

static int php_cli_server_client_ctor(php_cli_server_client *client, php_cli_server *server, php_socket_t client_sock, struct sockaddr *addr, socklen_t addr_len)
{
 client->server = server;
 client->sock = client_sock;
 client->addr = addr;
 client->addr_len = addr_len;
 {
  zend_string *addr_str = 0;

  php_network_populate_name_from_sockaddr(addr, addr_len, &addr_str, ((void *)0), 0);
  client->addr_str = ((1)?zend_strndup(((addr_str)->val),((addr_str)->len)):_estrndup((((addr_str)->val)), (((addr_str)->len)) ));
  client->addr_str_len = (addr_str)->len;
  zend_string_release(addr_str);
 }
 php_http_parser_init(&client->parser, PHP_HTTP_REQUEST);
 client->request_read = 0;
 client->current_header_name = ((void *)0);
 client->current_header_name_len = 0;
 client->current_header_name_allocated = 0;
 client->post_read_offset = 0;
 if (FAILURE == php_cli_server_request_ctor(&client->request)) {
  return FAILURE;
 }
 client->content_sender_initialized = 0;
 client->file_fd = -1;
 return SUCCESS;
}

static void php_cli_server_client_dtor(php_cli_server_client *client)
{
 php_cli_server_request_dtor(&client->request);
 if (client->file_fd >= 0) {
  close(client->file_fd);
  client->file_fd = -1;
 }
 ((1)?free(client->addr):_efree((client->addr) ));
 ((1)?free(client->addr_str):_efree((client->addr_str) ));
 if (client->content_sender_initialized) {
  php_cli_server_content_sender_dtor(&client->content_sender);
 }
}

static void php_cli_server_close_connection(php_cli_server *server, php_cli_server_client *client)
{



 zend_hash_index_del(&server->clients, client->sock);
}

static int php_cli_server_send_error_page(php_cli_server *server, php_cli_server_client *client, int status)
{
 zend_string *escaped_request_uri = ((void *)0);
 const char *status_string = get_status_string(status);
 const char *content_template = get_template_string(status);
 char *errstr = get_last_error();
 ((void) (0));

 php_cli_server_content_sender_ctor(&client->content_sender);
 client->content_sender_initialized = 1;

 escaped_request_uri = php_escape_html_entities_ex((unsigned char *)client->request.request_uri, client->request.request_uri_len, 0, (2 | 1), ((void *)0), 0);

 {
  static const char prologue_template[] = "<!doctype html><html><head><title>%d %s</title>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(strlen(prologue_template) + 3 + strlen(status_string) + 1);
  if (!chunk) {
   goto fail;
  }
  ap_php_snprintf(chunk->data.heap.p, chunk->data.heap.len, prologue_template, status, status_string, (escaped_request_uri)->val);
  chunk->data.heap.len = strlen(chunk->data.heap.p);
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(php_cli_server_css, sizeof(php_cli_server_css) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  static const char template[] = "</head><body>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(template, sizeof(template) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(strlen(content_template) + (escaped_request_uri)->len + 3 + strlen(status_string) + 1);
  if (!chunk) {
   goto fail;
  }
  ap_php_snprintf(chunk->data.heap.p, chunk->data.heap.len, content_template, status_string, (escaped_request_uri)->val);
  chunk->data.heap.len = strlen(chunk->data.heap.p);
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  static const char epilogue_template[] = "</body></html>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(epilogue_template, sizeof(epilogue_template) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }

 {
  php_cli_server_chunk *chunk;
  smart_str buffer = { 0 };
  append_http_status_line(&buffer, client->request.protocol_version, status, 1);
  if (!buffer.s) {

   goto fail;
  }
  append_essential_headers(&buffer, client, 1);
  smart_str_appendl_ex((&buffer), ("Content-Type: text/html; charset=UTF-8\r\n"), strlen("Content-Type: text/html; charset=UTF-8\r\n"), (1));
  smart_str_appendl_ex((&buffer), ("Content-Length: "), strlen("Content-Length: "), (1));
  smart_str_append_unsigned_ex(&buffer, php_cli_server_buffer_size(&client->content_sender.buffer), 1);
  smart_str_appendl_ex(&buffer, "\r\n", 2, 1);
  smart_str_appendl_ex(&buffer, "\r\n", 2, 1);

  chunk = php_cli_server_chunk_heap_new(buffer.s, (buffer.s)->val, (buffer.s)->len);
  if (!chunk) {
   smart_str_free(&buffer);
   goto fail;
  }
  php_cli_server_buffer_prepend(&client->content_sender.buffer, chunk);
 }

 php_cli_server_log_response(client, status, errstr ? errstr : "?");
 php_cli_server_poller_add(&server->poller, 0x004, client->sock);
 if (errstr) {
  ((1)?free(errstr):_efree((errstr) ));
 }
 zend_string_free(escaped_request_uri);
 return SUCCESS;

fail:
 if (errstr) {
  ((1)?free(errstr):_efree((errstr) ));
 }
 zend_string_free(escaped_request_uri);
 return FAILURE;
}

static int php_cli_server_dispatch_script(php_cli_server *server, php_cli_server_client *client)
{
 if (strlen(client->request.path_translated) != client->request.path_translated_len) {

  return php_cli_server_send_error_page(server, client, 400);
 }
 {
  zend_file_handle zfd;
  zfd.type = ZEND_HANDLE_FILENAME;
  zfd.filename = (sapi_globals.request_info).path_translated;
  zfd.handle.fp = ((void *)0);
  zfd.free_filename = 0;
  zfd.opened_path = ((void *)0);
  { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
   php_execute_script(&zfd);
  } } (executor_globals.bailout) = __orig_bailout; };
 }

 php_cli_server_log_response(client, (sapi_globals.sapi_headers).http_response_code, ((void *)0));
 return SUCCESS;
}

static int php_cli_server_begin_send_static(php_cli_server *server, php_cli_server_client *client)
{
 int fd;
 int status = 200;

 if (client->request.path_translated && strlen(client->request.path_translated) != client->request.path_translated_len) {

  return php_cli_server_send_error_page(server, client, 400);
 }
# 1968 "/home/ct584/git/bughunter/repositories/php-src/sapi/cli/php_cli_server.c"
 fd = client->request.path_translated ? open(client->request.path_translated, 00): -1;
 if (fd < 0) {
  return php_cli_server_send_error_page(server, client, 404);
 }

 php_cli_server_content_sender_ctor(&client->content_sender);
 client->content_sender_initialized = 1;
 client->file_fd = fd;

 {
  php_cli_server_chunk *chunk;
  smart_str buffer = { 0 };
  const char *mime_type = get_mime_type(server, client->request.ext, client->request.ext_len);
  if (!mime_type) {
   mime_type = "application/octet-stream";
  }

  append_http_status_line(&buffer, client->request.protocol_version, status, 1);
  if (!buffer.s) {

   php_cli_server_log_response(client, 500, ((void *)0));
   return FAILURE;
  }
  append_essential_headers(&buffer, client, 1);
  smart_str_appendl_ex(&buffer, "Content-Type: ", sizeof("Content-Type: ") - 1, 1);
  smart_str_appendl_ex((&buffer), (mime_type), strlen(mime_type), (1));
  if (strncmp(mime_type, "text/", 5) == 0) {
   smart_str_appendl_ex((&buffer), ("; charset=UTF-8"), strlen("; charset=UTF-8"), (1));
  }
  smart_str_appendl_ex(&buffer, "\r\n", 2, 1);
  smart_str_appendl_ex((&buffer), ("Content-Length: "), strlen("Content-Length: "), (1));
  smart_str_append_unsigned_ex(&buffer, client->request.sb.st_size, 1);
  smart_str_appendl_ex(&buffer, "\r\n", 2, 1);
  smart_str_appendl_ex(&buffer, "\r\n", 2, 1);
  chunk = php_cli_server_chunk_heap_new(buffer.s, (buffer.s)->val, (buffer.s)->len);
  if (!chunk) {
   smart_str_free(&buffer);
   php_cli_server_log_response(client, 500, ((void *)0));
   return FAILURE;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 php_cli_server_log_response(client, 200, ((void *)0));
 php_cli_server_poller_add(&server->poller, 0x004, client->sock);
 return SUCCESS;
}


static int php_cli_server_request_startup(php_cli_server *server, php_cli_server_client *client) {
 char *auth;
 php_cli_server_client_populate_request_info(client, &(sapi_globals.request_info));
 if (((void *)0) != (auth = zend_hash_str_find_ptr(&client->request.headers, "authorization", sizeof("authorization")-1))) {
  php_handle_auth_data(auth);
 }
 (sapi_globals.sapi_headers).http_response_code = 200;
 if (FAILURE == php_request_startup()) {

  destroy_request_info(&(sapi_globals.request_info));
  return FAILURE;
 }
 (core_globals.during_request_startup) = 0;

 return SUCCESS;
}


static int php_cli_server_request_shutdown(php_cli_server *server, php_cli_server_client *client) {
 php_request_shutdown(0);
 php_cli_server_close_connection(server, client);
 destroy_request_info(&(sapi_globals.request_info));
 (sapi_globals.server_context) = ((void *)0);
 (sapi_globals.rfc1867_uploaded_files) = ((void *)0);
 return SUCCESS;
}


static int php_cli_server_dispatch_router(php_cli_server *server, php_cli_server_client *client)
{
 int decline = 0;
 zend_file_handle zfd;
 char *old_cwd;

 zend_bool use_heap;
 old_cwd = ((use_heap = (__builtin_expect(!!((4096) > ((32 * 1024))), 0))) ? (__builtin_constant_p((4096) ) ? (((4096) <= 8) ? _emalloc_8() : (((4096) <= 16) ? _emalloc_16() : (((4096) <= 24) ? _emalloc_24() : (((4096) <= 32) ? _emalloc_32() : (((4096) <= 40) ? _emalloc_40() : (((4096) <= 48) ? _emalloc_48() : (((4096) <= 56) ? _emalloc_56() : (((4096) <= 64) ? _emalloc_64() : (((4096) <= 80) ? _emalloc_80() : (((4096) <= 96) ? _emalloc_96() : (((4096) <= 112) ? _emalloc_112() : (((4096) <= 128) ? _emalloc_128() : (((4096) <= 160) ? _emalloc_160() : (((4096) <= 192) ? _emalloc_192() : (((4096) <= 224) ? _emalloc_224() : (((4096) <= 256) ? _emalloc_256() : (((4096) <= 320) ? _emalloc_320() : (((4096) <= 384) ? _emalloc_384() : (((4096) <= 448) ? _emalloc_448() : (((4096) <= 512) ? _emalloc_512() : (((4096) <= 640) ? _emalloc_640() : (((4096) <= 768) ? _emalloc_768() : (((4096) <= 896) ? _emalloc_896() : (((4096) <= 1024) ? _emalloc_1024() : (((4096) <= 1280) ? _emalloc_1280() : (((4096) <= 1536) ? _emalloc_1536() : (((4096) <= 1792) ? _emalloc_1792() : (((4096) <= 2048) ? _emalloc_2048() : (((4096) <= 2560) ? _emalloc_2560() : (((4096) <= 3072) ? _emalloc_3072() : (((4096) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((4096)) : _emalloc_huge((4096))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((4096) ) ) : __builtin_alloca (4096));
 old_cwd[0] = '\0';
 (({ __typeof__ (getcwd(old_cwd, 4096 - 1)) __x = (getcwd(old_cwd, 4096 - 1)); (void) __x; }));

 zfd.type = ZEND_HANDLE_FILENAME;
 zfd.filename = server->router;
 zfd.handle.fp = ((void *)0);
 zfd.free_filename = 0;
 zfd.opened_path = ((void *)0);

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  zval retval;

  do { (*(&retval)).u1.type_info = 0; } while (0);
  if (SUCCESS == zend_execute_scripts((1<<3), &retval, 1, &zfd)) {
   if (zval_get_type(&(retval)) != 0) {
    decline = zval_get_type(&(retval)) == 2;
    _zval_ptr_dtor((&retval) );
   }
  } else {
   decline = 1;
  }
 } } (executor_globals.bailout) = __orig_bailout; };

 if (old_cwd[0] != '\0') {
  (({ __typeof__ (chdir(old_cwd)) __x = (chdir(old_cwd)); (void) __x; }));
 }

 do { if (__builtin_expect(!!(use_heap), 0)) _efree((old_cwd) ); } while (0);

 return decline;
}


static int php_cli_server_dispatch(php_cli_server *server, php_cli_server_client *client)
{
 int is_static_file = 0;

 (sapi_globals.server_context) = client;
 if (client->request.ext_len != 3 || memcmp(client->request.ext, "php", 3) || !client->request.path_translated) {
  is_static_file = 1;
 }

 if (server->router || !is_static_file) {
  if (FAILURE == php_cli_server_request_startup(server, client)) {
   (sapi_globals.server_context) = ((void *)0);
   php_cli_server_close_connection(server, client);
   destroy_request_info(&(sapi_globals.request_info));
   return SUCCESS;
  }
 }

 if (server->router) {
  if (!php_cli_server_dispatch_router(server, client)) {
   php_cli_server_request_shutdown(server, client);
   return SUCCESS;
  }
 }

 if (!is_static_file) {
  if (SUCCESS == php_cli_server_dispatch_script(server, client)
    || SUCCESS != php_cli_server_send_error_page(server, client, 500)) {
   if ((sapi_globals.sapi_headers).http_response_code == 304) {
    (sapi_globals.sapi_headers).send_default_content_type = 0;
   }
   php_cli_server_request_shutdown(server, client);
   return SUCCESS;
  }
 } else {
  if (server->router) {
   static int (*send_header_func)(sapi_headers_struct *);
   send_header_func = sapi_module.send_headers;

      (sapi_globals.sapi_headers).send_default_content_type = 0;

   sapi_module.send_headers = sapi_cli_server_discard_headers;
   php_request_shutdown(0);
   sapi_module.send_headers = send_header_func;
      (sapi_globals.sapi_headers).send_default_content_type = 1;
   (sapi_globals.rfc1867_uploaded_files) = ((void *)0);
  }
  if (SUCCESS != php_cli_server_begin_send_static(server, client)) {
   php_cli_server_close_connection(server, client);
  }
  (sapi_globals.server_context) = ((void *)0);
  return SUCCESS;
 }

 (sapi_globals.server_context) = ((void *)0);
 destroy_request_info(&(sapi_globals.request_info));
 return SUCCESS;
}


static int php_cli_server_mime_type_ctor(php_cli_server *server, const php_cli_server_ext_mime_type_pair *mime_type_map)
{
 const php_cli_server_ext_mime_type_pair *pair;

 _zend_hash_init((&server->extension_mime_types), (0), (((void *)0)), (1) );

 for (pair = mime_type_map; pair->ext; pair++) {
  size_t ext_len = 0, mime_type_len = 0;

  ext_len = strlen(pair->ext);
  mime_type_len = strlen(pair->mime_type);

  zend_hash_str_add_mem(&server->extension_mime_types, pair->ext, ext_len, (void*)pair->mime_type, mime_type_len + 1);
 }

 return SUCCESS;
}

static void php_cli_server_dtor(php_cli_server *server)
{
 zend_hash_destroy(&server->clients);
 zend_hash_destroy(&server->extension_mime_types);
 if (((server->server_sock) >= 0)) {
  close(server->server_sock);
 }
 if (server->host) {
  ((1)?free(server->host):_efree((server->host) ));
 }
 if (server->document_root) {
  ((1)?free(server->document_root):_efree((server->document_root) ));
 }
 if (server->router) {
  ((1)?free(server->router):_efree((server->router) ));
 }
}

static void php_cli_server_client_dtor_wrapper(zval *zv)
{
 php_cli_server_client *p = (*(zv)).value.ptr;

 close(p->sock);
 php_cli_server_poller_remove(&p->server->poller, 0x001 | 0x004, p->sock);
 php_cli_server_client_dtor(p);
 ((1)?free(p):_efree((p) ));
}

static int php_cli_server_ctor(php_cli_server *server, const char *addr, const char *document_root, const char *router)
{
 int retval = SUCCESS;
 char *host = ((void *)0);
 zend_string *errstr = ((void *)0);
 char *_document_root = ((void *)0);
 char *_router = ((void *)0);
 int err = 0;
 int port = 3000;
 php_socket_t server_sock = -1;
 char *p = ((void *)0);

 if (addr[0] == '[') {
  host = ((1)?strdup(addr + 1):_estrdup((addr + 1) ));
  if (!host) {
   return FAILURE;
  }
  p = strchr(host, ']');
  if (p) {
   *p++ = '\0';
   if (*p == ':') {
    port = strtol(p + 1, &p, 10);
    if (port <= 0 || port > 65535) {
     p = ((void *)0);
    }
   } else if (*p != '\0') {
    p = ((void *)0);
   }
  }
 } else {
  host = ((1)?strdup(addr):_estrdup((addr) ));
  if (!host) {
   return FAILURE;
  }
  p = strchr(host, ':');
  if (p) {
   *p++ = '\0';
   port = strtol(p, &p, 10);
   if (port <= 0 || port > 65535) {
    p = ((void *)0);
   }
  }
 }
 if (!p) {
  fprintf(stderr, "Invalid address: %s\n", addr);
  retval = FAILURE;
  goto out;
 }

 server_sock = php_network_listen_socket(host, &port, SOCK_STREAM, &server->address_family, &server->socklen, &errstr);
 if (server_sock == -1) {
  php_cli_server_logf("Failed to listen on %s:%d (reason: %s)", host, port, errstr ? (errstr)->val : "?");
  if (errstr) {
   zend_string_release(errstr);
  }
  retval = FAILURE;
  goto out;
 }
 server->server_sock = server_sock;

 err = php_cli_server_poller_ctor(&server->poller);
 if (SUCCESS != err) {
  goto out;
 }

 php_cli_server_poller_add(&server->poller, 0x001, server_sock);

 server->host = host;
 server->port = port;

 _zend_hash_init((&server->clients), (0), (php_cli_server_client_dtor_wrapper), (1) );

 {
  size_t document_root_len = strlen(document_root);
  _document_root = ((1)?zend_strndup((document_root),(document_root_len)):_estrndup(((document_root)), ((document_root_len)) ));
  if (!_document_root) {
   retval = FAILURE;
   goto out;
  }
  server->document_root = _document_root;
  server->document_root_len = document_root_len;
 }

 if (router) {
  size_t router_len = strlen(router);
  _router = ((1)?zend_strndup((router),(router_len)):_estrndup(((router)), ((router_len)) ));
  if (!_router) {
   retval = FAILURE;
   goto out;
  }
  server->router = _router;
  server->router_len = router_len;
 } else {
  server->router = ((void *)0);
  server->router_len = 0;
 }

 if (php_cli_server_mime_type_ctor(server, mime_type_map) == FAILURE) {
  retval = FAILURE;
  goto out;
 }

 server->is_running = 1;
out:
 if (retval != SUCCESS) {
  if (host) {
   ((1)?free(host):_efree((host) ));
  }
  if (_document_root) {
   ((1)?free(_document_root):_efree((_document_root) ));
  }
  if (_router) {
   ((1)?free(_router):_efree((_router) ));
  }
  if (server_sock > -1) {
   close(server_sock);
  }
 }
 return retval;
}

static int php_cli_server_recv_event_read_request(php_cli_server *server, php_cli_server_client *client)
{
 char *errstr = ((void *)0);
 int status = php_cli_server_client_read_request(client, &errstr);
 if (status < 0) {
  php_cli_server_logf("%s Invalid request (%s)", client->addr_str, errstr);
  _efree((errstr) );
  php_cli_server_close_connection(server, client);
  return FAILURE;
 } else if (status == 1 && client->request.request_method == PHP_HTTP_NOT_IMPLEMENTED) {
  return php_cli_server_send_error_page(server, client, 501);
 } else if (status == 1) {
  php_cli_server_poller_remove(&server->poller, 0x001, client->sock);
  php_cli_server_dispatch(server, client);
 } else {
  php_cli_server_poller_add(&server->poller, 0x001, client->sock);
 }

 return SUCCESS;
}

static int php_cli_server_send_event(php_cli_server *server, php_cli_server_client *client)
{
 if (client->content_sender_initialized) {
  if (client->file_fd >= 0 && !client->content_sender.buffer.first) {
   size_t nbytes_read;
   if (php_cli_server_content_sender_pull(&client->content_sender, client->file_fd, &nbytes_read)) {
    php_cli_server_close_connection(server, client);
    return FAILURE;
   }
   if (nbytes_read == 0) {
    close(client->file_fd);
    client->file_fd = -1;
   }
  }
  {
   size_t nbytes_sent;
   int err = php_cli_server_content_sender_send(&client->content_sender, client->sock, &nbytes_sent);
   if (err && err != 11) {
    php_cli_server_close_connection(server, client);
    return FAILURE;
   }
  }
  if (!client->content_sender.buffer.first && client->file_fd < 0) {
   php_cli_server_close_connection(server, client);
  }
 }
 return SUCCESS;
}


typedef struct php_cli_server_do_event_for_each_fd_callback_params {
 php_cli_server *server;
 int(*rhandler)(php_cli_server*, php_cli_server_client*);
 int(*whandler)(php_cli_server*, php_cli_server_client*);
} php_cli_server_do_event_for_each_fd_callback_params;

static int php_cli_server_do_event_for_each_fd_callback(void *_params, php_socket_t fd, int event)
{
 php_cli_server_do_event_for_each_fd_callback_params *params = _params;
 php_cli_server *server = params->server;
 if (server->server_sock == fd) {
  php_cli_server_client *client = ((void *)0);
  php_socket_t client_sock;
  socklen_t socklen = server->socklen;
  struct sockaddr *sa = ((1)?__zend_malloc(server->socklen):(__builtin_constant_p((server->socklen) ) ? (((server->socklen) <= 8) ? _emalloc_8() : (((server->socklen) <= 16) ? _emalloc_16() : (((server->socklen) <= 24) ? _emalloc_24() : (((server->socklen) <= 32) ? _emalloc_32() : (((server->socklen) <= 40) ? _emalloc_40() : (((server->socklen) <= 48) ? _emalloc_48() : (((server->socklen) <= 56) ? _emalloc_56() : (((server->socklen) <= 64) ? _emalloc_64() : (((server->socklen) <= 80) ? _emalloc_80() : (((server->socklen) <= 96) ? _emalloc_96() : (((server->socklen) <= 112) ? _emalloc_112() : (((server->socklen) <= 128) ? _emalloc_128() : (((server->socklen) <= 160) ? _emalloc_160() : (((server->socklen) <= 192) ? _emalloc_192() : (((server->socklen) <= 224) ? _emalloc_224() : (((server->socklen) <= 256) ? _emalloc_256() : (((server->socklen) <= 320) ? _emalloc_320() : (((server->socklen) <= 384) ? _emalloc_384() : (((server->socklen) <= 448) ? _emalloc_448() : (((server->socklen) <= 512) ? _emalloc_512() : (((server->socklen) <= 640) ? _emalloc_640() : (((server->socklen) <= 768) ? _emalloc_768() : (((server->socklen) <= 896) ? _emalloc_896() : (((server->socklen) <= 1024) ? _emalloc_1024() : (((server->socklen) <= 1280) ? _emalloc_1280() : (((server->socklen) <= 1536) ? _emalloc_1536() : (((server->socklen) <= 1792) ? _emalloc_1792() : (((server->socklen) <= 2048) ? _emalloc_2048() : (((server->socklen) <= 2560) ? _emalloc_2560() : (((server->socklen) <= 3072) ? _emalloc_3072() : (((server->socklen) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((server->socklen)) : _emalloc_huge((server->socklen))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((server->socklen) ) ));
  if (!sa) {
   return FAILURE;
  }
  client_sock = accept(server->server_sock, sa, &socklen);
  if (!((client_sock) >= 0)) {
   char *errstr;
   errstr = php_socket_strerror((*__errno_location ()), ((void *)0), 0);
   php_cli_server_logf("Failed to accept a client (reason: %s)", errstr);
   _efree((errstr) );
   ((1)?free(sa):_efree((sa) ));
   return SUCCESS;
  }
  if (SUCCESS != php_set_sock_blocking(client_sock, 0)) {
   ((1)?free(sa):_efree((sa) ));
   close(client_sock);
   return SUCCESS;
  }
  if (!(client = ((1)?__zend_malloc(sizeof(php_cli_server_client)):(__builtin_constant_p((sizeof(php_cli_server_client)) ) ? (((sizeof(php_cli_server_client)) <= 8) ? _emalloc_8() : (((sizeof(php_cli_server_client)) <= 16) ? _emalloc_16() : (((sizeof(php_cli_server_client)) <= 24) ? _emalloc_24() : (((sizeof(php_cli_server_client)) <= 32) ? _emalloc_32() : (((sizeof(php_cli_server_client)) <= 40) ? _emalloc_40() : (((sizeof(php_cli_server_client)) <= 48) ? _emalloc_48() : (((sizeof(php_cli_server_client)) <= 56) ? _emalloc_56() : (((sizeof(php_cli_server_client)) <= 64) ? _emalloc_64() : (((sizeof(php_cli_server_client)) <= 80) ? _emalloc_80() : (((sizeof(php_cli_server_client)) <= 96) ? _emalloc_96() : (((sizeof(php_cli_server_client)) <= 112) ? _emalloc_112() : (((sizeof(php_cli_server_client)) <= 128) ? _emalloc_128() : (((sizeof(php_cli_server_client)) <= 160) ? _emalloc_160() : (((sizeof(php_cli_server_client)) <= 192) ? _emalloc_192() : (((sizeof(php_cli_server_client)) <= 224) ? _emalloc_224() : (((sizeof(php_cli_server_client)) <= 256) ? _emalloc_256() : (((sizeof(php_cli_server_client)) <= 320) ? _emalloc_320() : (((sizeof(php_cli_server_client)) <= 384) ? _emalloc_384() : (((sizeof(php_cli_server_client)) <= 448) ? _emalloc_448() : (((sizeof(php_cli_server_client)) <= 512) ? _emalloc_512() : (((sizeof(php_cli_server_client)) <= 640) ? _emalloc_640() : (((sizeof(php_cli_server_client)) <= 768) ? _emalloc_768() : (((sizeof(php_cli_server_client)) <= 896) ? _emalloc_896() : (((sizeof(php_cli_server_client)) <= 1024) ? _emalloc_1024() : (((sizeof(php_cli_server_client)) <= 1280) ? _emalloc_1280() : (((sizeof(php_cli_server_client)) <= 1536) ? _emalloc_1536() : (((sizeof(php_cli_server_client)) <= 1792) ? _emalloc_1792() : (((sizeof(php_cli_server_client)) <= 2048) ? _emalloc_2048() : (((sizeof(php_cli_server_client)) <= 2560) ? _emalloc_2560() : (((sizeof(php_cli_server_client)) <= 3072) ? _emalloc_3072() : (((sizeof(php_cli_server_client)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(php_cli_server_client))) : _emalloc_huge((sizeof(php_cli_server_client)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(php_cli_server_client)) ) ))) || FAILURE == php_cli_server_client_ctor(client, server, client_sock, sa, socklen)) {
   php_cli_server_logf("Failed to create a new request object");
   ((1)?free(sa):_efree((sa) ));
   close(client_sock);
   return SUCCESS;
  }



  zend_hash_index_update_ptr(&server->clients, client_sock, client);
  php_cli_server_recv_event_read_request(server, client);
 } else {
  php_cli_server_client *client;
  if (((void *)0) != (client = zend_hash_index_find_ptr(&server->clients, fd))) {
   if (event & 0x001) {
    params->rhandler(server, client);
   }
   if (event & 0x004) {
    params->whandler(server, client);
   }
  }
 }
 return SUCCESS;
}

static void php_cli_server_do_event_for_each_fd(php_cli_server *server, int(*rhandler)(php_cli_server*, php_cli_server_client*), int(*whandler)(php_cli_server*, php_cli_server_client*))
{
 php_cli_server_do_event_for_each_fd_callback_params params = {
  server,
  rhandler,
  whandler
 };

 php_cli_server_poller_iter_on_active(&server->poller, &params, php_cli_server_do_event_for_each_fd_callback);
}

static int php_cli_server_do_event_loop(php_cli_server *server)
{
 int retval = SUCCESS;
 while (server->is_running) {
  struct timeval tv = { 1, 0 };
  int n = php_cli_server_poller_poll(&server->poller, &tv);
  if (n > 0) {
   php_cli_server_do_event_for_each_fd(server,
     php_cli_server_recv_event_read_request,
     php_cli_server_send_event);
  } else if (n == 0) {

  } else {
   int err = (*__errno_location ());
   if (err != 4) {
    char *errstr = php_socket_strerror(err, ((void *)0), 0);
    php_cli_server_logf("%s", errstr);
    _efree((errstr) );
    retval = FAILURE;
    goto out;
   }
  }
 }
out:
 return retval;
}

static php_cli_server server;

static void php_cli_server_sigint_handler(int sig)
{
 server.is_running = 0;
}


int do_cli_server(int argc, char **argv)
{
 char *php_optarg = ((void *)0);
 int php_optind = 1;
 int c;
 const char *server_bind_address = ((void *)0);
 extern const opt_struct OPTIONS[];
 const char *document_root = ((void *)0);
 const char *router = ((void *)0);
 char document_root_buf[4096];

 while ((c = php_getopt(argc, argv, OPTIONS, &php_optarg, &php_optind, 0, 2))!=-1) {
  switch (c) {
   case 'S':
    server_bind_address = php_optarg;
    break;
   case 't':
    document_root = php_optarg;
    break;
  }
 }

 if (document_root) {
  zend_stat_t sb;

  if (stat(document_root, &sb)) {
   fprintf(stderr, "Directory %s does not exist.\n", document_root);
   return 1;
  }
  if (!((((sb.st_mode)) & 0170000) == (0040000))) {
   fprintf(stderr, "%s is not a directory.\n", document_root);
   return 1;
  }
  if (tsrm_realpath(document_root, document_root_buf)) {
   document_root = document_root_buf;
  }
 } else {
  char *ret = ((void *)0);


  ret = getcwd(document_root_buf, 4096);



  document_root = ret ? document_root_buf: ".";
 }

 if (argc > php_optind) {
  router = argv[php_optind];
 }

 if (FAILURE == php_cli_server_ctor(&server, server_bind_address, document_root, router)) {
  return 1;
 }
 sapi_module.phpinfo_as_text = 0;

 {
  char buf[52];

  if (php_cli_server_get_system_time(buf) != 0) {
   memmove(buf, "unknown time, can't be fetched", sizeof("unknown time, can't be fetched"));
  }

  printf("PHP %s Development Server started at %s"
    "Listening on http://%s\n"
    "Document root is %s\n"
    "Press Ctrl-C to quit.\n",
    "7.0.9-dev", buf, server_bind_address, document_root);
 }


 signal(2, php_cli_server_sigint_handler);

 php_cli_server_do_event_loop(&server);
 php_cli_server_dtor(&server);
 return 0;
}
