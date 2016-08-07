# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
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

# 26 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
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
# 2492 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
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

# 2493 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
# 2508 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
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

# 2509 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
# 2519 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h"
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

# 2520 "/home/ct584/git/bughunter/repositories/php-src/include/../main/php_config.h" 2
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
# 487 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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

# 690 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
typedef enum _zend_expected_type {
 Z_EXPECTED_LONG, Z_EXPECTED_BOOL, Z_EXPECTED_STRING, Z_EXPECTED_ARRAY, Z_EXPECTED_FUNC, Z_EXPECTED_RESOURCE, Z_EXPECTED_PATH, Z_EXPECTED_OBJECT, Z_EXPECTED_DOUBLE,
 Z_EXPECTED_LAST
} zend_expected_type;

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramers_count_error(int num_args, int min_num_args, int max_num_args);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramer_type_error(int num, zend_expected_type expected_type, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_paramer_class_error(int num, char *name, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_callback_error(int severity, int num, char *error);
# 1044 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
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

# 167 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
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
# 25 "/home/ct584/git/bughunter/repositories/php-src/main/php_streams.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4

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

# 31 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h" 2
# 52 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 119 "/home/ct584/git/bughunter/repositories/php-src/main/php_reentrancy.h"

# 404 "/home/ct584/git/bughunter/repositories/php-src/main/php.h" 2
# 27 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_rand.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_rand.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
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
int zm_activate_filestat(int type, int module_number);
int zm_deactivate_filestat(int type, int module_number);

void zif_realpath_cache_size(zend_execute_data *execute_data, zval *return_value);
void zif_realpath_cache_get(zend_execute_data *execute_data, zval *return_value);
void zif_clearstatcache(zend_execute_data *execute_data, zval *return_value);
void zif_fileatime(zend_execute_data *execute_data, zval *return_value);
void zif_filectime(zend_execute_data *execute_data, zval *return_value);
void zif_filegroup(zend_execute_data *execute_data, zval *return_value);
void zif_fileinode(zend_execute_data *execute_data, zval *return_value);
void zif_filemtime(zend_execute_data *execute_data, zval *return_value);
void zif_fileowner(zend_execute_data *execute_data, zval *return_value);
void zif_fileperms(zend_execute_data *execute_data, zval *return_value);
void zif_filesize(zend_execute_data *execute_data, zval *return_value);
void zif_filetype(zend_execute_data *execute_data, zval *return_value);
void zif_is_writable(zend_execute_data *execute_data, zval *return_value);
void zif_is_readable(zend_execute_data *execute_data, zval *return_value);
void zif_is_executable(zend_execute_data *execute_data, zval *return_value);
void zif_is_file(zend_execute_data *execute_data, zval *return_value);
void zif_is_dir(zend_execute_data *execute_data, zval *return_value);
void zif_is_link(zend_execute_data *execute_data, zval *return_value);
void zif_file_exists(zend_execute_data *execute_data, zval *return_value);
void php_if_stat(zend_execute_data *execute_data, zval *return_value);
void php_if_lstat(zend_execute_data *execute_data, zval *return_value);
void zif_disk_total_space(zend_execute_data *execute_data, zval *return_value);
void zif_disk_free_space(zend_execute_data *execute_data, zval *return_value);
void zif_chown(zend_execute_data *execute_data, zval *return_value);
void zif_chgrp(zend_execute_data *execute_data, zval *return_value);

void zif_lchown(zend_execute_data *execute_data, zval *return_value);


void zif_lchgrp(zend_execute_data *execute_data, zval *return_value);

void zif_chmod(zend_execute_data *execute_data, zval *return_value);

void zif_touch(zend_execute_data *execute_data, zval *return_value);

void zif_clearstatcache(zend_execute_data *execute_data, zval *return_value);
# 84 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_filestat.h"
typedef int php_stat_len;


__attribute__ ((visibility("default"))) void php_clear_stat_cache(zend_bool clear_realpath_cache, const char *filename, int filename_len);
__attribute__ ((visibility("default"))) void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value);
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



__attribute__ ((visibility("default"))) void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini);
__attribute__ ((visibility("default"))) void zend_strip(void);
__attribute__ ((visibility("default"))) int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini);
__attribute__ ((visibility("default"))) int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name);
__attribute__ ((visibility("default"))) void zend_html_putc(char c);
__attribute__ ((visibility("default"))) void zend_html_puts(const char *s, size_t len);


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 34 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url_scanner_ex.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number);
int zm_shutdown_url_scanner_ex(int type, int module_number);

int zm_activate_url_scanner_ex(int type, int module_number);
int zm_deactivate_url_scanner_ex(int type, int module_number);

__attribute__ ((visibility("default"))) char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen, int urlencode);
__attribute__ ((visibility("default"))) int php_url_scanner_add_var(char *name, size_t name_len, char *value, size_t value_len, int urlencode);
__attribute__ ((visibility("default"))) int php_url_scanner_reset_vars(void);

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h"
typedef struct {
 zend_string *s;
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


int zm_startup_basic(int type, int module_number);
int zm_shutdown_basic(int type, int module_number);
int zm_activate_basic(int type, int module_number);
int zm_deactivate_basic(int type, int module_number);
void zm_info_basic(zend_module_entry *zend_module);

void zif_constant(zend_execute_data *execute_data, zval *return_value);
void zif_sleep(zend_execute_data *execute_data, zval *return_value);
void zif_usleep(zend_execute_data *execute_data, zval *return_value);

void zif_time_nanosleep(zend_execute_data *execute_data, zval *return_value);
void zif_time_sleep_until(zend_execute_data *execute_data, zval *return_value);

void zif_flush(zend_execute_data *execute_data, zval *return_value);

void php_inet_ntop(zend_execute_data *execute_data, zval *return_value);


void php_inet_pton(zend_execute_data *execute_data, zval *return_value);

void zif_ip2long(zend_execute_data *execute_data, zval *return_value);
void zif_long2ip(zend_execute_data *execute_data, zval *return_value);


void zif_getenv(zend_execute_data *execute_data, zval *return_value);
void zif_putenv(zend_execute_data *execute_data, zval *return_value);

void zif_getopt(zend_execute_data *execute_data, zval *return_value);

void zif_get_current_user(zend_execute_data *execute_data, zval *return_value);
void zif_set_time_limit(zend_execute_data *execute_data, zval *return_value);

void zif_header_register_callback(zend_execute_data *execute_data, zval *return_value);

void zif_get_cfg_var(zend_execute_data *execute_data, zval *return_value);
void zif_get_magic_quotes_runtime(zend_execute_data *execute_data, zval *return_value);
void zif_get_magic_quotes_gpc(zend_execute_data *execute_data, zval *return_value);

void zif_error_log(zend_execute_data *execute_data, zval *return_value);
void zif_error_get_last(zend_execute_data *execute_data, zval *return_value);
void zif_error_clear_last(zend_execute_data *execute_data, zval *return_value);

void zif_call_user_func(zend_execute_data *execute_data, zval *return_value);
void zif_call_user_func_array(zend_execute_data *execute_data, zval *return_value);
void zif_forward_static_call(zend_execute_data *execute_data, zval *return_value);
void zif_forward_static_call_array(zend_execute_data *execute_data, zval *return_value);

void zif_register_shutdown_function(zend_execute_data *execute_data, zval *return_value);
void zif_highlight_file(zend_execute_data *execute_data, zval *return_value);
void zif_highlight_string(zend_execute_data *execute_data, zval *return_value);
void zif_php_strip_whitespace(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(zend_execute_data *execute_data, zval *return_value);
void zif_ini_get_all(zend_execute_data *execute_data, zval *return_value);
void zif_ini_set(zend_execute_data *execute_data, zval *return_value);
void zif_ini_restore(zend_execute_data *execute_data, zval *return_value);
void zif_get_include_path(zend_execute_data *execute_data, zval *return_value);
void zif_set_include_path(zend_execute_data *execute_data, zval *return_value);
void zif_restore_include_path(zend_execute_data *execute_data, zval *return_value);

void zif_print_r(zend_execute_data *execute_data, zval *return_value);
void zif_fprintf(zend_execute_data *execute_data, zval *return_value);
void zif_vfprintf(zend_execute_data *execute_data, zval *return_value);

void zif_connection_aborted(zend_execute_data *execute_data, zval *return_value);
void zif_connection_status(zend_execute_data *execute_data, zval *return_value);
void zif_ignore_user_abort(zend_execute_data *execute_data, zval *return_value);

void zif_getservbyname(zend_execute_data *execute_data, zval *return_value);
void zif_getservbyport(zend_execute_data *execute_data, zval *return_value);
void zif_getprotobyname(zend_execute_data *execute_data, zval *return_value);
void zif_getprotobynumber(zend_execute_data *execute_data, zval *return_value);

void php_if_crc32(zend_execute_data *execute_data, zval *return_value);

void zif_register_tick_function(zend_execute_data *execute_data, zval *return_value);
void zif_unregister_tick_function(zend_execute_data *execute_data, zval *return_value);

void zif_sys_getloadavg(zend_execute_data *execute_data, zval *return_value);


void zif_is_uploaded_file(zend_execute_data *execute_data, zval *return_value);
void zif_move_uploaded_file(zend_execute_data *execute_data, zval *return_value);


void zif_parse_ini_file(zend_execute_data *execute_data, zval *return_value);
void zif_parse_ini_string(zend_execute_data *execute_data, zval *return_value);




void zif_str_rot13(zend_execute_data *execute_data, zval *return_value);
void zif_stream_get_filters(zend_execute_data *execute_data, zval *return_value);
void zif_stream_filter_register(zend_execute_data *execute_data, zval *return_value);
void zif_stream_bucket_make_writeable(zend_execute_data *execute_data, zval *return_value);
void zif_stream_bucket_prepend(zend_execute_data *execute_data, zval *return_value);
void zif_stream_bucket_append(zend_execute_data *execute_data, zval *return_value);
void zif_stream_bucket_new(zend_execute_data *execute_data, zval *return_value);
int zm_startup_user_filters(int type, int module_number);
int zm_deactivate_user_filters(int type, int module_number);
int zm_deactivate_browscap(int type, int module_number);


__attribute__ ((visibility("default"))) int _php_error_log(int opt_err, char *message, char *opt, char *headers);
__attribute__ ((visibility("default"))) int _php_error_log_ex(int opt_err, char *message, size_t message_len, char *opt, char *headers);
__attribute__ ((visibility("default"))) int php_prefix_varname(zval *result, zval *prefix, char *var_name, size_t var_name_len, zend_bool add_underscore);



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 166 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval strtok_zval;
 char *strtok_string;
 zend_string *locale_string;
 zend_bool locale_changed;
 char *strtok_last;
 char strtok_table[256];
 zend_ulong strtok_len;
 char str_ebuf[40];
 zend_fcall_info array_walk_fci;
 zend_fcall_info_cache array_walk_fci_cache;
 zend_fcall_info user_compare_fci;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval active_ini_file_section;


 zend_long page_uid;
 zend_long page_gid;
 zend_long page_inode;
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
  struct php_serialize_data *data;
  unsigned level;
 } serialize;
 struct {
  struct php_unserialize_data *data;
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
 zval *arguments;
 int arg_count;
} php_shutdown_function_entry;

__attribute__ ((visibility("default"))) extern zend_bool register_user_shutdown_function(char *function_name, size_t function_len, php_shutdown_function_entry *shutdown_function_entry);
__attribute__ ((visibility("default"))) extern zend_bool remove_user_shutdown_function(char *function_name, size_t function_len);
__attribute__ ((visibility("default"))) extern zend_bool append_user_shutdown_function(php_shutdown_function_entry shutdown_function_entry);

__attribute__ ((visibility("default"))) void php_call_shutdown_functions(void);
__attribute__ ((visibility("default"))) void php_free_shutdown_functions(void);
# 30 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_rand.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_lcg.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_lcg.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/basic_functions.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_lcg.h" 2

typedef struct {
 php_int32 s1;
 php_int32 s2;
 int seeded;
} php_lcg_globals;

__attribute__ ((visibility("default"))) double php_combined_lcg(void);
void zif_lcg_value(zend_execute_data *execute_data, zval *return_value);

int zm_startup_lcg(int type, int module_number);
# 31 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_rand.h" 2
# 56 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/php_rand.h"
__attribute__ ((visibility("default"))) void php_srand(zend_long seed);
__attribute__ ((visibility("default"))) zend_long php_rand(void);
__attribute__ ((visibility("default"))) void php_mt_srand(php_uint32 seed);
__attribute__ ((visibility("default"))) php_uint32 php_mt_rand(void);
# 28 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
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
# 29 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/main/SAPI.h"
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

# 27 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h" 2
# 36 "/home/ct584/git/bughunter/repositories/php-src/main/php_variables.h"

void php_startup_auto_globals(void);
extern __attribute__ ((visibility("default"))) void (*php_import_environment_variables)(zval *array_ptr);
__attribute__ ((visibility("default"))) void php_register_variable(char *var, char *val, zval *track_vars_array);

__attribute__ ((visibility("default"))) void php_register_variable_safe(char *var, char *val, size_t val_len, zval *track_vars_array);
__attribute__ ((visibility("default"))) void php_register_variable_ex(char *var, zval *val, zval *track_vars_array);

__attribute__ ((visibility("default"))) void php_build_argv(char *s, zval *track_vars_array);
__attribute__ ((visibility("default"))) int php_hash_environment(void);

# 30 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2

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








# 32 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2


# 1 "/usr/include/langinfo.h" 1 3 4
# 23 "/usr/include/langinfo.h" 3 4
# 1 "/usr/include/nl_types.h" 1 3 4
# 30 "/usr/include/nl_types.h" 3 4



typedef void *nl_catd;


typedef int nl_item;





extern nl_catd catopen (const char *__cat_name, int __flag) __attribute__ ((__nonnull__ (1)));



extern char *catgets (nl_catd __catalog, int __set, int __number,
        const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int catclose (nl_catd __catalog) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 24 "/usr/include/langinfo.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 26 "/usr/include/langinfo.h" 2 3 4



# 41 "/usr/include/langinfo.h" 3 4
enum
{



  ABDAY_1 = (((2) << 16) | (0)),

  ABDAY_2,

  ABDAY_3,

  ABDAY_4,

  ABDAY_5,

  ABDAY_6,

  ABDAY_7,



  DAY_1,

  DAY_2,

  DAY_3,

  DAY_4,

  DAY_5,

  DAY_6,

  DAY_7,



  ABMON_1,

  ABMON_2,

  ABMON_3,

  ABMON_4,

  ABMON_5,

  ABMON_6,

  ABMON_7,

  ABMON_8,

  ABMON_9,

  ABMON_10,

  ABMON_11,

  ABMON_12,



  MON_1,

  MON_2,

  MON_3,

  MON_4,

  MON_5,

  MON_6,

  MON_7,

  MON_8,

  MON_9,

  MON_10,

  MON_11,

  MON_12,


  AM_STR,

  PM_STR,


  D_T_FMT,

  D_FMT,

  T_FMT,

  T_FMT_AMPM,


  ERA,

  __ERA_YEAR,



  ERA_D_FMT,

  ALT_DIGITS,

  ERA_D_T_FMT,

  ERA_T_FMT,


  _NL_TIME_ERA_NUM_ENTRIES,
  _NL_TIME_ERA_ENTRIES,

  _NL_WABDAY_1,
  _NL_WABDAY_2,
  _NL_WABDAY_3,
  _NL_WABDAY_4,
  _NL_WABDAY_5,
  _NL_WABDAY_6,
  _NL_WABDAY_7,


  _NL_WDAY_1,
  _NL_WDAY_2,
  _NL_WDAY_3,
  _NL_WDAY_4,
  _NL_WDAY_5,
  _NL_WDAY_6,
  _NL_WDAY_7,


  _NL_WABMON_1,
  _NL_WABMON_2,
  _NL_WABMON_3,
  _NL_WABMON_4,
  _NL_WABMON_5,
  _NL_WABMON_6,
  _NL_WABMON_7,
  _NL_WABMON_8,
  _NL_WABMON_9,
  _NL_WABMON_10,
  _NL_WABMON_11,
  _NL_WABMON_12,


  _NL_WMON_1,
  _NL_WMON_2,
  _NL_WMON_3,
  _NL_WMON_4,
  _NL_WMON_5,
  _NL_WMON_6,
  _NL_WMON_7,
  _NL_WMON_8,
  _NL_WMON_9,
  _NL_WMON_10,
  _NL_WMON_11,
  _NL_WMON_12,

  _NL_WAM_STR,
  _NL_WPM_STR,

  _NL_WD_T_FMT,
  _NL_WD_FMT,
  _NL_WT_FMT,
  _NL_WT_FMT_AMPM,

  _NL_WERA_YEAR,
  _NL_WERA_D_FMT,
  _NL_WALT_DIGITS,
  _NL_WERA_D_T_FMT,
  _NL_WERA_T_FMT,

  _NL_TIME_WEEK_NDAYS,
  _NL_TIME_WEEK_1STDAY,
  _NL_TIME_WEEK_1STWEEK,
  _NL_TIME_FIRST_WEEKDAY,
  _NL_TIME_FIRST_WORKDAY,
  _NL_TIME_CAL_DIRECTION,
  _NL_TIME_TIMEZONE,

  _DATE_FMT,

  _NL_W_DATE_FMT,

  _NL_TIME_CODESET,

  _NL_NUM_LC_TIME,




  _NL_COLLATE_NRULES = (((3) << 16) | (0)),
  _NL_COLLATE_RULESETS,
  _NL_COLLATE_TABLEMB,
  _NL_COLLATE_WEIGHTMB,
  _NL_COLLATE_EXTRAMB,
  _NL_COLLATE_INDIRECTMB,
  _NL_COLLATE_GAP1,
  _NL_COLLATE_GAP2,
  _NL_COLLATE_GAP3,
  _NL_COLLATE_TABLEWC,
  _NL_COLLATE_WEIGHTWC,
  _NL_COLLATE_EXTRAWC,
  _NL_COLLATE_INDIRECTWC,
  _NL_COLLATE_SYMB_HASH_SIZEMB,
  _NL_COLLATE_SYMB_TABLEMB,
  _NL_COLLATE_SYMB_EXTRAMB,
  _NL_COLLATE_COLLSEQMB,
  _NL_COLLATE_COLLSEQWC,
  _NL_COLLATE_CODESET,
  _NL_NUM_LC_COLLATE,




  _NL_CTYPE_CLASS = (((0) << 16) | (0)),
  _NL_CTYPE_TOUPPER,
  _NL_CTYPE_GAP1,
  _NL_CTYPE_TOLOWER,
  _NL_CTYPE_GAP2,
  _NL_CTYPE_CLASS32,
  _NL_CTYPE_GAP3,
  _NL_CTYPE_GAP4,
  _NL_CTYPE_GAP5,
  _NL_CTYPE_GAP6,
  _NL_CTYPE_CLASS_NAMES,
  _NL_CTYPE_MAP_NAMES,
  _NL_CTYPE_WIDTH,
  _NL_CTYPE_MB_CUR_MAX,
  _NL_CTYPE_CODESET_NAME,
  CODESET = _NL_CTYPE_CODESET_NAME,

  _NL_CTYPE_TOUPPER32,
  _NL_CTYPE_TOLOWER32,
  _NL_CTYPE_CLASS_OFFSET,
  _NL_CTYPE_MAP_OFFSET,
  _NL_CTYPE_INDIGITS_MB_LEN,
  _NL_CTYPE_INDIGITS0_MB,
  _NL_CTYPE_INDIGITS1_MB,
  _NL_CTYPE_INDIGITS2_MB,
  _NL_CTYPE_INDIGITS3_MB,
  _NL_CTYPE_INDIGITS4_MB,
  _NL_CTYPE_INDIGITS5_MB,
  _NL_CTYPE_INDIGITS6_MB,
  _NL_CTYPE_INDIGITS7_MB,
  _NL_CTYPE_INDIGITS8_MB,
  _NL_CTYPE_INDIGITS9_MB,
  _NL_CTYPE_INDIGITS_WC_LEN,
  _NL_CTYPE_INDIGITS0_WC,
  _NL_CTYPE_INDIGITS1_WC,
  _NL_CTYPE_INDIGITS2_WC,
  _NL_CTYPE_INDIGITS3_WC,
  _NL_CTYPE_INDIGITS4_WC,
  _NL_CTYPE_INDIGITS5_WC,
  _NL_CTYPE_INDIGITS6_WC,
  _NL_CTYPE_INDIGITS7_WC,
  _NL_CTYPE_INDIGITS8_WC,
  _NL_CTYPE_INDIGITS9_WC,
  _NL_CTYPE_OUTDIGIT0_MB,
  _NL_CTYPE_OUTDIGIT1_MB,
  _NL_CTYPE_OUTDIGIT2_MB,
  _NL_CTYPE_OUTDIGIT3_MB,
  _NL_CTYPE_OUTDIGIT4_MB,
  _NL_CTYPE_OUTDIGIT5_MB,
  _NL_CTYPE_OUTDIGIT6_MB,
  _NL_CTYPE_OUTDIGIT7_MB,
  _NL_CTYPE_OUTDIGIT8_MB,
  _NL_CTYPE_OUTDIGIT9_MB,
  _NL_CTYPE_OUTDIGIT0_WC,
  _NL_CTYPE_OUTDIGIT1_WC,
  _NL_CTYPE_OUTDIGIT2_WC,
  _NL_CTYPE_OUTDIGIT3_WC,
  _NL_CTYPE_OUTDIGIT4_WC,
  _NL_CTYPE_OUTDIGIT5_WC,
  _NL_CTYPE_OUTDIGIT6_WC,
  _NL_CTYPE_OUTDIGIT7_WC,
  _NL_CTYPE_OUTDIGIT8_WC,
  _NL_CTYPE_OUTDIGIT9_WC,
  _NL_CTYPE_TRANSLIT_TAB_SIZE,
  _NL_CTYPE_TRANSLIT_FROM_IDX,
  _NL_CTYPE_TRANSLIT_FROM_TBL,
  _NL_CTYPE_TRANSLIT_TO_IDX,
  _NL_CTYPE_TRANSLIT_TO_TBL,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING,
  _NL_CTYPE_TRANSLIT_IGNORE_LEN,
  _NL_CTYPE_TRANSLIT_IGNORE,
  _NL_CTYPE_MAP_TO_NONASCII,
  _NL_CTYPE_NONASCII_CASE,
  _NL_CTYPE_EXTRA_MAP_1,
  _NL_CTYPE_EXTRA_MAP_2,
  _NL_CTYPE_EXTRA_MAP_3,
  _NL_CTYPE_EXTRA_MAP_4,
  _NL_CTYPE_EXTRA_MAP_5,
  _NL_CTYPE_EXTRA_MAP_6,
  _NL_CTYPE_EXTRA_MAP_7,
  _NL_CTYPE_EXTRA_MAP_8,
  _NL_CTYPE_EXTRA_MAP_9,
  _NL_CTYPE_EXTRA_MAP_10,
  _NL_CTYPE_EXTRA_MAP_11,
  _NL_CTYPE_EXTRA_MAP_12,
  _NL_CTYPE_EXTRA_MAP_13,
  _NL_CTYPE_EXTRA_MAP_14,
  _NL_NUM_LC_CTYPE,




  __INT_CURR_SYMBOL = (((4) << 16) | (0)),



  __CURRENCY_SYMBOL,



  __MON_DECIMAL_POINT,



  __MON_THOUSANDS_SEP,



  __MON_GROUPING,



  __POSITIVE_SIGN,



  __NEGATIVE_SIGN,



  __INT_FRAC_DIGITS,



  __FRAC_DIGITS,



  __P_CS_PRECEDES,



  __P_SEP_BY_SPACE,



  __N_CS_PRECEDES,



  __N_SEP_BY_SPACE,



  __P_SIGN_POSN,



  __N_SIGN_POSN,



  _NL_MONETARY_CRNCYSTR,

  __INT_P_CS_PRECEDES,



  __INT_P_SEP_BY_SPACE,



  __INT_N_CS_PRECEDES,



  __INT_N_SEP_BY_SPACE,



  __INT_P_SIGN_POSN,



  __INT_N_SIGN_POSN,



  _NL_MONETARY_DUO_INT_CURR_SYMBOL,
  _NL_MONETARY_DUO_CURRENCY_SYMBOL,
  _NL_MONETARY_DUO_INT_FRAC_DIGITS,
  _NL_MONETARY_DUO_FRAC_DIGITS,
  _NL_MONETARY_DUO_P_CS_PRECEDES,
  _NL_MONETARY_DUO_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_N_CS_PRECEDES,
  _NL_MONETARY_DUO_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_P_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_N_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_P_SIGN_POSN,
  _NL_MONETARY_DUO_N_SIGN_POSN,
  _NL_MONETARY_DUO_INT_P_SIGN_POSN,
  _NL_MONETARY_DUO_INT_N_SIGN_POSN,
  _NL_MONETARY_UNO_VALID_FROM,
  _NL_MONETARY_UNO_VALID_TO,
  _NL_MONETARY_DUO_VALID_FROM,
  _NL_MONETARY_DUO_VALID_TO,
  _NL_MONETARY_CONVERSION_RATE,
  _NL_MONETARY_DECIMAL_POINT_WC,
  _NL_MONETARY_THOUSANDS_SEP_WC,
  _NL_MONETARY_CODESET,
  _NL_NUM_LC_MONETARY,



  __DECIMAL_POINT = (((1) << 16) | (0)),



  RADIXCHAR = __DECIMAL_POINT,

  __THOUSANDS_SEP,



  THOUSEP = __THOUSANDS_SEP,

  __GROUPING,



  _NL_NUMERIC_DECIMAL_POINT_WC,
  _NL_NUMERIC_THOUSANDS_SEP_WC,
  _NL_NUMERIC_CODESET,
  _NL_NUM_LC_NUMERIC,

  __YESEXPR = (((5) << 16) | (0)),

  __NOEXPR,

  __YESSTR,



  __NOSTR,



  _NL_MESSAGES_CODESET,
  _NL_NUM_LC_MESSAGES,

  _NL_PAPER_HEIGHT = (((7) << 16) | (0)),
  _NL_PAPER_WIDTH,
  _NL_PAPER_CODESET,
  _NL_NUM_LC_PAPER,

  _NL_NAME_NAME_FMT = (((8) << 16) | (0)),
  _NL_NAME_NAME_GEN,
  _NL_NAME_NAME_MR,
  _NL_NAME_NAME_MRS,
  _NL_NAME_NAME_MISS,
  _NL_NAME_NAME_MS,
  _NL_NAME_CODESET,
  _NL_NUM_LC_NAME,

  _NL_ADDRESS_POSTAL_FMT = (((9) << 16) | (0)),
  _NL_ADDRESS_COUNTRY_NAME,
  _NL_ADDRESS_COUNTRY_POST,
  _NL_ADDRESS_COUNTRY_AB2,
  _NL_ADDRESS_COUNTRY_AB3,
  _NL_ADDRESS_COUNTRY_CAR,
  _NL_ADDRESS_COUNTRY_NUM,
  _NL_ADDRESS_COUNTRY_ISBN,
  _NL_ADDRESS_LANG_NAME,
  _NL_ADDRESS_LANG_AB,
  _NL_ADDRESS_LANG_TERM,
  _NL_ADDRESS_LANG_LIB,
  _NL_ADDRESS_CODESET,
  _NL_NUM_LC_ADDRESS,

  _NL_TELEPHONE_TEL_INT_FMT = (((10) << 16) | (0)),
  _NL_TELEPHONE_TEL_DOM_FMT,
  _NL_TELEPHONE_INT_SELECT,
  _NL_TELEPHONE_INT_PREFIX,
  _NL_TELEPHONE_CODESET,
  _NL_NUM_LC_TELEPHONE,

  _NL_MEASUREMENT_MEASUREMENT = (((11) << 16) | (0)),
  _NL_MEASUREMENT_CODESET,
  _NL_NUM_LC_MEASUREMENT,

  _NL_IDENTIFICATION_TITLE = (((12) << 16) | (0)),
  _NL_IDENTIFICATION_SOURCE,
  _NL_IDENTIFICATION_ADDRESS,
  _NL_IDENTIFICATION_CONTACT,
  _NL_IDENTIFICATION_EMAIL,
  _NL_IDENTIFICATION_TEL,
  _NL_IDENTIFICATION_FAX,
  _NL_IDENTIFICATION_LANGUAGE,
  _NL_IDENTIFICATION_TERRITORY,
  _NL_IDENTIFICATION_AUDIENCE,
  _NL_IDENTIFICATION_APPLICATION,
  _NL_IDENTIFICATION_ABBREVIATION,
  _NL_IDENTIFICATION_REVISION,
  _NL_IDENTIFICATION_DATE,
  _NL_IDENTIFICATION_CATEGORY,
  _NL_IDENTIFICATION_CODESET,
  _NL_NUM_LC_IDENTIFICATION,


  _NL_NUM
};
# 583 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo (nl_item __item) __attribute__ ((__nothrow__ , __leaf__));
# 594 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo_l (nl_item __item, __locale_t __l);



# 35 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2


# 1 "/usr/include/monetary.h" 1 3 4
# 26 "/usr/include/monetary.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 27 "/usr/include/monetary.h" 2 3 4
# 35 "/usr/include/monetary.h" 3 4



extern ssize_t strfmon (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__strfmon__, 3, 4)));





