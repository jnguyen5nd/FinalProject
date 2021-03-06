/**********************************
 * Authors: Catherine Pardi, Andrea Turner, Ryan O'Halloran, and Jonathan Nguyen
 * E-mails: cpardi@nd.edu, aturne22@nd.edu, rohallo2@nd.edu, and jnguyen5@nd.edu
 * File Name: funcproj.h
 * Date Created: 11/19/21
 * File Contents: This file contains the MD5 header file
 *                for the final project
 **********************************/

#ifndef MD5_H
#define MD5_H

#include "project.h"

// leftrotate function definition
#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c))))

void C_MD5(uint8_t *initial_msg, size_t initial_len);
std::string MD5(std::string str);

#endif
