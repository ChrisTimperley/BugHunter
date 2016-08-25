# 1 "sha1.c"
# 1 "/home/christ/bughunter/repositories/redis/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "sha1.c"
# 24 "sha1.c"
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














extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

# 232 "/usr/include/stdio.h" 3 4





extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 295 "/usr/include/stdio.h" 3 4

# 329 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

# 351 "/usr/include/stdio.h" 3 4





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
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 565 "/usr/include/stdio.h" 3 4








extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 617 "/usr/include/stdio.h" 3 4





extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__warn_unused_result__)) __attribute__ ((__deprecated__));


# 684 "/usr/include/stdio.h" 3 4





extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 744 "/usr/include/stdio.h" 3 4





extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

# 841 "/usr/include/stdio.h" 3 4





extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 854 "/usr/include/stdio.h" 2 3 4
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}
# 78 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
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
# 227 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__gets_chk (char *__str, size_t) __attribute__ ((__warn_unused_result__));
extern char *__gets_warn (char *__str) __asm__ ("" "gets")
     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("please use fgets or getline instead, gets can't " "specify buffer size")))
                               ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
gets (char *__str)
{
  if (__builtin_object_size (__str, 2 > 1) != (size_t) -1)
    return __gets_chk (__str, __builtin_object_size (__str, 2 > 1));
  return __gets_warn (__str);
}


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
# 938 "/usr/include/stdio.h" 2 3 4






# 25 "sha1.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

# 64 "/usr/include/string.h" 3 4


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
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 411 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 451 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 632 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string.h" 1 3 4
# 633 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/string2.h" 1 3 4
# 51 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
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
# 101 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
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




# 26 "sha1.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __ssize_t ssize_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
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
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 27 "sha1.c" 2



# 1 "sha1.h" 1







typedef struct {
    u_int32_t state[5];
    u_int32_t count[2];
    unsigned char buffer[64];
} SHA1_CTX;

