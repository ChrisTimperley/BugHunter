# 1 "redis-cli.c"
# 1 "/home/ct584/git/bughunter/repositories/redis/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "redis-cli.c"
# 31 "redis-cli.c"
# 1 "fmacros.h" 1
# 32 "redis-cli.c" 2
# 1 "version.h" 1
# 33 "redis-cli.c" 2

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
# 92 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;




typedef __off64_t off64_t;




typedef __ssize_t ssize_t;









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






# 35 "redis-cli.c" 2
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
# 51 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
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
# 52 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
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
# 1273 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4


# 464 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

# 968 "/usr/include/stdlib.h" 3 4

# 1274 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4




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




# 36 "redis-cli.c" 2
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

# 239 "/usr/include/stdlib.h" 3 4
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





typedef __ino64_t ino_t;




typedef __ino64_t ino64_t;




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
# 474 "/usr/include/stdlib.h" 3 4






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

# 37 "redis-cli.c" 2
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
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






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



# 38 "redis-cli.c" 2
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



# 39 "redis-cli.c" 2
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






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 214 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
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

# 40 "redis-cli.c" 2
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
# 41 "redis-cli.c" 2
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



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));






extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 243 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ ("" "fstatat64") __attribute__ ((__nothrow__ , __leaf__))


                 __attribute__ ((__nonnull__ (2, 3)));






extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 267 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (1, 2)));





extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



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
# 410 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf) __asm__ ("" "__fxstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__xstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__lxstat64") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename, struct stat *__stat_buf, int __flag) __asm__ ("" "__fxstatat64") __attribute__ ((__nothrow__ , __leaf__))


                    __attribute__ ((__nonnull__ (3, 4)));
# 432 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat (const char *__path, struct stat *__statbuf)
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat (const char *__path, struct stat *__statbuf)
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknod (const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) stat64 (const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) lstat64 (const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) fstatat64 (int __fd, const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}







# 42 "redis-cli.c" 2
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




typedef enum __itimer_which __itimer_which_t;






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






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 43 "redis-cli.c" 2
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



# 44 "redis-cli.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;




    __off64_t l_start;
    __off64_t l_len;

    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4
# 241 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 311 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 341 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4





extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__ , __leaf__));






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);
# 388 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate (int __fd, int __mode, __off64_t __offset, __off64_t __len) __asm__ ("" "fallocate64")

                     ;





extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) __attribute__ ((__nothrow__ , __leaf__));





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 68 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 149 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));





extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 174 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));





extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 195 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));





extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 242 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__ , __leaf__))

                      ;





extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 263 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;





extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __open_2 (const char *__path, int __oflag) __asm__ ("" "__open64_2")
                     __attribute__ ((__nonnull__ (1)));
extern int __open_alias (const char *__path, int __oflag, ...) __asm__ ("" "open64")
                 __attribute__ ((__nonnull__ (1)));

extern void __open_too_many_args (void) __attribute__((__error__ ("open can be called either with 2 or 3 arguments, not more")))
                                                                  ;
extern void __open_missing_mode (void) __attribute__((__error__ ("open with O_CREAT in second argument needs 3 arguments")))
                                                               ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len () < 1)
 {
   __open_missing_mode ();
   return __open_2 (__path, __oflag);
 }
      return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open_2 (__path, __oflag);

  return __open_alias (__path, __oflag, __builtin_va_arg_pack ());
}



extern int __open64_2 (const char *__path, int __oflag) __attribute__ ((__nonnull__ (1)));
extern int __open64_alias (const char *__path, int __oflag, ...) __asm__ ("" "open64")
                   __attribute__ ((__nonnull__ (1)));
extern void __open64_too_many_args (void) __attribute__((__error__ ("open64 can be called either with 2 or 3 arguments, not more")))
                                                                    ;
extern void __open64_missing_mode (void) __attribute__((__error__ ("open64 with O_CREAT in second argument needs 3 arguments")))
                                                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
open64 (const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __open64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len () < 1)
 {
   __open64_missing_mode ();
   return __open64_2 (__path, __oflag);
 }
      return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __open64_2 (__path, __oflag);

  return __open64_alias (__path, __oflag, __builtin_va_arg_pack ());
}
# 104 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h" 3 4
extern int __openat_2 (int __fd, const char *__path, int __oflag) __asm__ ("" "__openat64_2")

     __attribute__ ((__nonnull__ (2)));
extern int __openat_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat64")

     __attribute__ ((__nonnull__ (2)));

extern void __openat_too_many_args (void) __attribute__((__error__ ("openat can be called either with 3 or 4 arguments, not more")))
                                                                    ;
extern void __openat_missing_mode (void) __attribute__((__error__ ("openat with O_CREAT in third argument needs 4 arguments")))
                                                                ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len () < 1)
 {
   __openat_missing_mode ();
   return __openat_2 (__fd, __path, __oflag);
 }
      return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat_2 (__fd, __path, __oflag);

  return __openat_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}



extern int __openat64_2 (int __fd, const char *__path, int __oflag)
     __attribute__ ((__nonnull__ (2)));
extern int __openat64_alias (int __fd, const char *__path, int __oflag, ...) __asm__ ("" "openat64")

     __attribute__ ((__nonnull__ (2)));
extern void __openat64_too_many_args (void) __attribute__((__error__ ("openat64 can be called either with 3 or 4 arguments, not more")))
                                                                      ;
extern void __openat64_missing_mode (void) __attribute__((__error__ ("openat64 with O_CREAT in third argument needs 4 arguments")))
                                                                  ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
openat64 (int __fd, const char *__path, int __oflag, ...)
{
  if (__builtin_va_arg_pack_len () > 1)
    __openat64_too_many_args ();

  if (__builtin_constant_p (__oflag))
    {
      if ((__oflag & 0100) != 0 && __builtin_va_arg_pack_len () < 1)
 {
   __openat64_missing_mode ();
   return __openat64_2 (__fd, __path, __oflag);
 }
      return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
    }

  if (__builtin_va_arg_pack_len () < 1)
    return __openat64_2 (__fd, __path, __oflag);

  return __openat64_alias (__fd, __path, __oflag, __builtin_va_arg_pack ());
}
# 280 "/usr/include/fcntl.h" 2 3 4



# 45 "redis-cli.c" 2
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
# 46 "redis-cli.c" 2

# 1 "../deps/hiredis/hiredis.h" 1
# 35 "../deps/hiredis/hiredis.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 36 "../deps/hiredis/hiredis.h" 2
# 96 "../deps/hiredis/hiredis.h"
typedef struct redisReply {
    int type;
    long long integer;
    int len;
    char *str;
    size_t elements;
    struct redisReply **element;
} redisReply;

typedef struct redisReadTask {
    int type;
    int elements;
    int idx;
    void *obj;
    struct redisReadTask *parent;
    void *privdata;
} redisReadTask;

typedef struct redisReplyObjectFunctions {
    void *(*createString)(const redisReadTask*, char*, size_t);
    void *(*createArray)(const redisReadTask*, int);
    void *(*createInteger)(const redisReadTask*, long long);
    void *(*createNil)(const redisReadTask*);
    void (*freeObject)(void*);
} redisReplyObjectFunctions;


typedef struct redisReader {
    int err;
    char errstr[128];

    char *buf;
    size_t pos;
    size_t len;
    size_t maxbuf;

    redisReadTask rstack[9];
    int ridx;
    void *reply;

    redisReplyObjectFunctions *fn;
    void *privdata;
} redisReader;


redisReader *redisReaderCreate(void);
void redisReaderFree(redisReader *r);
int redisReaderFeed(redisReader *r, const char *buf, size_t len);
int redisReaderGetReply(redisReader *r, void **reply);
# 156 "../deps/hiredis/hiredis.h"
void freeReplyObject(void *reply);


int redisvFormatCommand(char **target, const char *format, va_list ap);
int redisFormatCommand(char **target, const char *format, ...);
int redisFormatCommandArgv(char **target, int argc, const char **argv, const size_t *argvlen);


typedef struct redisContext {
    int err;
    char errstr[128];
    int fd;
    int flags;
    char *obuf;
    redisReader *reader;
} redisContext;

redisContext *redisConnect(const char *ip, int port);
redisContext *redisConnectWithTimeout(const char *ip, int port, struct timeval tv);
redisContext *redisConnectNonBlock(const char *ip, int port);
redisContext *redisConnectUnix(const char *path);
redisContext *redisConnectUnixWithTimeout(const char *path, struct timeval tv);
redisContext *redisConnectUnixNonBlock(const char *path);
int redisSetTimeout(redisContext *c, struct timeval tv);
void redisFree(redisContext *c);
int redisBufferRead(redisContext *c);
int redisBufferWrite(redisContext *c, int *done);





int redisGetReply(redisContext *c, void **reply);
int redisGetReplyFromReader(redisContext *c, void **reply);



int redisvAppendCommand(redisContext *c, const char *format, va_list ap);
int redisAppendCommand(redisContext *c, const char *format, ...);
int redisAppendCommandArgv(redisContext *c, int argc, const char **argv, const size_t *argvlen);






void *redisvCommand(redisContext *c, const char *format, va_list ap);
void *redisCommand(redisContext *c, const char *format, ...);
void *redisCommandArgv(redisContext *c, int argc, const char **argv, const size_t *argvlen);
# 48 "redis-cli.c" 2
# 1 "sds.h" 1
# 39 "sds.h"
typedef char *sds;

struct sdshdr {
    int len;
    int free;
    char buf[];
};

static inline size_t sdslen(const sds s) {
    struct sdshdr *sh = (void*)(s-(sizeof(struct sdshdr)));
    return sh->len;
}

static inline size_t sdsavail(const sds s) {
    struct sdshdr *sh = (void*)(s-(sizeof(struct sdshdr)));
    return sh->free;
}

sds sdsnewlen(const void *init, size_t initlen);
sds sdsnew(const char *init);
sds sdsempty(void);
size_t sdslen(const sds s);
sds sdsdup(const sds s);
void sdsfree(sds s);
size_t sdsavail(const sds s);
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


sds sdsMakeRoomFor(sds s, size_t addlen);
void sdsIncrLen(sds s, int incr);
sds sdsRemoveFreeSpace(sds s);
size_t sdsAllocSize(sds s);
# 49 "redis-cli.c" 2
# 1 "zmalloc.h" 1
# 50 "zmalloc.h"
# 1 "../deps/jemalloc/include/jemalloc/jemalloc.h" 1
# 66 "../deps/jemalloc/include/jemalloc/jemalloc.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 67 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 68 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 133 "../deps/jemalloc/include/jemalloc/jemalloc.h"
extern __attribute__((visibility("default"))) const char *je_malloc_conf;
extern __attribute__((visibility("default"))) void (*je_malloc_message)(void *cbopaque,
    const char *s);

__attribute__((visibility("default"))) void *je_malloc(size_t size) __attribute__((malloc));
__attribute__((visibility("default"))) void *je_calloc(size_t num, size_t size)
    __attribute__((malloc));
__attribute__((visibility("default"))) int je_posix_memalign(void **memptr, size_t alignment,
    size_t size) __attribute__((nonnull(1)));
__attribute__((visibility("default"))) void *je_aligned_alloc(size_t alignment, size_t size)
    __attribute__((malloc));
__attribute__((visibility("default"))) void *je_realloc(void *ptr, size_t size);
__attribute__((visibility("default"))) void je_free(void *ptr);

__attribute__((visibility("default"))) void *je_mallocx(size_t size, int flags);
__attribute__((visibility("default"))) void *je_rallocx(void *ptr, size_t size, int flags);
__attribute__((visibility("default"))) size_t je_xallocx(void *ptr, size_t size, size_t extra,
    int flags);
__attribute__((visibility("default"))) size_t je_sallocx(const void *ptr, int flags);
__attribute__((visibility("default"))) void je_dallocx(void *ptr, int flags);
__attribute__((visibility("default"))) size_t je_nallocx(size_t size, int flags);

__attribute__((visibility("default"))) int je_mallctl(const char *name, void *oldp,
    size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) int je_mallctlnametomib(const char *name, size_t *mibp,
    size_t *miblenp);
__attribute__((visibility("default"))) int je_mallctlbymib(const size_t *mib, size_t miblen,
    void *oldp, size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) void je_malloc_stats_print(void (*write_cb)(void *,
    const char *), void *je_cbopaque, const char *opts);
__attribute__((visibility("default"))) size_t je_malloc_usable_size(
    void *ptr);


__attribute__((visibility("default"))) void * je_memalign(size_t alignment, size_t size)
    __attribute__((malloc));



__attribute__((visibility("default"))) void * je_valloc(size_t size) __attribute__((malloc));



__attribute__((visibility("default"))) int je_allocm(void **ptr, size_t *rsize, size_t size,
    int flags) __attribute__((nonnull(1)));
__attribute__((visibility("default"))) int je_rallocm(void **ptr, size_t *rsize, size_t size,
    size_t extra, int flags) __attribute__((nonnull(1)));
__attribute__((visibility("default"))) int je_sallocm(const void *ptr, size_t *rsize, int flags)
    __attribute__((nonnull(1)));
__attribute__((visibility("default"))) int je_dallocm(void *ptr, int flags)
    __attribute__((nonnull(1)));
__attribute__((visibility("default"))) int je_nallocm(size_t *rsize, size_t size, int flags);
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
void zlibc_free(void *ptr);
# 50 "redis-cli.c" 2
# 1 "../deps/linenoise/linenoise.h" 1
# 44 "../deps/linenoise/linenoise.h"
typedef struct linenoiseCompletions {
  size_t len;
  char **cvec;
} linenoiseCompletions;

