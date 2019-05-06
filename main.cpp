#include <bits/stdc++.h>
#include <iostream>
#include <sys/mman.h>

using namespace std;
//char* function(char* arr) {
//    arr[0] = 'S';
//    arr[1] = 'u';
//    arr[2] = 'b';
//    arr[3] = 's';
//    arr[4] = 'c';
//    arr[5] = 'r';
//    arr[6] = 'i';
//    arr[7] = 'b';
//    arr[8] = 'e';
//    arr[9] = ' ';
//    arr[10] = 't';
//    arr[11] = 'o';
//    arr[12] = ' ';
//    arr[13] = 'p';
//    arr[14] = 'e';
//    arr[15] = 'w';
//    arr[16] = 'd';
//    arr[17] = 'i';
//    arr[18] = 'e';
//    arr[19] = 'p';
//    arr[20] = 'i';
//    arr[21] = 'e';
//    arr[22] = '\n';
//    arr[23] = '\0';
//    return arr;
//}

// ret "Subscribe to pewdiepie"
unsigned char code[] = {
        0x55,    //pushq	%rbp
        0x48, 0x89, 0xe5,    //movq	%rsp, %rbp
        0x48, 0x89, 0x7d, 0xf8,    //movq	%rdi, -8(%rbp)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x07, 0x53,    //movb	$83, (%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x01, 0x75,    //movb	$117, 1(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x02, 0x62,    //movb	$98, 2(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x03, 0x73,    //movb	$115, 3(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x04, 0x63,    //movb	$99, 4(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x05, 0x72,    //movb	$114, 5(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x06, 0x69,    //movb	$105, 6(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x07, 0x62,    //movb	$98, 7(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x08, 0x65,    //movb	$101, 8(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x09, 0x20,    //movb	$32, 9(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0a, 0x74,    //movb	$116, 10(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0b, 0x6f,    //movb	$111, 11(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0c, 0x20,    //movb	$32, 12(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0d, 0x70,    //movb	$112, 13(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0e, 0x65,    //movb	$101, 14(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x0f, 0x77,    //movb	$119, 15(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x10, 0x64,    //movb	$100, 16(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x11, 0x69,    //movb	$105, 17(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x12, 0x65,    //movb	$101, 18(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x13, 0x70,    //movb	$112, 19(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x14, 0x69,    //movb	$105, 20(%rdi)
        0x48, 0x8b, 0x7d, 0xf8,    //movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x15, 0x65,    //movb	$101, 21(%rdi)
        0x48, 0x8b, 0x7d, 0xf8, 	//movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x16, 0x0a, 	//movb	$10, 22(%rdi)
        0x48, 0x8b, 0x7d, 0xf8, 	//movq	-8(%rbp), %rdi
        0xc6, 0x47, 0x17, 0x00, 	//movb	$0, 23(%rdi)
        0x48, 0x8b, 0x45, 0xf8, 	//movq	-8(%rbp), %rax
        0x5d,    //popq	%rbp
        0xc3,    //retq
};

void call_and_print(char* arr, void* ptr) {
    cout << ((char *(*)(char *)) ptr)(arr);
}


int main(int argc, char *argv[]) {
    size_t size_of_code = sizeof(code);
    char hello[30];
    void *ptr = mmap(nullptr, size_of_code, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (ptr == MAP_FAILED) {
        cout << "Can't map: " << strerror(errno) << '\n';
        exit(0);
    }
    if (mprotect(ptr, size_of_code, PROT_WRITE | PROT_EXEC) < 0) {
        cout << "Permission denied: " << strerror(errno) << '\n';
    } else {
        memcpy(ptr, code, sizeof(code));
        call_and_print(hello,ptr);

    }
    if (munmap(ptr, size_of_code) < 0) {
        cout << "Can't clean memoru: " << strerror(errno) << '\n';
    }
    return 0;
}
