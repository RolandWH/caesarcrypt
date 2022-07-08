/*
  * Filename: crypt.c
  * Authors(s): Roland (r.weirhowell@gmail.com)
  * Description: Perform caesar cipher cryptographic operations
  *
  * This Source Code Form is subject to the terms of the Mozilla Public
  * License, v. 2.0. If a copy of the MPL was not distributed with this
  * file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include "crypt.h"


void caesar_encrypt(char* str, int size, int key)
{
	for (int i = 0; i < size && str[i] != '\n'; i++)
		if (str[i] != ' ') str[i] += key % 26;
}


void caesar_decrypt(char* str, int size, int key)
{
	for (int i = 0; i < size && str[i] != '\n'; i++)
		if (str[i] != ' ') str[i] -= key % 26;
}
