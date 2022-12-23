---
EOF

which expands to an integer constant expression, with type int and a negative value, that
is returned by several functions to indicate end-of-file, that is, no more input from a
stream;
---

putchar


Description
The putchar function is equivalent to putc with the second argument stdout.
Returns

The putchar function returns the character written. If a write error occurs, the error
indicator for the stream is set and putchar returns EOF.


---

getchar


Description
The getchar function is equivalent to getc with the argument stdin.

Returns

The getchar function returns the next character from the input stream pointed to by
stdin. If the stream is at end-of-file, the end-of-file indicator for the stream is set and
getchar returns EOF. If a read error occurs, the error indicator for the stream is set and
getchar returns EOF.


---

ferror

Description
The ferror function tests the error indicator for the stream pointed to by stream.

Returns

The ferror function returns nonzero if and only if the error indicator is set for
stream.

---

perror

Description


The perror function maps the error number in the integer expression errno to an
error message. It writes a sequence of characters to the standard error stream thus: first
(if s is not a null pointer and the character pointed to by s is not the null character), the
string pointed to by s followed by a colon (:) and a space; then an appropriate error
message string followed by a new-line character. The contents of the error message
strings are the same as those returned by the strerror function with argument errno.


Returns

The perror function returns no value.
Forward references: the strerror function (7.24.6.2)


https://file.io/diAQ7tghUEB2
