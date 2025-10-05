
# 🧩 ft_printf — Mandatory Part

## **Program name**

`libftprintf.a`

---

## **Turn-in files**

* `Makefile`
* `*.h`, `*/*.h`
* `*.c`, `*/*.c`

---

## **Makefile rules**

* `NAME`
* `all`
* `clean`
* `fclean`
* `re`

---

## **Allowed external functions**

* `malloc`
* `free`
* `write`
* `va_start`
* `va_arg`
* `va_copy`
* `va_end`

---

## **Libft**

✅ Authorized

If you use your `libft`, copy its sources and Makefile into a `libft/` folder.
Your main Makefile must compile it automatically before building `libftprintf.a`.

---

## **Goal**

Create a library that contains the function:

```c
int ft_printf(const char *format, ...);
```

This function must **mimic the behavior of the original `printf()`** from the C standard library, for the supported conversions.

---

## **General requirements**

* Do **not** implement the original `printf()`’s internal buffer management.
* Your function must behave **like the real `printf`** for all conversions below.
* You must create your library using the **`ar`** command (not `libtool`).
* The output library must be named **`libftprintf.a`** and placed at the **root** of your repository.

---

## **Supported conversions**

You must handle exactly these conversions:

| Conversion | Description                                       |
| ---------- | ------------------------------------------------- |
| `%c`       | Prints a single character                         |
| `%s`       | Prints a string                                   |
| `%p`       | Prints a pointer address in hexadecimal (`0x...`) |
| `%d`       | Prints a signed decimal number                    |
| `%i`       | Prints a signed integer (same as `%d`)            |
| `%u`       | Prints an unsigned decimal number                 |
| `%x`       | Prints a number in lowercase hexadecimal          |
| `%X`       | Prints a number in uppercase hexadecimal          |
| `%%`       | Prints a literal percent sign (`%`)               |

---

## **Behavior**

* The function must print exactly the same output as the original `printf` for the supported conversions.
* The return value must be the **number of characters printed**.
* Undefined behaviors (like wrong format specifiers) are not tested.
* No memory leaks or crashes (segfault, double free, etc.).

---

## **Output example**

```c
ft_printf("Hello %s\n", "world");      // Hello world
ft_printf("Number: %d\n", 42);         // Number: 42
ft_printf("Hex: %x\n", 255);           // Hex: ff
ft_printf("Pointer: %p\n", ptr);       // Pointer: 0x12345678
ft_printf("Percent: %%\n");            // Percent: %
```

---

## **Evaluation**

Your implementation will be compared directly to the real `printf()` output.
If any difference, crash, or memory issue occurs → ❌ score 0.
The `bonus` part will be checked **only if the mandatory part is perfect**.

---