typedef void(linenoiseCompletionCallback)(const char *, linenoiseCompletions *);
void linenoiseSetCompletionCallback(linenoiseCompletionCallback *);
void linenoiseAddCompletion(linenoiseCompletions *, const char *);

char *linenoise(const char *prompt);
int linenoiseHistoryAdd(const char *line);
int linenoiseHistorySetMaxLen(int len);
int linenoiseHistorySave(const char *filename);
int linenoiseHistoryLoad(const char *filename);
void linenoiseClearScreen(void);
void linenoiseSetMultiLine(int ml);
void linenoisePrintKeyCodes(void);
# 51 "redis-cli.c" 2
# 1 "help.h" 1





static char *commandGroups[] = {
    "generic",
    "string",
    "list",
    "set",
    "sorted_set",
    "hash",
    "pubsub",
    "transactions",
    "connection",
    "server",
    "scripting",
    "hyperloglog"
};

struct commandHelp {
  char *name;
  char *params;
  char *summary;
  int group;
  char *since;
} commandHelp[] = {
    { "APPEND",
    "key value",
    "Append a value to a key",
    1,
    "2.0.0" },
    { "AUTH",
    "password",
    "Authenticate to the server",
    8,
    "1.0.0" },
    { "BGREWRITEAOF",
    "-",
    "Asynchronously rewrite the append-only file",
    9,
    "1.0.0" },
    { "BGSAVE",
    "-",
    "Asynchronously save the dataset to disk",
    9,
    "1.0.0" },
    { "BITCOUNT",
    "key [start] [end]",
    "Count set bits in a string",
    1,
    "2.6.0" },
    { "BITOP",
    "operation destkey key [key ...]",
    "Perform bitwise operations between strings",
    1,
    "2.6.0" },
    { "BITPOS",
    "key bit [start] [end]",
    "Find first bit set or clear in a string",
    1,
    "2.8.7" },
    { "BLPOP",
    "key [key ...] timeout",
    "Remove and get the first element in a list, or block until one is available",
    2,
    "2.0.0" },
    { "BRPOP",
    "key [key ...] timeout",
    "Remove and get the last element in a list, or block until one is available",
    2,
    "2.0.0" },
    { "BRPOPLPUSH",
    "source destination timeout",
    "Pop a value from a list, push it to another list and return it; or block until one is available",
    2,
    "2.2.0" },
    { "CLIENT GETNAME",
    "-",
    "Get the current connection name",
    9,
    "2.6.9" },
    { "CLIENT KILL",
    "ip:port",
    "Kill the connection of a client",
    9,
    "2.4.0" },
    { "CLIENT LIST",
    "-",
    "Get the list of client connections",
    9,
    "2.4.0" },
    { "CLIENT PAUSE",
    "timeout",
    "Stop processing commands from clients for some time",
    9,
    "2.9.50" },
    { "CLIENT SETNAME",
    "connection-name",
    "Set the current connection name",
    9,
    "2.6.9" },
    { "CONFIG GET",
    "parameter",
    "Get the value of a configuration parameter",
    9,
    "2.0.0" },
    { "CONFIG RESETSTAT",
    "-",
    "Reset the stats returned by INFO",
    9,
    "2.0.0" },
    { "CONFIG REWRITE",
    "-",
    "Rewrite the configuration file with the in memory configuration",
    9,
    "2.8.0" },
    { "CONFIG SET",
    "parameter value",
    "Set a configuration parameter to the given value",
    9,
    "2.0.0" },
    { "DBSIZE",
    "-",
    "Return the number of keys in the selected database",
    9,
    "1.0.0" },
    { "DEBUG OBJECT",
    "key",
    "Get debugging information about a key",
    9,
    "1.0.0" },
    { "DEBUG SEGFAULT",
    "-",
    "Make the server crash",
    9,
    "1.0.0" },
    { "DECR",
    "key",
    "Decrement the integer value of a key by one",
    1,
    "1.0.0" },
    { "DECRBY",
    "key decrement",
    "Decrement the integer value of a key by the given number",
    1,
    "1.0.0" },
    { "DEL",
    "key [key ...]",
    "Delete a key",
    0,
    "1.0.0" },
    { "DISCARD",
    "-",
    "Discard all commands issued after MULTI",
    7,
    "2.0.0" },
    { "DUMP",
    "key",
    "Return a serialized version of the value stored at the specified key.",
    0,
    "2.6.0" },
    { "ECHO",
    "message",
    "Echo the given string",
    8,
    "1.0.0" },
    { "EVAL",
    "script numkeys key [key ...] arg [arg ...]",
    "Execute a Lua script server side",
    10,
    "2.6.0" },
    { "EVALSHA",
    "sha1 numkeys key [key ...] arg [arg ...]",
    "Execute a Lua script server side",
    10,
    "2.6.0" },
    { "EXEC",
    "-",
    "Execute all commands issued after MULTI",
    7,
    "1.2.0" },
    { "EXISTS",
    "key",
    "Determine if a key exists",
    0,
    "1.0.0" },
    { "EXPIRE",
    "key seconds",
    "Set a key's time to live in seconds",
    0,
    "1.0.0" },
    { "EXPIREAT",
    "key timestamp",
    "Set the expiration for a key as a UNIX timestamp",
    0,
    "1.2.0" },
    { "FLUSHALL",
    "-",
    "Remove all keys from all databases",
    9,
    "1.0.0" },
    { "FLUSHDB",
    "-",
    "Remove all keys from the current database",
    9,
    "1.0.0" },
    { "GET",
    "key",
    "Get the value of a key",
    1,
    "1.0.0" },
    { "GETBIT",
    "key offset",
    "Returns the bit value at offset in the string value stored at key",
    1,
    "2.2.0" },
    { "GETRANGE",
    "key start end",
    "Get a substring of the string stored at a key",
    1,
    "2.4.0" },
    { "GETSET",
    "key value",
    "Set the string value of a key and return its old value",
    1,
    "1.0.0" },
    { "HDEL",
    "key field [field ...]",
    "Delete one or more hash fields",
    5,
    "2.0.0" },
    { "HEXISTS",
    "key field",
    "Determine if a hash field exists",
    5,
    "2.0.0" },
    { "HGET",
    "key field",
    "Get the value of a hash field",
    5,
    "2.0.0" },
    { "HGETALL",
    "key",
    "Get all the fields and values in a hash",
    5,
    "2.0.0" },
    { "HINCRBY",
    "key field increment",
    "Increment the integer value of a hash field by the given number",
    5,
    "2.0.0" },
    { "HINCRBYFLOAT",
    "key field increment",
    "Increment the float value of a hash field by the given amount",
    5,
    "2.6.0" },
    { "HKEYS",
    "key",
    "Get all the fields in a hash",
    5,
    "2.0.0" },
    { "HLEN",
    "key",
    "Get the number of fields in a hash",
    5,
    "2.0.0" },
    { "HMGET",
    "key field [field ...]",
    "Get the values of all the given hash fields",
    5,
    "2.0.0" },
    { "HMSET",
    "key field value [field value ...]",
    "Set multiple hash fields to multiple values",
    5,
    "2.0.0" },
    { "HSCAN",
    "key cursor [MATCH pattern] [COUNT count]",
    "Incrementally iterate hash fields and associated values",
    5,
    "2.8.0" },
    { "HSET",
    "key field value",
    "Set the string value of a hash field",
    5,
    "2.0.0" },
    { "HSETNX",
    "key field value",
    "Set the value of a hash field, only if the field does not exist",
    5,
    "2.0.0" },
    { "HVALS",
    "key",
    "Get all the values in a hash",
    5,
    "2.0.0" },
    { "INCR",
    "key",
    "Increment the integer value of a key by one",
    1,
    "1.0.0" },
    { "INCRBY",
    "key increment",
    "Increment the integer value of a key by the given amount",
    1,
    "1.0.0" },
    { "INCRBYFLOAT",
    "key increment",
    "Increment the float value of a key by the given amount",
    1,
    "2.6.0" },
    { "INFO",
    "[section]",
    "Get information and statistics about the server",
    9,
    "1.0.0" },
    { "KEYS",
    "pattern",
    "Find all keys matching the given pattern",
    0,
    "1.0.0" },
    { "LASTSAVE",
    "-",
    "Get the UNIX time stamp of the last successful save to disk",
    9,
    "1.0.0" },
    { "LINDEX",
    "key index",
    "Get an element from a list by its index",
    2,
    "1.0.0" },
    { "LINSERT",
    "key BEFORE|AFTER pivot value",
    "Insert an element before or after another element in a list",
    2,
    "2.2.0" },
    { "LLEN",
    "key",
    "Get the length of a list",
    2,
    "1.0.0" },
    { "LPOP",
    "key",
    "Remove and get the first element in a list",
    2,
    "1.0.0" },
    { "LPUSH",
    "key value [value ...]",
    "Prepend one or multiple values to a list",
    2,
    "1.0.0" },
    { "LPUSHX",
    "key value",
    "Prepend a value to a list, only if the list exists",
    2,
    "2.2.0" },
    { "LRANGE",
    "key start stop",
    "Get a range of elements from a list",
    2,
    "1.0.0" },
    { "LREM",
    "key count value",
    "Remove elements from a list",
    2,
    "1.0.0" },
    { "LSET",
    "key index value",
    "Set the value of an element in a list by its index",
    2,
    "1.0.0" },
    { "LTRIM",
    "key start stop",
    "Trim a list to the specified range",
    2,
    "1.0.0" },
    { "MGET",
    "key [key ...]",
    "Get the values of all the given keys",
    1,
    "1.0.0" },
    { "MIGRATE",
    "host port key destination-db timeout [COPY] [REPLACE]",
    "Atomically transfer a key from a Redis instance to another one.",
    0,
    "2.6.0" },
    { "MONITOR",
    "-",
    "Listen for all requests received by the server in real time",
    9,
    "1.0.0" },
    { "MOVE",
    "key db",
    "Move a key to another database",
    0,
    "1.0.0" },
    { "MSET",
    "key value [key value ...]",
    "Set multiple keys to multiple values",
    1,
    "1.0.1" },
    { "MSETNX",
    "key value [key value ...]",
    "Set multiple keys to multiple values, only if none of the keys exist",
    1,
    "1.0.1" },
    { "MULTI",
    "-",
    "Mark the start of a transaction block",
    7,
    "1.2.0" },
    { "OBJECT",
    "subcommand [arguments [arguments ...]]",
    "Inspect the internals of Redis objects",
    0,
    "2.2.3" },
    { "PERSIST",
    "key",
    "Remove the expiration from a key",
    0,
    "2.2.0" },
    { "PEXPIRE",
    "key milliseconds",
    "Set a key's time to live in milliseconds",
    0,
    "2.6.0" },
    { "PEXPIREAT",
    "key milliseconds-timestamp",
    "Set the expiration for a key as a UNIX timestamp specified in milliseconds",
    0,
    "2.6.0" },
    { "PFADD",
    "key element [element ...]",
    "Adds the specified elements to the specified HyperLogLog.",
    11,
    "2.8.9" },
    { "PFCOUNT",
    "key [key ...]",
    "Return the approximated cardinality of the set(s) observed by the HyperLogLog at key(s).",
    11,
    "2.8.9" },
    { "PFMERGE",
    "destkey sourcekey [sourcekey ...]",
    "Merge N different HyperLogLogs into a single one.",
    11,
    "2.8.9" },
    { "PING",
    "-",
    "Ping the server",
    8,
    "1.0.0" },
    { "PSETEX",
    "key milliseconds value",
    "Set the value and expiration in milliseconds of a key",
    1,
    "2.6.0" },
    { "PSUBSCRIBE",
    "pattern [pattern ...]",
    "Listen for messages published to channels matching the given patterns",
    6,
    "2.0.0" },
    { "PTTL",
    "key",
    "Get the time to live for a key in milliseconds",
    0,
    "2.6.0" },
    { "PUBLISH",
    "channel message",
    "Post a message to a channel",
    6,
    "2.0.0" },
    { "PUBSUB",
    "subcommand [argument [argument ...]]",
    "Inspect the state of the Pub/Sub subsystem",
    6,
    "2.8.0" },
    { "PUNSUBSCRIBE",
    "[pattern [pattern ...]]",
    "Stop listening for messages posted to channels matching the given patterns",
    6,
    "2.0.0" },
    { "QUIT",
    "-",
    "Close the connection",
    8,
    "1.0.0" },
    { "RANDOMKEY",
    "-",
    "Return a random key from the keyspace",
    0,
    "1.0.0" },
    { "RENAME",
    "key newkey",
    "Rename a key",
    0,
    "1.0.0" },
    { "RENAMENX",
    "key newkey",
    "Rename a key, only if the new key does not exist",
    0,
    "1.0.0" },
    { "RESTORE",
    "key ttl serialized-value",
    "Create a key using the provided serialized value, previously obtained using DUMP.",
    0,
    "2.6.0" },
    { "RPOP",
    "key",
    "Remove and get the last element in a list",
    2,
    "1.0.0" },
    { "RPOPLPUSH",
    "source destination",
    "Remove the last element in a list, append it to another list and return it",
    2,
    "1.2.0" },
    { "RPUSH",
    "key value [value ...]",
    "Append one or multiple values to a list",
    2,
    "1.0.0" },
    { "RPUSHX",
    "key value",
    "Append a value to a list, only if the list exists",
    2,
    "2.2.0" },
    { "SADD",
    "key member [member ...]",
    "Add one or more members to a set",
    3,
    "1.0.0" },
    { "SAVE",
    "-",
    "Synchronously save the dataset to disk",
    9,
    "1.0.0" },
    { "SCAN",
    "cursor [MATCH pattern] [COUNT count]",
    "Incrementally iterate the keys space",
    0,
    "2.8.0" },
    { "SCARD",
    "key",
    "Get the number of members in a set",
    3,
    "1.0.0" },
    { "SCRIPT EXISTS",
    "script [script ...]",
    "Check existence of scripts in the script cache.",
    10,
    "2.6.0" },
    { "SCRIPT FLUSH",
    "-",
    "Remove all the scripts from the script cache.",
    10,
    "2.6.0" },
    { "SCRIPT KILL",
    "-",
    "Kill the script currently in execution.",
    10,
    "2.6.0" },
    { "SCRIPT LOAD",
    "script",
    "Load the specified Lua script into the script cache.",
    10,
    "2.6.0" },
    { "SDIFF",
    "key [key ...]",
    "Subtract multiple sets",
    3,
    "1.0.0" },
    { "SDIFFSTORE",
    "destination key [key ...]",
    "Subtract multiple sets and store the resulting set in a key",
    3,
    "1.0.0" },
    { "SELECT",
    "index",
    "Change the selected database for the current connection",
    8,
    "1.0.0" },
    { "SET",
    "key value [EX seconds] [PX milliseconds] [NX|XX]",
    "Set the string value of a key",
    1,
    "1.0.0" },
    { "SETBIT",
    "key offset value",
    "Sets or clears the bit at offset in the string value stored at key",
    1,
    "2.2.0" },
    { "SETEX",
    "key seconds value",
    "Set the value and expiration of a key",
    1,
    "2.0.0" },
    { "SETNX",
    "key value",
    "Set the value of a key, only if the key does not exist",
    1,
    "1.0.0" },
    { "SETRANGE",
    "key offset value",
    "Overwrite part of a string at key starting at the specified offset",
    1,
    "2.2.0" },
    { "SHUTDOWN",
    "[NOSAVE] [SAVE]",
    "Synchronously save the dataset to disk and then shut down the server",
    9,
    "1.0.0" },
    { "SINTER",
    "key [key ...]",
    "Intersect multiple sets",
    3,
    "1.0.0" },
    { "SINTERSTORE",
    "destination key [key ...]",
    "Intersect multiple sets and store the resulting set in a key",
    3,
    "1.0.0" },
    { "SISMEMBER",
    "key member",
    "Determine if a given value is a member of a set",
    3,
    "1.0.0" },
    { "SLAVEOF",
    "host port",
    "Make the server a slave of another instance, or promote it as master",
    9,
    "1.0.0" },
    { "SLOWLOG",
    "subcommand [argument]",
    "Manages the Redis slow queries log",
    9,
    "2.2.12" },
    { "SMEMBERS",
    "key",
    "Get all the members in a set",
    3,
    "1.0.0" },
    { "SMOVE",
    "source destination member",
    "Move a member from one set to another",
    3,
    "1.0.0" },
    { "SORT",
    "key [BY pattern] [LIMIT offset count] [GET pattern [GET pattern ...]] [ASC|DESC] [ALPHA] [STORE destination]",
    "Sort the elements in a list, set or sorted set",
    0,
    "1.0.0" },
    { "SPOP",
    "key",
    "Remove and return a random member from a set",
    3,
    "1.0.0" },
    { "SRANDMEMBER",
    "key [count]",
    "Get one or multiple random members from a set",
    3,
    "1.0.0" },
    { "SREM",
    "key member [member ...]",
    "Remove one or more members from a set",
    3,
    "1.0.0" },
    { "SSCAN",
    "key cursor [MATCH pattern] [COUNT count]",
    "Incrementally iterate Set elements",
    3,
    "2.8.0" },
    { "STRLEN",
    "key",
    "Get the length of the value stored in a key",
    1,
    "2.2.0" },
    { "SUBSCRIBE",
    "channel [channel ...]",
    "Listen for messages published to the given channels",
    6,
    "2.0.0" },
    { "SUNION",
    "key [key ...]",
    "Add multiple sets",
    3,
    "1.0.0" },
    { "SUNIONSTORE",
    "destination key [key ...]",
    "Add multiple sets and store the resulting set in a key",
    3,
    "1.0.0" },
    { "SYNC",
    "-",
    "Internal command used for replication",
    9,
    "1.0.0" },
    { "TIME",
    "-",
    "Return the current server time",
    9,
    "2.6.0" },
    { "TTL",
    "key",
    "Get the time to live for a key",
    0,
    "1.0.0" },
    { "TYPE",
    "key",
    "Determine the type stored at key",
    0,
    "1.0.0" },
    { "UNSUBSCRIBE",
    "[channel [channel ...]]",
    "Stop listening for messages posted to the given channels",
    6,
    "2.0.0" },
    { "UNWATCH",
    "-",
    "Forget about all watched keys",
    7,
    "2.2.0" },
    { "WATCH",
    "key [key ...]",
    "Watch the given keys to determine execution of the MULTI/EXEC block",
    7,
    "2.2.0" },
    { "ZADD",
    "key score member [score member ...]",
    "Add one or more members to a sorted set, or update its score if it already exists",
    4,
    "1.2.0" },
    { "ZCARD",
    "key",
    "Get the number of members in a sorted set",
    4,
    "1.2.0" },
    { "ZCOUNT",
    "key min max",
    "Count the members in a sorted set with scores within the given values",
    4,
    "2.0.0" },
    { "ZINCRBY",
    "key increment member",
    "Increment the score of a member in a sorted set",
    4,
    "1.2.0" },
    { "ZINTERSTORE",
    "destination numkeys key [key ...] [WEIGHTS weight] [AGGREGATE SUM|MIN|MAX]",
    "Intersect multiple sorted sets and store the resulting sorted set in a new key",
    4,
    "2.0.0" },
    { "ZLEXCOUNT",
    "key min max",
    "Count the number of members in a sorted set between a given lexicographical range",
    4,
    "2.8.9" },
    { "ZRANGE",
    "key start stop [WITHSCORES]",
    "Return a range of members in a sorted set, by index",
    4,
    "1.2.0" },
    { "ZRANGEBYLEX",
    "key min max [LIMIT offset count]",
    "Return a range of members in a sorted set, by lexicographical range",
    4,
    "2.8.9" },
    { "ZRANGEBYSCORE",
    "key min max [WITHSCORES] [LIMIT offset count]",
    "Return a range of members in a sorted set, by score",
    4,
    "1.0.5" },
    { "ZRANK",
    "key member",
    "Determine the index of a member in a sorted set",
    4,
    "2.0.0" },
    { "ZREM",
    "key member [member ...]",
    "Remove one or more members from a sorted set",
    4,
    "1.2.0" },
    { "ZREMRANGEBYLEX",
    "key min max",
    "Remove all members in a sorted set between the given lexicographical range",
    4,
    "2.8.9" },
    { "ZREMRANGEBYRANK",
    "key start stop",
    "Remove all members in a sorted set within the given indexes",
    4,
    "2.0.0" },
    { "ZREMRANGEBYSCORE",
    "key min max",
    "Remove all members in a sorted set within the given scores",
    4,
    "1.2.0" },
    { "ZREVRANGE",
    "key start stop [WITHSCORES]",
    "Return a range of members in a sorted set, by index, with scores ordered from high to low",
    4,
    "1.2.0" },
    { "ZREVRANGEBYSCORE",
    "key max min [WITHSCORES] [LIMIT offset count]",
    "Return a range of members in a sorted set, by score, with scores ordered from high to low",
    4,
    "2.2.0" },
    { "ZREVRANK",
    "key member",
    "Determine the index of a member in a sorted set, with scores ordered from high to low",
    4,
    "2.0.0" },
    { "ZSCAN",
    "key cursor [MATCH pattern] [COUNT count]",
    "Incrementally iterate sorted sets elements and associated scores",
    4,
    "2.8.0" },
    { "ZSCORE",
    "key member",
    "Get the score associated with the given member in a sorted set",
    4,
    "1.2.0" },
    { "ZUNIONSTORE",
    "destination numkeys key [key ...] [WEIGHTS weight] [AGGREGATE SUM|MIN|MAX]",
    "Add multiple sorted sets and store the resulting sorted set in a new key",
    4,
    "2.0.0" }
};
# 52 "redis-cli.c" 2
# 1 "anet.h" 1
# 46 "anet.h"
int anetTcpConnect(char *err, char *addr, int port);
int anetTcpNonBlockConnect(char *err, char *addr, int port);
int anetTcpNonBlockBindConnect(char *err, char *addr, int port, char *source_addr);
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
int anetEnableTcpNoDelay(char *err, int fd);
int anetDisableTcpNoDelay(char *err, int fd);
int anetTcpKeepAlive(char *err, int fd);
int anetPeerToString(int fd, char *ip, size_t ip_len, int *port);
int anetKeepAlive(char *err, int fd, int interval);
int anetSockName(int fd, char *ip, size_t ip_len, int *port);
# 53 "redis-cli.c" 2
# 1 "ae.h" 1
# 53 "ae.h"
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
# 54 "redis-cli.c" 2
# 63 "redis-cli.c"
static redisContext *context;
static struct config {
    char *hostip;
    int hostport;
    char *hostsocket;
    long repeat;
    long interval;
    int dbnum;
    int interactive;
    int shutdown;
    int monitor_mode;
    int pubsub_mode;
    int latency_mode;
    int latency_history;
    int cluster_mode;
    int cluster_reissue_command;
    int slave_mode;
    int pipe_mode;
    int pipe_timeout;
    int getrdb_mode;
    int stat_mode;
    int scan_mode;
    int intrinsic_latency_mode;
    int intrinsic_latency_duration;
    char *pattern;
    char *rdb_filename;
    int bigkeys;
    int stdinarg;
    char *auth;
    int output;
    sds mb_delim;
    char prompt[128];
    char *eval;
} config;