extern ssize_t strfmon_l (char *__restrict __s, size_t __maxsize,
     __locale_t __loc,
     const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__strfmon__, 4, 5)));







# 38 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
# 54 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
# 1 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/scanf.h" 1
# 44 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/scanf.h"
__attribute__ ((visibility("default"))) int ValidateFormat(char *format, int numVars, int *totalVars);
__attribute__ ((visibility("default"))) int php_sscanf_internal(char *string,char *format,int argCount,zval *args,
    int varStart, zval *return_value);
# 55 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 57 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_globals.h" 1
# 58 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h" 1
# 23 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h" 1
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
# 60 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
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


# 61 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2





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
# 67 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c" 2
# 82 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
void register_string_constants(int type, int module_number)
{
 zend_register_long_constant(("STR_PAD_LEFT"), sizeof("STR_PAD_LEFT")-1, (0), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("STR_PAD_RIGHT"), sizeof("STR_PAD_RIGHT")-1, (1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("STR_PAD_BOTH"), sizeof("STR_PAD_BOTH")-1, (2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("PATHINFO_DIRNAME"), sizeof("PATHINFO_DIRNAME")-1, (1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("PATHINFO_BASENAME"), sizeof("PATHINFO_BASENAME")-1, (2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("PATHINFO_EXTENSION"), sizeof("PATHINFO_EXTENSION")-1, (4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("PATHINFO_FILENAME"), sizeof("PATHINFO_FILENAME")-1, (8), ((1<<0) | (1<<1)), module_number);
# 100 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 zend_register_long_constant(("CHAR_MAX"), sizeof("CHAR_MAX")-1, (127), ((1<<0) | (1<<1)), module_number);



 zend_register_long_constant(("LC_CTYPE"), sizeof("LC_CTYPE")-1, (0), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("LC_NUMERIC"), sizeof("LC_NUMERIC")-1, (1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("LC_TIME"), sizeof("LC_TIME")-1, (2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("LC_COLLATE"), sizeof("LC_COLLATE")-1, (3), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("LC_MONETARY"), sizeof("LC_MONETARY")-1, (4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("LC_ALL"), sizeof("LC_ALL")-1, (6), ((1<<0) | (1<<1)), module_number);

 zend_register_long_constant(("LC_MESSAGES"), sizeof("LC_MESSAGES")-1, (5), ((1<<0) | (1<<1)), module_number);



}


int php_tag_find(char *tag, size_t len, const char *set);
# 129 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
static char hexconvtab[] __attribute__ ((__aligned__ (16))) = "0123456789abcdef";
# 138 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
static zend_string *php_bin2hex(const unsigned char *old, const size_t oldlen)
{
 zend_string *result;
 size_t i, j;

 result = zend_string_safe_alloc(oldlen, 2 * sizeof(char), 0, 0);

 for (i = j = 0; i < oldlen; i++) {
  (result)->val[j++] = hexconvtab[old[i] >> 4];
  (result)->val[j++] = hexconvtab[old[i] & 15];
 }
 (result)->val[j] = '\0';

 return result;
}




static zend_string *php_hex2bin(const unsigned char *old, const size_t oldlen)
{
 size_t target_length = oldlen >> 1;
 zend_string *str = zend_string_alloc(target_length, 0);
 unsigned char *ret = (unsigned char *)(str)->val;
 size_t i, j;

 for (i = j = 0; i < target_length; i++) {
  unsigned char c = old[j++];
  unsigned char l = c & ~0x20;
  int is_letter = ((unsigned int) ((l - 'A') ^ (l - 'F' - 1))) >> (8 * sizeof(unsigned int) - 1);
  unsigned char d;


  if (__builtin_expect(!!((((c ^ '0') - 10) >> (8 * sizeof(unsigned int) - 1)) | is_letter), 1)) {
   d = (l - 0x10 - 0x27 * is_letter) << 4;
  } else {
   zend_string_free(str);
   return ((void *)0);
  }
  c = old[j++];
  l = c & ~0x20;
  is_letter = ((unsigned int) ((l - 'A') ^ (l - 'F' - 1))) >> (8 * sizeof(unsigned int) - 1);
  if (__builtin_expect(!!((((c ^ '0') - 10) >> (8 * sizeof(unsigned int) - 1)) | is_letter), 1)) {
   d |= l - 0x10 - 0x27 * is_letter;
  } else {
   zend_string_free(str);
   return ((void *)0);
  }
  ret[i] = d;
 }
 ret[i] = '\0';

 return str;
}





__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out)
{
 struct lconv *res;
# 218 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 res = localeconv();


 *out = *res;





 return out;
}
# 255 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
void zif_bin2hex(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *result;
 zend_string *data;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &data) == FAILURE) {
  return;
 }

 result = php_bin2hex((unsigned char *)(data)->val, (data)->len);

 if (!result) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_hex2bin(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *result, *data;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &data) == FAILURE) {
  return;
 }

 if ((data)->len % 2 != 0) {
  php_error_docref0(((void *)0), (1<<1L), "Hexadecimal input string must have an even length");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 result = php_hex2bin((unsigned char *)(data)->val, (data)->len);

 if (!result) {
  php_error_docref0(((void *)0), (1<<1L), "Input string must be hexadecimal string");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
}


static void php_spn_common_handler(zend_execute_data *execute_data, zval *return_value, int behavior)
{
 zend_string *s11, *s22;
 zend_long start = 0, len = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS|ll", &s11,
    &s22, &start, &len) == FAILURE) {
  return;
 }

 if ((execute_data)->This.u2.num_args < 4) {
  len = (s11)->len;
 }



 if (start < 0) {
  start += (zend_long)(s11)->len;
  if (start < 0) {
   start = 0;
  }
 } else if ((size_t)start > (s11)->len) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (len < 0) {
  len += ((s11)->len - start);
  if (len < 0) {
   len = 0;
  }
 }

 if (len > (zend_long)(s11)->len - start) {
  len = (s11)->len - start;
 }

 if(len == 0) {
  { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
 }

 if (behavior == 0) {
  { { zval *__z = (return_value); (*(__z)).value.lval = php_strspn((s11)->val + start , (s22)->val , (s11)->val + start + len , (s22)->val + (s22)->len ); (*(__z)).u1.type_info = 4; }; return; }


                                                  ;
 } else if (behavior == 1) {
  { { zval *__z = (return_value); (*(__z)).value.lval = php_strcspn((s11)->val + start , (s22)->val , (s11)->val + start + len , (s22)->val + (s22)->len ); (*(__z)).u1.type_info = 4; }; return; }


                                                  ;
 }

}




void zif_strspn(zend_execute_data *execute_data, zval *return_value)
{
 php_spn_common_handler(execute_data, return_value, 0);
}




void zif_strcspn(zend_execute_data *execute_data, zval *return_value)
{
 php_spn_common_handler(execute_data, return_value, 1);
}




int zm_startup_nl_langinfo(int type, int module_number)
{


 zend_register_long_constant(("ABDAY_1"), sizeof("ABDAY_1")-1, (ABDAY_1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_2"), sizeof("ABDAY_2")-1, (ABDAY_2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_3"), sizeof("ABDAY_3")-1, (ABDAY_3), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_4"), sizeof("ABDAY_4")-1, (ABDAY_4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_5"), sizeof("ABDAY_5")-1, (ABDAY_5), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_6"), sizeof("ABDAY_6")-1, (ABDAY_6), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABDAY_7"), sizeof("ABDAY_7")-1, (ABDAY_7), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("DAY_1"), sizeof("DAY_1")-1, (DAY_1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_2"), sizeof("DAY_2")-1, (DAY_2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_3"), sizeof("DAY_3")-1, (DAY_3), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_4"), sizeof("DAY_4")-1, (DAY_4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_5"), sizeof("DAY_5")-1, (DAY_5), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_6"), sizeof("DAY_6")-1, (DAY_6), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("DAY_7"), sizeof("DAY_7")-1, (DAY_7), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("ABMON_1"), sizeof("ABMON_1")-1, (ABMON_1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_2"), sizeof("ABMON_2")-1, (ABMON_2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_3"), sizeof("ABMON_3")-1, (ABMON_3), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_4"), sizeof("ABMON_4")-1, (ABMON_4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_5"), sizeof("ABMON_5")-1, (ABMON_5), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_6"), sizeof("ABMON_6")-1, (ABMON_6), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_7"), sizeof("ABMON_7")-1, (ABMON_7), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_8"), sizeof("ABMON_8")-1, (ABMON_8), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_9"), sizeof("ABMON_9")-1, (ABMON_9), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_10"), sizeof("ABMON_10")-1, (ABMON_10), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_11"), sizeof("ABMON_11")-1, (ABMON_11), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("ABMON_12"), sizeof("ABMON_12")-1, (ABMON_12), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("MON_1"), sizeof("MON_1")-1, (MON_1), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_2"), sizeof("MON_2")-1, (MON_2), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_3"), sizeof("MON_3")-1, (MON_3), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_4"), sizeof("MON_4")-1, (MON_4), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_5"), sizeof("MON_5")-1, (MON_5), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_6"), sizeof("MON_6")-1, (MON_6), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_7"), sizeof("MON_7")-1, (MON_7), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_8"), sizeof("MON_8")-1, (MON_8), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_9"), sizeof("MON_9")-1, (MON_9), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_10"), sizeof("MON_10")-1, (MON_10), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_11"), sizeof("MON_11")-1, (MON_11), ((1<<0) | (1<<1)), module_number);
 zend_register_long_constant(("MON_12"), sizeof("MON_12")-1, (MON_12), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("AM_STR"), sizeof("AM_STR")-1, (AM_STR), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("PM_STR"), sizeof("PM_STR")-1, (PM_STR), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("D_T_FMT"), sizeof("D_T_FMT")-1, (D_T_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("D_FMT"), sizeof("D_FMT")-1, (D_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("T_FMT"), sizeof("T_FMT")-1, (T_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("T_FMT_AMPM"), sizeof("T_FMT_AMPM")-1, (T_FMT_AMPM), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("ERA"), sizeof("ERA")-1, (ERA), ((1<<0) | (1<<1)), module_number);





 zend_register_long_constant(("ERA_D_T_FMT"), sizeof("ERA_D_T_FMT")-1, (ERA_D_T_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("ERA_D_FMT"), sizeof("ERA_D_FMT")-1, (ERA_D_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("ERA_T_FMT"), sizeof("ERA_T_FMT")-1, (ERA_T_FMT), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("ALT_DIGITS"), sizeof("ALT_DIGITS")-1, (ALT_DIGITS), ((1<<0) | (1<<1)), module_number);
# 465 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 zend_register_long_constant(("CRNCYSTR"), sizeof("CRNCYSTR")-1, (_NL_MONETARY_CRNCYSTR), ((1<<0) | (1<<1)), module_number);
# 510 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 zend_register_long_constant(("RADIXCHAR"), sizeof("RADIXCHAR")-1, (RADIXCHAR), ((1<<0) | (1<<1)), module_number);





 zend_register_long_constant(("THOUSEP"), sizeof("THOUSEP")-1, (THOUSEP), ((1<<0) | (1<<1)), module_number);





 zend_register_long_constant(("YESEXPR"), sizeof("YESEXPR")-1, (__YESEXPR), ((1<<0) | (1<<1)), module_number);


 zend_register_long_constant(("NOEXPR"), sizeof("NOEXPR")-1, (__NOEXPR), ((1<<0) | (1<<1)), module_number);
# 534 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 zend_register_long_constant(("CODESET"), sizeof("CODESET")-1, (CODESET), ((1<<0) | (1<<1)), module_number);


 return SUCCESS;
}




void zif_nl_langinfo(zend_execute_data *execute_data, zval *return_value)
{
 zend_long item;
 char *value;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "l", &item) == FAILURE) {
  return;
 }

 switch(item) {

  case ABDAY_1:
  case ABDAY_2:
  case ABDAY_3:
  case ABDAY_4:
  case ABDAY_5:
  case ABDAY_6:
  case ABDAY_7:


  case DAY_1:
  case DAY_2:
  case DAY_3:
  case DAY_4:
  case DAY_5:
  case DAY_6:
  case DAY_7:


  case ABMON_1:
  case ABMON_2:
  case ABMON_3:
  case ABMON_4:
  case ABMON_5:
  case ABMON_6:
  case ABMON_7:
  case ABMON_8:
  case ABMON_9:
  case ABMON_10:
  case ABMON_11:
  case ABMON_12:


  case MON_1:
  case MON_2:
  case MON_3:
  case MON_4:
  case MON_5:
  case MON_6:
  case MON_7:
  case MON_8:
  case MON_9:
  case MON_10:
  case MON_11:
  case MON_12:


  case AM_STR:


  case PM_STR:


  case D_T_FMT:


  case D_FMT:


  case T_FMT:


  case T_FMT_AMPM:


  case ERA:





  case ERA_D_T_FMT:


  case ERA_D_FMT:


  case ERA_T_FMT:


  case ALT_DIGITS:
# 642 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
  case _NL_MONETARY_CRNCYSTR:
# 686 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
  case RADIXCHAR:




  case THOUSEP:





  case __YESEXPR:


  case __NOEXPR:
# 709 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
  case CODESET:

   break;
  default:
   php_error_docref0(((void *)0), (1<<1L), "Item '" "%" "l" "d" "' is not valid", item);
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }


 value = nl_langinfo(item);
 if (value == ((void *)0)) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 } else {
  { do { const char *_s = (value); do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); } while (0); return; };
 }
}






