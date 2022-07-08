/*
  * Filename: crypt.h
  * Authors(s): Roland (r.weirhowell@gmail.com)
  * Description: Header file for crypt.c
  *
  * This Source Code Form is subject to the terms of the Mozilla Public
  * License, v. 2.0. If a copy of the MPL was not distributed with this
  * file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#pragma once


void caesar_encrypt(char* str, int size, int key);

void caesar_decrypt(char* str, int size, int key);