static void usage();
static void slaveMode(void);
char *redisGitSHA1(void);
char *redisGitDirty(void);





static long long ustime(void) {
    struct timeval tv;
    long long ust;

    gettimeofday(&tv, ((void *)0));
    ust = ((long long)tv.tv_sec)*1000000;
    ust += tv.tv_usec;
    return ust;
}

static long long mstime(void) {
    return ustime()/1000;
}

static void cliRefreshPrompt(void) {
    int len;

    if (config.hostsocket != ((void *)0))
        len = snprintf(config.prompt,sizeof(config.prompt),"redis %s",
                       config.hostsocket);
    else
        len = snprintf(config.prompt,sizeof(config.prompt),
                       (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (config.hostip) && (':') == '\0' ? (char *) __rawmemchr (config.hostip, ':') : __builtin_strchr (config.hostip, ':'))) ? "[%s]:%d" : "%s:%d",
                       config.hostip, config.hostport);

    if (config.dbnum != 0)
        len += snprintf(config.prompt+len,sizeof(config.prompt)-len,"[%d]",
            config.dbnum);
    snprintf(config.prompt+len,sizeof(config.prompt)-len,"> ");
}
# 145 "redis-cli.c"
typedef struct {
    int type;
    int argc;
    sds *argv;
    sds full;


    struct commandHelp *org;
} helpEntry;

static helpEntry *helpEntries;
static int helpEntriesLen;

static sds cliVersion() {
    sds version;
    version = sdscatprintf(sdsempty(), "%s", "2.9.11");


    if (strtoll(redisGitSHA1(),((void *)0),16)) {
        version = sdscatprintf(version, " (git:%s", redisGitSHA1());
        if (strtoll(redisGitDirty(),((void *)0),10))
            version = sdscatprintf(version, "-dirty");
        version = sdscat(version, ")");
    }
    return version;
}

static void cliInitHelp() {
    int commandslen = sizeof(commandHelp)/sizeof(struct commandHelp);
    int groupslen = sizeof(commandGroups)/sizeof(char*);
    int i, len, pos = 0;
    helpEntry tmp;

    helpEntriesLen = len = commandslen+groupslen;
    helpEntries = malloc(sizeof(helpEntry)*len);

    for (i = 0; i < groupslen; i++) {
        tmp.argc = 1;
        tmp.argv = malloc(sizeof(sds));
        tmp.argv[0] = sdscatprintf(sdsempty(),"@%s",commandGroups[i]);
        tmp.full = tmp.argv[0];
        tmp.type = 2;
        tmp.org = ((void *)0);
        helpEntries[pos++] = tmp;
    }

    for (i = 0; i < commandslen; i++) {
        tmp.argv = sdssplitargs(commandHelp[i].name,&tmp.argc);
        tmp.full = sdsnew(commandHelp[i].name);
        tmp.type = 1;
        tmp.org = &commandHelp[i];
        helpEntries[pos++] = tmp;
    }
}


static void cliOutputCommandHelp(struct commandHelp *help, int group) {
    printf("\r\n  \x1b[1m%s\x1b[0m \x1b[90m%s\x1b[0m\r\n", help->name, help->params);
    printf("  \x1b[33msummary:\x1b[0m %s\r\n", help->summary);
    printf("  \x1b[33msince:\x1b[0m %s\r\n", help->since);
    if (group) {
        printf("  \x1b[33mgroup:\x1b[0m %s\r\n", commandGroups[help->group]);
    }
}


static void cliOutputGenericHelp() {
    sds version = cliVersion();
    printf(
        "redis-cli %s\r\n"
        "Type: \"help @<group>\" to get a list of commands in <group>\r\n"
        "      \"help <command>\" for help on <command>\r\n"
        "      \"help <tab>\" to get a list of possible help topics\r\n"
        "      \"quit\" to exit\r\n",
        version
    );
    sdsfree(version);
}