void zif_strcoll(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *s1, *s2;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS", &s1, &s2) == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = strcoll((const char *) (s1)->val, (const char *) (s2)->val); (*(__z)).u1.type_info = 4; }; return; }
                                                  ;
}
# 750 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
static inline int php_charmask(unsigned char *input, size_t len, char *mask)
{
 unsigned char *end;
 unsigned char c;
 int result = SUCCESS;

 memset(mask, 0, 256);
 for (end = input+len; input < end; input++) {
  c=*input;
  if ((input+3 < end) && input[1] == '.' && input[2] == '.'
    && input[3] >= c) {
   memset(mask+c, 1, input[3] - c + 1);
   input+=3;
  } else if ((input+1 < end) && input[0] == '.' && input[1] == '.') {


   if (end-len >= input) {
    php_error_docref0(((void *)0), (1<<1L), "Invalid '..'-range, no character to the left of '..'");
    result = FAILURE;
    continue;
   }
   if (input+2 >= end) {
    php_error_docref0(((void *)0), (1<<1L), "Invalid '..'-range, no character to the right of '..'");
    result = FAILURE;
    continue;
   }
   if (input[-1] > input[2]) {
    php_error_docref0(((void *)0), (1<<1L), "Invalid '..'-range, '..'-range needs to be incrementing");
    result = FAILURE;
    continue;
   }

   php_error_docref0(((void *)0), (1<<1L), "Invalid '..'-range");
   result = FAILURE;
   continue;
  } else {
   mask[c]=1;
  }
 }
 return result;
}
# 799 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
__attribute__ ((visibility("default"))) zend_string *php_trim(zend_string *str, char *what, size_t what_len, int mode)
{
 const char *c = (str)->val;
 size_t len = (str)->len;
 register size_t i;
 size_t trimmed = 0;
 char mask[256];

 if (what) {
  if (what_len == 1) {
   char p = *what;
   if (mode & 1) {
    for (i = 0; i < len; i++) {
     if (c[i] == p) {
      trimmed++;
     } else {
      break;
     }
    }
    len -= trimmed;
    c += trimmed;
   }
   if (mode & 2) {
    if (len > 0) {
     i = len - 1;
     do {
      if (c[i] == p) {
       len--;
      } else {
       break;
      }
     } while (i-- != 0);
    }
   }
  } else {
   php_charmask((unsigned char*)what, what_len, mask);

   if (mode & 1) {
    for (i = 0; i < len; i++) {
     if (mask[(unsigned char)c[i]]) {
      trimmed++;
     } else {
      break;
     }
    }
    len -= trimmed;
    c += trimmed;
   }
   if (mode & 2) {
    if (len > 0) {
     i = len - 1;
     do {
      if (mask[(unsigned char)c[i]]) {
       len--;
      } else {
       break;
      }
     } while (i-- != 0);
    }
   }
  }
 } else {
  if (mode & 1) {
   for (i = 0; i < len; i++) {
    if ((unsigned char)c[i] <= ' ' &&
        (c[i] == ' ' || c[i] == '\n' || c[i] == '\r' || c[i] == '\t' || c[i] == '\v' || c[i] == '\0')) {
     trimmed++;
    } else {
     break;
    }
   }
   len -= trimmed;
   c += trimmed;
  }
  if (mode & 2) {
   if (len > 0) {
    i = len - 1;
    do {
     if ((unsigned char)c[i] <= ' ' &&
         (c[i] == ' ' || c[i] == '\n' || c[i] == '\r' || c[i] == '\t' || c[i] == '\v' || c[i] == '\0')) {
      len--;
     } else {
      break;
     }
    } while (i-- != 0);
   }
  }
 }

 if ((str)->len == len) {
  return zend_string_copy(str);
 } else {
  return zend_string_init(c, len, 0);
 }
}





