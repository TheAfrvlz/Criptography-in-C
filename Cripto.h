#ifndef CRIPTO_H
#define CRIPTO_H

#include "Cripto.c"

typedef char* PlaintT2CipherT;
typedef char* CipherT2PlainT;
typedef int PublicKey;
typedef int Privatekey;

void Confusion_Enc(PlaintT2CipherT,PublicKey);
void Confusion_Dec(CipherT2PlainT,Privatekey);

void Difusion_Enc(PlaintT2CipherT,PublicKey);
void Difusion_Dec(CipherT2PlainT,Privatekey);

void Caesar_Enc(PlaintT2CipherT,PublicKey);
void Caesar_Dec(CipherT2PlainT,Privatekey);

void AES_128_Enc(PlaintT2CipherT,PublicKey);
void AES_128_Dec(CipherT2PlainT,Privatekey);

void AES_192_Enc(PlaintT2CipherT,PublicKey);
void AES_192_Dec(CipherT2PlainT,Privatekey);

void AES_256_Enc(PlaintT2CipherT,PublicKey);
void AES_256_Dec(CipherT2PlainT,Privatekey);

void ECB_Enc(PlaintT2CipherT,PublicKey);
void ECB_Dec(CipherT2PlainT,Privatekey);

void CBC_Enc(PlaintT2CipherT,PublicKey);
void CBC_Dec(CipherT2PlainT,Privatekey);

void Diffie_Hellman(PublicKey);
//Tester
void Bruteforce(CipherT2PlainT);

#endif