static void cliOutputHelp(int argc, char **argv) {
    int i, j, len;
    int group = -1;
    helpEntry *entry;
    struct commandHelp *help;

    if (argc == 0) {
        cliOutputGenericHelp();
        return;
    } else if (argc > 0 && argv[0][0] == '@') {
        len = sizeof(commandGroups)/sizeof(char*);
        for (i = 0; i < len; i++) {
            if (strcasecmp(argv[0]+1,commandGroups[i]) == 0) {
                group = i;
                break;
            }
        }
    }

    ((argc > 0) ? (void) (0) : __assert_fail ("argc > 0", "redis-cli.c", 244, __PRETTY_FUNCTION__));
    for (i = 0; i < helpEntriesLen; i++) {
        entry = &helpEntries[i];
        if (entry->type != 1) continue;

        help = entry->org;
        if (group == -1) {

            if (argc == entry->argc) {
                for (j = 0; j < argc; j++) {
                    if (strcasecmp(argv[j],entry->argv[j]) != 0) break;
                }
                if (j == argc) {
                    cliOutputCommandHelp(help,1);
                }
            }
        } else {
            if (group == help->group) {
                cliOutputCommandHelp(help,0);
            }
        }
    }
    printf("\r\n");
}

static void completionCallback(const char *buf, linenoiseCompletions *lc) {
    size_t startpos = 0;
    int mask;
    int i;
    size_t matchlen;
    sds tmp;

    if (strncasecmp(buf,"help ",5) == 0) {
        startpos = 5;
        while (((*__ctype_b_loc ())[(int) ((buf[startpos]))] & (unsigned short int) _ISspace)) startpos++;
        mask = 1 | 2;
    } else {
        mask = 1;
    }

    for (i = 0; i < helpEntriesLen; i++) {
        if (!(helpEntries[i].type & mask)) continue;

        matchlen = strlen(buf+startpos);
        if (strncasecmp(buf+startpos,helpEntries[i].full,matchlen) == 0) {
            tmp = sdsnewlen(buf,startpos);
            tmp = sdscat(tmp,helpEntries[i].full);
            linenoiseAddCompletion(lc,tmp);
            sdsfree(tmp);
        }
    }
}






static int cliAuth() {
    redisReply *reply;
    if (config.auth == ((void *)0)) return 0;

    reply = redisCommand(context,"AUTH %s",config.auth);
    if (reply != ((void *)0)) {
        freeReplyObject(reply);
        return 0;
    }
    return -1;
}


static int cliSelect() {
    redisReply *reply;
    if (config.dbnum == 0) return 0;

    reply = redisCommand(context,"SELECT %d",config.dbnum);
    if (reply != ((void *)0)) {
        freeReplyObject(reply);
        return 0;
    }
    return -1;
}



static int cliConnect(int force) {
    if (context == ((void *)0) || force) {
        if (context != ((void *)0))
            redisFree(context);

        if (config.hostsocket == ((void *)0)) {
            context = redisConnect(config.hostip,config.hostport);
        } else {
            context = redisConnectUnix(config.hostsocket);
        }

        if (context->err) {
            fprintf(stderr,"Could not connect to Redis at ");
            if (config.hostsocket == ((void *)0))
                fprintf(stderr,"%s:%d: %s\n",config.hostip,config.hostport,context->errstr);
            else
                fprintf(stderr,"%s: %s\n",config.hostsocket,context->errstr);
            redisFree(context);
            context = ((void *)0);
            return -1;
        }





        anetKeepAlive(((void *)0), context->fd, 15);


        if (cliAuth() != 0)
            return -1;
        if (cliSelect() != 0)
            return -1;
    }
    return 0;
}

static void cliPrintContextError() {
    if (context == ((void *)0)) return;
    fprintf(stderr,"Error: %s\n",context->errstr);
}

static sds cliFormatReplyTTY(redisReply *r, char *prefix) {
    sds out = sdsempty();
    switch (r->type) {
    case 6:
        out = sdscatprintf(out,"(error) %s\n", r->str);
    break;
    case 5:
        out = sdscat(out,r->str);
        out = sdscat(out,"\n");
    break;
    case 3:
        out = sdscatprintf(out,"(integer) %lld\n",r->integer);
    break;
    case 1:


        out = sdscatrepr(out,r->str,r->len);
        out = sdscat(out,"\n");
    break;
    case 4:
        out = sdscat(out,"(nil)\n");
    break;
    case 2:
        if (r->elements == 0) {
            out = sdscat(out,"(empty list or set)\n");
        } else {
            unsigned int i, idxlen = 0;
            char _prefixlen[16];
            char _prefixfmt[16];
            sds _prefix;
            sds tmp;


            i = r->elements;
            do {
                idxlen++;
                i /= 10;
            } while(i);


            memset(_prefixlen,' ',idxlen+2);
            _prefixlen[idxlen+2] = '\0';
            _prefix = sdscat(sdsnew(prefix),_prefixlen);


            snprintf(_prefixfmt,sizeof(_prefixfmt),"%%s%%%dd) ",idxlen);

            for (i = 0; i < r->elements; i++) {


                out = sdscatprintf(out,_prefixfmt,i == 0 ? "" : prefix,i+1);


                tmp = cliFormatReplyTTY(r->element[i],_prefix);
                out = sdscatlen(out,tmp,sdslen(tmp));
                sdsfree(tmp);
            }
            sdsfree(_prefix);
        }
    break;
    default:
        fprintf(stderr,"Unknown reply type: %d\n", r->type);
        exit(1);
    }
    return out;
}

static sds cliFormatReplyRaw(redisReply *r) {
    sds out = sdsempty(), tmp;
    size_t i;

    switch (r->type) {
    case 4:

        break;
    case 6:
        out = sdscatlen(out,r->str,r->len);
        out = sdscatlen(out,"\n",1);
        break;
    case 5:
    case 1:
        out = sdscatlen(out,r->str,r->len);
        break;
    case 3:
        out = sdscatprintf(out,"%lld",r->integer);
        break;
    case 2:
        for (i = 0; i < r->elements; i++) {
            if (i > 0) out = sdscat(out,config.mb_delim);
            tmp = cliFormatReplyRaw(r->element[i]);
            out = sdscatlen(out,tmp,sdslen(tmp));
            sdsfree(tmp);
        }
        break;
    default:
        fprintf(stderr,"Unknown reply type: %d\n", r->type);
        exit(1);
    }
    return out;
}

static sds cliFormatReplyCSV(redisReply *r) {
    unsigned int i;

    sds out = sdsempty();
    switch (r->type) {
    case 6:
        out = sdscat(out,"ERROR,");
        out = sdscatrepr(out,r->str,strlen(r->str));
    break;
    case 5:
        out = sdscatrepr(out,r->str,r->len);
    break;
    case 3:
        out = sdscatprintf(out,"%lld",r->integer);
    break;
    case 1:
        out = sdscatrepr(out,r->str,r->len);
    break;
    case 4:
        out = sdscat(out,"NIL\n");
    break;
    case 2:
        for (i = 0; i < r->elements; i++) {
            sds tmp = cliFormatReplyCSV(r->element[i]);
            out = sdscatlen(out,tmp,sdslen(tmp));
            if (i != r->elements-1) out = sdscat(out,",");
            sdsfree(tmp);
        }
    break;
    default:
        fprintf(stderr,"Unknown reply type: %d\n", r->type);
        exit(1);
    }
    return out;
}