void SHA1Transform(u_int32_t state[5], const unsigned char buffer[64]);
void SHA1Init(SHA1_CTX* context);
void SHA1Update(SHA1_CTX* context, const unsigned char* data, u_int32_t len);
void SHA1Final(unsigned char digest[20], SHA1_CTX* context);
# 31 "sha1.c" 2
# 1 "config.h" 1
# 89 "config.h"
# 1 "/usr/include/linux/version.h" 1 3 4
# 90 "config.h" 2
# 32 "sha1.c" 2
# 58 "sha1.c"
void SHA1Transform(u_int32_t state[5], const unsigned char buffer[64])
{
u_int32_t a, b, c, d, e;
typedef union {
    unsigned char c[64];
    u_int32_t l[16];
} CHAR64LONG16;

CHAR64LONG16 block[1];
    memcpy(block, buffer, 64);
# 77 "sha1.c"
    a = state[0];
    b = state[1];
    c = state[2];
    d = state[3];
    e = state[4];

    e+=((b&(c^d))^d)+(block->l[0] = ((((block->l[0]) << (24)) | ((block->l[0]) >> (32 - (24))))&0xFF00FF00) |((((block->l[0]) << (8)) | ((block->l[0]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=((a&(b^c))^c)+(block->l[1] = ((((block->l[1]) << (24)) | ((block->l[1]) >> (32 - (24))))&0xFF00FF00) |((((block->l[1]) << (8)) | ((block->l[1]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=((e&(a^b))^b)+(block->l[2] = ((((block->l[2]) << (24)) | ((block->l[2]) >> (32 - (24))))&0xFF00FF00) |((((block->l[2]) << (8)) | ((block->l[2]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=((d&(e^a))^a)+(block->l[3] = ((((block->l[3]) << (24)) | ((block->l[3]) >> (32 - (24))))&0xFF00FF00) |((((block->l[3]) << (8)) | ((block->l[3]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
    a+=((c&(d^e))^e)+(block->l[4] = ((((block->l[4]) << (24)) | ((block->l[4]) >> (32 - (24))))&0xFF00FF00) |((((block->l[4]) << (8)) | ((block->l[4]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=((b&(c^d))^d)+(block->l[5] = ((((block->l[5]) << (24)) | ((block->l[5]) >> (32 - (24))))&0xFF00FF00) |((((block->l[5]) << (8)) | ((block->l[5]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=((a&(b^c))^c)+(block->l[6] = ((((block->l[6]) << (24)) | ((block->l[6]) >> (32 - (24))))&0xFF00FF00) |((((block->l[6]) << (8)) | ((block->l[6]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=((e&(a^b))^b)+(block->l[7] = ((((block->l[7]) << (24)) | ((block->l[7]) >> (32 - (24))))&0xFF00FF00) |((((block->l[7]) << (8)) | ((block->l[7]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
    b+=((d&(e^a))^a)+(block->l[8] = ((((block->l[8]) << (24)) | ((block->l[8]) >> (32 - (24))))&0xFF00FF00) |((((block->l[8]) << (8)) | ((block->l[8]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=((c&(d^e))^e)+(block->l[9] = ((((block->l[9]) << (24)) | ((block->l[9]) >> (32 - (24))))&0xFF00FF00) |((((block->l[9]) << (8)) | ((block->l[9]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=((b&(c^d))^d)+(block->l[10] = ((((block->l[10]) << (24)) | ((block->l[10]) >> (32 - (24))))&0xFF00FF00) |((((block->l[10]) << (8)) | ((block->l[10]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=((a&(b^c))^c)+(block->l[11] = ((((block->l[11]) << (24)) | ((block->l[11]) >> (32 - (24))))&0xFF00FF00) |((((block->l[11]) << (8)) | ((block->l[11]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
    c+=((e&(a^b))^b)+(block->l[12] = ((((block->l[12]) << (24)) | ((block->l[12]) >> (32 - (24))))&0xFF00FF00) |((((block->l[12]) << (8)) | ((block->l[12]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=((d&(e^a))^a)+(block->l[13] = ((((block->l[13]) << (24)) | ((block->l[13]) >> (32 - (24))))&0xFF00FF00) |((((block->l[13]) << (8)) | ((block->l[13]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=((c&(d^e))^e)+(block->l[14] = ((((block->l[14]) << (24)) | ((block->l[14]) >> (32 - (24))))&0xFF00FF00) |((((block->l[14]) << (8)) | ((block->l[14]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=((b&(c^d))^d)+(block->l[15] = ((((block->l[15]) << (24)) | ((block->l[15]) >> (32 - (24))))&0xFF00FF00) |((((block->l[15]) << (8)) | ((block->l[15]) >> (32 - (8))))&0x00FF00FF))+0x5A827999+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
    d+=((a&(b^c))^c)+(block->l[16&15] = (((block->l[(16 +13)&15]^block->l[(16 +8)&15] ^block->l[(16 +2)&15]^block->l[16&15]) << (1)) | ((block->l[(16 +13)&15]^block->l[(16 +8)&15] ^block->l[(16 +2)&15]^block->l[16&15]) >> (32 - (1)))))+0x5A827999+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=((e&(a^b))^b)+(block->l[17&15] = (((block->l[(17 +13)&15]^block->l[(17 +8)&15] ^block->l[(17 +2)&15]^block->l[17&15]) << (1)) | ((block->l[(17 +13)&15]^block->l[(17 +8)&15] ^block->l[(17 +2)&15]^block->l[17&15]) >> (32 - (1)))))+0x5A827999+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=((d&(e^a))^a)+(block->l[18&15] = (((block->l[(18 +13)&15]^block->l[(18 +8)&15] ^block->l[(18 +2)&15]^block->l[18&15]) << (1)) | ((block->l[(18 +13)&15]^block->l[(18 +8)&15] ^block->l[(18 +2)&15]^block->l[18&15]) >> (32 - (1)))))+0x5A827999+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=((c&(d^e))^e)+(block->l[19&15] = (((block->l[(19 +13)&15]^block->l[(19 +8)&15] ^block->l[(19 +2)&15]^block->l[19&15]) << (1)) | ((block->l[(19 +13)&15]^block->l[(19 +8)&15] ^block->l[(19 +2)&15]^block->l[19&15]) >> (32 - (1)))))+0x5A827999+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
    e+=(b^c^d)+(block->l[20&15] = (((block->l[(20 +13)&15]^block->l[(20 +8)&15] ^block->l[(20 +2)&15]^block->l[20&15]) << (1)) | ((block->l[(20 +13)&15]^block->l[(20 +8)&15] ^block->l[(20 +2)&15]^block->l[20&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[21&15] = (((block->l[(21 +13)&15]^block->l[(21 +8)&15] ^block->l[(21 +2)&15]^block->l[21&15]) << (1)) | ((block->l[(21 +13)&15]^block->l[(21 +8)&15] ^block->l[(21 +2)&15]^block->l[21&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[22&15] = (((block->l[(22 +13)&15]^block->l[(22 +8)&15] ^block->l[(22 +2)&15]^block->l[22&15]) << (1)) | ((block->l[(22 +13)&15]^block->l[(22 +8)&15] ^block->l[(22 +2)&15]^block->l[22&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[23&15] = (((block->l[(23 +13)&15]^block->l[(23 +8)&15] ^block->l[(23 +2)&15]^block->l[23&15]) << (1)) | ((block->l[(23 +13)&15]^block->l[(23 +8)&15] ^block->l[(23 +2)&15]^block->l[23&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
    a+=(c^d^e)+(block->l[24&15] = (((block->l[(24 +13)&15]^block->l[(24 +8)&15] ^block->l[(24 +2)&15]^block->l[24&15]) << (1)) | ((block->l[(24 +13)&15]^block->l[(24 +8)&15] ^block->l[(24 +2)&15]^block->l[24&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[25&15] = (((block->l[(25 +13)&15]^block->l[(25 +8)&15] ^block->l[(25 +2)&15]^block->l[25&15]) << (1)) | ((block->l[(25 +13)&15]^block->l[(25 +8)&15] ^block->l[(25 +2)&15]^block->l[25&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[26&15] = (((block->l[(26 +13)&15]^block->l[(26 +8)&15] ^block->l[(26 +2)&15]^block->l[26&15]) << (1)) | ((block->l[(26 +13)&15]^block->l[(26 +8)&15] ^block->l[(26 +2)&15]^block->l[26&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[27&15] = (((block->l[(27 +13)&15]^block->l[(27 +8)&15] ^block->l[(27 +2)&15]^block->l[27&15]) << (1)) | ((block->l[(27 +13)&15]^block->l[(27 +8)&15] ^block->l[(27 +2)&15]^block->l[27&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
    b+=(d^e^a)+(block->l[28&15] = (((block->l[(28 +13)&15]^block->l[(28 +8)&15] ^block->l[(28 +2)&15]^block->l[28&15]) << (1)) | ((block->l[(28 +13)&15]^block->l[(28 +8)&15] ^block->l[(28 +2)&15]^block->l[28&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[29&15] = (((block->l[(29 +13)&15]^block->l[(29 +8)&15] ^block->l[(29 +2)&15]^block->l[29&15]) << (1)) | ((block->l[(29 +13)&15]^block->l[(29 +8)&15] ^block->l[(29 +2)&15]^block->l[29&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[30&15] = (((block->l[(30 +13)&15]^block->l[(30 +8)&15] ^block->l[(30 +2)&15]^block->l[30&15]) << (1)) | ((block->l[(30 +13)&15]^block->l[(30 +8)&15] ^block->l[(30 +2)&15]^block->l[30&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[31&15] = (((block->l[(31 +13)&15]^block->l[(31 +8)&15] ^block->l[(31 +2)&15]^block->l[31&15]) << (1)) | ((block->l[(31 +13)&15]^block->l[(31 +8)&15] ^block->l[(31 +2)&15]^block->l[31&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
    c+=(e^a^b)+(block->l[32&15] = (((block->l[(32 +13)&15]^block->l[(32 +8)&15] ^block->l[(32 +2)&15]^block->l[32&15]) << (1)) | ((block->l[(32 +13)&15]^block->l[(32 +8)&15] ^block->l[(32 +2)&15]^block->l[32&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[33&15] = (((block->l[(33 +13)&15]^block->l[(33 +8)&15] ^block->l[(33 +2)&15]^block->l[33&15]) << (1)) | ((block->l[(33 +13)&15]^block->l[(33 +8)&15] ^block->l[(33 +2)&15]^block->l[33&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[34&15] = (((block->l[(34 +13)&15]^block->l[(34 +8)&15] ^block->l[(34 +2)&15]^block->l[34&15]) << (1)) | ((block->l[(34 +13)&15]^block->l[(34 +8)&15] ^block->l[(34 +2)&15]^block->l[34&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[35&15] = (((block->l[(35 +13)&15]^block->l[(35 +8)&15] ^block->l[(35 +2)&15]^block->l[35&15]) << (1)) | ((block->l[(35 +13)&15]^block->l[(35 +8)&15] ^block->l[(35 +2)&15]^block->l[35&15]) >> (32 - (1)))))+0x6ED9EBA1+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
    d+=(a^b^c)+(block->l[36&15] = (((block->l[(36 +13)&15]^block->l[(36 +8)&15] ^block->l[(36 +2)&15]^block->l[36&15]) << (1)) | ((block->l[(36 +13)&15]^block->l[(36 +8)&15] ^block->l[(36 +2)&15]^block->l[36&15]) >> (32 - (1)))))+0x6ED9EBA1+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[37&15] = (((block->l[(37 +13)&15]^block->l[(37 +8)&15] ^block->l[(37 +2)&15]^block->l[37&15]) << (1)) | ((block->l[(37 +13)&15]^block->l[(37 +8)&15] ^block->l[(37 +2)&15]^block->l[37&15]) >> (32 - (1)))))+0x6ED9EBA1+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[38&15] = (((block->l[(38 +13)&15]^block->l[(38 +8)&15] ^block->l[(38 +2)&15]^block->l[38&15]) << (1)) | ((block->l[(38 +13)&15]^block->l[(38 +8)&15] ^block->l[(38 +2)&15]^block->l[38&15]) >> (32 - (1)))))+0x6ED9EBA1+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[39&15] = (((block->l[(39 +13)&15]^block->l[(39 +8)&15] ^block->l[(39 +2)&15]^block->l[39&15]) << (1)) | ((block->l[(39 +13)&15]^block->l[(39 +8)&15] ^block->l[(39 +2)&15]^block->l[39&15]) >> (32 - (1)))))+0x6ED9EBA1+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
    e+=(((b|c)&d)|(b&c))+(block->l[40&15] = (((block->l[(40 +13)&15]^block->l[(40 +8)&15] ^block->l[(40 +2)&15]^block->l[40&15]) << (1)) | ((block->l[(40 +13)&15]^block->l[(40 +8)&15] ^block->l[(40 +2)&15]^block->l[40&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(((a|b)&c)|(a&b))+(block->l[41&15] = (((block->l[(41 +13)&15]^block->l[(41 +8)&15] ^block->l[(41 +2)&15]^block->l[41&15]) << (1)) | ((block->l[(41 +13)&15]^block->l[(41 +8)&15] ^block->l[(41 +2)&15]^block->l[41&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(((e|a)&b)|(e&a))+(block->l[42&15] = (((block->l[(42 +13)&15]^block->l[(42 +8)&15] ^block->l[(42 +2)&15]^block->l[42&15]) << (1)) | ((block->l[(42 +13)&15]^block->l[(42 +8)&15] ^block->l[(42 +2)&15]^block->l[42&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(((d|e)&a)|(d&e))+(block->l[43&15] = (((block->l[(43 +13)&15]^block->l[(43 +8)&15] ^block->l[(43 +2)&15]^block->l[43&15]) << (1)) | ((block->l[(43 +13)&15]^block->l[(43 +8)&15] ^block->l[(43 +2)&15]^block->l[43&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
    a+=(((c|d)&e)|(c&d))+(block->l[44&15] = (((block->l[(44 +13)&15]^block->l[(44 +8)&15] ^block->l[(44 +2)&15]^block->l[44&15]) << (1)) | ((block->l[(44 +13)&15]^block->l[(44 +8)&15] ^block->l[(44 +2)&15]^block->l[44&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(((b|c)&d)|(b&c))+(block->l[45&15] = (((block->l[(45 +13)&15]^block->l[(45 +8)&15] ^block->l[(45 +2)&15]^block->l[45&15]) << (1)) | ((block->l[(45 +13)&15]^block->l[(45 +8)&15] ^block->l[(45 +2)&15]^block->l[45&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(((a|b)&c)|(a&b))+(block->l[46&15] = (((block->l[(46 +13)&15]^block->l[(46 +8)&15] ^block->l[(46 +2)&15]^block->l[46&15]) << (1)) | ((block->l[(46 +13)&15]^block->l[(46 +8)&15] ^block->l[(46 +2)&15]^block->l[46&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(((e|a)&b)|(e&a))+(block->l[47&15] = (((block->l[(47 +13)&15]^block->l[(47 +8)&15] ^block->l[(47 +2)&15]^block->l[47&15]) << (1)) | ((block->l[(47 +13)&15]^block->l[(47 +8)&15] ^block->l[(47 +2)&15]^block->l[47&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
    b+=(((d|e)&a)|(d&e))+(block->l[48&15] = (((block->l[(48 +13)&15]^block->l[(48 +8)&15] ^block->l[(48 +2)&15]^block->l[48&15]) << (1)) | ((block->l[(48 +13)&15]^block->l[(48 +8)&15] ^block->l[(48 +2)&15]^block->l[48&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(((c|d)&e)|(c&d))+(block->l[49&15] = (((block->l[(49 +13)&15]^block->l[(49 +8)&15] ^block->l[(49 +2)&15]^block->l[49&15]) << (1)) | ((block->l[(49 +13)&15]^block->l[(49 +8)&15] ^block->l[(49 +2)&15]^block->l[49&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(((b|c)&d)|(b&c))+(block->l[50&15] = (((block->l[(50 +13)&15]^block->l[(50 +8)&15] ^block->l[(50 +2)&15]^block->l[50&15]) << (1)) | ((block->l[(50 +13)&15]^block->l[(50 +8)&15] ^block->l[(50 +2)&15]^block->l[50&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(((a|b)&c)|(a&b))+(block->l[51&15] = (((block->l[(51 +13)&15]^block->l[(51 +8)&15] ^block->l[(51 +2)&15]^block->l[51&15]) << (1)) | ((block->l[(51 +13)&15]^block->l[(51 +8)&15] ^block->l[(51 +2)&15]^block->l[51&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
    c+=(((e|a)&b)|(e&a))+(block->l[52&15] = (((block->l[(52 +13)&15]^block->l[(52 +8)&15] ^block->l[(52 +2)&15]^block->l[52&15]) << (1)) | ((block->l[(52 +13)&15]^block->l[(52 +8)&15] ^block->l[(52 +2)&15]^block->l[52&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(((d|e)&a)|(d&e))+(block->l[53&15] = (((block->l[(53 +13)&15]^block->l[(53 +8)&15] ^block->l[(53 +2)&15]^block->l[53&15]) << (1)) | ((block->l[(53 +13)&15]^block->l[(53 +8)&15] ^block->l[(53 +2)&15]^block->l[53&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(((c|d)&e)|(c&d))+(block->l[54&15] = (((block->l[(54 +13)&15]^block->l[(54 +8)&15] ^block->l[(54 +2)&15]^block->l[54&15]) << (1)) | ((block->l[(54 +13)&15]^block->l[(54 +8)&15] ^block->l[(54 +2)&15]^block->l[54&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(((b|c)&d)|(b&c))+(block->l[55&15] = (((block->l[(55 +13)&15]^block->l[(55 +8)&15] ^block->l[(55 +2)&15]^block->l[55&15]) << (1)) | ((block->l[(55 +13)&15]^block->l[(55 +8)&15] ^block->l[(55 +2)&15]^block->l[55&15]) >> (32 - (1)))))+0x8F1BBCDC+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
    d+=(((a|b)&c)|(a&b))+(block->l[56&15] = (((block->l[(56 +13)&15]^block->l[(56 +8)&15] ^block->l[(56 +2)&15]^block->l[56&15]) << (1)) | ((block->l[(56 +13)&15]^block->l[(56 +8)&15] ^block->l[(56 +2)&15]^block->l[56&15]) >> (32 - (1)))))+0x8F1BBCDC+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(((e|a)&b)|(e&a))+(block->l[57&15] = (((block->l[(57 +13)&15]^block->l[(57 +8)&15] ^block->l[(57 +2)&15]^block->l[57&15]) << (1)) | ((block->l[(57 +13)&15]^block->l[(57 +8)&15] ^block->l[(57 +2)&15]^block->l[57&15]) >> (32 - (1)))))+0x8F1BBCDC+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(((d|e)&a)|(d&e))+(block->l[58&15] = (((block->l[(58 +13)&15]^block->l[(58 +8)&15] ^block->l[(58 +2)&15]^block->l[58&15]) << (1)) | ((block->l[(58 +13)&15]^block->l[(58 +8)&15] ^block->l[(58 +2)&15]^block->l[58&15]) >> (32 - (1)))))+0x8F1BBCDC+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(((c|d)&e)|(c&d))+(block->l[59&15] = (((block->l[(59 +13)&15]^block->l[(59 +8)&15] ^block->l[(59 +2)&15]^block->l[59&15]) << (1)) | ((block->l[(59 +13)&15]^block->l[(59 +8)&15] ^block->l[(59 +2)&15]^block->l[59&15]) >> (32 - (1)))))+0x8F1BBCDC+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;
    e+=(b^c^d)+(block->l[60&15] = (((block->l[(60 +13)&15]^block->l[(60 +8)&15] ^block->l[(60 +2)&15]^block->l[60&15]) << (1)) | ((block->l[(60 +13)&15]^block->l[(60 +8)&15] ^block->l[(60 +2)&15]^block->l[60&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[61&15] = (((block->l[(61 +13)&15]^block->l[(61 +8)&15] ^block->l[(61 +2)&15]^block->l[61&15]) << (1)) | ((block->l[(61 +13)&15]^block->l[(61 +8)&15] ^block->l[(61 +2)&15]^block->l[61&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[62&15] = (((block->l[(62 +13)&15]^block->l[(62 +8)&15] ^block->l[(62 +2)&15]^block->l[62&15]) << (1)) | ((block->l[(62 +13)&15]^block->l[(62 +8)&15] ^block->l[(62 +2)&15]^block->l[62&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[63&15] = (((block->l[(63 +13)&15]^block->l[(63 +8)&15] ^block->l[(63 +2)&15]^block->l[63&15]) << (1)) | ((block->l[(63 +13)&15]^block->l[(63 +8)&15] ^block->l[(63 +2)&15]^block->l[63&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));;
    a+=(c^d^e)+(block->l[64&15] = (((block->l[(64 +13)&15]^block->l[(64 +8)&15] ^block->l[(64 +2)&15]^block->l[64&15]) << (1)) | ((block->l[(64 +13)&15]^block->l[(64 +8)&15] ^block->l[(64 +2)&15]^block->l[64&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[65&15] = (((block->l[(65 +13)&15]^block->l[(65 +8)&15] ^block->l[(65 +2)&15]^block->l[65&15]) << (1)) | ((block->l[(65 +13)&15]^block->l[(65 +8)&15] ^block->l[(65 +2)&15]^block->l[65&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[66&15] = (((block->l[(66 +13)&15]^block->l[(66 +8)&15] ^block->l[(66 +2)&15]^block->l[66&15]) << (1)) | ((block->l[(66 +13)&15]^block->l[(66 +8)&15] ^block->l[(66 +2)&15]^block->l[66&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[67&15] = (((block->l[(67 +13)&15]^block->l[(67 +8)&15] ^block->l[(67 +2)&15]^block->l[67&15]) << (1)) | ((block->l[(67 +13)&15]^block->l[(67 +8)&15] ^block->l[(67 +2)&15]^block->l[67&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));;
    b+=(d^e^a)+(block->l[68&15] = (((block->l[(68 +13)&15]^block->l[(68 +8)&15] ^block->l[(68 +2)&15]^block->l[68&15]) << (1)) | ((block->l[(68 +13)&15]^block->l[(68 +8)&15] ^block->l[(68 +2)&15]^block->l[68&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[69&15] = (((block->l[(69 +13)&15]^block->l[(69 +8)&15] ^block->l[(69 +2)&15]^block->l[69&15]) << (1)) | ((block->l[(69 +13)&15]^block->l[(69 +8)&15] ^block->l[(69 +2)&15]^block->l[69&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[70&15] = (((block->l[(70 +13)&15]^block->l[(70 +8)&15] ^block->l[(70 +2)&15]^block->l[70&15]) << (1)) | ((block->l[(70 +13)&15]^block->l[(70 +8)&15] ^block->l[(70 +2)&15]^block->l[70&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));; d+=(a^b^c)+(block->l[71&15] = (((block->l[(71 +13)&15]^block->l[(71 +8)&15] ^block->l[(71 +2)&15]^block->l[71&15]) << (1)) | ((block->l[(71 +13)&15]^block->l[(71 +8)&15] ^block->l[(71 +2)&15]^block->l[71&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));;
    c+=(e^a^b)+(block->l[72&15] = (((block->l[(72 +13)&15]^block->l[(72 +8)&15] ^block->l[(72 +2)&15]^block->l[72&15]) << (1)) | ((block->l[(72 +13)&15]^block->l[(72 +8)&15] ^block->l[(72 +2)&15]^block->l[72&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[73&15] = (((block->l[(73 +13)&15]^block->l[(73 +8)&15] ^block->l[(73 +2)&15]^block->l[73&15]) << (1)) | ((block->l[(73 +13)&15]^block->l[(73 +8)&15] ^block->l[(73 +2)&15]^block->l[73&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[74&15] = (((block->l[(74 +13)&15]^block->l[(74 +8)&15] ^block->l[(74 +2)&15]^block->l[74&15]) << (1)) | ((block->l[(74 +13)&15]^block->l[(74 +8)&15] ^block->l[(74 +2)&15]^block->l[74&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));; e+=(b^c^d)+(block->l[75&15] = (((block->l[(75 +13)&15]^block->l[(75 +8)&15] ^block->l[(75 +2)&15]^block->l[75&15]) << (1)) | ((block->l[(75 +13)&15]^block->l[(75 +8)&15] ^block->l[(75 +2)&15]^block->l[75&15]) >> (32 - (1)))))+0xCA62C1D6+(((a) << (5)) | ((a) >> (32 - (5))));b=(((b) << (30)) | ((b) >> (32 - (30))));;
    d+=(a^b^c)+(block->l[76&15] = (((block->l[(76 +13)&15]^block->l[(76 +8)&15] ^block->l[(76 +2)&15]^block->l[76&15]) << (1)) | ((block->l[(76 +13)&15]^block->l[(76 +8)&15] ^block->l[(76 +2)&15]^block->l[76&15]) >> (32 - (1)))))+0xCA62C1D6+(((e) << (5)) | ((e) >> (32 - (5))));a=(((a) << (30)) | ((a) >> (32 - (30))));; c+=(e^a^b)+(block->l[77&15] = (((block->l[(77 +13)&15]^block->l[(77 +8)&15] ^block->l[(77 +2)&15]^block->l[77&15]) << (1)) | ((block->l[(77 +13)&15]^block->l[(77 +8)&15] ^block->l[(77 +2)&15]^block->l[77&15]) >> (32 - (1)))))+0xCA62C1D6+(((d) << (5)) | ((d) >> (32 - (5))));e=(((e) << (30)) | ((e) >> (32 - (30))));; b+=(d^e^a)+(block->l[78&15] = (((block->l[(78 +13)&15]^block->l[(78 +8)&15] ^block->l[(78 +2)&15]^block->l[78&15]) << (1)) | ((block->l[(78 +13)&15]^block->l[(78 +8)&15] ^block->l[(78 +2)&15]^block->l[78&15]) >> (32 - (1)))))+0xCA62C1D6+(((c) << (5)) | ((c) >> (32 - (5))));d=(((d) << (30)) | ((d) >> (32 - (30))));; a+=(c^d^e)+(block->l[79&15] = (((block->l[(79 +13)&15]^block->l[(79 +8)&15] ^block->l[(79 +2)&15]^block->l[79&15]) << (1)) | ((block->l[(79 +13)&15]^block->l[(79 +8)&15] ^block->l[(79 +2)&15]^block->l[79&15]) >> (32 - (1)))))+0xCA62C1D6+(((b) << (5)) | ((b) >> (32 - (5))));c=(((c) << (30)) | ((c) >> (32 - (30))));;

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    state[4] += e;

    a = b = c = d = e = 0;

    memset(block, '\0', sizeof(block));

}




void SHA1Init(SHA1_CTX* context)
{

    context->state[0] = 0x67452301;
    context->state[1] = 0xEFCDAB89;
    context->state[2] = 0x98BADCFE;
    context->state[3] = 0x10325476;
    context->state[4] = 0xC3D2E1F0;
    context->count[0] = context->count[1] = 0;
}




void SHA1Update(SHA1_CTX* context, const unsigned char* data, u_int32_t len)
{
u_int32_t i;
u_int32_t j;

    j = context->count[0];
    if ((context->count[0] += len << 3) < j)
 context->count[1]++;
    context->count[1] += (len>>29);
    j = (j >> 3) & 63;
    if ((j + len) > 63) {
        memcpy(&context->buffer[j], data, (i = 64-j));
        SHA1Transform(context->state, context->buffer);
        for ( ; i + 63 < len; i += 64) {
            SHA1Transform(context->state, &data[i]);
        }
        j = 0;
    }
    else i = 0;
    memcpy(&context->buffer[j], &data[i], len - i);
}




void SHA1Final(unsigned char digest[20], SHA1_CTX* context)
{
unsigned i;
unsigned char finalcount[8];
unsigned char c;
# 181 "sha1.c"
    for (i = 0; i < 8; i++) {
        finalcount[i] = (unsigned char)((context->count[(i >= 4 ? 0 : 1)]
         >> ((3-(i & 3)) * 8) ) & 255);
    }

    c = 0200;
    SHA1Update(context, &c, 1);
    while ((context->count[0] & 504) != 448) {
 c = 0000;
        SHA1Update(context, &c, 1);
    }
    SHA1Update(context, finalcount, 8);
    for (i = 0; i < 20; i++) {
        digest[i] = (unsigned char)
         ((context->state[i>>2] >> ((3-(i & 3)) * 8) ) & 255);
    }

    memset(context, '\0', sizeof(*context));
    memset(&finalcount, '\0', sizeof(finalcount));
}
