
bool isValid(char * s){
    __asm__
    (
        "entry:\n\t"
        "mov %0, %%rdi\n\t"      // load the string into RDI
        "xor %%rax, %%rax\n\t"   // clear out all the registers we're going to use
        "xor %%rcx, %%rcx\n\t"
        "xor %%rdx, %%rdx\n\t"
        "xor %%r10, %%r10\n\t"
        "xor %%r11, %%r11\n\t"

        "startloop:\n\t"
        "xor %%r11, %%r11\n\t"   // clear failure condition
        "movb (%%rdi), %%cl\n\t" // fetch character
        "inc %%rdi\n\t"          // increment the pointer for next fetch
        "test %%cl, %%cl\n\t"    // check for null char
        "je exit\n\t"            // exit if null (end of string)

        "cmpq $0x29, %%rcx\n\t"  // check for close parent
        "je paren\n\t"
        "cmpq $0x5d, %%rcx\n\t"  // check for cloce braket
        "je brack\n\t"
        "cmpq $0x7d, %%rcx\n\t"  // check for close car
        "je car\n\t"

        "push %%rcx\n\t"        // push the open-char to stack
        "inc %%rax\n\t"
        "jmp startloop\n\t"

        "paren:\n\t"            // mov the relevant char to check register
        "movq $0x28, %%r10\n\t"
        "jmp check\n\t"
        "brack:\n\t"
        "movq $0x5b, %%r10\n\t"
        "jmp check\n\t"
        "car:\n\t"
        "movq $0x7b, %%r10\n\t"

        "check:\n\t"             // validate stack entry closes the right bracket
        "inc %%r11\n\t"          // preload ret value with fail
        "testq %%rax, %%rax\n\t" // sp = 0x0
        "je exit\n\t"            // if yes, yeet!
        "pop %%rdx\n\t"          // otherwise pop stack
        "dec %%rax\n\t"          // sp--
        "cmpq %%rdx, %%r10\n\t"  // validate the closed bracket
        "jne exit\n\t"
        "jmp startloop\n\t"

        "exit:\n\t"
        "shl $0x3, %%eax\n\t"  // 8*(number of things on the stack)
        "add %%rax, %%rsp\n\t" // clean up the stack
        "cmpq $0x0, %%rax\n\t" // if there was anything on the stack we fail
        "jne fail\n\t"
        "testq %%r11, %%r11\n\t"
        "jne fail\n\t"

        "inc %%rax\n\t"        // success, return 1
        "ret\n\t"

        "fail:\n\t"            // fail, return 0
        "xor %%rax, %%rax\n\t"
        "ret\n\t"
        : 
        : "r" (s) // this is arg %0 - the string
        : "rcx", "rdx", "rdi", "r10", "r11"
    );
    return false;
}
