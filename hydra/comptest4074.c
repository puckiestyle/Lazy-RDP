#include <stdio.h>
#include <openssl/rsa.h>
int main() { RSA *rsa = RSA_generate_key(1024, RSA_F4, NULL, NULL); if (rsa == NULL) return 0; else return 1; }
