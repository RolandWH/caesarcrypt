/*
  * Filename: caesarcrypt.c
  * Authors(s): Roland (r.weirhowell@gmail.com)
  * Description: Encrypt and decrypt text using the Caesar Cipher algorithm
  *
  * This Source Code Form is subject to the terms of the Mozilla Public
  * License, v. 2.0. If a copy of the MPL was not distributed with this
  * file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "crypt.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
	fputs(
		 "1. Encrypt message\n"
		 "2. Decrypt message\n"
		 "Pick operation mode: "
		,stdout
	);
	char buf[4];
	fgets(buf, 3, stdin);
	int choice = strtol(buf, NULL, 10);
	
	char* msg = calloc(128, sizeof(char));

	fputs("Enter your message text: ", stdout);
	if (msg) fgets(msg, 128, stdin);

	fputs("Enter your key (shift value): ", stdout);
	fgets(buf, 4, stdin);
	int key = strtol(buf, NULL, 10);

	if (choice == 1)
	{
		caesar_encrypt(msg, 128, key);
		puts("\nYour encrypted message is:");
		for (int i = 0; i < 128 && msg[i]; i++)
		{
			putchar(msg[i]);
		}
	}
	else if (choice == 2)
	{
		caesar_decrypt(msg, 128, key);
		puts("\nYour decrypted message is:");
		for (int i = 0; i < 128 && msg[i]; i++)
		{
			putchar(msg[i]);
		}
	}

	return 0;
}