static int cliReadReply(int output_raw_strings) {
    void *_reply;
    redisReply *reply;
    sds out = ((void *)0);
    int output = 1;

    if (redisGetReply(context,&_reply) != 0) {
        if (config.shutdown)
            return 0;
        if (config.interactive) {

            if (context->err == 1 && (*__errno_location ()) == 104)
                return -1;
            if (context->err == 3)
                return -1;
        }
        cliPrintContextError();
        exit(1);
        return -1;
    }

    reply = (redisReply*)_reply;



    if (config.cluster_mode && reply->type == 6 &&
        (!(__extension__ (__builtin_constant_p (5) && ((__builtin_constant_p (reply->str) && strlen (reply->str) < ((size_t) (5))) || (__builtin_constant_p ("MOVED") && strlen ("MOVED") < ((size_t) (5)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (reply->str) && __builtin_constant_p ("MOVED") && (__s1_len = __builtin_strlen (reply->str), __s2_len = __builtin_strlen ("MOVED"), (!((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("MOVED") + 1) - (size_t)(const void *)("MOVED") == 1) || __s2_len >= 4)) ? __builtin_strcmp (reply->str, "MOVED") : (__builtin_constant_p (reply->str) && ((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) && (__s1_len = __builtin_strlen (reply->str), __s1_len < 4) ? (__builtin_constant_p ("MOVED") && ((size_t)(const void *)(("MOVED") + 1) - (size_t)(const void *)("MOVED") == 1) ? __builtin_strcmp (reply->str, "MOVED") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("MOVED"); int __result = (((const unsigned char *) (const char *) (reply->str))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (reply->str))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (reply->str))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (reply->str))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("MOVED") && ((size_t)(const void *)(("MOVED") + 1) - (size_t)(const void *)("MOVED") == 1) && (__s2_len = __builtin_strlen ("MOVED"), __s2_len < 4) ? (__builtin_constant_p (reply->str) && ((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) ? __builtin_strcmp (reply->str, "MOVED") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (reply->str); int __result = (((const unsigned char *) (const char *) ("MOVED"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("MOVED"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("MOVED"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("MOVED"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (reply->str, "MOVED")))); }) : strncmp (reply->str, "MOVED", 5))) || !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (reply->str) && __builtin_constant_p ("ASK") && (__s1_len = __builtin_strlen (reply->str), __s2_len = __builtin_strlen ("ASK"), (!((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("ASK") + 1) - (size_t)(const void *)("ASK") == 1) || __s2_len >= 4)) ? __builtin_strcmp (reply->str, "ASK") : (__builtin_constant_p (reply->str) && ((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) && (__s1_len = __builtin_strlen (reply->str), __s1_len < 4) ? (__builtin_constant_p ("ASK") && ((size_t)(const void *)(("ASK") + 1) - (size_t)(const void *)("ASK") == 1) ? __builtin_strcmp (reply->str, "ASK") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("ASK"); int __result = (((const unsigned char *) (const char *) (reply->str))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (reply->str))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (reply->str))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (reply->str))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("ASK") && ((size_t)(const void *)(("ASK") + 1) - (size_t)(const void *)("ASK") == 1) && (__s2_len = __builtin_strlen ("ASK"), __s2_len < 4) ? (__builtin_constant_p (reply->str) && ((size_t)(const void *)((reply->str) + 1) - (size_t)(const void *)(reply->str) == 1) ? __builtin_strcmp (reply->str, "ASK") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (reply->str); int __result = (((const unsigned char *) (const char *) ("ASK"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("ASK"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("ASK"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("ASK"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (reply->str, "ASK")))); })))
    {
        char *p = reply->str, *s;
        int slot;

        output = 0;





        s = (__extension__ (__builtin_constant_p (' ') && !__builtin_constant_p (p) && (' ') == '\0' ? (char *) __rawmemchr (p, ' ') : __builtin_strchr (p, ' ')));
        p = (__extension__ (__builtin_constant_p (' ') && !__builtin_constant_p (s+1) && (' ') == '\0' ? (char *) __rawmemchr (s+1, ' ') : __builtin_strchr (s+1, ' ')));
        *p = '\0';
        slot = atoi(s+1);
        s = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (p+1) && (':') == '\0' ? (char *) __rawmemchr (p+1, ':') : __builtin_strchr (p+1, ':')));
        *s = '\0';
        sdsfree(config.hostip);
        config.hostip = sdsnew(p+1);
        config.hostport = atoi(s+1);
        if (config.interactive)
            printf("-> Redirected to slot [%d] located at %s:%d\n",
                slot, config.hostip, config.hostport);
        config.cluster_reissue_command = 1;
        cliRefreshPrompt();
    }

    if (output) {
        if (output_raw_strings) {
            out = cliFormatReplyRaw(reply);
        } else {
            if (config.output == 1) {
                out = cliFormatReplyRaw(reply);
                out = sdscat(out,"\n");
            } else if (config.output == 0) {
                out = cliFormatReplyTTY(reply,"");
            } else if (config.output == 2) {
                out = cliFormatReplyCSV(reply);
                out = sdscat(out,"\n");
            }
        }
        fwrite(out,sdslen(out),1,stdout);
        sdsfree(out);
    }
    freeReplyObject(reply);
    return 0;
}

static int cliSendCommand(int argc, char **argv, int repeat) {
    char *command = argv[0];
    size_t *argvlen;
    int j, output_raw;

    if (!strcasecmp(command,"help") || !strcasecmp(command,"?")) {
        cliOutputHelp(--argc, ++argv);
        return 0;
    }

    if (context == ((void *)0)) return -1;

    output_raw = 0;
    if (!strcasecmp(command,"info") ||
        (argc == 2 && !strcasecmp(command,"cluster") &&
                      (!strcasecmp(argv[1],"nodes") ||
                       !strcasecmp(argv[1],"info"))) ||
        (argc == 2 && !strcasecmp(command,"client") &&
                       !strcasecmp(argv[1],"list")))

    {
        output_raw = 1;
    }

    if (!strcasecmp(command,"shutdown")) config.shutdown = 1;
    if (!strcasecmp(command,"monitor")) config.monitor_mode = 1;
    if (!strcasecmp(command,"subscribe") ||
        !strcasecmp(command,"psubscribe")) config.pubsub_mode = 1;
    if (!strcasecmp(command,"sync") ||
        !strcasecmp(command,"psync")) config.slave_mode = 1;


    argvlen = malloc(argc*sizeof(size_t));
    for (j = 0; j < argc; j++)
        argvlen[j] = sdslen(argv[j]);

    while(repeat--) {
        redisAppendCommandArgv(context,argc,(const char**)argv,argvlen);
        while (config.monitor_mode) {
            if (cliReadReply(output_raw) != 0) exit(1);
            fflush(stdout);
        }

        if (config.pubsub_mode) {
            if (config.output != 1)
                printf("Reading messages... (press Ctrl-C to quit)\n");
            while (1) {
                if (cliReadReply(output_raw) != 0) exit(1);
            }
        }

        if (config.slave_mode) {
            printf("Entering slave output mode...  (press Ctrl-C to quit)\n");
            slaveMode();
            config.slave_mode = 0;
            return -1;
        }

        if (cliReadReply(output_raw) != 0) {
            free(argvlen);
            return -1;
        } else {

            if (!strcasecmp(command,"select") && argc == 2) {
                config.dbnum = atoi(argv[1]);
                cliRefreshPrompt();
            }
        }
        if (config.interval) usleep(config.interval);
        fflush(stdout);
    }

    free(argvlen);
    return 0;
}


static redisReply *reconnectingInfo(void) {
    redisContext *c = context;
    redisReply *reply = ((void *)0);
    int tries = 0;

    ((!c->err) ? (void) (0) : __assert_fail ("!c->err", "redis-cli.c", 664, __PRETTY_FUNCTION__));
    while(reply == ((void *)0)) {
        while (c->err & (1 | 3)) {
            printf("Reconnecting (%d)...\r", ++tries);
            fflush(stdout);

            redisFree(c);
            c = redisConnect(config.hostip,config.hostport);
            usleep(1000000);
        }

        reply = redisCommand(c,"INFO");
        if (c->err && !(c->err & (1 | 3))) {
            fprintf(stderr, "Error: %s\n", c->errstr);
            exit(1);
        } else if (tries > 0) {
            printf("\n");
        }
    }

    context = c;
    return reply;
}





static int parseOptions(int argc, char **argv) {
    int i;

    for (i = 1; i < argc; i++) {
        int lastarg = i==argc-1;

        if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-h") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-h"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-h") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-h") && ((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) ? __builtin_strcmp (argv[i], "-h") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-h"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-h") && ((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) && (__s2_len = __builtin_strlen ("-h"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-h") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-h"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-h"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-h"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-h"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-h")))); }) && !lastarg) {
            sdsfree(config.hostip);
            config.hostip = sdsnew(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-h") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-h"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-h") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-h") && ((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) ? __builtin_strcmp (argv[i], "-h") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-h"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-h") && ((size_t)(const void *)(("-h") + 1) - (size_t)(const void *)("-h") == 1) && (__s2_len = __builtin_strlen ("-h"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-h") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-h"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-h"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-h"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-h"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-h")))); }) && lastarg) {
            usage();
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--help") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--help"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--help") + 1) - (size_t)(const void *)("--help") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--help") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--help") && ((size_t)(const void *)(("--help") + 1) - (size_t)(const void *)("--help") == 1) ? __builtin_strcmp (argv[i], "--help") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--help"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--help") && ((size_t)(const void *)(("--help") + 1) - (size_t)(const void *)("--help") == 1) && (__s2_len = __builtin_strlen ("--help"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--help") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--help"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--help"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--help"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--help"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--help")))); })) {
            usage();
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-x") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-x"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-x") + 1) - (size_t)(const void *)("-x") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-x") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-x") && ((size_t)(const void *)(("-x") + 1) - (size_t)(const void *)("-x") == 1) ? __builtin_strcmp (argv[i], "-x") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-x"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-x") && ((size_t)(const void *)(("-x") + 1) - (size_t)(const void *)("-x") == 1) && (__s2_len = __builtin_strlen ("-x"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-x") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-x"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-x"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-x"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-x"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-x")))); })) {
            config.stdinarg = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-p") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-p"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-p") + 1) - (size_t)(const void *)("-p") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-p") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-p") && ((size_t)(const void *)(("-p") + 1) - (size_t)(const void *)("-p") == 1) ? __builtin_strcmp (argv[i], "-p") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-p"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-p") && ((size_t)(const void *)(("-p") + 1) - (size_t)(const void *)("-p") == 1) && (__s2_len = __builtin_strlen ("-p"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-p") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-p"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-p"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-p"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-p"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-p")))); }) && !lastarg) {
            config.hostport = atoi(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-s") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-s"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-s") + 1) - (size_t)(const void *)("-s") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-s") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-s") && ((size_t)(const void *)(("-s") + 1) - (size_t)(const void *)("-s") == 1) ? __builtin_strcmp (argv[i], "-s") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-s"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-s") && ((size_t)(const void *)(("-s") + 1) - (size_t)(const void *)("-s") == 1) && (__s2_len = __builtin_strlen ("-s"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-s") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-s"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-s"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-s"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-s"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-s")))); }) && !lastarg) {
            config.hostsocket = argv[++i];
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-r") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-r"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-r") + 1) - (size_t)(const void *)("-r") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-r") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-r") && ((size_t)(const void *)(("-r") + 1) - (size_t)(const void *)("-r") == 1) ? __builtin_strcmp (argv[i], "-r") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-r"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-r") && ((size_t)(const void *)(("-r") + 1) - (size_t)(const void *)("-r") == 1) && (__s2_len = __builtin_strlen ("-r"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-r") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-r"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-r"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-r"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-r"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-r")))); }) && !lastarg) {
            config.repeat = strtoll(argv[++i],((void *)0),10);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-i") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-i"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-i") + 1) - (size_t)(const void *)("-i") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-i") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-i") && ((size_t)(const void *)(("-i") + 1) - (size_t)(const void *)("-i") == 1) ? __builtin_strcmp (argv[i], "-i") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-i"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-i") && ((size_t)(const void *)(("-i") + 1) - (size_t)(const void *)("-i") == 1) && (__s2_len = __builtin_strlen ("-i"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-i") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-i"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-i"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-i"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-i"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-i")))); }) && !lastarg) {
            double seconds = atof(argv[++i]);
            config.interval = seconds*1000000;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-n") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-n"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-n") + 1) - (size_t)(const void *)("-n") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-n") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-n") && ((size_t)(const void *)(("-n") + 1) - (size_t)(const void *)("-n") == 1) ? __builtin_strcmp (argv[i], "-n") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-n"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-n") && ((size_t)(const void *)(("-n") + 1) - (size_t)(const void *)("-n") == 1) && (__s2_len = __builtin_strlen ("-n"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-n") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-n"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-n"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-n"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-n"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-n")))); }) && !lastarg) {
            config.dbnum = atoi(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-a") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-a"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-a") + 1) - (size_t)(const void *)("-a") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-a") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-a") && ((size_t)(const void *)(("-a") + 1) - (size_t)(const void *)("-a") == 1) ? __builtin_strcmp (argv[i], "-a") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-a"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-a") && ((size_t)(const void *)(("-a") + 1) - (size_t)(const void *)("-a") == 1) && (__s2_len = __builtin_strlen ("-a"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-a") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-a"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-a"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-a"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-a"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-a")))); }) && !lastarg) {
            config.auth = argv[++i];
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--raw") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--raw"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--raw") + 1) - (size_t)(const void *)("--raw") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--raw") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--raw") && ((size_t)(const void *)(("--raw") + 1) - (size_t)(const void *)("--raw") == 1) ? __builtin_strcmp (argv[i], "--raw") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--raw"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--raw") && ((size_t)(const void *)(("--raw") + 1) - (size_t)(const void *)("--raw") == 1) && (__s2_len = __builtin_strlen ("--raw"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--raw") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--raw"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--raw"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--raw"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--raw"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--raw")))); })) {
            config.output = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--csv") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--csv"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--csv") + 1) - (size_t)(const void *)("--csv") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--csv") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--csv") && ((size_t)(const void *)(("--csv") + 1) - (size_t)(const void *)("--csv") == 1) ? __builtin_strcmp (argv[i], "--csv") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--csv"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--csv") && ((size_t)(const void *)(("--csv") + 1) - (size_t)(const void *)("--csv") == 1) && (__s2_len = __builtin_strlen ("--csv"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--csv") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--csv"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--csv"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--csv"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--csv"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--csv")))); })) {
            config.output = 2;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--latency") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--latency"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--latency") + 1) - (size_t)(const void *)("--latency") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--latency") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--latency") && ((size_t)(const void *)(("--latency") + 1) - (size_t)(const void *)("--latency") == 1) ? __builtin_strcmp (argv[i], "--latency") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--latency"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--latency") && ((size_t)(const void *)(("--latency") + 1) - (size_t)(const void *)("--latency") == 1) && (__s2_len = __builtin_strlen ("--latency"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--latency") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--latency"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--latency"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--latency"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--latency"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--latency")))); })) {
            config.latency_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--latency-history") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--latency-history"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--latency-history") + 1) - (size_t)(const void *)("--latency-history") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--latency-history") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--latency-history") && ((size_t)(const void *)(("--latency-history") + 1) - (size_t)(const void *)("--latency-history") == 1) ? __builtin_strcmp (argv[i], "--latency-history") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--latency-history"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--latency-history") && ((size_t)(const void *)(("--latency-history") + 1) - (size_t)(const void *)("--latency-history") == 1) && (__s2_len = __builtin_strlen ("--latency-history"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--latency-history") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--latency-history"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--latency-history"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--latency-history"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--latency-history"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--latency-history")))); })) {
            config.latency_mode = 1;
            config.latency_history = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--slave") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--slave"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--slave") + 1) - (size_t)(const void *)("--slave") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--slave") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--slave") && ((size_t)(const void *)(("--slave") + 1) - (size_t)(const void *)("--slave") == 1) ? __builtin_strcmp (argv[i], "--slave") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--slave"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--slave") && ((size_t)(const void *)(("--slave") + 1) - (size_t)(const void *)("--slave") == 1) && (__s2_len = __builtin_strlen ("--slave"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--slave") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--slave"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--slave"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--slave"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--slave"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--slave")))); })) {
            config.slave_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--stat") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--stat"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--stat") + 1) - (size_t)(const void *)("--stat") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--stat") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--stat") && ((size_t)(const void *)(("--stat") + 1) - (size_t)(const void *)("--stat") == 1) ? __builtin_strcmp (argv[i], "--stat") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--stat"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--stat") && ((size_t)(const void *)(("--stat") + 1) - (size_t)(const void *)("--stat") == 1) && (__s2_len = __builtin_strlen ("--stat"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--stat") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--stat"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--stat"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--stat"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--stat"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--stat")))); })) {
            config.stat_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--scan") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--scan"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--scan") + 1) - (size_t)(const void *)("--scan") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--scan") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--scan") && ((size_t)(const void *)(("--scan") + 1) - (size_t)(const void *)("--scan") == 1) ? __builtin_strcmp (argv[i], "--scan") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--scan"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--scan") && ((size_t)(const void *)(("--scan") + 1) - (size_t)(const void *)("--scan") == 1) && (__s2_len = __builtin_strlen ("--scan"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--scan") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--scan"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--scan"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--scan"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--scan"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--scan")))); })) {
            config.scan_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--pattern") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--pattern"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--pattern") + 1) - (size_t)(const void *)("--pattern") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--pattern") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--pattern") && ((size_t)(const void *)(("--pattern") + 1) - (size_t)(const void *)("--pattern") == 1) ? __builtin_strcmp (argv[i], "--pattern") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--pattern"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--pattern") && ((size_t)(const void *)(("--pattern") + 1) - (size_t)(const void *)("--pattern") == 1) && (__s2_len = __builtin_strlen ("--pattern"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--pattern") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--pattern"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pattern"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pattern"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--pattern"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--pattern")))); }) && !lastarg) {
            config.pattern = argv[++i];
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--intrinsic-latency") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--intrinsic-latency"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--intrinsic-latency") + 1) - (size_t)(const void *)("--intrinsic-latency") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--intrinsic-latency") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--intrinsic-latency") && ((size_t)(const void *)(("--intrinsic-latency") + 1) - (size_t)(const void *)("--intrinsic-latency") == 1) ? __builtin_strcmp (argv[i], "--intrinsic-latency") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--intrinsic-latency"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--intrinsic-latency") && ((size_t)(const void *)(("--intrinsic-latency") + 1) - (size_t)(const void *)("--intrinsic-latency") == 1) && (__s2_len = __builtin_strlen ("--intrinsic-latency"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--intrinsic-latency") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--intrinsic-latency"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--intrinsic-latency"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--intrinsic-latency"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--intrinsic-latency"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--intrinsic-latency")))); }) && !lastarg) {
            config.intrinsic_latency_mode = 1;
            config.intrinsic_latency_duration = atoi(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--rdb") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--rdb"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--rdb") + 1) - (size_t)(const void *)("--rdb") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--rdb") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--rdb") && ((size_t)(const void *)(("--rdb") + 1) - (size_t)(const void *)("--rdb") == 1) ? __builtin_strcmp (argv[i], "--rdb") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--rdb"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--rdb") && ((size_t)(const void *)(("--rdb") + 1) - (size_t)(const void *)("--rdb") == 1) && (__s2_len = __builtin_strlen ("--rdb"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--rdb") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--rdb"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--rdb"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--rdb"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--rdb"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--rdb")))); }) && !lastarg) {
            config.getrdb_mode = 1;
            config.rdb_filename = argv[++i];
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--pipe") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--pipe"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--pipe") + 1) - (size_t)(const void *)("--pipe") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--pipe") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--pipe") && ((size_t)(const void *)(("--pipe") + 1) - (size_t)(const void *)("--pipe") == 1) ? __builtin_strcmp (argv[i], "--pipe") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--pipe"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--pipe") && ((size_t)(const void *)(("--pipe") + 1) - (size_t)(const void *)("--pipe") == 1) && (__s2_len = __builtin_strlen ("--pipe"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--pipe") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--pipe"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pipe"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pipe"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--pipe"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--pipe")))); })) {
            config.pipe_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--pipe-timeout") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--pipe-timeout"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--pipe-timeout") + 1) - (size_t)(const void *)("--pipe-timeout") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--pipe-timeout") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--pipe-timeout") && ((size_t)(const void *)(("--pipe-timeout") + 1) - (size_t)(const void *)("--pipe-timeout") == 1) ? __builtin_strcmp (argv[i], "--pipe-timeout") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--pipe-timeout"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--pipe-timeout") && ((size_t)(const void *)(("--pipe-timeout") + 1) - (size_t)(const void *)("--pipe-timeout") == 1) && (__s2_len = __builtin_strlen ("--pipe-timeout"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--pipe-timeout") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--pipe-timeout"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pipe-timeout"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--pipe-timeout"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--pipe-timeout"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--pipe-timeout")))); }) && !lastarg) {
            config.pipe_timeout = atoi(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--bigkeys") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--bigkeys"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--bigkeys") + 1) - (size_t)(const void *)("--bigkeys") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--bigkeys") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--bigkeys") && ((size_t)(const void *)(("--bigkeys") + 1) - (size_t)(const void *)("--bigkeys") == 1) ? __builtin_strcmp (argv[i], "--bigkeys") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--bigkeys"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--bigkeys") && ((size_t)(const void *)(("--bigkeys") + 1) - (size_t)(const void *)("--bigkeys") == 1) && (__s2_len = __builtin_strlen ("--bigkeys"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--bigkeys") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--bigkeys"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--bigkeys"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--bigkeys"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--bigkeys"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--bigkeys")))); })) {
            config.bigkeys = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--eval") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--eval"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--eval") + 1) - (size_t)(const void *)("--eval") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--eval") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--eval") && ((size_t)(const void *)(("--eval") + 1) - (size_t)(const void *)("--eval") == 1) ? __builtin_strcmp (argv[i], "--eval") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--eval"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--eval") && ((size_t)(const void *)(("--eval") + 1) - (size_t)(const void *)("--eval") == 1) && (__s2_len = __builtin_strlen ("--eval"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--eval") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--eval"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--eval"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--eval"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--eval"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--eval")))); }) && !lastarg) {
            config.eval = argv[++i];
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-c") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-c"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-c") + 1) - (size_t)(const void *)("-c") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-c") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-c") && ((size_t)(const void *)(("-c") + 1) - (size_t)(const void *)("-c") == 1) ? __builtin_strcmp (argv[i], "-c") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-c"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-c") && ((size_t)(const void *)(("-c") + 1) - (size_t)(const void *)("-c") == 1) && (__s2_len = __builtin_strlen ("-c"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-c") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-c"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-c"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-c"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-c"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-c")))); })) {
            config.cluster_mode = 1;
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-d") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-d"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-d") + 1) - (size_t)(const void *)("-d") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-d") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-d") && ((size_t)(const void *)(("-d") + 1) - (size_t)(const void *)("-d") == 1) ? __builtin_strcmp (argv[i], "-d") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-d"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-d") && ((size_t)(const void *)(("-d") + 1) - (size_t)(const void *)("-d") == 1) && (__s2_len = __builtin_strlen ("-d"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-d") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-d"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-d"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-d"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-d"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-d")))); }) && !lastarg) {
            sdsfree(config.mb_delim);
            config.mb_delim = sdsnew(argv[++i]);
        } else if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("-v") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("-v"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-v") + 1) - (size_t)(const void *)("-v") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "-v") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("-v") && ((size_t)(const void *)(("-v") + 1) - (size_t)(const void *)("-v") == 1) ? __builtin_strcmp (argv[i], "-v") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-v"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-v") && ((size_t)(const void *)(("-v") + 1) - (size_t)(const void *)("-v") == 1) && (__s2_len = __builtin_strlen ("-v"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "-v") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("-v"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-v"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-v"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-v"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "-v")))); }) || !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (argv[i]) && __builtin_constant_p ("--version") && (__s1_len = __builtin_strlen (argv[i]), __s2_len = __builtin_strlen ("--version"), (!((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("--version") + 1) - (size_t)(const void *)("--version") == 1) || __s2_len >= 4)) ? __builtin_strcmp (argv[i], "--version") : (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) && (__s1_len = __builtin_strlen (argv[i]), __s1_len < 4) ? (__builtin_constant_p ("--version") && ((size_t)(const void *)(("--version") + 1) - (size_t)(const void *)("--version") == 1) ? __builtin_strcmp (argv[i], "--version") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("--version"); int __result = (((const unsigned char *) (const char *) (argv[i]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[i]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[i]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("--version") && ((size_t)(const void *)(("--version") + 1) - (size_t)(const void *)("--version") == 1) && (__s2_len = __builtin_strlen ("--version"), __s2_len < 4) ? (__builtin_constant_p (argv[i]) && ((size_t)(const void *)((argv[i]) + 1) - (size_t)(const void *)(argv[i]) == 1) ? __builtin_strcmp (argv[i], "--version") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[i]); int __result = (((const unsigned char *) (const char *) ("--version"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--version"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("--version"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("--version"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (argv[i], "--version")))); })) {
            sds version = cliVersion();
            printf("redis-cli %s\n", version);
            sdsfree(version);
            exit(0);
        } else {
            if (argv[i][0] == '-') {
                fprintf(stderr,
                    "Unrecognized option or bad number of args for: '%s'\n",
                    argv[i]);
                exit(1);
            } else {

                break;
            }
        }
    }
    return i;
}

static sds readArgFromStdin(void) {
    char buf[1024];
    sds arg = sdsempty();

    while(1) {
        int nread = read(fileno(stdin),buf,1024);

        if (nread == 0) break;
        else if (nread == -1) {
            perror("Reading from standard input");
            exit(1);
        }
        arg = sdscatlen(arg,buf,nread);
    }
    return arg;
}

static void usage() {
    sds version = cliVersion();
    fprintf(stderr,
"redis-cli %s\n"
"\n"
"Usage: redis-cli [OPTIONS] [cmd [arg [arg ...]]]\n"
"  -h <hostname>      Server hostname (default: 127.0.0.1).\n"
"  -p <port>          Server port (default: 6379).\n"
"  -s <socket>        Server socket (overrides hostname and port).\n"
"  -a <password>      Password to use when connecting to the server.\n"
"  -r <repeat>        Execute specified command N times.\n"
"  -i <interval>      When -r is used, waits <interval> seconds per command.\n"
"                     It is possible to specify sub-second times like -i 0.1.\n"
"  -n <db>            Database number.\n"
"  -x                 Read last argument from STDIN.\n"
"  -d <delimiter>     Multi-bulk delimiter in for raw formatting (default: \\n).\n"
"  -c                 Enable cluster mode (follow -ASK and -MOVED redirections).\n"
"  --raw              Use raw formatting for replies (default when STDOUT is\n"
"                     not a tty).\n"
"  --csv              Output in CSV format.\n"
"  --latency          Enter a special mode continuously sampling latency.\n"
"  --latency-history  Like --latency but tracking latency changes over time.\n"
"                     Default time interval is 15 sec. Change it using -i.\n"
"  --slave            Simulate a slave showing commands received from the master.\n"
"  --rdb <filename>   Transfer an RDB dump from remote server to local file.\n"
"  --pipe             Transfer raw Redis protocol from stdin to server.\n"
"  --pipe-timeout <n> In --pipe mode, abort with error if after sending all data.\n"
"                     no reply is received within <n> seconds.\n"
"                     Default timeout: %d. Use 0 to wait forever.\n"
"  --bigkeys          Sample Redis keys looking for big keys.\n"
"  --scan             List all keys using the SCAN command.\n"
"  --pattern <pat>    Useful with --scan to specify a SCAN pattern.\n"
"  --intrinsic-latency <sec> Run a test to measure intrinsic system latency.\n"
"                     The test will run for the specified amount of seconds.\n"
"  --eval <file>      Send an EVAL command using the Lua script at <file>.\n"
"  --help             Output this help and exit.\n"
"  --version          Output version and exit.\n"
"\n"
"Examples:\n"
"  cat /etc/passwd | redis-cli -x set mypasswd\n"
"  redis-cli get mypasswd\n"
"  redis-cli -r 100 lpush mylist x\n"
"  redis-cli -r 100 -i 1 info | grep used_memory_human:\n"
"  redis-cli --eval myscript.lua key1 key2 , arg1 arg2 arg3\n"
"  redis-cli --scan --pattern '*:12345*'\n"
"\n"
"  (Note: when using --eval the comma separates KEYS[] from ARGV[] items)\n"
"\n"
"When no command is given, redis-cli starts in interactive mode.\n"
"Type \"help\" in interactive mode for information on available commands.\n"
"\n",
        version, 30);
    sdsfree(version);
    exit(1);
}


static char **convertToSds(int count, char** args) {
  int j;
  char **sds = zmalloc(sizeof(char*)*count);

  for(j = 0; j < count; j++)
    sds[j] = sdsnew(args[j]);

  return sds;
}


static void repl() {
    sds historyfile = ((void *)0);
    int history = 0;
    char *line;
    int argc;
    sds *argv;

    config.interactive = 1;
    linenoiseSetMultiLine(1);
    linenoiseSetCompletionCallback(completionCallback);


    if (isatty(fileno(stdin))) {
        history = 1;

        if (getenv("HOME") != ((void *)0)) {
            historyfile = sdscatprintf(sdsempty(),"%s/.rediscli_history",getenv("HOME"));
            linenoiseHistoryLoad(historyfile);
        }
    }

    cliRefreshPrompt();
    while((line = linenoise(context ? config.prompt : "not connected> ")) != ((void *)0)) {
        if (line[0] != '\0') {
            argv = sdssplitargs(line,&argc);
            if (history) linenoiseHistoryAdd(line);
            if (historyfile) linenoiseHistorySave(historyfile);

            if (argv == ((void *)0)) {
                printf("Invalid argument(s)\n");
                free(line);
                continue;
            } else if (argc > 0) {
                if (strcasecmp(argv[0],"quit") == 0 ||
                    strcasecmp(argv[0],"exit") == 0)
                {
                    exit(0);
                } else if (argc == 3 && !strcasecmp(argv[0],"connect")) {
                    sdsfree(config.hostip);
                    config.hostip = sdsnew(argv[1]);
                    config.hostport = atoi(argv[2]);
                    cliRefreshPrompt();
                    cliConnect(1);
                } else if (argc == 1 && !strcasecmp(argv[0],"clear")) {
                    linenoiseClearScreen();
                } else {
                    long long start_time = mstime(), elapsed;
                    int repeat, skipargs = 0;

                    repeat = atoi(argv[0]);
                    if (argc > 1 && repeat) {
                        skipargs = 1;
                    } else {
                        repeat = 1;
                    }

                    while (1) {
                        config.cluster_reissue_command = 0;
                        if (cliSendCommand(argc-skipargs,argv+skipargs,repeat)
                            != 0)
                        {
                            cliConnect(1);



                            if (cliSendCommand(argc-skipargs,argv+skipargs,repeat)
                                != 0)
                                cliPrintContextError();
                        }

                        if (config.cluster_mode && config.cluster_reissue_command) {
                            cliConnect(1);
                        } else {
                            break;
                        }
                    }
                    elapsed = mstime()-start_time;
                    if (elapsed >= 500) {
                        printf("(%.2fs)\n",(double)elapsed/1000);
                    }
                }
            }

            sdsfreesplitres(argv,argc);
        }

        free(line);
    }
    exit(0);
}

static int noninteractive(int argc, char **argv) {
    int retval = 0;
    if (config.stdinarg) {
        argv = zrealloc(argv, (argc+1)*sizeof(char*));
        argv[argc] = readArgFromStdin();
        retval = cliSendCommand(argc+1, argv, config.repeat);
    } else {

        retval = cliSendCommand(argc, argv, config.repeat);
    }
    return retval;
}





static int evalMode(int argc, char **argv) {
    sds script = sdsempty();
    FILE *fp;
    char buf[1024];
    size_t nread;
    char **argv2;
    int j, got_comma = 0, keys = 0;


    fp = fopen(config.eval,"r");
    if (!fp) {
        fprintf(stderr,
            "Can't open file '%s': %s\n", config.eval, strerror((*__errno_location ())));
        exit(1);
    }
    while((nread = fread(buf,1,sizeof(buf),fp)) != 0) {
        script = sdscatlen(script,buf,nread);
    }
    fclose(fp);


    argv2 = zmalloc(sizeof(sds)*(argc+3));
    argv2[0] = sdsnew("EVAL");
    argv2[1] = script;
    for (j = 0; j < argc; j++) {
        if (!got_comma && argv[j][0] == ',' && argv[j][1] == 0) {
            got_comma = 1;
            continue;
        }
        argv2[j+3-got_comma] = sdsnew(argv[j]);
        if (!got_comma) keys++;
    }
    argv2[2] = sdscatprintf(sdsempty(),"%d",keys);


    return cliSendCommand(argc+3-got_comma, argv2, config.repeat);
}







static void latencyMode(void) {
    redisReply *reply;
    long long start, latency, min = 0, max = 0, tot = 0, count = 0;
    long long history_interval =
        config.interval ? config.interval/1000 :
                          15000;
    double avg;
    long long history_start = mstime();

    if (!context) exit(1);
    while(1) {
        start = mstime();
        reply = redisCommand(context,"PING");
        if (reply == ((void *)0)) {
            fprintf(stderr,"\nI/O error\n");
            exit(1);
        }
        latency = mstime()-start;
        freeReplyObject(reply);
        count++;
        if (count == 1) {
            min = max = tot = latency;
            avg = (double) latency;
        } else {
            if (latency < min) min = latency;
            if (latency > max) max = latency;
            tot += latency;
            avg = (double) tot/count;
        }
        printf("\x1b[0G\x1b[2Kmin: %lld, max: %lld, avg: %.2f (%lld samples)",
            min, max, avg, count);
        fflush(stdout);
        if (config.latency_history && mstime()-history_start > history_interval)
        {
            printf(" -- %.2f seconds range\n", (float)(mstime()-history_start)/1000);
            history_start = mstime();
            min = max = tot = count = 0;
        }
        usleep(10 * 1000);
    }
}







unsigned long long sendSync(int fd) {




    char buf[4096], *p;
    ssize_t nread;


    if (write(fd,"SYNC\r\n",6) != 6) {
        fprintf(stderr,"Error writing to master\n");
        exit(1);
    }


    p = buf;
    while(1) {
        nread = read(fd,p,1);
        if (nread <= 0) {
            fprintf(stderr,"Error reading bulk length while SYNCing\n");
            exit(1);
        }
        if (*p == '\n' && p != buf) break;
        if (*p != '\n') p++;
    }
    *p = '\0';
    if (buf[0] == '-') {
        printf("SYNC with master failed: %s\n", buf);
        exit(1);
    }
    return strtoull(buf+1,((void *)0),10);
}

static void slaveMode(void) {
    int fd = context->fd;
    unsigned long long payload = sendSync(fd);
    char buf[1024];
    int original_output = config.output;

    fprintf(stderr,"SYNC with master, discarding %llu "
                   "bytes of bulk transfer...\n", payload);


    while(payload) {
        ssize_t nread;

        nread = read(fd,buf,(payload > sizeof(buf)) ? sizeof(buf) : payload);
        if (nread <= 0) {
            fprintf(stderr,"Error reading RDB payload while SYNCing\n");
            exit(1);
        }
        payload -= nread;
    }
    fprintf(stderr,"SYNC done. Logging commands from master.\n");


    config.output = 2;
    while (cliReadReply(0) == 0);
    config.output = original_output;
}







static void getRDB(void) {
    int s = context->fd;
    int fd;
    unsigned long long payload = sendSync(s);
    char buf[4096];

    fprintf(stderr,"SYNC sent to master, writing %llu bytes to '%s'\n",
        payload, config.rdb_filename);


    if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (config.rdb_filename) && __builtin_constant_p ("-") && (__s1_len = __builtin_strlen (config.rdb_filename), __s2_len = __builtin_strlen ("-"), (!((size_t)(const void *)((config.rdb_filename) + 1) - (size_t)(const void *)(config.rdb_filename) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("-") + 1) - (size_t)(const void *)("-") == 1) || __s2_len >= 4)) ? __builtin_strcmp (config.rdb_filename, "-") : (__builtin_constant_p (config.rdb_filename) && ((size_t)(const void *)((config.rdb_filename) + 1) - (size_t)(const void *)(config.rdb_filename) == 1) && (__s1_len = __builtin_strlen (config.rdb_filename), __s1_len < 4) ? (__builtin_constant_p ("-") && ((size_t)(const void *)(("-") + 1) - (size_t)(const void *)("-") == 1) ? __builtin_strcmp (config.rdb_filename, "-") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("-"); int __result = (((const unsigned char *) (const char *) (config.rdb_filename))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (config.rdb_filename))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (config.rdb_filename))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (config.rdb_filename))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("-") && ((size_t)(const void *)(("-") + 1) - (size_t)(const void *)("-") == 1) && (__s2_len = __builtin_strlen ("-"), __s2_len < 4) ? (__builtin_constant_p (config.rdb_filename) && ((size_t)(const void *)((config.rdb_filename) + 1) - (size_t)(const void *)(config.rdb_filename) == 1) ? __builtin_strcmp (config.rdb_filename, "-") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (config.rdb_filename); int __result = (((const unsigned char *) (const char *) ("-"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("-"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("-"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (config.rdb_filename, "-")))); })) {
        fd = 1;
    } else {
        fd = open(config.rdb_filename, 0100|01, 0644);
        if (fd == -1) {
            fprintf(stderr, "Error opening '%s': %s\n", config.rdb_filename,
                strerror((*__errno_location ())));
            exit(1);
        }
    }

    while(payload) {
        ssize_t nread, nwritten;

        nread = read(s,buf,(payload > sizeof(buf)) ? sizeof(buf) : payload);
        if (nread <= 0) {
            fprintf(stderr,"I/O Error reading RDB payload from socket\n");
            exit(1);
        }
        nwritten = write(fd, buf, nread);
        if (nwritten != nread) {
            fprintf(stderr,"Error writing data to file: %s\n",
                strerror((*__errno_location ())));
            exit(1);
        }
        payload -= nread;
    }
    close(s);
    fsync(fd);
    fprintf(stderr,"Transfer finished with success.\n");
    exit(0);
}





static void pipeMode(void) {
    int fd = context->fd;
    long long errors = 0, replies = 0, obuf_len = 0, obuf_pos = 0;
    char ibuf[1024*16], obuf[1024*16];
    char aneterr[256];
    redisReader *reader = redisReaderCreate();
    redisReply *reply;
    int eof = 0;
    int done = 0;
    char magic[20];
    time_t last_read_time = time(((void *)0));

    srand(time(((void *)0)));


    if (anetNonBlock(aneterr,fd) == -1) {
        fprintf(stderr, "Can't set the socket in non blocking mode: %s\n",
            aneterr);
        exit(1);
    }



    while(!done) {
        int mask = 1;

        if (!eof || obuf_len != 0) mask |= 2;
        mask = aeWait(fd,mask,1000);


        if (mask & 1) {
            ssize_t nread;


            do {
                nread = read(fd,ibuf,sizeof(ibuf));
                if (nread == -1 && (*__errno_location ()) != 11 && (*__errno_location ()) != 4) {
                    fprintf(stderr, "Error reading from the server: %s\n",
                        strerror((*__errno_location ())));
                    exit(1);
                }
                if (nread > 0) {
                    redisReaderFeed(reader,ibuf,nread);
                    last_read_time = time(((void *)0));
                }
            } while(nread > 0);


            do {
                if (redisReaderGetReply(reader,(void**)&reply) == -1) {
                    fprintf(stderr, "Error reading replies from server\n");
                    exit(1);
                }
                if (reply) {
                    if (reply->type == 6) {
                        fprintf(stderr,"%s\n", reply->str);
                        errors++;
                    } else if (eof && reply->type == 1 &&
                                      reply->len == 20) {



                        if (memcmp(reply->str,magic,20) == 0) {
                            printf("Last reply received from server.\n");
                            done = 1;
                            replies--;
                        }
                    }
                    replies++;
                    freeReplyObject(reply);
                }
            } while(reply);
        }


        if (mask & 2) {
            while(1) {

                if (obuf_len != 0) {
                    ssize_t nwritten = write(fd,obuf+obuf_pos,obuf_len);

                    if (nwritten == -1) {
                        if ((*__errno_location ()) != 11 && (*__errno_location ()) != 4) {
                            fprintf(stderr, "Error writing to the server: %s\n",
                                strerror((*__errno_location ())));
                            exit(1);
                        } else {
                            nwritten = 0;
                        }
                    }
                    obuf_len -= nwritten;
                    obuf_pos += nwritten;
                    if (obuf_len != 0) break;
                }

                if (obuf_len == 0 && !eof) {
                    ssize_t nread = read(0,obuf,sizeof(obuf));

                    if (nread == 0) {




                        char echo[] =
                        "\r\n*2\r\n$4\r\nECHO\r\n$20\r\n01234567890123456789\r\n";
                        int j;

                        eof = 1;



                        for (j = 0; j < 20; j++)
                            magic[j] = rand() & 0xff;
                        memcpy(echo+21,magic,20);
                        memcpy(obuf,echo,sizeof(echo)-1);
                        obuf_len = sizeof(echo)-1;
                        obuf_pos = 0;
                        printf("All data transferred. Waiting for the last reply...\n");
                    } else if (nread == -1) {
                        fprintf(stderr, "Error reading from stdin: %s\n",
                            strerror((*__errno_location ())));
                        exit(1);
                    } else {
                        obuf_len = nread;
                        obuf_pos = 0;
                    }
                }
                if (obuf_len == 0 && eof) break;
            }
        }




        if (eof && config.pipe_timeout > 0 &&
            time(((void *)0))-last_read_time > config.pipe_timeout)
        {
            fprintf(stderr,"No replies for %d seconds: exiting.\n",
                config.pipe_timeout);
            errors++;
            break;
        }
    }
    redisReaderFree(reader);
    printf("errors: %lld, replies: %lld\n", errors, replies);
    if (errors)
        exit(1);
    else
        exit(0);
}
# 1337 "redis-cli.c"
static redisReply *sendScan(unsigned long long *it) {
    redisReply *reply = redisCommand(context, "SCAN %llu", *it);


    if(reply == ((void *)0)) {
        fprintf(stderr, "\nI/O error\n");
        exit(1);
    } else if(reply->type == 6) {
        fprintf(stderr, "SCAN error: %s\n", reply->str);
        exit(1);
    } else if(reply->type != 2) {
        fprintf(stderr, "Non ARRAY response from SCAN!\n");
        exit(1);
    } else if(reply->elements != 2) {
        fprintf(stderr, "Invalid element count from SCAN!\n");
        exit(1);
    }


    ((reply->element[0]->type == 1) ? (void) (0) : __assert_fail ("reply->element[0]->type == 1", "redis-cli.c", 1356, __PRETTY_FUNCTION__));
    ((reply->element[1]->type == 2) ? (void) (0) : __assert_fail ("reply->element[1]->type == 2", "redis-cli.c", 1357, __PRETTY_FUNCTION__));


    *it = atoi(reply->element[0]->str);

    return reply;
}

static int getDbSize(void) {
    redisReply *reply;
    int size;

    reply = redisCommand(context, "DBSIZE");

    if(reply == ((void *)0) || reply->type != 3) {
        fprintf(stderr, "Couldn't determine DBSIZE!\n");
        exit(1);
    }


    size = reply->integer;
    freeReplyObject(reply);

    return size;
}

static int toIntType(char *key, char *type) {
    if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("string") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("string"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("string") + 1) - (size_t)(const void *)("string") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "string") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("string") && ((size_t)(const void *)(("string") + 1) - (size_t)(const void *)("string") == 1) ? __builtin_strcmp (type, "string") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("string"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("string") && ((size_t)(const void *)(("string") + 1) - (size_t)(const void *)("string") == 1) && (__s2_len = __builtin_strlen ("string"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "string") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("string"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("string"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("string"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("string"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "string")))); })) {
        return 0;
    } else if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("list") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("list"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("list") + 1) - (size_t)(const void *)("list") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "list") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("list") && ((size_t)(const void *)(("list") + 1) - (size_t)(const void *)("list") == 1) ? __builtin_strcmp (type, "list") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("list"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("list") && ((size_t)(const void *)(("list") + 1) - (size_t)(const void *)("list") == 1) && (__s2_len = __builtin_strlen ("list"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "list") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("list"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("list"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("list"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("list"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "list")))); })) {
        return 1;
    } else if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("set") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("set"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("set") + 1) - (size_t)(const void *)("set") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "set") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("set") && ((size_t)(const void *)(("set") + 1) - (size_t)(const void *)("set") == 1) ? __builtin_strcmp (type, "set") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("set"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("set") && ((size_t)(const void *)(("set") + 1) - (size_t)(const void *)("set") == 1) && (__s2_len = __builtin_strlen ("set"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "set") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("set"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("set"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("set"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("set"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "set")))); })) {
        return 2;
    } else if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("hash") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("hash"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("hash") + 1) - (size_t)(const void *)("hash") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "hash") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("hash") && ((size_t)(const void *)(("hash") + 1) - (size_t)(const void *)("hash") == 1) ? __builtin_strcmp (type, "hash") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("hash"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("hash") && ((size_t)(const void *)(("hash") + 1) - (size_t)(const void *)("hash") == 1) && (__s2_len = __builtin_strlen ("hash"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "hash") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("hash"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("hash"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("hash"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("hash"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "hash")))); })) {
        return 3;
    } else if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("zset") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("zset"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("zset") + 1) - (size_t)(const void *)("zset") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "zset") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("zset") && ((size_t)(const void *)(("zset") + 1) - (size_t)(const void *)("zset") == 1) ? __builtin_strcmp (type, "zset") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("zset"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("zset") && ((size_t)(const void *)(("zset") + 1) - (size_t)(const void *)("zset") == 1) && (__s2_len = __builtin_strlen ("zset"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "zset") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("zset"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("zset"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("zset"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("zset"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "zset")))); })) {
        return 4;
    } else if(!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (type) && __builtin_constant_p ("none") && (__s1_len = __builtin_strlen (type), __s2_len = __builtin_strlen ("none"), (!((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) || __s2_len >= 4)) ? __builtin_strcmp (type, "none") : (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) && (__s1_len = __builtin_strlen (type), __s1_len < 4) ? (__builtin_constant_p ("none") && ((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) ? __builtin_strcmp (type, "none") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("none"); int __result = (((const unsigned char *) (const char *) (type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("none") && ((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) && (__s2_len = __builtin_strlen ("none"), __s2_len < 4) ? (__builtin_constant_p (type) && ((size_t)(const void *)((type) + 1) - (size_t)(const void *)(type) == 1) ? __builtin_strcmp (type, "none") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (type); int __result = (((const unsigned char *) (const char *) ("none"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("none"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("none"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("none"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (type, "none")))); })) {
        return 5;
    } else {
        fprintf(stderr, "Unknown type '%s' for key '%s'\n", type, key);
        exit(1);
    }
}

static void getKeyTypes(redisReply *keys, int *types) {
    redisReply *reply;
    int i;


    for(i=0;i<keys->elements;i++) {
        redisAppendCommand(context, "TYPE %s", keys->element[i]->str);
    }


    for(i=0;i<keys->elements;i++) {
        if(redisGetReply(context, (void**)&reply)!=0) {
            fprintf(stderr, "Error getting type for key '%s' (%d: %s)\n",
                keys->element[i]->str, context->err, context->errstr);
            exit(1);
        } else if(reply->type != 5) {
            fprintf(stderr, "Invalid reply type (%d) for TYPE on key '%s'!\n",
                reply->type, keys->element[i]->str);
            exit(1);
        }

        types[i] = toIntType(keys->element[i]->str, reply->str);
        freeReplyObject(reply);
    }
}

static void getKeySizes(redisReply *keys, int *types,
                        unsigned long long *sizes)
{
    redisReply *reply;
    char *sizecmds[] = {"STRLEN","LLEN","SCARD","HLEN","ZCARD"};
    int i;


    for(i=0;i<keys->elements;i++) {

        if(types[i]==5)
            continue;

        redisAppendCommand(context, "%s %s", sizecmds[types[i]],
            keys->element[i]->str);
    }


    for(i=0;i<keys->elements;i++) {

        if(types[i] == 5) {
            sizes[i] = 0;
            continue;
        }


        if(redisGetReply(context, (void**)&reply)!=0) {
            fprintf(stderr, "Error getting size for key '%s' (%d: %s)\n",
                keys->element[i]->str, context->err, context->errstr);
            exit(1);
        } else if(reply->type != 3) {


            fprintf(stderr,
                "Warning:  %s on '%s' failed (may have changed type)\n",
                 sizecmds[types[i]], keys->element[i]->str);
            sizes[i] = 0;
        } else {
            sizes[i] = reply->integer;
        }

        freeReplyObject(reply);
    }
}

static void findBigKeys(void) {
    unsigned long long biggest[5] = {0}, counts[5] = {0}, totalsize[5] = {0};
    unsigned long long sampled = 0, total_keys, totlen=0, *sizes=((void *)0), it=0;
    sds maxkeys[5] = {0};
    char *typename[] = {"string","list","set","hash","zset"};
    char *typeunit[] = {"bytes","items","members","fields","members"};
    redisReply *reply, *keys;
    int type, *types=((void *)0), arrsize=0, i;
    double pct;


    total_keys = getDbSize();


    printf("\n# Scanning the entire keyspace to find biggest keys as well as\n");
    printf("# average sizes per key type.  You can use -i 0.1 to sleep 0.1 sec\n");
    printf("# per 100 SCAN commands (not usually needed).\n\n");


    for(i=0;i<5; i++) {
        maxkeys[i] = sdsempty();
        if(!maxkeys[i]) {
            fprintf(stderr, "Failed to allocate memory for largest key names!");
            exit(1);
        }
    }


    do {

        pct = 100 * (double)sampled/total_keys;


        reply = sendScan(&it);
        keys = reply->element[1];


        if(keys->elements > arrsize) {
            types = zrealloc(types, sizeof(int)*keys->elements);
            sizes = zrealloc(sizes, sizeof(unsigned long long)*keys->elements);

            if(!types || !sizes) {
                fprintf(stderr, "Failed to allocate storage for keys!\n");
                exit(1);
            }

            arrsize = keys->elements;
        }


        getKeyTypes(keys, types);
        getKeySizes(keys, types, sizes);


        for(i=0;i<keys->elements;i++) {
            if((type = types[i]) == 5)
                continue;

            totalsize[type] += sizes[i];
            counts[type]++;
            totlen += keys->element[i]->len;
            sampled++;

            if(biggest[type]<sizes[i]) {
                printf(
                   "[%05.2f%%] Biggest %-6s found so far '%s' with %llu %s\n",
                   pct, typename[type], keys->element[i]->str, sizes[i],
                   typeunit[type]);


                maxkeys[type] = sdscpy(maxkeys[type], keys->element[i]->str);
                if(!maxkeys[type]) {
                    fprintf(stderr, "Failed to allocate memory for key!\n");
                    exit(1);
                }


                biggest[type] = sizes[i];
            }


            if(sampled % 1000000 == 0) {
                printf("[%05.2f%%] Sampled %llu keys so far\n", pct, sampled);
            }
        }


        if(sampled && (sampled %100) == 0 && config.interval) {
            usleep(config.interval);
        }

        freeReplyObject(reply);
    } while(it != 0);

    if(types) zfree(types);
    if(sizes) zfree(sizes);


    printf("\n-------- summary -------\n\n");

    printf("Sampled %llu keys in the keyspace!\n", sampled);
    printf("Total key length in bytes is %llu (avg len %.2f)\n\n",
       totlen, totlen ? (double)totlen/sampled : 0);


    for(i=0;i<5;i++) {
        if(sdslen(maxkeys[i])>0) {
            printf("Biggest %6s found '%s' has %llu %s\n", typename[i], maxkeys[i],
               biggest[i], typeunit[i]);
        }
    }

    printf("\n");

    for(i=0;i<5;i++) {
        printf("%llu %ss with %llu %s (%05.2f%% of keys, avg size %.2f)\n",
           counts[i], typename[i], totalsize[i], typeunit[i],
           sampled ? 100 * (double)counts[i]/sampled : 0,
           counts[i] ? (double)totalsize[i]/counts[i] : 0);
    }


    for(i=0;i<5;i++) {
        sdsfree(maxkeys[i]);
    }


    exit(0);
}
# 1610 "redis-cli.c"
static char *getInfoField(char *info, char *field) {
    char *p = strstr(info,field);
    char *n1, *n2;
    char *result;

    if (!p) return ((void *)0);
    p += strlen(field)+1;
    n1 = (__extension__ (__builtin_constant_p ('\r') && !__builtin_constant_p (p) && ('\r') == '\0' ? (char *) __rawmemchr (p, '\r') : __builtin_strchr (p, '\r')));
    n2 = (__extension__ (__builtin_constant_p (',') && !__builtin_constant_p (p) && (',') == '\0' ? (char *) __rawmemchr (p, ',') : __builtin_strchr (p, ',')));
    if (n2 && n2 < n1) n1 = n2;
    result = malloc(sizeof(char)*(n1-p)+1);
    memcpy(result,p,(n1-p));
    result[n1-p] = '\0';
    return result;
}



static long getLongInfoField(char *info, char *field) {
    char *value = getInfoField(info,field);
    long l;

    if (!value) return (-9223372036854775807L - 1L);
    l = strtol(value,((void *)0),10);
    free(value);
    return l;
}



void bytesToHuman(char *s, long long n) {
    double d;

    if (n < 0) {
        *s = '-';
        s++;
        n = -n;
    }
    if (n < 1024) {

        sprintf(s,"%lluB",n);
        return;
    } else if (n < (1024*1024)) {
        d = (double)n/(1024);
        sprintf(s,"%.2fK",d);
    } else if (n < (1024LL*1024*1024)) {
        d = (double)n/(1024*1024);
        sprintf(s,"%.2fM",d);
    } else if (n < (1024LL*1024*1024*1024)) {
        d = (double)n/(1024LL*1024*1024);
        sprintf(s,"%.2fG",d);
    }
}

static void statMode() {
    redisReply *reply;
    long aux, requests = 0;
    int i = 0;

    while(1) {
        char buf[64];
        int j;

        reply = reconnectingInfo();
        if (reply->type == 6) {
            printf("ERROR: %s\n", reply->str);
            exit(1);
        }

        if ((i++ % 20) == 0) {
            printf(
"------- data ------ --------------------- load -------------------- - child -\n"
"keys       mem      clients blocked requests            connections          \n");
        }


        aux = 0;
        for (j = 0; j < 20; j++) {
            long k;

            sprintf(buf,"db%d:keys",j);
            k = getLongInfoField(reply->str,buf);
            if (k == (-9223372036854775807L - 1L)) continue;
            aux += k;
        }
        sprintf(buf,"%ld",aux);
        printf("%-11s",buf);


        aux = getLongInfoField(reply->str,"used_memory");
        bytesToHuman(buf,aux);
        printf("%-8s",buf);


        aux = getLongInfoField(reply->str,"connected_clients");
        sprintf(buf,"%ld",aux);
        printf(" %-8s",buf);


        aux = getLongInfoField(reply->str,"blocked_clients");
        sprintf(buf,"%ld",aux);
        printf("%-8s",buf);


        aux = getLongInfoField(reply->str,"total_commands_processed");
        sprintf(buf,"%ld (+%ld)",aux,requests == 0 ? 0 : aux-requests);
        printf("%-19s",buf);
        requests = aux;


        aux = getLongInfoField(reply->str,"total_connections_received");
        sprintf(buf,"%ld",aux);
        printf(" %-12s",buf);


        aux = getLongInfoField(reply->str,"bgsave_in_progress");
        aux |= getLongInfoField(reply->str,"aof_rewrite_in_progress") << 1;
        switch(aux) {
        case 0: break;
        case 1:
            printf("SAVE");
            break;
        case 2:
            printf("AOF");
            break;
        case 3:
            printf("SAVE+AOF");
            break;
        }

        printf("\n");
        freeReplyObject(reply);
        usleep(config.interval);
    }
}





static void scanMode() {
    redisReply *reply;
    unsigned long long cur = 0;

    do {
        if (config.pattern)
            reply = redisCommand(context,"SCAN %llu MATCH %s",
                cur,config.pattern);
        else
            reply = redisCommand(context,"SCAN %llu",cur);
        if (reply == ((void *)0)) {
            printf("I/O error\n");
            exit(1);
        } else if (reply->type == 6) {
            printf("ERROR: %s\n", reply->str);
            exit(1);
        } else {
            int j;

            cur = strtoull(reply->element[0]->str,((void *)0),10);
            for (j = 0; j < reply->element[1]->elements; j++)
                printf("%s\n", reply->element[1]->element[j]->str);
        }
        freeReplyObject(reply);
    } while(cur != 0);

    exit(0);
}
# 1790 "redis-cli.c"
unsigned long compute_something_fast(void) {
    unsigned char s[256], i, j, t;
    int count = 1000, k;
    unsigned long output = 0;

    for (k = 0; k < 256; k++) s[k] = k;

    i = 0;
    j = 0;
    while(count--) {
        i++;
        j = j + s[i];
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        output += s[(s[i]+s[j])&255];
    }
    return output;
}

static void intrinsicLatencyMode(void) {
    long long test_end, run_time, max_latency = 0, runs = 0;

    run_time = config.intrinsic_latency_duration*1000000;
    test_end = ustime() + run_time;

    while(1) {
        long long start, end, latency;

        start = ustime();
        compute_something_fast();
        end = ustime();
        latency = end-start;
        runs++;
        if (latency <= 0) continue;


        if (latency > max_latency) {
            max_latency = latency;
            printf("Max latency so far: %lld microseconds.\n", max_latency);
        }

        if (end > test_end) {
            printf("\n%lld total runs (avg %lld microseconds per run).\n",
                runs, run_time/runs);
            printf("Worst run took %.02fx times the avarege.\n",
                (double) max_latency / (run_time/runs));
            exit(0);
        }
    }
}





int main(int argc, char **argv) {
    int firstarg;

    config.hostip = sdsnew("127.0.0.1");
    config.hostport = 6379;
    config.hostsocket = ((void *)0);
    config.repeat = 1;
    config.interval = 0;
    config.dbnum = 0;
    config.interactive = 0;
    config.shutdown = 0;
    config.monitor_mode = 0;
    config.pubsub_mode = 0;
    config.latency_mode = 0;
    config.latency_history = 0;
    config.cluster_mode = 0;
    config.slave_mode = 0;
    config.getrdb_mode = 0;
    config.stat_mode = 0;
    config.scan_mode = 0;
    config.intrinsic_latency_mode = 0;
    config.pattern = ((void *)0);
    config.rdb_filename = ((void *)0);
    config.pipe_mode = 0;
    config.pipe_timeout = 30;
    config.bigkeys = 0;
    config.stdinarg = 0;
    config.auth = ((void *)0);
    config.eval = ((void *)0);
    if (!isatty(fileno(stdout)) && (getenv("FAKETTY") == ((void *)0)))
        config.output = 1;
    else
        config.output = 0;
    config.mb_delim = sdsnew("\n");
    cliInitHelp();

    firstarg = parseOptions(argc,argv);
    argc -= firstarg;
    argv += firstarg;


    if (config.latency_mode) {
        if (cliConnect(0) == -1) exit(1);
        latencyMode();
    }


    if (config.slave_mode) {
        if (cliConnect(0) == -1) exit(1);
        slaveMode();
    }


    if (config.getrdb_mode) {
        if (cliConnect(0) == -1) exit(1);
        getRDB();
    }


    if (config.pipe_mode) {
        if (cliConnect(0) == -1) exit(1);
        pipeMode();
    }


    if (config.bigkeys) {
        if (cliConnect(0) == -1) exit(1);
        findBigKeys();
    }


    if (config.stat_mode) {
        if (cliConnect(0) == -1) exit(1);
        if (config.interval == 0) config.interval = 1000000;
        statMode();
    }


    if (config.scan_mode) {
        if (cliConnect(0) == -1) exit(1);
        scanMode();
    }


    if (config.intrinsic_latency_mode) intrinsicLatencyMode();


    if (argc == 0 && !config.eval) {


        cliConnect(0);
        repl();
    }


    if (cliConnect(0) != 0) exit(1);
    if (config.eval) {
        return evalMode(argc,argv);
    } else {
        return noninteractive(argc,convertToSds(argc,argv));
    }
}
