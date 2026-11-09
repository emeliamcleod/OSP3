# OSP3
Repository for Operating Systems @ Xavier University Project #3 - "Virtual Memory Fun"

WHO: Emelia McLeod and Aishani Mukherjee

WHAT: The files in that we made edits to:
1. vm.c - added 2 methods (vmprint() and vmprintHelper()) to print page table. Also added pgaccess method to show the user program what pages are accessed.
2. exec.c - added a line so vmprint() would execute
3. defs.h
4. riscv.h - added a new PTE definition to find the accessed bit
5. pgaccess_test.c - created new file for the test code given.

Registered syscall
- syscall.h - added number
- sysproc.c - added sys_pgaccess
- syscall.h - created function declaration and registered in syscall table
- user.h - make user programs aware so that they can call it.
- usys.pl - added pgaccess
- Makefile - added pgaccess_test for test file Gary gave.

WHY: For Gary's Operating Systems class fall 2026