static void php_do_trim(zend_execute_data *execute_data, zval *return_value, int mode)
{
 zend_string *str;
 zend_string *what = ((void *)0);






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &what, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 do { zval *__z = (return_value); zend_string *__s = (php_trim(str, (what ? (what)->val : ((void *)0)), (what ? (what)->len : 0), mode)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
}




void zif_trim(zend_execute_data *execute_data, zval *return_value)
{
 php_do_trim(execute_data, return_value, 3);
}




void zif_rtrim(zend_execute_data *execute_data, zval *return_value)
{
 php_do_trim(execute_data, return_value, 2);
}




void zif_ltrim(zend_execute_data *execute_data, zval *return_value)
{
 php_do_trim(execute_data, return_value, 1);
}




void zif_wordwrap(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *text;
 char *breakchar = "\n";
 size_t newtextlen, chk, breakchar_len = 1;
 size_t alloced;
 zend_long current = 0, laststart = 0, lastspace = 0;
 zend_long linelength = 75;
 zend_bool docut = 0;
 zend_string *newtext;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|lsb", &text, &linelength, &breakchar, &breakchar_len, &docut) == FAILURE) {
  return;
 }

 if ((text)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if (breakchar_len == 0) {
  php_error_docref0(((void *)0), (1<<1L), "Break string cannot be empty");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (linelength == 0 && docut) {
  php_error_docref0(((void *)0), (1<<1L), "Can't force cut when width is zero");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }



 if (breakchar_len == 1 && !docut) {
  newtext = zend_string_init((text)->val, (text)->len, 0);

  laststart = lastspace = 0;
  for (current = 0; current < (text)->len; current++) {
   if ((text)->val[current] == breakchar[0]) {
    laststart = lastspace = current + 1;
   } else if ((text)->val[current] == ' ') {
    if (current - laststart >= linelength) {
     (newtext)->val[current] = breakchar[0];
     laststart = current + 1;
    }
    lastspace = current;
   } else if (current - laststart >= linelength && laststart != lastspace) {
    (newtext)->val[lastspace] = breakchar[0];
    laststart = lastspace + 1;
   }
  }

  { do { zval *__z = (return_value); zend_string *__s = (newtext); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 } else {

  if (linelength > 0) {
   chk = (size_t)((text)->len/linelength + 1);
   newtext = zend_string_safe_alloc(chk, breakchar_len, (text)->len, 0);
   alloced = (text)->len + chk * breakchar_len + 1;
  } else {
   chk = (text)->len;
   alloced = (text)->len * (breakchar_len + 1) + 1;
   newtext = zend_string_safe_alloc((text)->len, breakchar_len + 1, 0, 0);
  }


  newtextlen = 0;

  laststart = lastspace = 0;
  for (current = 0; current < (text)->len; current++) {
   if (chk <= 0) {
    alloced += (size_t) ((((text)->len - current + 1)/linelength + 1) * breakchar_len) + 1;
    newtext = zend_string_extend(newtext, alloced, 0);
    chk = (size_t) (((text)->len - current)/linelength) + 1;
   }


   if ((text)->val[current] == breakchar[0]
    && current + breakchar_len < (text)->len
    && !strncmp((text)->val + current, breakchar, breakchar_len)) {
    memcpy((newtext)->val + newtextlen, (text)->val + laststart, current - laststart + breakchar_len);
    newtextlen += current - laststart + breakchar_len;
    current += breakchar_len - 1;
    laststart = lastspace = current + 1;
    chk--;
   }


   else if ((text)->val[current] == ' ') {
    if (current - laststart >= linelength) {
     memcpy((newtext)->val + newtextlen, (text)->val + laststart, current - laststart);
     newtextlen += current - laststart;
     memcpy((newtext)->val + newtextlen, breakchar, breakchar_len);
     newtextlen += breakchar_len;
     laststart = current + 1;
     chk--;
    }
    lastspace = current;
   }



   else if (current - laststart >= linelength
     && docut && laststart >= lastspace) {
    memcpy((newtext)->val + newtextlen, (text)->val + laststart, current - laststart);
    newtextlen += current - laststart;
    memcpy((newtext)->val + newtextlen, breakchar, breakchar_len);
    newtextlen += breakchar_len;
    laststart = lastspace = current;
    chk--;
   }



   else if (current - laststart >= linelength
     && laststart < lastspace) {
    memcpy((newtext)->val + newtextlen, (text)->val + laststart, lastspace - laststart);
    newtextlen += lastspace - laststart;
    memcpy((newtext)->val + newtextlen, breakchar, breakchar_len);
    newtextlen += breakchar_len;
    laststart = lastspace = lastspace + 1;
    chk--;
   }
  }


  if (laststart != current) {
   memcpy((newtext)->val + newtextlen, (text)->val + laststart, current - laststart);
   newtextlen += current - laststart;
  }

  (newtext)->val[newtextlen] = '\0';

  newtext = zend_string_truncate(newtext, newtextlen, 0);

  { do { zval *__z = (return_value); zend_string *__s = (newtext); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 }
}




__attribute__ ((visibility("default"))) void php_explode(const zend_string *delim, zend_string *str, zval *return_value, zend_long limit)
{
 char *p1 = (str)->val;
 char *endp = (str)->val + (str)->len;
 char *p2 = (char *) zend_memnstr((str)->val, (delim)->val, (delim)->len, endp);
 zval tmp;

 if (p2 == ((void *)0)) {
  do { zval *__z = (&tmp); zend_string *__s = (str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
  _zend_hash_next_index_insert_new((*(return_value)).value.arr, &tmp );
 } else {
  do {
   do { do { zval *__z = (&tmp); zend_string *__s = (zend_string_init(p1, p2 - p1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
   _zend_hash_next_index_insert_new((*(return_value)).value.arr, &tmp );
   p1 = p2 + (delim)->len;
   p2 = (char *) zend_memnstr(p1, (delim)->val, (delim)->len, endp);
  } while (p2 != ((void *)0) && --limit > 1);

  if (p1 <= endp) {
   do { do { zval *__z = (&tmp); zend_string *__s = (zend_string_init(p1, endp - p1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
   _zend_hash_next_index_insert_new((*(return_value)).value.arr, &tmp );
  }
 }
}




__attribute__ ((visibility("default"))) void php_explode_negative_limit(const zend_string *delim, zend_string *str, zval *return_value, zend_long limit)
{

 char *p1 = (str)->val;
 char *endp = (str)->val + (str)->len;
 char *p2 = (char *) zend_memnstr((str)->val, (delim)->val, (delim)->len, endp);
 zval tmp;

 if (p2 == ((void *)0)) {




 } else {
  size_t allocated = 64, found = 0;
  zend_long i, to_return;
  char **positions = (__builtin_constant_p((allocated * sizeof(char *)) ) ? (((allocated * sizeof(char *)) <= 8) ? _emalloc_8() : (((allocated * sizeof(char *)) <= 16) ? _emalloc_16() : (((allocated * sizeof(char *)) <= 24) ? _emalloc_24() : (((allocated * sizeof(char *)) <= 32) ? _emalloc_32() : (((allocated * sizeof(char *)) <= 40) ? _emalloc_40() : (((allocated * sizeof(char *)) <= 48) ? _emalloc_48() : (((allocated * sizeof(char *)) <= 56) ? _emalloc_56() : (((allocated * sizeof(char *)) <= 64) ? _emalloc_64() : (((allocated * sizeof(char *)) <= 80) ? _emalloc_80() : (((allocated * sizeof(char *)) <= 96) ? _emalloc_96() : (((allocated * sizeof(char *)) <= 112) ? _emalloc_112() : (((allocated * sizeof(char *)) <= 128) ? _emalloc_128() : (((allocated * sizeof(char *)) <= 160) ? _emalloc_160() : (((allocated * sizeof(char *)) <= 192) ? _emalloc_192() : (((allocated * sizeof(char *)) <= 224) ? _emalloc_224() : (((allocated * sizeof(char *)) <= 256) ? _emalloc_256() : (((allocated * sizeof(char *)) <= 320) ? _emalloc_320() : (((allocated * sizeof(char *)) <= 384) ? _emalloc_384() : (((allocated * sizeof(char *)) <= 448) ? _emalloc_448() : (((allocated * sizeof(char *)) <= 512) ? _emalloc_512() : (((allocated * sizeof(char *)) <= 640) ? _emalloc_640() : (((allocated * sizeof(char *)) <= 768) ? _emalloc_768() : (((allocated * sizeof(char *)) <= 896) ? _emalloc_896() : (((allocated * sizeof(char *)) <= 1024) ? _emalloc_1024() : (((allocated * sizeof(char *)) <= 1280) ? _emalloc_1280() : (((allocated * sizeof(char *)) <= 1536) ? _emalloc_1536() : (((allocated * sizeof(char *)) <= 1792) ? _emalloc_1792() : (((allocated * sizeof(char *)) <= 2048) ? _emalloc_2048() : (((allocated * sizeof(char *)) <= 2560) ? _emalloc_2560() : (((allocated * sizeof(char *)) <= 3072) ? _emalloc_3072() : (((allocated * sizeof(char *)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((allocated * sizeof(char *))) : _emalloc_huge((allocated * sizeof(char *)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((allocated * sizeof(char *)) ) );

  positions[found++] = p1;
  do {
   if (found >= allocated) {
    allocated = found + 64;
    positions = _erealloc((positions), (allocated*sizeof(char *)) );
   }
   positions[found++] = p1 = p2 + (delim)->len;
   p2 = (char *) zend_memnstr(p1, (delim)->val, (delim)->len, endp);
  } while (p2 != ((void *)0));

  to_return = limit + found;

  for (i = 0; i < to_return; i++) {
   do { do { zval *__z = (&tmp); zend_string *__s = (zend_string_init(positions[i], (positions[i+1] - (delim)->len) - positions[i], 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
   _zend_hash_next_index_insert_new((*(return_value)).value.arr, &tmp );
  }
  _efree((positions) );
 }

}




void zif_explode(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str, *delim;
 zend_long limit = (9223372036854775807L);
 zval tmp;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &delim, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &limit, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if ((delim)->len == 0) {
  php_error_docref0(((void *)0), (1<<1L), "Empty delimiter");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 _array_init((return_value), 0 );

 if ((str)->len == 0) {
    if (limit >= 0) {
   do { do { zval *__z = (&tmp); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   _zend_hash_index_add_new((*(return_value)).value.arr, 0, &tmp );
  }
  return;
 }

 if (limit > 1) {
  php_explode(delim, str, return_value, limit);
 } else if (limit < 0) {
  php_explode_negative_limit(delim, str, return_value, limit);
 } else {
  do { zval *__z = (&tmp); zend_string *__s = (str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
  _zend_hash_index_add_new((*(return_value)).value.arr, 0, &tmp );
 }
}
# 1207 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
__attribute__ ((visibility("default"))) void php_implode(const zend_string *delim, zval *arr, zval *return_value)
{
 zval *tmp;
 int numelems;
 zend_string *str;
 char *cptr;
 size_t len = 0;
 zend_string **strings, **strptr;

 numelems = ((*(arr)).value.arr)->nNumOfElements;

 if (numelems == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 } else if (numelems == 1) {

  do { Bucket *_p = ((*(arr)).value.arr)->arData; Bucket *_end = _p + ((*(arr)).value.arr)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; tmp = _z; {
   { do { zval *__z = (return_value); zend_string *__s = (_zval_get_string((tmp))); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
  } } } while (0);
 }

 strings = (__builtin_constant_p(((sizeof(zend_long) + sizeof(zend_string *)) * numelems) ) ? ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 8) ? _emalloc_8() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 16) ? _emalloc_16() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 24) ? _emalloc_24() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 32) ? _emalloc_32() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 40) ? _emalloc_40() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 48) ? _emalloc_48() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 56) ? _emalloc_56() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 64) ? _emalloc_64() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 80) ? _emalloc_80() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 96) ? _emalloc_96() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 112) ? _emalloc_112() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 128) ? _emalloc_128() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 160) ? _emalloc_160() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 192) ? _emalloc_192() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 224) ? _emalloc_224() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 256) ? _emalloc_256() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 320) ? _emalloc_320() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 384) ? _emalloc_384() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 448) ? _emalloc_448() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 512) ? _emalloc_512() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 640) ? _emalloc_640() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 768) ? _emalloc_768() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 896) ? _emalloc_896() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 1024) ? _emalloc_1024() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 1280) ? _emalloc_1280() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 1536) ? _emalloc_1536() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 1792) ? _emalloc_1792() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 2048) ? _emalloc_2048() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 2560) ? _emalloc_2560() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= 3072) ? _emalloc_3072() : ((((sizeof(zend_long) + sizeof(zend_string *)) * numelems) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large(((sizeof(zend_long) + sizeof(zend_string *)) * numelems)) : _emalloc_huge(((sizeof(zend_long) + sizeof(zend_string *)) * numelems))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc(((sizeof(zend_long) + sizeof(zend_string *)) * numelems) ) );
 strptr = strings - 1;

 do { Bucket *_p = ((*(arr)).value.arr)->arData; Bucket *_end = _p + ((*(arr)).value.arr)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; tmp = _z; {
  if (zval_get_type(&(*(tmp))) == 4) {
   double val = (*(tmp)).value.lval;
   *++strptr = ((void *)0);
   ((zend_long *) (strings + numelems))[strptr - strings] = (*(tmp)).value.lval;
   if (val < 0) {
    val = -10 * val;
   }
   if (val < 10) {
    len++;
   } else {
    len += (int) log10(10 * (double) val);
   }
  } else {
   *++strptr = _zval_get_string((tmp));
   len += (*strptr)->len;
  }
 } } } while (0);

 str = zend_string_safe_alloc(numelems - 1, (delim)->len, len, 0);
 cptr = (str)->val + (str)->len;
 *cptr = 0;

 do {
  if (*strptr) {
   cptr -= (*strptr)->len;
   memcpy(cptr, (*strptr)->val, (*strptr)->len);
   zend_string_release(*strptr);
  } else {
   char *oldPtr = cptr;
   char oldVal = *cptr;
   zend_long val = ((zend_long *) (strings + numelems))[strptr - strings];
   cptr = zend_print_long_to_buf(cptr, val);
   *oldPtr = oldVal;
  }

  cptr -= (delim)->len;
  memcpy(cptr, (delim)->val, (delim)->len);
 } while (--strptr > strings);

 if (*strptr) {
  memcpy((str)->val, (*strptr)->val, (*strptr)->len);
  zend_string_release(*strptr);
 } else {
  char *oldPtr = cptr;
  char oldVal = *cptr;
  zend_print_long_to_buf(cptr, ((zend_long *) (strings + numelems))[strptr - strings]);
  *oldPtr = oldVal;
 }

 _efree((strings) );
 { do { zval *__z = (return_value); zend_string *__s = (str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_implode(zend_execute_data *execute_data, zval *return_value)
{
 zval *arg1, *arg2 = ((void *)0), *arr;
 zend_string *delim;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &arg1, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &arg1, 0); }
  _optional = 1;
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &arg2, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &arg2, 0); }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (arg2 == ((void *)0)) {
  if (zval_get_type(&(*(arg1))) != 7) {
   php_error_docref0(((void *)0), (1<<1L), "Argument must be an array");
   return;
  }

  delim = (compiler_globals.empty_string);
  arr = arg1;
 } else {
  if (zval_get_type(&(*(arg1))) == 7) {
   delim = _zval_get_string((arg2));
   arr = arg1;
  } else if (zval_get_type(&(*(arg2))) == 7) {
   delim = _zval_get_string((arg1));
   arr = arg2;
  } else {
   php_error_docref0(((void *)0), (1<<1L), "Invalid arguments passed");
   return;
  }
 }

 php_implode(delim, arr, return_value);
 zend_string_release(delim);
}






void zif_strtok(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str, *tok = ((void *)0);
 char *token;
 char *token_end;
 char *p;
 char *pe;
 size_t skipped = 0;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &tok, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if ((execute_data)->This.u2.num_args == 1) {
  tok = str;
 } else {
  _zval_ptr_dtor((&(basic_globals.strtok_zval)) );
  do { do { zval *__z = (&(basic_globals.strtok_zval)); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  (basic_globals.strtok_last) = (basic_globals.strtok_string) = (((basic_globals.strtok_zval)).value.str)->val;
  (basic_globals.strtok_len) = (str)->len;
 }

 p = (basic_globals.strtok_last);
 pe = (basic_globals.strtok_string) + (basic_globals.strtok_len);

 if (!p || p >= pe) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 token = (tok)->val;
 token_end = token + (tok)->len;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 1;
 }


 while ((basic_globals.strtok_table)[(unsigned char) *p]) {
  if (++p >= pe) {

   (basic_globals.strtok_last) = ((void *)0);
   do { (*(return_value)).u1.type_info = 2; } while (0);
   goto restore;
  }
  skipped++;
 }


 while (++p < pe) {
  if ((basic_globals.strtok_table)[(unsigned char) *p]) {
   goto return_token;
  }
 }

 if (p - (basic_globals.strtok_last)) {
return_token:
  do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((basic_globals.strtok_last) + skipped, (p - (basic_globals.strtok_last)) - skipped, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  (basic_globals.strtok_last) = p + 1;
 } else {
  do { (*(return_value)).u1.type_info = 2; } while (0);
  (basic_globals.strtok_last) = ((void *)0);
 }


restore:
 token = (tok)->val;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 0;
 }
}




__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len)
{
 unsigned char *c, *e;

 c = (unsigned char *)s;
 e = (unsigned char *)c+len;

 while (c < e) {
  *c = toupper(*c);
  c++;
 }
 return s;
}




__attribute__ ((visibility("default"))) zend_string *php_string_toupper(zend_string *s)
{
 unsigned char *c, *e;

 c = (unsigned char *)(s)->val;
 e = c + (s)->len;

 while (c < e) {
  if (!((*__ctype_b_loc ())[(int) ((*c))] & (unsigned short int) _ISupper)) {
   register unsigned char *r;
   zend_string *res = zend_string_alloc((s)->len, 0);

   if (c != (unsigned char*)(s)->val) {
    memcpy((res)->val, (s)->val, c - (unsigned char*)(s)->val);
   }
   r = c + ((res)->val - (s)->val);
   while (c < e) {
    *r = toupper(*c);
    r++;
    c++;
   }
   *r = '\0';
   return res;
  }
  c++;
 }
 return zend_string_copy(s);
}




void zif_strtoupper(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *arg;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &arg, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 { do { zval *__z = (return_value); zend_string *__s = (php_string_toupper(arg)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len)
{
 unsigned char *c, *e;

 c = (unsigned char *)s;
 e = c+len;

 while (c < e) {
  *c = tolower(*c);
  c++;
 }
 return s;
}




__attribute__ ((visibility("default"))) zend_string *php_string_tolower(zend_string *s)
{
 unsigned char *c, *e;

 c = (unsigned char *)(s)->val;
 e = c + (s)->len;

 while (c < e) {
  if (!((*__ctype_b_loc ())[(int) ((*c))] & (unsigned short int) _ISlower)) {
   register unsigned char *r;
   zend_string *res = zend_string_alloc((s)->len, 0);

   if (c != (unsigned char*)(s)->val) {
    memcpy((res)->val, (s)->val, c - (unsigned char*)(s)->val);
   }
   r = c + ((res)->val - (s)->val);
   while (c < e) {
    *r = tolower(*c);
    r++;
    c++;
   }
   *r = '\0';
   return res;
  }
  c++;
 }
 return zend_string_copy(s);
}




void zif_strtolower(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 { do { zval *__z = (return_value); zend_string *__s = (php_string_tolower(str)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) zend_string *php_basename(const char *s, size_t len, char *suffix, size_t sufflen)
{
 char *c, *comp, *cend;
 size_t inc_len, cnt;
 int state;
 zend_string *ret;

 c = comp = cend = (char*)s;
 cnt = len;
 state = 0;
 while (cnt > 0) {
  inc_len = (*c == '\0' ? 1 : mblen(c, cnt));

  switch (inc_len) {
   case -2:
   case -1:
    inc_len = 1;
    (({ __typeof__ (mblen(((void *)0), 0)) __x = (mblen(((void *)0), 0)); (void) __x; }));
    break;
   case 0:
    goto quit_loop;
   case 1:



    if (*c == '/') {

     if (state == 1) {
      state = 0;
      cend = c;
     }
# 1599 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
    } else {
     if (state == 0) {
      comp = c;
      state = 1;
     }
    }
    break;
   default:
    if (state == 0) {
     comp = c;
     state = 1;
    }
    break;
  }
  c += inc_len;
  cnt -= inc_len;
 }

quit_loop:
 if (state == 1) {
  cend = c;
 }
 if (suffix != ((void *)0) && sufflen < (size_t)(cend - comp) &&
   memcmp(cend - sufflen, suffix, sufflen) == 0) {
  cend -= sufflen;
 }

 len = cend - comp;

 ret = zend_string_init(comp, len, 0);
 return ret;
}




void zif_basename(zend_execute_data *execute_data, zval *return_value)
{
 char *string, *suffix = ((void *)0);
 size_t string_len, suffix_len = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "s|s", &string, &string_len, &suffix, &suffix_len) == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_basename(string, string_len, suffix, suffix_len)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) size_t php_dirname(char *path, size_t len)
{
 return zend_dirname(path, len);
}




void zif_dirname(zend_execute_data *execute_data, zval *return_value)
{
 char *str;
 size_t str_len;
 zend_string *ret;
 zend_long levels = 1;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "s|l", &str, &str_len, &levels) == FAILURE) {
  return;
 }

 ret = zend_string_init(str, str_len, 0);

 if (levels == 1) {

  (ret)->len = zend_dirname((ret)->val, str_len);
 } else if (levels < 1) {
  php_error_docref0(((void *)0), (1<<1L), "Invalid argument, levels must be >= 1");
  zend_string_free(ret);
  return;
 } else {

  do {
   (ret)->len = zend_dirname((ret)->val, str_len = (ret)->len);
  } while ((ret)->len < str_len && --levels);
 }

 { do { zval *__z = (return_value); zend_string *__s = (ret); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_pathinfo(zend_execute_data *execute_data, zval *return_value)
{
 zval tmp;
 char *path, *dirname;
 size_t path_len;
 int have_basename;
 zend_long opt = (1 | 2 | 4 | 8);
 zend_string *ret = ((void *)0);

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "s|l", &path, &path_len, &opt) == FAILURE) {
  return;
 }

 have_basename = ((opt & 2) == 2);

 _array_init((&tmp), 0 );

 if ((opt & 1) == 1) {
  dirname = _estrndup((path), (path_len) );
  php_dirname(dirname, path_len);
  if (*dirname) {
   add_assoc_string_ex(&tmp, "dirname", strlen("dirname"), dirname);
  }
  _efree((dirname) );
 }

 if (have_basename) {
  ret = php_basename(path, path_len, ((void *)0), 0);
  add_assoc_str_ex(&tmp, "basename", strlen("basename"), zend_string_copy(ret));
 }

 if ((opt & 4) == 4) {
  const char *p;
  ptrdiff_t idx;

  if (!have_basename) {
   ret = php_basename(path, path_len, ((void *)0), 0);
  }

  p = zend_memrchr((ret)->val, '.', (ret)->len);

  if (p) {
   idx = p - (ret)->val;
   add_assoc_stringl_ex(&tmp, "extension", strlen("extension"), (ret)->val + idx + 1, (ret)->len - idx - 1);
  }
 }

 if ((opt & 8) == 8) {
  const char *p;
  ptrdiff_t idx;


  if (!have_basename && !ret) {
   ret = php_basename(path, path_len, ((void *)0), 0);
  }

  p = zend_memrchr((ret)->val, '.', (ret)->len);

  idx = p ? (p - (ret)->val) : (ret)->len;
  add_assoc_stringl_ex(&tmp, "filename", strlen("filename"), (ret)->val, idx);
 }

 if (ret) {
  zend_string_release(ret);
 }

 if (opt == (1 | 2 | 4 | 8)) {
  do { zval *_z1 = (return_value); const zval *_z2 = (&tmp); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 } else {
  zval *element;
  if ((element = zend_hash_get_current_data_ex((tmp).value.arr, &((tmp).value.arr)->nInternalPointer)) != ((void *)0)) {
   do { if (__builtin_expect(!!((zval_get_type(&(*(element))) == 10)), 0)) { (element) = &(*(element)).value.ref->val; } } while (0);
   do { zval *_z1 = (return_value); const zval *_z2 = (element); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
  } else {
   do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
  }
  _zval_ptr_dtor((&tmp) );
 }
}




__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len)
{
 php_strtolower(s, s_len);
 php_strtolower(t, t_len);
 return (char*)zend_memnstr(s, t, t_len, s + s_len);
}




__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p = s1, *spanp;
 register char c = *p;

cont:
 for (spanp = s2; p != s1_end && spanp != s2_end;) {
  if (*spanp++ == c) {
   c = *(++p);
   goto cont;
  }
 }
 return (p - s1);
}




__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p, *spanp;
 register char c = *s1;

 for (p = s1;;) {
  spanp = s2;
  do {
   if (*spanp == c || p == s1_end) {
    return p - s1;
   }
  } while (spanp++ < (s2_end - 1));
  c = *++p;
 }

}




static int php_needle_char(zval *needle, char *target)
{
 switch (zval_get_type(&(*(needle)))) {
  case 4:
   *target = (char)(*(needle)).value.lval;
   return SUCCESS;
  case 1:
  case 2:
   *target = '\0';
   return SUCCESS;
  case 3:
   *target = '\1';
   return SUCCESS;
  case 5:
   *target = (char)(int)(*(needle)).value.dval;
   return SUCCESS;
  case 8:
   *target = (char) _zval_get_long((needle));
   return SUCCESS;
  default:
   php_error_docref0(((void *)0), (1<<1L), "needle is not a string or an integer");
   return FAILURE;
 }
}




void zif_stristr(zend_execute_data *execute_data, zval *return_value)
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void *)0);
 size_t found_offset;
 char *haystack_dup;
 char needle_char[2];
 zend_bool part = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sz|b", &haystack, &needle, &part) == FAILURE) {
  return;
 }

 haystack_dup = _estrndup(((haystack)->val), ((haystack)->len) );

 if (zval_get_type(&(*(needle))) == 6) {
  char *orig_needle;
  if (!((*(needle)).value.str)->len) {
   php_error_docref0(((void *)0), (1<<1L), "Empty needle");
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  orig_needle = _estrndup((((*(needle)).value.str)->val), (((*(needle)).value.str)->len) );
  found = php_stristr(haystack_dup, orig_needle, (haystack)->len, ((*(needle)).value.str)->len);
  _efree((orig_needle) );
 } else {
  if (php_needle_char(needle, needle_char) != SUCCESS) {
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = php_stristr(haystack_dup, needle_char, (haystack)->len, 1);
 }

 if (found) {
  found_offset = found - haystack_dup;
  if (part) {
   do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((haystack)->val, found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  } else {
   do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((haystack)->val + found_offset, (haystack)->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
  }
 } else {
  do { (*(return_value)).u1.type_info = 2; } while (0);
 }

 _efree((haystack_dup) );
}




void zif_strstr(zend_execute_data *execute_data, zval *return_value)
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void *)0);
 char needle_char[2];
 zend_long found_offset;
 zend_bool part = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sz|b", &haystack, &needle, &part) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(needle))) == 6) {
  if (!((*(needle)).value.str)->len) {
   php_error_docref0(((void *)0), (1<<1L), "Empty needle");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }

  found = (char*)zend_memnstr((haystack)->val, ((*(needle)).value.str)->val, ((*(needle)).value.str)->len, (haystack)->val + (haystack)->len);
 } else {
  if (php_needle_char(needle, needle_char) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = (char*)zend_memnstr((haystack)->val, needle_char, 1, (haystack)->val + (haystack)->len);
 }

 if (found) {
  found_offset = found - (haystack)->val;
  if (part) {
   { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((haystack)->val, found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
  } else {
   { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(found, (haystack)->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
  }
 }
 { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
}
# 1950 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
void zif_strpos(zend_execute_data *execute_data, zval *return_value)
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void *)0);
 char needle_char[2];
 zend_long offset = 0;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &haystack, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &needle, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &needle, 0); }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &offset, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (offset < 0 || (size_t)offset > (haystack)->len) {
  php_error_docref0(((void *)0), (1<<1L), "Offset not contained in string");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (zval_get_type(&(*(needle))) == 6) {
  if (!((*(needle)).value.str)->len) {
   php_error_docref0(((void *)0), (1<<1L), "Empty needle");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }

  found = (char*)zend_memnstr((haystack)->val + offset,
                   ((*(needle)).value.str)->val,
                   ((*(needle)).value.str)->len,
                   (haystack)->val + (haystack)->len);
 } else {
  if (php_needle_char(needle, needle_char) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = (char*)zend_memnstr((haystack)->val + offset,
       needle_char,
       1,
                      (haystack)->val + (haystack)->len);
 }

 if (found) {
  { { zval *__z = (return_value); (*(__z)).value.lval = found - (haystack)->val; (*(__z)).u1.type_info = 4; }; return; };
 } else {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
}




void zif_stripos(zend_execute_data *execute_data, zval *return_value)
{
 char *found = ((void *)0);
 zend_string *haystack;
 zend_long offset = 0;
 char needle_char[2];
 zval *needle;
 zend_string *needle_dup = ((void *)0), *haystack_dup;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sz|l", &haystack, &needle, &offset) == FAILURE) {
  return;
 }

 if (offset < 0 || (size_t)offset > (haystack)->len) {
  php_error_docref0(((void *)0), (1<<1L), "Offset not contained in string");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((haystack)->len == 0) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (zval_get_type(&(*(needle))) == 6) {
  if (((*(needle)).value.str)->len == 0 || ((*(needle)).value.str)->len > (haystack)->len) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }

  haystack_dup = php_string_tolower(haystack);
  needle_dup = php_string_tolower((*(needle)).value.str);
  found = (char*)zend_memnstr((haystack_dup)->val + offset,
    (needle_dup)->val, (needle_dup)->len, (haystack_dup)->val + (haystack)->len);
 } else {
  if (php_needle_char(needle, needle_char) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  haystack_dup = php_string_tolower(haystack);
  needle_char[0] = tolower(needle_char[0]);
  needle_char[1] = '\0';
  found = (char*)zend_memnstr((haystack_dup)->val + offset,
       needle_char,
       sizeof(needle_char) - 1,
       (haystack_dup)->val + (haystack)->len);
 }


 if (found) {
  { zval *__z = (return_value); (*(__z)).value.lval = found - (haystack_dup)->val; (*(__z)).u1.type_info = 4; };
 } else {
  do { (*(return_value)).u1.type_info = 2; } while (0);
 }

 zend_string_release(haystack_dup);
 if (needle_dup) {
  zend_string_release(needle_dup);
 }
}




void zif_strrpos(zend_execute_data *execute_data, zval *return_value)
{
 zval *zneedle;
 char *needle;
 zend_string *haystack;
 size_t needle_len;
 zend_long offset = 0;
 char *p, *e, ord_needle[2];
 char *found;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &haystack, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &zneedle, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &zneedle, 0); }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &offset, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } { do { (*(return_value)).u1.type_info = 2; } while (0); return; }; } } while (0);


 if (zval_get_type(&(*(zneedle))) == 6) {
  needle = ((*(zneedle)).value.str)->val;
  needle_len = ((*(zneedle)).value.str)->len;
 } else {
  if (php_needle_char(zneedle, ord_needle) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  ord_needle[1] = '\0';
  needle = ord_needle;
  needle_len = 1;
 }

 if (((haystack)->len == 0) || (needle_len == 0)) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (offset >= 0) {
  if ((size_t)offset > (haystack)->len) {
   php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  p = (haystack)->val + (size_t)offset;
  e = (haystack)->val + (haystack)->len;
 } else {
  if (offset < -2147483647 || (size_t)(-offset) > (haystack)->len) {
   php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  p = (haystack)->val;
  if (-offset < needle_len) {
   e = (haystack)->val + (haystack)->len;
  } else {
   e = (haystack)->val + (haystack)->len + offset + needle_len;
  }
 }

 if ((found = (char *)zend_memnrstr(p, needle, needle_len, e))) {
  { { zval *__z = (return_value); (*(__z)).value.lval = found - (haystack)->val; (*(__z)).u1.type_info = 4; }; return; };
 }

 { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
}




void zif_strripos(zend_execute_data *execute_data, zval *return_value)
{
 zval *zneedle;
 zend_string *needle;
 zend_string *haystack;
 zend_long offset = 0;
 char *p, *e;
 char *found;
 zend_string *needle_dup, *haystack_dup, *ord_needle = ((void *)0);
 zend_bool use_heap;;


 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sz|l", &haystack, &zneedle, &offset) == FAILURE) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 do { (ord_needle) = (zend_string *)(((use_heap) = (__builtin_expect(!!((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) > ((32 * 1024))), 0))) ? (__builtin_constant_p((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) ) ? (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 8) ? _emalloc_8() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 16) ? _emalloc_16() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 24) ? _emalloc_24() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 32) ? _emalloc_32() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 40) ? _emalloc_40() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 48) ? _emalloc_48() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 56) ? _emalloc_56() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 64) ? _emalloc_64() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 80) ? _emalloc_80() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 96) ? _emalloc_96() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 112) ? _emalloc_112() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 128) ? _emalloc_128() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 160) ? _emalloc_160() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 192) ? _emalloc_192() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 224) ? _emalloc_224() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 256) ? _emalloc_256() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 320) ? _emalloc_320() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 384) ? _emalloc_384() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 448) ? _emalloc_448() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 512) ? _emalloc_512() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 640) ? _emalloc_640() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 768) ? _emalloc_768() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 896) ? _emalloc_896() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1024) ? _emalloc_1024() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1280) ? _emalloc_1280() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1536) ? _emalloc_1536() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1792) ? _emalloc_1792() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 2048) ? _emalloc_2048() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 2560) ? _emalloc_2560() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 3072) ? _emalloc_3072() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L)))) : _emalloc_huge((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L))) ) ) : __builtin_alloca (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + 1 + 1)) + ((8) - 1L)) & ~((8) - 1L)))); (ord_needle)->gc.refcount = 1; (ord_needle)->gc.u.type_info = 6; zend_string_forget_hash_val(ord_needle); (ord_needle)->len = 1; } while (0);
 if (zval_get_type(&(*(zneedle))) == 6) {
  needle = (*(zneedle)).value.str;
 } else {
  if (php_needle_char(zneedle, (ord_needle)->val) != SUCCESS) {
   do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  (ord_needle)->val[1] = '\0';
  needle = ord_needle;
 }

 if (((haystack)->len == 0) || ((needle)->len == 0)) {
  do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((needle)->len == 1) {


  if (offset >= 0) {
   if ((size_t)offset > (haystack)->len) {
    do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
    php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
    { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
   }
   p = (haystack)->val + (size_t)offset;
   e = (haystack)->val + (haystack)->len - 1;
  } else {
   p = (haystack)->val;
   if (offset < -2147483647 || (size_t)(-offset) > (haystack)->len) {
    do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
    php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
    { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
   }
   e = (haystack)->val + (haystack)->len + (size_t)offset;
  }

  *(ord_needle)->val = tolower(*(needle)->val);
  while (e >= p) {
   if (tolower(*e) == *(ord_needle)->val) {
    do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
    { { zval *__z = (return_value); (*(__z)).value.lval = e - p + (offset > 0 ? offset : 0); (*(__z)).u1.type_info = 4; }; return; };
   }
   e--;
  }
  do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 haystack_dup = php_string_tolower(haystack);
 if (offset >= 0) {
  if ((size_t)offset > (haystack)->len) {
   zend_string_release(haystack_dup);
   do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
   php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  p = (haystack_dup)->val + offset;
  e = (haystack_dup)->val + (haystack)->len;
 } else {
  if (offset < -2147483647 || (size_t)(-offset) > (haystack)->len) {
   zend_string_release(haystack_dup);
   do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
   php_error_docref0(((void *)0), (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  p = (haystack_dup)->val;
  if (-offset < (needle)->len) {
   e = (haystack_dup)->val + (haystack)->len;
  } else {
   e = (haystack_dup)->val + (haystack)->len + offset + (needle)->len;
  }
 }

 needle_dup = php_string_tolower(needle);
 if ((found = (char *)zend_memnrstr(p, (needle_dup)->val, (needle_dup)->len, e))) {
  { zval *__z = (return_value); (*(__z)).value.lval = found - (haystack_dup)->val; (*(__z)).u1.type_info = 4; };
  zend_string_release(needle_dup);
  zend_string_release(haystack_dup);
  do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
 } else {
  zend_string_release(needle_dup);
  zend_string_release(haystack_dup);
  do { if (__builtin_expect(!!(use_heap), 0)) _efree((ord_needle) ); } while (0);
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
}




void zif_strrchr(zend_execute_data *execute_data, zval *return_value)
{
 zval *needle;
 zend_string *haystack;
 const char *found = ((void *)0);
 zend_long found_offset;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sz", &haystack, &needle) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(needle))) == 6) {
  found = zend_memrchr((haystack)->val, *((*(needle)).value.str)->val, (haystack)->len);
 } else {
  char needle_chr;
  if (php_needle_char(needle, &needle_chr) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }

  found = zend_memrchr((haystack)->val, needle_chr, (haystack)->len);
 }

 if (found) {
  found_offset = found - (haystack)->val;
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(found, (haystack)->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
 } else {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
}




static zend_string *php_chunk_split(char *src, size_t srclen, char *end, size_t endlen, size_t chunklen)
{
 char *p, *q;
 size_t chunks;
 size_t restlen;
 size_t out_len;
 zend_string *dest;

 chunks = srclen / chunklen;
 restlen = srclen - chunks * chunklen;

 if (chunks > 2147483647 - 1) {
  return ((void *)0);
 }
 out_len = chunks + 1;
 if (endlen !=0 && out_len > 2147483647/endlen) {
  return ((void *)0);
 }
 out_len *= endlen;
 if (out_len > 2147483647 - srclen - 1) {
  return ((void *)0);
 }
 out_len += srclen + 1;

 dest = zend_string_alloc(out_len * sizeof(char), 0);

 for (p = src, q = (dest)->val; p < (src + srclen - chunklen + 1); ) {
  memcpy(q, p, chunklen);
  q += chunklen;
  memcpy(q, end, endlen);
  q += endlen;
  p += chunklen;
 }

 if (restlen) {
  memcpy(q, p, restlen);
  q += restlen;
  memcpy(q, end, endlen);
  q += endlen;
 }

 *q = '\0';
 (dest)->len = q - (dest)->val;

 return dest;
}




void zif_chunk_split(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 char *end = "\r\n";
 size_t endlen = 2;
 zend_long chunklen = 76;
 zend_string *result;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|ls", &str, &chunklen, &end, &endlen) == FAILURE) {
  return;
 }

 if (chunklen <= 0) {
  php_error_docref0(((void *)0), (1<<1L), "Chunk length should be greater than zero");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((size_t)chunklen > (str)->len) {

  result = zend_string_safe_alloc((str)->len, 1, endlen, 0);
  memcpy((result)->val, (str)->val, (str)->len);
  memcpy((result)->val + (str)->len, end, endlen);
  (result)->val[(result)->len] = '\0';
  { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 }

 if (!(str)->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 result = php_chunk_split((str)->val, (str)->len, end, endlen, (size_t)chunklen);

 if (result) {
  { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 } else {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
}




void zif_substr(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 zend_long l = 0, f;
 int argc = (execute_data)->This.u2.num_args;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &f, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &l, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (argc > 2) {
  if ((l < 0 && (size_t)(-l) > (str)->len)) {
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  } else if (l > (zend_long)(str)->len) {
   l = (str)->len;
  }
 } else {
  l = (str)->len;
 }

 if (f > (zend_long)(str)->len) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 } else if (f < 0 && -f > (str)->len) {
  f = 0;
 }

 if (l < 0 && (l + (zend_long)(str)->len - f) < 0) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }




 if (f < 0) {
  f = (zend_long)(str)->len + f;
  if (f < 0) {
   f = 0;
  }
 }




 if (l < 0) {
  l = ((zend_long)(str)->len - f) + l;
  if (l < 0) {
   l = 0;
  }
 }

 if (f > (zend_long)(str)->len) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((f + l) > (zend_long)(str)->len) {
  l = (str)->len - f;
 }

 { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val + f, l, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
}




void zif_substr_replace(zend_execute_data *execute_data, zval *return_value)
{
 zval *str;
 zval *from;
 zval *len = ((void *)0);
 zval *repl;
 zend_long l = 0;
 zend_long f;
 int argc = (execute_data)->This.u2.num_args;
 zend_string *result;
 HashPosition from_idx, repl_idx, len_idx;
 zval *tmp_str = ((void *)0), *tmp_from = ((void *)0), *tmp_repl = ((void *)0), *tmp_len= ((void *)0);

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "zzz|z/", &str, &repl, &from, &len) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(str))) != 7) {
  if (zval_get_type(&(*(str)))!=6) { if (zval_get_type(&(*(str))) != 6) { _convert_to_string((str) ); }; };
 }
 if (zval_get_type(&(*(repl))) != 7) {
  if (zval_get_type(&(*(repl)))!=6) { if (zval_get_type(&(*(repl))) != 6) { _convert_to_string((repl) ); }; };
 }
 if (zval_get_type(&(*(from))) != 7) {
  if (zval_get_type(&(*(from)))!=4) { convert_to_long(from); };
 }

 if (argc > 3) {
  if (zval_get_type(&(*(len))) != 7) {
   if (zval_get_type(&(*(len)))!=4) { convert_to_long(len); };
   l = _zval_get_long((len));
  }
 } else {
  if (zval_get_type(&(*(str))) != 7) {
   l = ((*(str)).value.str)->len;
  }
 }

 if (zval_get_type(&(*(str))) == 6) {
  if (
   (argc == 3 && zval_get_type(&(*(from))) == 7) ||
   (argc == 4 && zval_get_type(&(*(from))) != zval_get_type(&(*(len))))
  ) {
   php_error_docref0(((void *)0), (1<<1L), "'start' and 'length' should be of same type - numerical or array ");
   { do { zval *__z = (return_value); zend_string *__s = ((*(str)).value.str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
  }
  if (argc == 4 && zval_get_type(&(*(from))) == 7) {
   if (((*(from)).value.arr)->nNumOfElements != ((*(len)).value.arr)->nNumOfElements) {
    php_error_docref0(((void *)0), (1<<1L), "'start' and 'length' should have the same number of elements");
    { do { zval *__z = (return_value); zend_string *__s = ((*(str)).value.str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
   }
  }
 }

 if (zval_get_type(&(*(str))) != 7) {
  if (zval_get_type(&(*(from))) != 7) {
   zend_string *repl_str;
   zend_bool repl_release = 0;
   f = (*(from)).value.lval;




   if (f < 0) {
    f = (zend_long)((*(str)).value.str)->len + f;
    if (f < 0) {
     f = 0;
    }
   } else if (f > ((*(str)).value.str)->len) {
    f = ((*(str)).value.str)->len;
   }



   if (l < 0) {
    l = ((zend_long)((*(str)).value.str)->len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if (l > ((*(str)).value.str)->len || (l < 0 && (size_t)(-l) > ((*(str)).value.str)->len)) {
    l = ((*(str)).value.str)->len;
   }

   if ((f + l) > (zend_long)((*(str)).value.str)->len) {
    l = ((*(str)).value.str)->len - f;
   }
   if (zval_get_type(&(*(repl))) == 7) {
    repl_idx = 0;
    while (repl_idx < (*(repl)).value.arr->nNumUsed) {
     tmp_repl = &(*(repl)).value.arr->arData[repl_idx].val;
     if (zval_get_type(&(*(tmp_repl))) != 0) {
      break;
     }
     repl_idx++;
    }
    if (repl_idx < (*(repl)).value.arr->nNumUsed) {
     repl_str = _zval_get_string((tmp_repl));
     repl_release = 1;
    } else {
     repl_str = (compiler_globals.empty_string);
    }
   } else {
    repl_str = (*(repl)).value.str;
   }

   result = zend_string_alloc(((*(str)).value.str)->len - l + (repl_str)->len, 0);

   memcpy((result)->val, ((*(str)).value.str)->val, f);
   if ((repl_str)->len) {
    memcpy(((result)->val + f), (repl_str)->val, (repl_str)->len);
   }
   memcpy(((result)->val + f + (repl_str)->len), ((*(str)).value.str)->val + f + l, ((*(str)).value.str)->len - f - l);
   (result)->val[(result)->len] = '\0';
   if (repl_release) {
    zend_string_release(repl_str);
   }
   { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
  } else {
   php_error_docref0(((void *)0), (1<<1L), "Functionality of 'start' and 'length' as arrays is not implemented");
   { do { zval *__z = (return_value); zend_string *__s = ((*(str)).value.str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
  }
 } else {
  zend_string *str_index = ((void *)0);
  size_t result_len;
  zend_ulong num_index;

  _array_init((return_value), 0 );

  from_idx = len_idx = repl_idx = 0;

  do { Bucket *_p = ((*(str)).value.arr)->arData; Bucket *_end = _p + ((*(str)).value.arr)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; num_index = _p->h; str_index = _p->key; tmp_str = _z; {
   zend_string *orig_str = _zval_get_string((tmp_str));

   if (zval_get_type(&(*(from))) == 7) {
    while (from_idx < (*(from)).value.arr->nNumUsed) {
     tmp_from = &(*(from)).value.arr->arData[from_idx].val;
     if (zval_get_type(&(*(tmp_from))) != 0) {
      break;
     }
     from_idx++;
    }
    if (from_idx < (*(from)).value.arr->nNumUsed) {
     f = _zval_get_long((tmp_from));

     if (f < 0) {
      f = (zend_long)(orig_str)->len + f;
      if (f < 0) {
       f = 0;
      }
     } else if (f > (zend_long)(orig_str)->len) {
      f = (orig_str)->len;
     }
     from_idx++;
    } else {
     f = 0;
    }
   } else {
    f = (*(from)).value.lval;
    if (f < 0) {
     f = (zend_long)(orig_str)->len + f;
     if (f < 0) {
      f = 0;
     }
    } else if (f > (zend_long)(orig_str)->len) {
     f = (orig_str)->len;
    }
   }

   if (argc > 3 && zval_get_type(&(*(len))) == 7) {
    while (len_idx < (*(len)).value.arr->nNumUsed) {
     tmp_len = &(*(len)).value.arr->arData[len_idx].val;
     if (zval_get_type(&(*(tmp_len))) != 0) {
      break;
     }
     len_idx++;
    }
    if (len_idx < (*(len)).value.arr->nNumUsed) {
     l = _zval_get_long((tmp_len));
     len_idx++;
    } else {
     l = (orig_str)->len;
    }
   } else if (argc > 3) {
    l = (*(len)).value.lval;
   } else {
    l = (orig_str)->len;
   }

   if (l < 0) {
    l = ((orig_str)->len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if ((f + l) > (zend_long)(orig_str)->len) {
    l = (orig_str)->len - f;
   }

   result_len = (orig_str)->len - l;

   if (zval_get_type(&(*(repl))) == 7) {
    while (repl_idx < (*(repl)).value.arr->nNumUsed) {
     tmp_repl = &(*(repl)).value.arr->arData[repl_idx].val;
     if (zval_get_type(&(*(tmp_repl))) != 0) {
      break;
     }
     repl_idx++;
    }
    if (repl_idx < (*(repl)).value.arr->nNumUsed) {
     zend_string *repl_str = _zval_get_string((tmp_repl));

     result_len += (repl_str)->len;
     repl_idx++;
     result = zend_string_alloc(result_len, 0);

     memcpy((result)->val, (orig_str)->val, f);
     memcpy(((result)->val + f), (repl_str)->val, (repl_str)->len);
     memcpy(((result)->val + f + (repl_str)->len), (orig_str)->val + f + l, (orig_str)->len - f - l);
     zend_string_release(repl_str);
    } else {
     result = zend_string_alloc(result_len, 0);

     memcpy((result)->val, (orig_str)->val, f);
     memcpy(((result)->val + f), (orig_str)->val + f + l, (orig_str)->len - f - l);
    }
   } else {
    result_len += ((*(repl)).value.str)->len;

    result = zend_string_alloc(result_len, 0);

    memcpy((result)->val, (orig_str)->val, f);
    memcpy(((result)->val + f), ((*(repl)).value.str)->val, ((*(repl)).value.str)->len);
    memcpy(((result)->val + f + ((*(repl)).value.str)->len), (orig_str)->val + f + l, (orig_str)->len - f - l);
   }

   (result)->val[(result)->len] = '\0';

   if (str_index) {
    zval tmp;

    do { zval *__z = (&tmp); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
    zend_symtable_update((*(return_value)).value.arr, str_index, &tmp);
   } else {
    add_index_str(return_value, num_index, result);
   }

   zend_string_release(orig_str);
  } } } while (0);
 }
}




void zif_quotemeta(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *old;
 char *old_end;
 char *p, *q;
 char c;
 zend_string *str;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &old) == FAILURE) {
  return;
 }

 old_end = (old)->val + (old)->len;

 if ((old)->val == old_end) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 str = zend_string_safe_alloc(2, (old)->len, 0, 0);

 for (p = (old)->val, q = (str)->val; p != old_end; p++) {
  c = *p;
  switch (c) {
   case '.':
   case '\\':
   case '+':
   case '*':
   case '?':
   case '[':
   case '^':
   case ']':
   case '$':
   case '(':
   case ')':
    *q++ = '\\';

   default:
    *q++ = c;
  }
 }

 *q = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (zend_string_truncate(str, q - (str)->val, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_ord(zend_execute_data *execute_data, zval *return_value)
{
 char *str;
 size_t str_len;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_string(_arg, &str, &str_len, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 { { zval *__z = (return_value); (*(__z)).value.lval = (unsigned char) str[0]; (*(__z)).u1.type_info = 4; }; return; };
}




void zif_chr(zend_execute_data *execute_data, zval *return_value)
{
 zend_long c;

 if ((execute_data)->This.u2.num_args != 1) {
  { zend_wrong_param_count(); return; };
 }






 do { const int _flags = ((1<<1)); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_long(_arg, &c, &_dummy, 0, 0)), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } c = 0; } } while (0);


 c &= 0xff;
 if ((compiler_globals.one_char_string)[c]) {
  do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.one_char_string)[c]); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0);
 } else {
  do { zval *__z = (return_value); zend_string *__s = (zend_string_alloc(1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
  ((*(return_value)).value.str)->val[0] = (char)c;
  ((*(return_value)).value.str)->val[1] = '\0';
 }
}




static void php_ucfirst(char *str)
{
 register char *r;
 r = str;
 *r = toupper((unsigned char) *r);
}




void zif_ucfirst(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (!(str)->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 php_ucfirst(((*(return_value)).value.str)->val);
}




static void php_lcfirst(char *str)
{
 register char *r;
 r = str;
 *r = tolower((unsigned char) *r);
}




void zif_lcfirst(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &str) == FAILURE) {
  return;
 }

 if (!(str)->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 php_lcfirst(((*(return_value)).value.str)->val);
}




void zif_ucwords(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 char *delims = " \t\r\n\f\v";
 register char *r, *r_end;
 size_t delims_len = 6;
 char mask[256];






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_string(_arg, &delims, &delims_len, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (!(str)->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 php_charmask((unsigned char *)delims, delims_len, mask);

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 r = ((*(return_value)).value.str)->val;

 *r = toupper((unsigned char) *r);
 for (r_end = r + ((*(return_value)).value.str)->len - 1; r < r_end; ) {
  if (mask[(unsigned char)*r++]) {
   *r = toupper((unsigned char) *r);
  }
 }
}




__attribute__ ((visibility("default"))) char *php_strtr(char *str, size_t len, char *str_from, char *str_to, size_t trlen)
{
 size_t i;

 if (__builtin_expect(!!(trlen < 1), 0)) {
  return str;
 } else if (trlen == 1) {
  char ch_from = *str_from;
  char ch_to = *str_to;

  for (i = 0; i < len; i++) {
   if (str[i] == ch_from) {
    str[i] = ch_to;
   }
  }
 } else {
  unsigned char xlat[256], j = 0;

  do { xlat[j] = j; } while (++j != 0);

  for (i = 0; i < trlen; i++) {
   xlat[(size_t)(unsigned char) str_from[i]] = str_to[i];
  }

  for (i = 0; i < len; i++) {
   str[i] = xlat[(size_t)(unsigned char) str[i]];
  }
 }

 return str;
}




static zend_string *php_strtr_ex(zend_string *str, char *str_from, char *str_to, size_t trlen)
{
 zend_string *new_str = ((void *)0);
 size_t i;

 if (__builtin_expect(!!(trlen < 1), 0)) {
  return zend_string_copy(str);
 } else if (trlen == 1) {
  char ch_from = *str_from;
  char ch_to = *str_to;

  for (i = 0; i < (str)->len; i++) {
   if ((str)->val[i] == ch_from) {
    new_str = zend_string_alloc((str)->len, 0);
    memcpy((new_str)->val, (str)->val, i);
    (new_str)->val[i] = ch_to;
    break;
   }
  }
  for (; i < (str)->len; i++) {
   (new_str)->val[i] = ((str)->val[i] != ch_from) ? (str)->val[i] : ch_to;
  }
 } else {
  unsigned char xlat[256], j = 0;

  do { xlat[j] = j; } while (++j != 0);

  for (i = 0; i < trlen; i++) {
   xlat[(size_t)(unsigned char) str_from[i]] = str_to[i];
  }

  for (i = 0; i < (str)->len; i++) {
   if ((str)->val[i] != xlat[(size_t)(unsigned char) (str)->val[i]]) {
    new_str = zend_string_alloc((str)->len, 0);
    memcpy((new_str)->val, (str)->val, i);
    (new_str)->val[i] = xlat[(size_t)(unsigned char) (str)->val[i]];
    break;
   }
  }

  for (;i < (str)->len; i++) {
   (new_str)->val[i] = xlat[(size_t)(unsigned char) (str)->val[i]];
  }
 }

 if (!new_str) {
  return zend_string_copy(str);
 }

 (new_str)->val[(new_str)->len] = 0;
 return new_str;
}



static void php_strtr_array(zval *return_value, zend_string *input, HashTable *pats)
{
 char *str = (input)->val;
 size_t slen = (input)->len;
 zend_ulong num_key;
 zend_string *str_key;
 size_t len, pos, old_pos;
 int num_keys = 0;
 size_t minlen = 128*1024;
 size_t maxlen = 0;
 HashTable str_hash;
 zval *entry;
 char *key;
 smart_str result = {0};
 zend_ulong bitset[256/sizeof(zend_ulong)];
 zend_ulong *num_bitset;


 num_bitset = _ecalloc(((slen + sizeof(zend_ulong)) / sizeof(zend_ulong)), (sizeof(zend_ulong)) );
 memset(bitset, 0, sizeof(bitset));


 do { Bucket *_p = (pats)->arData; Bucket *_end = _p + (pats)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; str_key = _p->key; {
  if (__builtin_expect(!!(!str_key), 0)) {
   num_keys = 1;
  } else {
   len = (str_key)->len;
   if (__builtin_expect(!!(len < 1), 0)) {
    { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
   } else if (__builtin_expect(!!(len > slen), 0)) {

    continue;
   }
   if (len > maxlen) {
    maxlen = len;
   }
   if (len < minlen) {
    minlen = len;
   }

   num_bitset[len / sizeof(zend_ulong)] |= 1UL << (len % sizeof(zend_ulong));
   bitset[((unsigned char)(str_key)->val[0]) / sizeof(zend_ulong)] |= 1UL << (((unsigned char)(str_key)->val[0]) % sizeof(zend_ulong));
  }
 } } } while (0);

 if (__builtin_expect(!!(num_keys), 0)) {
  zend_string *key_used;

  _zend_hash_init((&str_hash), ((pats)->nNumOfElements), (((void *)0)), (0) );
  do { Bucket *_p = (pats)->arData; Bucket *_end = _p + (pats)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; num_key = _p->h; str_key = _p->key; entry = _z; {
   if (__builtin_expect(!!(!str_key), 0)) {
    key_used = zend_long_to_str(num_key);
    len = (key_used)->len;
    if (__builtin_expect(!!(len > slen), 0)) {

     continue;
    }
    if (len > maxlen) {
     maxlen = len;
    }
    if (len < minlen) {
     minlen = len;
    }

    num_bitset[len / sizeof(zend_ulong)] |= 1UL << (len % sizeof(zend_ulong));
    bitset[((unsigned char)(key_used)->val[0]) / sizeof(zend_ulong)] |= 1UL << (((unsigned char)(key_used)->val[0]) % sizeof(zend_ulong));
   } else {
    key_used = str_key;
    len = (key_used)->len;
    if (__builtin_expect(!!(len > slen), 0)) {

     continue;
    }
   }
   _zend_hash_add(&str_hash, key_used, entry );
   if (__builtin_expect(!!(!str_key), 0)) {
    zend_string_release(key_used);
   }
  } } } while (0);
  pats = &str_hash;
 }

 if (__builtin_expect(!!(minlen > maxlen), 0)) {

  if (pats == &str_hash) {
   zend_hash_destroy(&str_hash);
  }
  _efree((num_bitset) );
  { do { zval *__z = (return_value); zend_string *__s = (input); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
 }

 old_pos = pos = 0;
 while (pos <= slen - minlen) {
  key = str + pos;
  if (bitset[((unsigned char)key[0]) / sizeof(zend_ulong)] & (1UL << (((unsigned char)key[0]) % sizeof(zend_ulong)))) {
   len = maxlen;
   if (len > slen - pos) {
    len = slen - pos;
   }
   while (len >= minlen) {
    if ((num_bitset[len / sizeof(zend_ulong)] & (1UL << (len % sizeof(zend_ulong))))) {
     entry = zend_hash_str_find(pats, key, len);
     if (entry != ((void *)0)) {
      zend_string *s = _zval_get_string((entry));
      smart_str_appendl_ex((&result), (str + old_pos), (pos - old_pos), 0);
      smart_str_append_ex((&result), (s), 0);
      old_pos = pos + len;
      pos = old_pos - 1;
      zend_string_release(s);
      break;
     }
    }
    len--;
   }
  }
  pos++;
 }

 if (result.s) {
  smart_str_appendl_ex((&result), (str + old_pos), (slen - old_pos), 0);
  smart_str_0(&result);
  do { zval *__z = (return_value); zend_string *__s = (result.s); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 } else {
  smart_str_free(&result);
  do { zval *__z = (return_value); zend_string *__s = (input); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
 }

 if (pats == &str_hash) {
  zend_hash_destroy(&str_hash);
 }
 _efree((num_bitset) );
}




static zend_string* php_char_to_str_ex(zend_string *str, char from, char *to, size_t to_len, int case_sensitivity, zend_long *replace_count)
{
 zend_string *result;
 size_t char_count = 0;
 char lc_from = 0;
 char *source, *target, *source_end= (str)->val + (str)->len;

 if (case_sensitivity) {
  char *p = (str)->val, *e = p + (str)->len;
  while ((p = memchr(p, from, (e - p)))) {
   char_count++;
   p++;
  }
 } else {
  lc_from = tolower(from);
  for (source = (str)->val; source < source_end; source++) {
   if (tolower(*source) == lc_from) {
    char_count++;
   }
  }
 }

 if (char_count == 0) {
  return zend_string_copy(str);
 }

 if (to_len > 0) {
  result = zend_string_safe_alloc(char_count, to_len - 1, (str)->len, 0);
 } else {
  result = zend_string_alloc((str)->len - char_count, 0);
 }
 target = (result)->val;

 if (case_sensitivity) {
  char *p = (str)->val, *e = p + (str)->len, *s = (str)->val;
  while ((p = memchr(p, from, (e - p)))) {
   memcpy(target, s, (p - s));
   target += p - s;
   memcpy(target, to, to_len);
   target += to_len;
   p++;
   s = p;
   if (replace_count) {
    *replace_count += 1;
   }
  }
  if (s < e) {
   memcpy(target, s, (e - s));
   target += e - s;
  }
 } else {
  for (source = (str)->val; source < source_end; source++) {
   if (tolower(*source) == lc_from) {
    if (replace_count) {
     *replace_count += 1;
    }
    memcpy(target, to, to_len);
    target += to_len;
   } else {
    *target = *source;
    target++;
   }
  }
 }
 *target = 0;
 return result;
}




static zend_string *php_str_to_str_ex(zend_string *haystack,
 char *needle, size_t needle_len, char *str, size_t str_len, zend_long *replace_count)
{
 zend_string *new_str;

 if (needle_len < (haystack)->len) {
  char *end;
  char *e, *s, *p, *r;

  if (needle_len == str_len) {
   new_str = ((void *)0);
   end = (haystack)->val + (haystack)->len;
   for (p = (haystack)->val; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
    if (!new_str) {
     new_str = zend_string_init((haystack)->val, (haystack)->len, 0);
    }
    memcpy((new_str)->val + (r - (haystack)->val), str, str_len);
    (*replace_count)++;
   }
   if (!new_str) {
    goto nothing_todo;
   }
   return new_str;
  } else {
   size_t count = 0;
   char *o = (haystack)->val;
   char *n = needle;
   char *endp = o + (haystack)->len;

   while ((o = (char*)zend_memnstr(o, n, needle_len, endp))) {
    o += needle_len;
    count++;
   }
   if (count == 0) {

    goto nothing_todo;
   }
   if (str_len > needle_len) {
    new_str = zend_string_safe_alloc(count, str_len - needle_len, (haystack)->len, 0);
   } else {
    new_str = zend_string_alloc(count * (str_len - needle_len) + (haystack)->len, 0);
   }

   e = s = (new_str)->val;
   end = (haystack)->val + (haystack)->len;
   for (p = (haystack)->val; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
    memcpy(e, p, r - p);
    e += r - p;
    memcpy(e, str, str_len);
    e += str_len;
    (*replace_count)++;
   }

   if (p < end) {
    memcpy(e, p, end - p);
    e += end - p;
   }

   *e = '\0';
   return new_str;
  }
 } else if (needle_len > (haystack)->len || memcmp((haystack)->val, needle, (haystack)->len)) {
nothing_todo:
  return zend_string_copy(haystack);
 } else {
  new_str = zend_string_init(str, str_len, 0);
  (*replace_count)++;
  return new_str;
 }
}




static zend_string *php_str_to_str_i_ex(zend_string *haystack, char *lc_haystack,
 zend_string *needle, char *str, size_t str_len, zend_long *replace_count)
{
 zend_string *new_str = ((void *)0);
 zend_string *lc_needle;

 if ((needle)->len < (haystack)->len) {
  char *end;
  char *e, *s, *p, *r;

  if ((needle)->len == str_len) {
   lc_needle = php_string_tolower(needle);
   end = lc_haystack + (haystack)->len;
   for (p = lc_haystack; (r = (char*)zend_memnstr(p, (lc_needle)->val, (lc_needle)->len, end)); p = r + (lc_needle)->len) {
    if (!new_str) {
     new_str = zend_string_init((haystack)->val, (haystack)->len, 0);
    }
    memcpy((new_str)->val + (r - lc_haystack), str, str_len);
    (*replace_count)++;
   }
   zend_string_release(lc_needle);

   if (!new_str) {
    goto nothing_todo;
   }
   return new_str;
  } else {
   size_t count = 0;
   char *o = lc_haystack;
   char *n;
   char *endp = o + (haystack)->len;

   lc_needle = php_string_tolower(needle);
   n = (lc_needle)->val;

   while ((o = (char*)zend_memnstr(o, n, (lc_needle)->len, endp))) {
    o += (lc_needle)->len;
    count++;
   }
   if (count == 0) {

    zend_string_release(lc_needle);
    goto nothing_todo;
   }

   if (str_len > (lc_needle)->len) {
    new_str = zend_string_safe_alloc(count, str_len - (lc_needle)->len, (haystack)->len, 0);
   } else {
    new_str = zend_string_alloc(count * (str_len - (lc_needle)->len) + (haystack)->len, 0);
   }

   e = s = (new_str)->val;
   end = lc_haystack + (haystack)->len;

   for (p = lc_haystack; (r = (char*)zend_memnstr(p, (lc_needle)->val, (lc_needle)->len, end)); p = r + (lc_needle)->len) {
    memcpy(e, (haystack)->val + (p - lc_haystack), r - p);
    e += r - p;
    memcpy(e, str, str_len);
    e += str_len;
    (*replace_count)++;
   }

   if (p < end) {
    memcpy(e, (haystack)->val + (p - lc_haystack), end - p);
    e += end - p;
   }
   *e = '\0';

   zend_string_release(lc_needle);

   return new_str;
  }
 } else if ((needle)->len > (haystack)->len) {
nothing_todo:
  return zend_string_copy(haystack);
 } else {
  lc_needle = php_string_tolower(needle);

  if (memcmp(lc_haystack, (lc_needle)->val, (lc_needle)->len)) {
   zend_string_release(lc_needle);
   goto nothing_todo;
  }
  zend_string_release(lc_needle);

  new_str = zend_string_init(str, str_len, 0);

  (*replace_count)++;
  return new_str;
 }
}




__attribute__ ((visibility("default"))) zend_string *php_str_to_str(char *haystack, size_t length, char *needle, size_t needle_len, char *str, size_t str_len)
{
 zend_string *new_str;

 if (needle_len < length) {
  char *end;
  char *e, *s, *p, *r;

  if (needle_len == str_len) {
   new_str = zend_string_init(haystack, length, 0);
   end = (new_str)->val + length;
   for (p = (new_str)->val; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
    memcpy(r, str, str_len);
   }
   return new_str;
  } else {
   if (str_len < needle_len) {
    new_str = zend_string_alloc(length, 0);
   } else {
    size_t count = 0;
    char *o = haystack;
    char *n = needle;
    char *endp = o + length;

    while ((o = (char*)zend_memnstr(o, n, needle_len, endp))) {
     o += needle_len;
     count++;
    }
    if (count == 0) {

     new_str = zend_string_init(haystack, length, 0);
     return new_str;
    } else {
     if (str_len > needle_len) {
      new_str = zend_string_safe_alloc(count, str_len - needle_len, length, 0);
     } else {
      new_str = zend_string_alloc(count * (str_len - needle_len) + length, 0);
     }
    }
   }

   e = s = (new_str)->val;
   end = haystack + length;
   for (p = haystack; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
    memcpy(e, p, r - p);
    e += r - p;
    memcpy(e, str, str_len);
    e += str_len;
   }

   if (p < end) {
    memcpy(e, p, end - p);
    e += end - p;
   }

   *e = '\0';
   new_str = zend_string_truncate(new_str, e - s, 0);
   return new_str;
  }
 } else if (needle_len > length || memcmp(haystack, needle, length)) {
  new_str = zend_string_init(haystack, length, 0);
  return new_str;
 } else {
  new_str = zend_string_init(str, str_len, 0);

  return new_str;
 }
}




void zif_strtr(zend_execute_data *execute_data, zval *return_value)
{
 zval *from;
 zend_string *str;
 char *to = ((void *)0);
 size_t to_len = 0;
 int ac = (execute_data)->This.u2.num_args;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &from, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &from, 0); }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_string(_arg, &to, &to_len, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if (ac == 2 && zval_get_type(&(*(from))) != 7) {
  php_error_docref0(((void *)0), (1<<1L), "The second argument is not an array");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }


 if ((str)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if (ac == 2) {
  HashTable *pats = (*(from)).value.arr;

  if ((pats)->nNumOfElements < 1) {
   { do { zval *__z = (return_value); zend_string *__s = (str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
  } else if ((pats)->nNumOfElements == 1) {
   zend_long num_key;
   zend_string *str_key, *replace;
   zval *entry, tmp;

   do { Bucket *_p = (pats)->arData; Bucket *_end = _p + (pats)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; num_key = _p->h; str_key = _p->key; entry = _z; {
    do { (*(&tmp)).u1.type_info = 0; } while (0);
    if (__builtin_expect(!!(!str_key), 0)) {
     { zval *__z = (&tmp); (*(__z)).value.lval = num_key; (*(__z)).u1.type_info = 4; };
     if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); };
     str_key = (tmp).value.str;
    }
    replace = _zval_get_string((entry));
    if ((str_key)->len < 1) {
     do { zval *__z = (return_value); zend_string *__s = (str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
    } else if ((str_key)->len == 1) {
     do { zval *__z = (return_value); zend_string *__s = (php_char_to_str_ex(str, (str_key)->val[0], (replace)->val, (replace)->len, 1, ((void *)0))); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)




              ;
    } else {
     zend_long dummy;
     do { zval *__z = (return_value); zend_string *__s = (php_str_to_str_ex(str, (str_key)->val, (str_key)->len, (replace)->val, (replace)->len, &dummy)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)

                                                      ;
    }
    zend_string_release(replace);
    _zval_dtor((&tmp) );
    return;
   } } } while (0);
  } else {
   php_strtr_array(return_value, str, pats);
  }
 } else {
  if (zval_get_type(&(*(from)))!=6) { if (zval_get_type(&(*(from))) != 6) { _convert_to_string((from) ); }; };

  { do { zval *__z = (return_value); zend_string *__s = (php_strtr_ex(str, ((*(from)).value.str)->val, to, (((((*(from)).value.str)->len)<(to_len))?(((*(from)).value.str)->len):(to_len)))); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; }


                                     ;
 }
}




void zif_strrev(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 char *e, *p;
 zend_string *n;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &str) == FAILURE) {
  return;
 }

 n = zend_string_alloc((str)->len, 0);
 p = (n)->val;

 e = (str)->val + (str)->len;

 while (--e >= (str)->val) {
  *p++ = *e;
 }

 *p = '\0';

 do { zval *__z = (return_value); zend_string *__s = (n); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
}




static void php_similar_str(const char *txt1, size_t len1, const char *txt2, size_t len2, size_t *pos1, size_t *pos2, size_t *max)
{
 char *p, *q;
 char *end1 = (char *) txt1 + len1;
 char *end2 = (char *) txt2 + len2;
 size_t l;

 *max = 0;
 for (p = (char *) txt1; p < end1; p++) {
  for (q = (char *) txt2; q < end2; q++) {
   for (l = 0; (p + l < end1) && (q + l < end2) && (p[l] == q[l]); l++);
   if (l > *max) {
    *max = l;
    *pos1 = p - txt1;
    *pos2 = q - txt2;
   }
  }
 }
}




static size_t php_similar_char(const char *txt1, size_t len1, const char *txt2, size_t len2)
{
 size_t sum;
 size_t pos1 = 0, pos2 = 0, max;

 php_similar_str(txt1, len1, txt2, len2, &pos1, &pos2, &max);
 if ((sum = max)) {
  if (pos1 && pos2) {
   sum += php_similar_char(txt1, pos1,
         txt2, pos2);
  }
  if ((pos1 + max < len1) && (pos2 + max < len2)) {
   sum += php_similar_char(txt1 + pos1 + max, len1 - pos1 - max,
         txt2 + pos2 + max, len2 - pos2 - max);
  }
 }

 return sum;
}




void zif_similar_text(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *t1, *t2;
 zval *percent = ((void *)0);
 int ac = (execute_data)->This.u2.num_args;
 size_t sim;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS|z/", &t1, &t2, &percent) == FAILURE) {
  return;
 }

 if (ac > 2) {
  if (zval_get_type(&(*(percent)))!=5) { convert_to_double(percent); };
 }

 if ((t1)->len + (t2)->len == 0) {
  if (ac > 2) {
   (*(percent)).value.dval = 0;
  }

  { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
 }

 sim = php_similar_char((t1)->val, (t1)->len, (t2)->val, (t2)->len);

 if (ac > 2) {
  (*(percent)).value.dval = sim * 200.0 / ((t1)->len + (t2)->len);
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = sim; (*(__z)).u1.type_info = 4; }; return; };
}





__attribute__ ((visibility("default"))) void php_stripslashes(zend_string *str)
{
 char *s, *t;
 size_t l;

 s = (str)->val;
 t = (str)->val;
 l = (str)->len;

 while (l > 0) {
  if (*t == '\\') {
   t++;
   (str)->len--;
   l--;
   if (l > 0) {
    if (*t == '0') {
     *s++='\0';
     t++;
    } else {
     *s++ = *t++;
    }
    l--;
   }
  } else {
   *s++ = *t++;
   l--;
  }
 }
 if (s != t) {
  *s = '\0';
 }
}




void zif_addcslashes(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str, *what;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS", &str, &what) == FAILURE) {
  return;
 }

 if ((str)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if ((what)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_addcslashes(str, 0, (what)->val, (what)->len)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_addslashes(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 if ((str)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_addslashes(str, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_stripcslashes(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &str) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 php_stripcslashes((*(return_value)).value.str);
}




void zif_stripslashes(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &str) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((str)->val, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 php_stripslashes((*(return_value)).value.str);
}
# 3765 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
__attribute__ ((visibility("default"))) void php_stripcslashes(zend_string *str)
{
 char *source, *target, *end;
 size_t nlen = (str)->len, i;
 char numtmp[4];

 for (source = (char*)(str)->val, end = source + (str)->len, target = (str)->val; source < end; source++) {
  if (*source == '\\' && source + 1 < end) {
   source++;
   switch (*source) {
    case 'n': *target++='\n'; nlen--; break;
    case 'r': *target++='\r'; nlen--; break;
    case 'a': *target++='\a'; nlen--; break;
    case 't': *target++='\t'; nlen--; break;
    case 'v': *target++='\v'; nlen--; break;
    case 'b': *target++='\b'; nlen--; break;
    case 'f': *target++='\f'; nlen--; break;
    case '\\': *target++='\\'; nlen--; break;
    case 'x':
     if (source+1 < end && ((*__ctype_b_loc ())[(int) (((int)(*(source+1))))] & (unsigned short int) _ISxdigit)) {
      numtmp[0] = *++source;
      if (source+1 < end && ((*__ctype_b_loc ())[(int) (((int)(*(source+1))))] & (unsigned short int) _ISxdigit)) {
       numtmp[1] = *++source;
       numtmp[2] = '\0';
       nlen-=3;
      } else {
       numtmp[1] = '\0';
       nlen-=2;
      }
      *target++=(char)strtol(numtmp, ((void *)0), 16);
      break;
     }

    default:
     i=0;
     while (source < end && *source >= '0' && *source <= '7' && i<3) {
      numtmp[i++] = *source++;
     }
     if (i) {
      numtmp[i]='\0';
      *target++=(char)strtol(numtmp, ((void *)0), 8);
      nlen-=i;
      source--;
     } else {
      *target++=*source;
      nlen--;
     }
   }
  } else {
   *target++=*source;
  }
 }

 if (nlen != 0) {
  *target='\0';
 }

 (str)->len = nlen;
}




__attribute__ ((visibility("default"))) zend_string *php_addcslashes(zend_string *str, int should_free, char *what, size_t wlength)
{
 char flags[256];
 char *source, *target;
 char *end;
 char c;
 size_t newlen;
 zend_string *new_str = zend_string_safe_alloc(4, (str)->len, 0, 0);

 php_charmask((unsigned char *)what, wlength, flags);

 for (source = (char*)(str)->val, end = source + (str)->len, target = (new_str)->val; source < end; source++) {
  c = *source;
  if (flags[(unsigned char)c]) {
   if ((unsigned char) c < 32 || (unsigned char) c > 126) {
    *target++ = '\\';
    switch (c) {
     case '\n': *target++ = 'n'; break;
     case '\t': *target++ = 't'; break;
     case '\r': *target++ = 'r'; break;
     case '\a': *target++ = 'a'; break;
     case '\v': *target++ = 'v'; break;
     case '\b': *target++ = 'b'; break;
     case '\f': *target++ = 'f'; break;
     default: target += php_sprintf(target, "%03o", (unsigned char) c);
    }
    continue;
   }
   *target++ = '\\';
  }
  *target++ = c;
 }
 *target = 0;
 newlen = target - (new_str)->val;
 if (newlen < (str)->len * 4) {
  new_str = zend_string_truncate(new_str, newlen, 0);
 }
 if (should_free) {
  zend_string_release(str);
 }
 return new_str;
}




__attribute__ ((visibility("default"))) zend_string *php_addslashes(zend_string *str, int should_free)
{

 char *source, *target;
 char *end;
 size_t offset;
 zend_string *new_str;

 if (!str) {
  return (compiler_globals.empty_string);
 }

 source = (str)->val;
 end = source + (str)->len;

 while (source < end) {
  switch (*source) {
   case '\0':
   case '\'':
   case '\"':
   case '\\':
    goto do_escape;
   default:
    source++;
    break;
  }
 }

 if (!should_free) {
  return zend_string_copy(str);
 }

 return str;

do_escape:
 offset = source - (char *)(str)->val;
 new_str = zend_string_safe_alloc(2, (str)->len - offset, offset, 0);
 memcpy((new_str)->val, (str)->val, offset);
 target = (new_str)->val + offset;

 while (source < end) {
  switch (*source) {
   case '\0':
    *target++ = '\\';
    *target++ = '0';
    break;
   case '\'':
   case '\"':
   case '\\':
    *target++ = '\\';

   default:
    *target++ = *source;
    break;
  }

  source++;
 }

 *target = 0;
 if (should_free) {
  zend_string_release(str);
 }

 if ((new_str)->len - (target - (new_str)->val) > 16) {
  new_str = zend_string_truncate(new_str, target - (new_str)->val, 0);
 } else {
  (new_str)->len = target - (new_str)->val;
 }

 return new_str;
}
# 3956 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
static zend_long php_str_replace_in_subject(zval *search, zval *replace, zval *subject, zval *result, int case_sensitivity)
{
 zval *search_entry,
    *replace_entry = ((void *)0);
 zend_string *tmp_result,
    *replace_entry_str = ((void *)0);
 char *replace_value = ((void *)0);
 size_t replace_len = 0;
 zend_long replace_count = 0;
 zend_string *subject_str;
 zend_string *lc_subject_str = ((void *)0);
 uint32_t replace_idx;


 subject_str = _zval_get_string((subject));
 if ((subject_str)->len == 0) {
  zend_string_release(subject_str);
  do { do { zval *__z = (result); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
  return 0;
 }


 if (zval_get_type(&(*(search))) == 7) {

  do { zval *__z = (result); zend_string *__s = (subject_str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);

  if (zval_get_type(&(*(replace))) == 7) {
   replace_idx = 0;
  } else {

   replace_value = ((*(replace)).value.str)->val;
   replace_len = ((*(replace)).value.str)->len;
  }


  do { Bucket *_p = ((*(search)).value.arr)->arData; Bucket *_end = _p + ((*(search)).value.arr)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; search_entry = _z; {

   zend_string *search_str = _zval_get_string((search_entry));
   if ((search_str)->len == 0) {
    if (zval_get_type(&(*(replace))) == 7) {
     replace_idx++;
    }
    zend_string_release(search_str);
    continue;
   }


   if (zval_get_type(&(*(replace))) == 7) {

    while (replace_idx < (*(replace)).value.arr->nNumUsed) {
     replace_entry = &(*(replace)).value.arr->arData[replace_idx].val;
     if (zval_get_type(&(*(replace_entry))) != 0) {
      break;
     }
     replace_idx++;
    }
    if (replace_idx < (*(replace)).value.arr->nNumUsed) {

     replace_entry_str = _zval_get_string((replace_entry));


     replace_value = (replace_entry_str)->val;
     replace_len = (replace_entry_str)->len;

     replace_idx++;
    } else {

     replace_value = "";
     replace_len = 0;
    }
   }

   if ((search_str)->len == 1) {
    zend_long old_replace_count = replace_count;

    tmp_result = php_char_to_str_ex((*(result)).value.str,
        (search_str)->val[0],
        replace_value,
        replace_len,
        case_sensitivity,
        &replace_count);
    if (lc_subject_str && replace_count != old_replace_count) {
     zend_string_release(lc_subject_str);
     lc_subject_str = ((void *)0);
    }
   } else if ((search_str)->len > 1) {
    if (case_sensitivity) {
     tmp_result = php_str_to_str_ex((*(result)).value.str,
       (search_str)->val, (search_str)->len,
       replace_value, replace_len, &replace_count);
    } else {
     zend_long old_replace_count = replace_count;

     if (!lc_subject_str) {
      lc_subject_str = php_string_tolower((*(result)).value.str);
     }
     tmp_result = php_str_to_str_i_ex((*(result)).value.str, (lc_subject_str)->val,
       search_str, replace_value, replace_len, &replace_count);
     if (replace_count != old_replace_count) {
      zend_string_release(lc_subject_str);
      lc_subject_str = ((void *)0);
     }
    }
   }

   zend_string_release(search_str);

   if (replace_entry_str) {
    zend_string_release(replace_entry_str);
    replace_entry_str = ((void *)0);
   }
   zend_string_release((*(result)).value.str);
   do { zval *__z = (result); zend_string *__s = (tmp_result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);

   if (((*(result)).value.str)->len == 0) {
    if (lc_subject_str) {
     zend_string_release(lc_subject_str);
    }
    zend_string_release(subject_str);
    return replace_count;
   }
  } } } while (0);
  if (lc_subject_str) {
   zend_string_release(lc_subject_str);
  }
 } else {
  do { if (__builtin_expect(!(zval_get_type(&(*(search))) == 6), 0)) __builtin_unreachable(); } while (0);
  if (((*(search)).value.str)->len == 1) {
   do { zval *__z = (result); zend_string *__s = (php_char_to_str_ex(subject_str, ((*(search)).value.str)->val[0], ((*(replace)).value.str)->val, ((*(replace)).value.str)->len, case_sensitivity, &replace_count)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)





                       ;
  } else if (((*(search)).value.str)->len > 1) {
   if (case_sensitivity) {
    do { zval *__z = (result); zend_string *__s = (php_str_to_str_ex(subject_str, ((*(search)).value.str)->val, ((*(search)).value.str)->len, ((*(replace)).value.str)->val, ((*(replace)).value.str)->len, &replace_count)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)

                                                                ;
   } else {
    lc_subject_str = php_string_tolower(subject_str);
    do { zval *__z = (result); zend_string *__s = (php_str_to_str_i_ex(subject_str, (lc_subject_str)->val, (*(search)).value.str, ((*(replace)).value.str)->val, ((*(replace)).value.str)->len, &replace_count)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)

                                                                ;
    zend_string_release(lc_subject_str);
   }
  } else {
   do { zval *__z = (result); zend_string *__s = (subject_str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
  }
 }
 zend_string_release(subject_str);
 return replace_count;
}




static void php_str_replace_common(zend_execute_data *execute_data, zval *return_value, int case_sensitivity)
{
 zval *subject, *search, *replace, *subject_entry, *zcount = ((void *)0);
 zval result;
 zend_string *string_key;
 zend_ulong num_key;
 zend_long count = 0;
 int argc = (execute_data)->This.u2.num_args;






 do { const int _flags = (0); int _min_num_args = (3); int _max_num_args = (4); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &search, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &search, 0); }
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &replace, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &replace, 0); }
  if (0) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &subject, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &subject, 0); }
  _optional = 1;
  if (1) { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (1) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; zend_parse_arg_zval_deref(_arg, &zcount, 0); } else { ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional && __builtin_expect(!!(_i >_num_args), 0)) break; _real_arg++; zend_parse_arg_zval(_real_arg, &zcount, 0); }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);



 if (zval_get_type(&(*(search))) != 7) {
  if (zval_get_type(&(*(search)))!=6) { if (zval_get_type(&(*(search))) != 6) { _convert_to_string((search) ); }; };
  if (zval_get_type(&(*(replace))) != 6) {
   if (zval_get_type(&(*(replace)))!=6) { if (zval_get_type(&(*(replace))) != 6) { _convert_to_string((replace) ); }; };
  }
 } else if (zval_get_type(&(*(replace))) != 7) {
  if (zval_get_type(&(*(replace)))!=6) { if (zval_get_type(&(*(replace))) != 6) { _convert_to_string((replace) ); }; };
 }


 if (zval_get_type(&(*(subject))) == 7) {
  _array_init((return_value), 0 );



  do { Bucket *_p = ((*(subject)).value.arr)->arData; Bucket *_end = _p + ((*(subject)).value.arr)->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; num_key = _p->h; string_key = _p->key; subject_entry = _z; {
   do { if (__builtin_expect(!!((zval_get_type(&(*(subject_entry))) == 10)), 0)) { (subject_entry) = &(*(subject_entry)).value.ref->val; } } while (0);
   if (zval_get_type(&(*(subject_entry))) != 7 && zval_get_type(&(*(subject_entry))) != 8) {
    count += php_str_replace_in_subject(search, replace, subject_entry, &result, case_sensitivity);
   } else {
    do { zval *_z1 = (&result); const zval *_z2 = (subject_entry); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
   }

   if (string_key) {
    _zend_hash_add_new((*(return_value)).value.arr, string_key, &result );
   } else {
    _zend_hash_index_add_new((*(return_value)).value.arr, num_key, &result );
   }
  } } } while (0);
 } else {
  count = php_str_replace_in_subject(search, replace, subject, return_value, case_sensitivity);
 }
 if (argc > 3) {
  _zval_ptr_dtor((zcount) );
  { zval *__z = (zcount); (*(__z)).value.lval = count; (*(__z)).u1.type_info = 4; };
 }
}




void zif_str_replace(zend_execute_data *execute_data, zval *return_value)
{
 php_str_replace_common(execute_data, return_value, 1);
}




void zif_str_ireplace(zend_execute_data *execute_data, zval *return_value)
{
 php_str_replace_common(execute_data, return_value, 0);
}







static void php_hebrev(zend_execute_data *execute_data, zval *return_value, int convert_newlines)
{
 char *str;
 char *heb_str, *tmp, *target;
 size_t block_start, block_end, block_type, block_length, i;
 zend_long max_chars=0;
 size_t begin, end, char_count, orig_begin;
 size_t str_len;
 zend_string *broken_str;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "s|l", &str, &str_len, &max_chars) == FAILURE) {
  return;
 }

 if (str_len == 0) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 tmp = str;
 block_start=block_end=0;

 heb_str = (char *) (__builtin_constant_p((str_len+1) ) ? (((str_len+1) <= 8) ? _emalloc_8() : (((str_len+1) <= 16) ? _emalloc_16() : (((str_len+1) <= 24) ? _emalloc_24() : (((str_len+1) <= 32) ? _emalloc_32() : (((str_len+1) <= 40) ? _emalloc_40() : (((str_len+1) <= 48) ? _emalloc_48() : (((str_len+1) <= 56) ? _emalloc_56() : (((str_len+1) <= 64) ? _emalloc_64() : (((str_len+1) <= 80) ? _emalloc_80() : (((str_len+1) <= 96) ? _emalloc_96() : (((str_len+1) <= 112) ? _emalloc_112() : (((str_len+1) <= 128) ? _emalloc_128() : (((str_len+1) <= 160) ? _emalloc_160() : (((str_len+1) <= 192) ? _emalloc_192() : (((str_len+1) <= 224) ? _emalloc_224() : (((str_len+1) <= 256) ? _emalloc_256() : (((str_len+1) <= 320) ? _emalloc_320() : (((str_len+1) <= 384) ? _emalloc_384() : (((str_len+1) <= 448) ? _emalloc_448() : (((str_len+1) <= 512) ? _emalloc_512() : (((str_len+1) <= 640) ? _emalloc_640() : (((str_len+1) <= 768) ? _emalloc_768() : (((str_len+1) <= 896) ? _emalloc_896() : (((str_len+1) <= 1024) ? _emalloc_1024() : (((str_len+1) <= 1280) ? _emalloc_1280() : (((str_len+1) <= 1536) ? _emalloc_1536() : (((str_len+1) <= 1792) ? _emalloc_1792() : (((str_len+1) <= 2048) ? _emalloc_2048() : (((str_len+1) <= 2560) ? _emalloc_2560() : (((str_len+1) <= 3072) ? _emalloc_3072() : (((str_len+1) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((str_len+1)) : _emalloc_huge((str_len+1))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((str_len+1) ) );
 target = heb_str+str_len;
 *target = 0;
 target--;

 block_length=0;

 if ((((((unsigned char) *tmp) >= 224) && (((unsigned char) *tmp) <= 250)) ? 1 : 0)) {
  block_type = 2;
 } else {
  block_type = 1;
 }

 do {
  if (block_type == 2) {
   while (((((((unsigned char) (int)*(tmp+1)) >= 224) && (((unsigned char) (int)*(tmp+1)) <= 250)) ? 1 : 0) || (((((unsigned char) (int)*(tmp+1)) == ' ' || ((unsigned char) (int)*(tmp+1)) == '\t')) ? 1 : 0) || ((*__ctype_b_loc ())[(int) (((int)*(tmp+1)))] & (unsigned short int) _ISpunct) || (int)*(tmp+1)=='\n' ) && block_end<str_len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   for (i = block_start+1; i<= block_end+1; i++) {
    *target = str[i-1];
    switch (*target) {
     case '(':
      *target = ')';
      break;
     case ')':
      *target = '(';
      break;
     case '[':
      *target = ']';
      break;
     case ']':
      *target = '[';
      break;
     case '{':
      *target = '}';
      break;
     case '}':
      *target = '{';
      break;
     case '<':
      *target = '>';
      break;
     case '>':
      *target = '<';
      break;
     case '\\':
      *target = '/';
      break;
     case '/':
      *target = '\\';
      break;
     default:
      break;
    }
    target--;
   }
   block_type = 1;
  } else {
   while (!(((((unsigned char) *(tmp+1)) >= 224) && (((unsigned char) *(tmp+1)) <= 250)) ? 1 : 0) && (int)*(tmp+1)!='\n' && block_end < str_len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   while (((((((unsigned char) (int)*tmp) == ' ' || ((unsigned char) (int)*tmp) == '\t')) ? 1 : 0) || ((*__ctype_b_loc ())[(int) (((int)*tmp))] & (unsigned short int) _ISpunct)) && *tmp!='/' && *tmp!='-' && block_end > block_start) {
    tmp--;
    block_end--;
   }
   for (i = block_end+1; i >= block_start+1; i--) {
    *target = str[i-1];
    target--;
   }
   block_type = 2;
  }
  block_start=block_end+1;
 } while (block_end < str_len-1);


 broken_str = zend_string_alloc(str_len, 0);
 begin = end = str_len-1;
 target = (broken_str)->val;

 while (1) {
  char_count=0;
  while ((!max_chars || (max_chars > 0 && char_count < max_chars)) && begin > 0) {
   char_count++;
   begin--;
   if (begin <= 0 || (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
    while (begin > 0 && (((((unsigned char) heb_str[begin-1]) == '\n' || ((unsigned char) heb_str[begin-1]) == '\r')) ? 1 : 0)) {
     begin--;
     char_count++;
    }
    break;
   }
  }
  if (max_chars >= 0 && char_count == max_chars) {
   size_t new_char_count=char_count, new_begin=begin;

   while (new_char_count > 0) {
    if ((((((unsigned char) heb_str[new_begin]) == ' ' || ((unsigned char) heb_str[new_begin]) == '\t')) ? 1 : 0) || (((((unsigned char) heb_str[new_begin]) == '\n' || ((unsigned char) heb_str[new_begin]) == '\r')) ? 1 : 0)) {
     break;
    }
    new_begin++;
    new_char_count--;
   }
   if (new_char_count > 0) {
    begin=new_begin;
   }
  }
  orig_begin=begin;

  if ((((((unsigned char) heb_str[begin]) == ' ' || ((unsigned char) heb_str[begin]) == '\t')) ? 1 : 0)) {
   heb_str[begin]='\n';
  }
  while (begin <= end && (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
   begin++;
  }
  for (i = begin; i <= end; i++) {
   *target = heb_str[i];
   target++;
  }
  for (i = orig_begin; i <= end && (((((unsigned char) heb_str[i]) == '\n' || ((unsigned char) heb_str[i]) == '\r')) ? 1 : 0); i++) {
   *target = heb_str[i];
   target++;
  }
  begin=orig_begin;

  if (begin <= 0) {
   *target = 0;
   break;
  }
  begin--;
  end=begin;
 }
 _efree((heb_str) );

 if (convert_newlines) {
  do { zval *__z = (return_value); zend_string *__s = (php_char_to_str_ex(broken_str, '\n', "<br />\n", 7, 1, ((void *)0))); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
  zend_string_release(broken_str);
 } else {
  { do { zval *__z = (return_value); zend_string *__s = (broken_str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 }
}




void zif_hebrev(zend_execute_data *execute_data, zval *return_value)
{
 php_hebrev(execute_data, return_value, 0);
}




void zif_hebrevc(zend_execute_data *execute_data, zval *return_value)
{
 php_hebrev(execute_data, return_value, 1);
}




void zif_nl2br(zend_execute_data *execute_data, zval *return_value)
{

 char *tmp;
 zend_string *str;
 char *end, *target;
 size_t repl_cnt = 0;
 zend_bool is_xhtml = 1;
 zend_string *result;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (execute_data)->This.u2.num_args; int _i; zval *_real_arg, *_arg = ((void *)0); zend_expected_type _expected_type = 0; char *_error = ((void *)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!!(_num_args < _min_num_args), 0) || (__builtin_expect(!!(_num_args > _max_num_args), 0) && __builtin_expect(!!(_max_num_args >= 0), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)(execute_data)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(0)) - 1))));
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_str(_arg, &str, 0)), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; do { if (__builtin_expect(!(_i <= _min_num_args || _optional==1), 0)) __builtin_unreachable(); } while (0); do { if (__builtin_expect(!(_i > _min_num_args || _optional==0), 0)) __builtin_unreachable(); } while (0); if (_optional) { if (__builtin_expect(!!(_i >_num_args), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!!((zval_get_type(&(*(_arg))) == 10)), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); do { if (__builtin_expect(!(zval_get_type(&(*(_zv))) != 10), 0)) __builtin_unreachable(); } while (0); if ((((*(_zv)).u1.v.type_flags & (1<<4)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<1)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!!(!zend_parse_arg_bool(_arg, &is_xhtml, &_dummy, 0)), 0)) { _expected_type = Z_EXPECTED_BOOL; error_code = 4; break; }
 } while (0); if (__builtin_expect(!!(error_code != 0), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg); } } return; } } while (0);


 tmp = (str)->val;
 end = (str)->val + (str)->len;



 while (tmp < end) {
  if (*tmp == '\r') {
   if (*(tmp+1) == '\n') {
    tmp++;
   }
   repl_cnt++;
  } else if (*tmp == '\n') {
   if (*(tmp+1) == '\r') {
    tmp++;
   }
   repl_cnt++;
  }

  tmp++;
 }

 if (repl_cnt == 0) {
  { do { zval *__z = (return_value); zend_string *__s = (str); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
 }

 {
  size_t repl_len = is_xhtml ? (sizeof("<br />") - 1) : (sizeof("<br>") - 1);

  result = zend_string_safe_alloc(repl_cnt, repl_len, (str)->len, 0);
  target = (result)->val;
 }

 tmp = (str)->val;
 while (tmp < end) {
  switch (*tmp) {
   case '\r':
   case '\n':
    *target++ = '<';
    *target++ = 'b';
    *target++ = 'r';

    if (is_xhtml) {
     *target++ = ' ';
     *target++ = '/';
    }

    *target++ = '>';

    if ((*tmp == '\r' && *(tmp+1) == '\n') || (*tmp == '\n' && *(tmp+1) == '\r')) {
     *target++ = *tmp++;
    }

   default:
    *target++ = *tmp;
  }

  tmp++;
 }

 *target = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_strip_tags(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *buf;
 zend_string *str;
 zval *allow=((void *)0);
 char *allowed_tags=((void *)0);
 size_t allowed_tags_len=0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|z", &str, &allow) == FAILURE) {
  return;
 }


 if (allow) {
  if (zval_get_type(&(*(allow))) != 6) { _convert_to_string((allow) ); };
  allowed_tags = ((*(allow)).value.str)->val;
  allowed_tags_len = ((*(allow)).value.str)->len;
 }

 buf = zend_string_init((str)->val, (str)->len, 0);
 (buf)->len = php_strip_tags_ex((buf)->val, (str)->len, ((void *)0), allowed_tags, allowed_tags_len, 0);
 { do { zval *__z = (return_value); zend_string *__s = (buf); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_setlocale(zend_execute_data *execute_data, zval *return_value)
{
 zval *args = ((void *)0);
 zval *plocale;
 zend_string *loc;
 char *retval;
 zend_long cat;
 int num_args, i = 0;
 uint32_t idx;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "l+", &cat, &args, &num_args) == FAILURE) {
  return;
 }


 idx = 0;
 while (1) {
  if (zval_get_type(&(args[0])) == 7) {
   while (idx < (args[0]).value.arr->nNumUsed) {
    plocale = &(args[0]).value.arr->arData[idx].val;
    if (zval_get_type(&(*(plocale))) != 0) {
     break;
    }
    idx++;
   }
   if (idx >= (args[0]).value.arr->nNumUsed) {
    break;
   }
  } else {
   plocale = &args[i];
  }

  loc = _zval_get_string((plocale));

  if (!strcmp("0", (loc)->val)) {
   zend_string_release(loc);
   loc = ((void *)0);
  } else {
   if ((loc)->len >= 255) {
    php_error_docref0(((void *)0), (1<<1L), "Specified locale name is too long");
    zend_string_release(loc);
    break;
   }
  }

  retval = setlocale(cat, loc ? (loc)->val : ((void *)0));
  ;
  if (retval) {
   if (loc) {

    size_t len = strlen(retval);

    (basic_globals.locale_changed) = 1;
    if (cat == 0 || cat == 6) {
     if ((basic_globals.locale_string)) {
      zend_string_release((basic_globals.locale_string));
     }
     if (len == (loc)->len && !memcmp((loc)->val, retval, len)) {
      (basic_globals.locale_string) = zend_string_copy(loc);
      { do { zval *__z = (return_value); zend_string *__s = ((basic_globals.locale_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
     } else {
      (basic_globals.locale_string) = zend_string_init(retval, len, 0);
      zend_string_release(loc);
      { do { zval *__z = (return_value); zend_string *__s = ((basic_globals.locale_string)); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0); return; };
     }
    } else if (len == (loc)->len && !memcmp((loc)->val, retval, len)) {
     { do { zval *__z = (return_value); zend_string *__s = (loc); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
    }
    zend_string_release(loc);
   }
   { do { const char *_s = (retval); do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); } while (0); return; };
  }
  if (loc) {
   zend_string_release(loc);
  }

  if (zval_get_type(&(args[0])) == 7) {
   idx++;
  } else {
   if (++i >= num_args) break;
  }
 }


 { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
}




void zif_parse_str(zend_execute_data *execute_data, zval *return_value)
{
 char *arg;
 zval *arrayArg = ((void *)0);
 char *res = ((void *)0);
 size_t arglen;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "s|z/", &arg, &arglen, &arrayArg) == FAILURE) {
  return;
 }

 res = _estrndup((arg), (arglen) );

 if (arrayArg == ((void *)0)) {
  zval tmp;
  zend_array *symbol_table = zend_rebuild_symbol_table();

  do { zval *__z = (&tmp); (*(__z)).value.arr = (symbol_table); (*(__z)).u1.type_info = (7 | (( (1<<2) | (1<<3) | (1<<4)) << 8)); } while (0);
  sapi_module.treat_data(3, res, &tmp);
 } else {
  zval ret;


  _zval_dtor((arrayArg) );
  _array_init((&ret), 0 );
  sapi_module.treat_data(3, res, &ret);
  do { zval *_z1 = (arrayArg); const zval *_z2 = (&ret); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 }
}
# 4631 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
int php_tag_find(char *tag, size_t len, const char *set) {
 char c, *n, *t;
 int state=0, done=0;
 char *norm;

 if (len <= 0) {
  return 0;
 }

 norm = (__builtin_constant_p((len+1) ) ? (((len+1) <= 8) ? _emalloc_8() : (((len+1) <= 16) ? _emalloc_16() : (((len+1) <= 24) ? _emalloc_24() : (((len+1) <= 32) ? _emalloc_32() : (((len+1) <= 40) ? _emalloc_40() : (((len+1) <= 48) ? _emalloc_48() : (((len+1) <= 56) ? _emalloc_56() : (((len+1) <= 64) ? _emalloc_64() : (((len+1) <= 80) ? _emalloc_80() : (((len+1) <= 96) ? _emalloc_96() : (((len+1) <= 112) ? _emalloc_112() : (((len+1) <= 128) ? _emalloc_128() : (((len+1) <= 160) ? _emalloc_160() : (((len+1) <= 192) ? _emalloc_192() : (((len+1) <= 224) ? _emalloc_224() : (((len+1) <= 256) ? _emalloc_256() : (((len+1) <= 320) ? _emalloc_320() : (((len+1) <= 384) ? _emalloc_384() : (((len+1) <= 448) ? _emalloc_448() : (((len+1) <= 512) ? _emalloc_512() : (((len+1) <= 640) ? _emalloc_640() : (((len+1) <= 768) ? _emalloc_768() : (((len+1) <= 896) ? _emalloc_896() : (((len+1) <= 1024) ? _emalloc_1024() : (((len+1) <= 1280) ? _emalloc_1280() : (((len+1) <= 1536) ? _emalloc_1536() : (((len+1) <= 1792) ? _emalloc_1792() : (((len+1) <= 2048) ? _emalloc_2048() : (((len+1) <= 2560) ? _emalloc_2560() : (((len+1) <= 3072) ? _emalloc_3072() : (((len+1) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((len+1)) : _emalloc_huge((len+1))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((len+1) ) );

 n = norm;
 t = tag;
 c = tolower(*t);





 while (!done) {
  switch (c) {
   case '<':
    *(n++) = c;
    break;
   case '>':
    done =1;
    break;
   default:
    if (!((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISspace)) {
     if (state == 0) {
      state=1;
     }
     if (c != '/') {
      *(n++) = c;
     }
    } else {
     if (state == 1)
      done=1;
    }
    break;
  }
  c = tolower(*(++t));
 }
 *(n++) = '>';
 *n = '\0';
 if (strstr(set, norm)) {
  done=1;
 } else {
  done=0;
 }
 _efree((norm) );
 return done;
}


__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, size_t len, int *stateptr, const char *allow, size_t allow_len)
{
 return php_strip_tags_ex(rbuf, len, stateptr, allow, allow_len, 0);
}
# 4712 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, size_t len, int *stateptr, const char *allow, size_t allow_len, zend_bool allow_tag_spaces)
{
 char *tbuf, *buf, *p, *tp, *rp, c, lc;
 int br, depth=0, in_q = 0;
 int state = 0;
 size_t pos, i = 0;
 char *allow_free = ((void *)0);
 const char *allow_actual;
 char is_xml = 0;

 if (stateptr)
  state = *stateptr;

 buf = _estrndup((rbuf), (len) );
 c = *buf;
 lc = '\0';
 p = buf;
 rp = rbuf;
 br = 0;
 if (allow) {
  allow_free = zend_str_tolower_dup_ex(allow, allow_len);
  allow_actual = allow_free ? allow_free : allow;
  tbuf = (__builtin_constant_p((1023 + 1) ) ? (((1023 + 1) <= 8) ? _emalloc_8() : (((1023 + 1) <= 16) ? _emalloc_16() : (((1023 + 1) <= 24) ? _emalloc_24() : (((1023 + 1) <= 32) ? _emalloc_32() : (((1023 + 1) <= 40) ? _emalloc_40() : (((1023 + 1) <= 48) ? _emalloc_48() : (((1023 + 1) <= 56) ? _emalloc_56() : (((1023 + 1) <= 64) ? _emalloc_64() : (((1023 + 1) <= 80) ? _emalloc_80() : (((1023 + 1) <= 96) ? _emalloc_96() : (((1023 + 1) <= 112) ? _emalloc_112() : (((1023 + 1) <= 128) ? _emalloc_128() : (((1023 + 1) <= 160) ? _emalloc_160() : (((1023 + 1) <= 192) ? _emalloc_192() : (((1023 + 1) <= 224) ? _emalloc_224() : (((1023 + 1) <= 256) ? _emalloc_256() : (((1023 + 1) <= 320) ? _emalloc_320() : (((1023 + 1) <= 384) ? _emalloc_384() : (((1023 + 1) <= 448) ? _emalloc_448() : (((1023 + 1) <= 512) ? _emalloc_512() : (((1023 + 1) <= 640) ? _emalloc_640() : (((1023 + 1) <= 768) ? _emalloc_768() : (((1023 + 1) <= 896) ? _emalloc_896() : (((1023 + 1) <= 1024) ? _emalloc_1024() : (((1023 + 1) <= 1280) ? _emalloc_1280() : (((1023 + 1) <= 1536) ? _emalloc_1536() : (((1023 + 1) <= 1792) ? _emalloc_1792() : (((1023 + 1) <= 2048) ? _emalloc_2048() : (((1023 + 1) <= 2560) ? _emalloc_2560() : (((1023 + 1) <= 3072) ? _emalloc_3072() : (((1023 + 1) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((1023 + 1)) : _emalloc_huge((1023 + 1))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((1023 + 1) ) );
  tp = tbuf;
 } else {
  tbuf = tp = ((void *)0);
 }

 while (i < len) {
  switch (c) {
   case '\0':
    break;
   case '<':
    if (in_q) {
     break;
    }
    if (((*__ctype_b_loc ())[(int) ((*(p + 1)))] & (unsigned short int) _ISspace) && !allow_tag_spaces) {
     goto reg_char;
    }
    if (state == 0) {
     lc = '<';
     state = 1;
     if (allow) {
      if (tp - tbuf >= 1023) {
       pos = tp - tbuf;
       tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
       tp = tbuf + pos;
      }
      *(tp++) = '<';
      }
    } else if (state == 1) {
     depth++;
    }
    break;

   case '(':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = '(';
      br++;
     }
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case ')':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = ')';
      br--;
     }
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case '>':
    if (depth) {
     depth--;
     break;
    }

    if (in_q) {
     break;
    }

    switch (state) {
     case 1:
      lc = '>';
      if (is_xml && *(p -1) == '-') {
       break;
      }
      in_q = state = is_xml = 0;
      if (allow) {
       if (tp - tbuf >= 1023) {
        pos = tp - tbuf;
        tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
        tp = tbuf + pos;
       }
       *(tp++) = '>';
       *tp='\0';
       if (php_tag_find(tbuf, tp-tbuf, allow_actual)) {
        memcpy(rp, tbuf, tp-tbuf);
        rp += tp-tbuf;
       }
       tp = tbuf;
      }
      break;

     case 2:
      if (!br && lc != '\"' && *(p-1) == '?') {
       in_q = state = 0;
       tp = tbuf;
      }
      break;

     case 3:
      in_q = state = 0;
      tp = tbuf;
      break;

     case 4:
      if (p >= buf + 2 && *(p-1) == '-' && *(p-2) == '-') {
       in_q = state = 0;
       tp = tbuf;
      }
      break;

     default:
      *(rp++) = c;
      break;
    }
    break;

   case '"':
   case '\'':
    if (state == 4) {

     break;
    } else if (state == 2 && *(p-1) != '\\') {
     if (lc == c) {
      lc = '\0';
     } else if (lc != '\\') {
      lc = c;
     }
    } else if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    }
    if (state && p != buf && (state == 1 || *(p-1) != '\\') && (!in_q || *p == in_q)) {
     if (in_q) {
      in_q = 0;
     } else {
      in_q = *p;
     }
    }
    break;

   case '!':

    if (state == 1 && *(p-1) == '<') {
     state = 3;
     lc = c;
    } else {
     if (state == 0) {
      *(rp++) = c;
     } else if (allow && state == 1) {
      if (tp - tbuf >= 1023) {
       pos = tp - tbuf;
       tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
       tp = tbuf + pos;
      }
      *(tp++) = c;
     }
    }
    break;

   case '-':
    if (state == 3 && p >= buf + 2 && *(p-1) == '-' && *(p-2) == '!') {
     state = 4;
    } else {
     goto reg_char;
    }
    break;

   case '?':

    if (state == 1 && *(p-1) == '<') {
     br=0;
     state=2;
     break;
    }

   case 'E':
   case 'e':

    if (state==3 && p > buf+6
           && tolower(*(p-1)) == 'p'
              && tolower(*(p-2)) == 'y'
           && tolower(*(p-3)) == 't'
           && tolower(*(p-4)) == 'c'
           && tolower(*(p-5)) == 'o'
           && tolower(*(p-6)) == 'd') {
     state = 1;
     break;
    }


   case 'l':
   case 'L':





    if (state == 2 && p > buf+4 && strncasecmp(p-4, "<?xm", 4) == 0) {
     state = 1; is_xml=1;
     break;
    }


   default:
reg_char:
    if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1) );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    }
    break;
  }
  c = *(++p);
  i++;
 }
 if (rp < rbuf + len) {
  *rp = '\0';
 }
 _efree((buf) );
 if (allow) {
  _efree((tbuf) );
  if (allow_free) {
   _efree((allow_free) );
  }
 }
 if (stateptr)
  *stateptr = state;

 return (size_t)(rp - rbuf);
}




void zif_str_getcsv(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 char delim = ',', enc = '"', esc = '\\';
 char *delim_str = ((void *)0), *enc_str = ((void *)0), *esc_str = ((void *)0);
 size_t delim_len = 0, enc_len = 0, esc_len = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|sss", &str, &delim_str, &delim_len,
  &enc_str, &enc_len, &esc_str, &esc_len) == FAILURE) {
  return;
 }

 delim = delim_len ? delim_str[0] : delim;
 enc = enc_len ? enc_str[0] : enc;
 esc = esc_len ? esc_str[0] : esc;

 php_fgetcsv(((void *)0), delim, enc, esc, (str)->len, (str)->val, return_value);
}




void zif_str_repeat(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *input_str;
 zend_long mult;
 zend_string *result;
 size_t result_len;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sl", &input_str, &mult) == FAILURE) {
  return;
 }

 if (mult < 0) {
  php_error_docref0(((void *)0), (1<<1L), "Second argument has to be greater than or equal to 0");
  return;
 }



 if ((input_str)->len == 0 || mult == 0)
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };


 result = zend_string_safe_alloc((input_str)->len, mult, 0, 0);
 result_len = (input_str)->len * mult;


 if ((input_str)->len == 1) {
  memset((result)->val, *(input_str)->val, mult);
 } else {
  char *s, *e, *ee;
  ptrdiff_t l=0;
  memcpy((result)->val, (input_str)->val, (input_str)->len);
  s = (result)->val;
  e = (result)->val + (input_str)->len;
  ee = (result)->val + result_len;

  while (e<ee) {
   l = (e-s) < (ee-e) ? (e-s) : (ee-e);
   memmove(e, s, l);
   e += l;
  }
 }

 (result)->val[result_len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_count_chars(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *input;
 int chars[256];
 zend_long mymode=0;
 unsigned char *buf;
 int inx;
 char retstr[256];
 size_t retlen=0;
 size_t tmp = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|l", &input, &mymode) == FAILURE) {
  return;
 }

 if (mymode < 0 || mymode > 4) {
  php_error_docref0(((void *)0), (1<<1L), "Unknown mode");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 buf = (unsigned char *) (input)->val;
 memset((void*) chars, 0, sizeof(chars));

 while (tmp < (input)->len) {
  chars[*buf]++;
  buf++;
  tmp++;
 }

 if (mymode < 3) {
  _array_init((return_value), 0 );
 }

 for (inx = 0; inx < 256; inx++) {
  switch (mymode) {
    case 0:
    add_index_long(return_value, inx, chars[inx]);
    break;
    case 1:
    if (chars[inx] != 0) {
     add_index_long(return_value, inx, chars[inx]);
    }
    break;
     case 2:
    if (chars[inx] == 0) {
     add_index_long(return_value, inx, chars[inx]);
    }
    break;
     case 3:
    if (chars[inx] != 0) {
     retstr[retlen++] = inx;
    }
    break;
     case 4:
    if (chars[inx] == 0) {
     retstr[retlen++] = inx;
    }
    break;
  }
 }

 if (mymode >= 3 && mymode <= 4) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(retstr, retlen, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
 }
}




static void php_strnatcmp(zend_execute_data *execute_data, zval *return_value, int fold_case)
{
 zend_string *s1, *s2;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS", &s1, &s2) == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = strnatcmp_ex((s1)->val, (s1)->len, (s2)->val, (s2)->len, fold_case); (*(__z)).u1.type_info = 4; }; return; }

                   ;
}


__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive)
{
 zend_string *str1 = _zval_get_string((op1));
 zend_string *str2 = _zval_get_string((op2));

 { zval *__z = (result); (*(__z)).value.lval = strnatcmp_ex((str1)->val, (str1)->len, (str2)->val, (str2)->len, case_insensitive); (*(__z)).u1.type_info = 4; };

 zend_string_release(str1);
 zend_string_release(str2);
 return SUCCESS;
}


__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2)
{
 return string_natural_compare_function_ex(result, op1, op2, 1);
}


__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2)
{
 return string_natural_compare_function_ex(result, op1, op2, 0);
}




void zif_strnatcmp(zend_execute_data *execute_data, zval *return_value)
{
 php_strnatcmp(execute_data, return_value, 0);
}




void zif_localeconv(zend_execute_data *execute_data, zval *return_value)
{
 zval grouping, mon_grouping;
 int len, i;


 if ((__builtin_expect(!!((execute_data)->This.u2.num_args == 0), 1) ? SUCCESS : zend_parse_parameters((execute_data)->This.u2.num_args, "")) == FAILURE) {
  return;
 }

 _array_init((return_value), 0 );
 _array_init((&grouping), 0 );
 _array_init((&mon_grouping), 0 );


 {
  struct lconv currlocdata;

  localeconv_r( &currlocdata );


  len = (int)strlen(currlocdata.grouping);

  for (i = 0; i < len; i++) {
   add_index_long(&grouping, i, currlocdata.grouping[i]);
  }


  len = (int)strlen(currlocdata.mon_grouping);

  for (i = 0; i < len; i++) {
   add_index_long(&mon_grouping, i, currlocdata.mon_grouping[i]);
  }

  add_assoc_string_ex(return_value, "decimal_point", strlen("decimal_point"), currlocdata.decimal_point);
  add_assoc_string_ex(return_value, "thousands_sep", strlen("thousands_sep"), currlocdata.thousands_sep);
  add_assoc_string_ex(return_value, "int_curr_symbol", strlen("int_curr_symbol"), currlocdata.int_curr_symbol);
  add_assoc_string_ex(return_value, "currency_symbol", strlen("currency_symbol"), currlocdata.currency_symbol);
  add_assoc_string_ex(return_value, "mon_decimal_point", strlen("mon_decimal_point"), currlocdata.mon_decimal_point);
  add_assoc_string_ex(return_value, "mon_thousands_sep", strlen("mon_thousands_sep"), currlocdata.mon_thousands_sep);
  add_assoc_string_ex(return_value, "positive_sign", strlen("positive_sign"), currlocdata.positive_sign);
  add_assoc_string_ex(return_value, "negative_sign", strlen("negative_sign"), currlocdata.negative_sign);
  add_assoc_long_ex(return_value, "int_frac_digits", strlen("int_frac_digits"), currlocdata.int_frac_digits);
  add_assoc_long_ex(return_value, "frac_digits", strlen("frac_digits"), currlocdata.frac_digits);
  add_assoc_long_ex(return_value, "p_cs_precedes", strlen("p_cs_precedes"), currlocdata.p_cs_precedes);
  add_assoc_long_ex(return_value, "p_sep_by_space", strlen("p_sep_by_space"), currlocdata.p_sep_by_space);
  add_assoc_long_ex(return_value, "n_cs_precedes", strlen("n_cs_precedes"), currlocdata.n_cs_precedes);
  add_assoc_long_ex(return_value, "n_sep_by_space", strlen("n_sep_by_space"), currlocdata.n_sep_by_space);
  add_assoc_long_ex(return_value, "p_sign_posn", strlen("p_sign_posn"), currlocdata.p_sign_posn);
  add_assoc_long_ex(return_value, "n_sign_posn", strlen("n_sign_posn"), currlocdata.n_sign_posn);
 }
# 5257 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
 _zend_hash_str_update((*(return_value)).value.arr, "grouping", sizeof("grouping")-1, &grouping );
 _zend_hash_str_update((*(return_value)).value.arr, "mon_grouping", sizeof("mon_grouping")-1, &mon_grouping );
}




void zif_strnatcasecmp(zend_execute_data *execute_data, zval *return_value)
{
 php_strnatcmp(execute_data, return_value, 1);
}




void zif_substr_count(zend_execute_data *execute_data, zval *return_value)
{
 char *haystack, *needle;
 zend_long offset = 0, length = 0;
 int ac = (execute_data)->This.u2.num_args;
 int count = 0;
 size_t haystack_len, needle_len;
 char *p, *endp, cmp;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "ss|ll", &haystack, &haystack_len, &needle, &needle_len, &offset, &length) == FAILURE) {
  return;
 }

 if (needle_len == 0) {
  php_error_docref0(((void *)0), (1<<1L), "Empty substring");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 p = haystack;
 endp = p + haystack_len;

 if (offset < 0) {
  php_error_docref0(((void *)0), (1<<1L), "Offset should be greater than or equal to 0");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((size_t)offset > haystack_len) {
  php_error_docref0(((void *)0), (1<<1L), "Offset value " "%" "l" "d" " exceeds string length", offset);
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
 p += offset;

 if (ac == 4) {

  if (length <= 0) {
   php_error_docref0(((void *)0), (1<<1L), "Length should be greater than 0");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  if (length > (haystack_len - offset)) {
   php_error_docref0(((void *)0), (1<<1L), "Length value " "%" "l" "d" " exceeds string length", length);
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
  endp = p + length;
 }

 if (needle_len == 1) {
  cmp = needle[0];

  while ((p = memchr(p, cmp, endp - p))) {
   count++;
   p++;
  }
 } else {
  while ((p = (char*)zend_memnstr(p, needle, needle_len, endp))) {
   p += needle_len;
   count++;
  }
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = count; (*(__z)).u1.type_info = 4; }; return; };
}




void zif_str_pad(zend_execute_data *execute_data, zval *return_value)
{

 zend_string *input;
 zend_long pad_length;


 size_t num_pad_chars;
 char *pad_str = " ";
 size_t pad_str_len = 1;
 zend_long pad_type_val = 1;
 size_t i, left_pad=0, right_pad=0;
 zend_string *result = ((void *)0);

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "Sl|sl", &input, &pad_length, &pad_str, &pad_str_len, &pad_type_val) == FAILURE) {
  return;
 }



 if (pad_length < 0 || (size_t)pad_length <= (input)->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((input)->val, (input)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
 }

 if (pad_str_len == 0) {
  php_error_docref0(((void *)0), (1<<1L), "Padding string cannot be empty");
  return;
 }

 if (pad_type_val < 0 || pad_type_val > 2) {
  php_error_docref0(((void *)0), (1<<1L), "Padding type has to be STR_PAD_LEFT, STR_PAD_RIGHT, or STR_PAD_BOTH");
  return;
 }

 num_pad_chars = pad_length - (input)->len;
 if (num_pad_chars >= 2147483647) {
  php_error_docref0(((void *)0), (1<<1L), "Padding length is too long");
  return;
 }

 result = zend_string_safe_alloc((input)->len, 1, num_pad_chars, 0);
 (result)->len = 0;


 switch (pad_type_val) {
  case 1:
   left_pad = 0;
   right_pad = num_pad_chars;
   break;

  case 0:
   left_pad = num_pad_chars;
   right_pad = 0;
   break;

  case 2:
   left_pad = num_pad_chars / 2;
   right_pad = num_pad_chars - left_pad;
   break;
 }


 for (i = 0; i < left_pad; i++)
  (result)->val[(result)->len++] = pad_str[i % pad_str_len];


 memcpy((result)->val + (result)->len, (input)->val, (input)->len);
 (result)->len += (input)->len;


 for (i = 0; i < right_pad; i++)
  (result)->val[(result)->len++] = pad_str[i % pad_str_len];

 (result)->val[(result)->len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}




void zif_sscanf(zend_execute_data *execute_data, zval *return_value)
{
 zval *args = ((void *)0);
 char *str, *format;
 size_t str_len, format_len;
 int result, num_args = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "ss*", &str, &str_len, &format, &format_len,
  &args, &num_args) == FAILURE) {
  return;
 }

 result = php_sscanf_internal(str, format, num_args, args, 0, return_value);

 if ((((-1 - 1) - 1) - 1) == result) {
  { zend_wrong_param_count(); return; };
 }
}


static char rot13_from[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
static char rot13_to[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";



void zif_str_rot13(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *arg;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &arg) == FAILURE) {
  return;
 }

 if ((arg)->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 } else {
  { do { zval *__z = (return_value); zend_string *__s = (php_strtr_ex(arg, rot13_from, rot13_to, 52)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
 }
}


static void php_string_shuffle(char *str, zend_long len)
{
 zend_long n_elems, rnd_idx, n_left;
 char temp;


 n_elems = len;

 if (n_elems <= 1) {
  return;
 }

 n_left = n_elems;

 while (--n_left) {
  rnd_idx = php_rand();
  (rnd_idx) = (0) + (zend_long) ((double) ( (double) (n_left) - (0) + 1.0) * ((rnd_idx) / ((2147483647) + 1.0)));
  if (rnd_idx != n_left) {
   temp = str[n_left];
   str[n_left] = str[rnd_idx];
   str[rnd_idx] = temp;
  }
 }
}




void zif_str_shuffle(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *arg;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S", &arg) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init((arg)->val, (arg)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0);
 if (((*(return_value)).value.str)->len > 1) {
  php_string_shuffle(((*(return_value)).value.str)->val, (zend_long) ((*(return_value)).value.str)->len);
 }
}
# 5513 "/home/ct584/git/bughunter/repositories/php-src/ext/standard/string.c"
void zif_str_word_count(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 char *char_list = ((void *)0), *p, *e, *s, ch[256];
 size_t char_list_len = 0, word_count = 0;
 zend_long type = 0;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|ls", &str, &type, &char_list, &char_list_len) == FAILURE) {
  return;
 }

 switch(type) {
  case 1:
  case 2:
   _array_init((return_value), 0 );
   if (!(str)->len) {
    return;
   }
   break;
  case 0:
   if (!(str)->len) {
    { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
   }

   break;
  default:
   php_error_docref0(((void *)0), (1<<1L), "Invalid format value " "%" "l" "d", type);
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (char_list) {
  php_charmask((unsigned char *)char_list, char_list_len, ch);
 }

 p = (str)->val;
 e = (str)->val + (str)->len;


 if ((*p == '\'' && (!char_list || !ch['\''])) || (*p == '-' && (!char_list || !ch['-']))) {
  p++;
 }

 if (*(e - 1) == '-' && (!char_list || !ch['-'])) {
  e--;
 }

 while (p < e) {
  s = p;
  while (p < e && (((*__ctype_b_loc ())[(int) (((unsigned char)*p))] & (unsigned short int) _ISalpha) || (char_list && ch[(unsigned char)*p]) || *p == '\'' || *p == '-')) {
   p++;
  }
  if (p > s) {
   switch (type)
   {
    case 1:
     add_next_index_stringl(return_value, s, p - s);
     break;
    case 2:
     add_index_stringl(return_value, (s - (str)->val), s, p - s);
     break;
    default:
     word_count++;
     break;
   }
  }
  p++;
 }

 if (!type) {
  { { zval *__z = (return_value); (*(__z)).value.lval = word_count; (*(__z)).u1.type_info = 4; }; return; };
 }
}






void zif_money_format(zend_execute_data *execute_data, zval *return_value)
{
 size_t format_len = 0;
 char *format, *p, *e;
 double value;
 zend_bool check = 0;
 zend_string *str;
 ssize_t res_len;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "sd", &format, &format_len, &value) == FAILURE) {
  return;
 }

 p = format;
 e = p + format_len;
 while ((p = memchr(p, '%', (e - p)))) {
  if (*(p + 1) == '%') {
   p += 2;
  } else if (!check) {
   check = 1;
   p++;
  } else {
   php_error_docref0(((void *)0), (1<<1L), "Only a single %%i or %%n token can be used");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
 }

 str = zend_string_safe_alloc(format_len, 1, 1024, 0);
 if ((res_len = strfmon((str)->val, (str)->len, format, value)) < 0) {
  zend_string_free(str);
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }
 (str)->len = (size_t)res_len;
 (str)->val[(str)->len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (zend_string_truncate(str, (str)->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); return; };
}





void zif_str_split(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *str;
 zend_long split_length = 1;
 char *p;
 size_t n_reg_segments;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "S|l", &str, &split_length) == FAILURE) {
  return;
 }

 if (split_length <= 0) {
  php_error_docref0(((void *)0), (1<<1L), "The length of each segment must be greater than zero");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }


 if (0 == (str)->len || (size_t)split_length >= (str)->len) {
  _array_init((return_value), (1) );
  add_next_index_stringl(return_value, (str)->val, (str)->len);
  return;
 }

 _array_init((return_value), ((uint32_t)((((str)->len - 1) / split_length) + 1)) );

 n_reg_segments = (str)->len / split_length;
 p = (str)->val;

 while (n_reg_segments-- > 0) {
  add_next_index_stringl(return_value, p, split_length);
  p += split_length;
 }

 if (p != ((str)->val + (str)->len)) {
  add_next_index_stringl(return_value, p, ((str)->val + (str)->len - p));
 }
}




void zif_strpbrk(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *haystack, *char_list;
 char *haystack_ptr, *cl_ptr;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SS", &haystack, &char_list) == FAILURE) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if (!(char_list)->len) {
  php_error_docref0(((void *)0), (1<<1L), "The character list cannot be empty");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 for (haystack_ptr = (haystack)->val; haystack_ptr < ((haystack)->val + (haystack)->len); ++haystack_ptr) {
  for (cl_ptr = (char_list)->val; cl_ptr < ((char_list)->val + (char_list)->len); ++cl_ptr) {
   if (*cl_ptr == *haystack_ptr) {
    { do { do { zval *__z = (return_value); zend_string *__s = (zend_string_init(haystack_ptr, ((haystack)->val + (haystack)->len - haystack_ptr), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); return; };
   }
  }
 }

 { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
}




void zif_substr_compare(zend_execute_data *execute_data, zval *return_value)
{
 zend_string *s1, *s2;
 zend_long offset, len=0;
 zend_bool cs=0;
 size_t cmp_len;

 if (zend_parse_parameters((execute_data)->This.u2.num_args, "SSl|lb", &s1, &s2, &offset, &len, &cs) == FAILURE) {
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 if ((execute_data)->This.u2.num_args >= 4 && len <= 0) {
  if (len == 0) {
   { { zval *__z = (return_value); (*(__z)).value.lval = 0L; (*(__z)).u1.type_info = 4; }; return; };
  } else {
   php_error_docref0(((void *)0), (1<<1L), "The length must be greater than or equal to zero");
   { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
  }
 }

 if (offset < 0) {
  offset = (s1)->len + offset;
  offset = (offset < 0) ? 0 : offset;
 }

 if ((size_t)offset >= (s1)->len) {
  php_error_docref0(((void *)0), (1<<1L), "The start position cannot exceed initial string length");
  { do { (*(return_value)).u1.type_info = 2; } while (0); return; };
 }

 cmp_len = (size_t) (len ? len : ((((s2)->len)>(((s1)->len - offset)))?((s2)->len):(((s1)->len - offset))));

 if (!cs) {
  { { zval *__z = (return_value); (*(__z)).value.lval = zend_binary_strncmp((s1)->val + offset, ((s1)->len - offset), (s2)->val, (s2)->len, cmp_len); (*(__z)).u1.type_info = 4; }; return; };
 } else {
  { { zval *__z = (return_value); (*(__z)).value.lval = zend_binary_strncasecmp_l((s1)->val + offset, ((s1)->len - offset), (s2)->val, (s2)->len, cmp_len); (*(__z)).u1.type_info = 4; }; return; };
 }
}
