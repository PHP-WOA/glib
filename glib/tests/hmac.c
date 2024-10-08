﻿#include <glib.h>
#include <string.h>
#include <stdlib.h>

/* HMAC-MD5 test vectors as per RFC 2202 */

/* Test 1 */
guint8 key_md5_test1[] = {
    0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b,
    0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b };
guint8 result_md5_test1[] = {
    0x92, 0x94, 0x72, 0x7a, 0x36, 0x38, 0xbb, 0x1c, 0x13, 0xf4,
    0x8e, 0xf8, 0x15, 0x8b, 0xfc, 0x9d };

/* Test 2 */
guint8 result_md5_test2[] = {
    0x75, 0x0c, 0x78, 0x3e, 0x6a, 0xb0, 0xb5, 0x03, 0xea, 0xa8,
    0x6e, 0x31, 0x0a, 0x5d, 0xb7, 0x38 };

/* Test 3 */
guint8 key_md5_test3[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };
guint8 data_md5_test3[] = {
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd };
guint8 result_md5_test3[] = {
    0x56, 0xbe, 0x34, 0x52, 0x1d, 0x14, 0x4c, 0x88, 0xdb, 0xb8,
    0xc7, 0x33, 0xf0, 0xe8, 0xb3, 0xf6 };

/* Test 4 */
guint8 key_md5_test4[] = {
    0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
    0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19 };
guint8 data_md5_test4[] = {
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd };
guint8 result_md5_test4[] = {
    0x69, 0x7e, 0xaf, 0x0a, 0xca, 0x3a, 0x3a, 0xea, 0x3a, 0x75,
    0x16, 0x47, 0x46, 0xff, 0xaa, 0x79 };

/* Test 5 */
guint8 key_md5_test5[] = {
    0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c};
guint8 result_md5_test5[] = {
    0x56, 0x46, 0x1e, 0xf2, 0x34, 0x2e, 0xdc, 0x00, 0xf9, 0xba,
    0xb9, 0x95, 0x69, 0x0e, 0xfd, 0x4c };

/* Test 6 */
guint8 key_md5_test6[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };
guint8 result_md5_test6[] = {
    0x6b, 0x1a, 0xb7, 0xfe, 0x4b, 0xd7, 0xbf, 0x8f, 0x0b, 0x62,
    0xe6, 0xce, 0x61, 0xb9, 0xd0, 0xcd };

/* Test 6 */
guint8 key_md5_test7[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };
guint8 result_md5_test7[] = {
    0x6f, 0x63, 0x0f, 0xad, 0x67, 0xcd, 0xa0, 0xee, 0x1f, 0xb1,
    0xf5, 0x62, 0xdb, 0x3a, 0xa5, 0x3e };

/* HMAC-SHA1, HMAC-SHA256, HMAC-SHA384 and HMAC-SHA512 test vectors
 * as per RFCs 2202 and 4868.
 *
 * See: https://tools.ietf.org/html/rfc4868#section-2.7.1 */

/* Test 1 */
guint8 key_sha_test1[] = {
    0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b,
    0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b };
guint8 result_sha1_test1[] = {
    0xb6, 0x17, 0x31, 0x86, 0x55, 0x05, 0x72, 0x64, 0xe2, 0x8b,
    0xc0, 0xb6, 0xfb, 0x37, 0x8c, 0x8e, 0xf1, 0x46, 0xbe, 0x00 };
guint8 result_sha256_test1[] = {
    0xb0, 0x34, 0x4c, 0x61, 0xd8, 0xdb, 0x38, 0x53, 0x5c, 0xa8,
    0xaf, 0xce, 0xaf, 0x0b, 0xf1, 0x2b, 0x88, 0x1d, 0xc2, 0x00,
    0xc9, 0x83, 0x3d, 0xa7, 0x26, 0xe9, 0x37, 0x6c, 0x2e, 0x32,
    0xcf, 0xf7 };
guint8 result_sha384_test1[] = {
    0xaf, 0xd0, 0x39, 0x44, 0xd8, 0x48, 0x95, 0x62, 0x6b, 0x08,
    0x25, 0xf4, 0xab, 0x46, 0x90, 0x7f, 0x15, 0xf9, 0xda, 0xdb,
    0xe4, 0x10, 0x1e, 0xc6, 0x82, 0xaa, 0x03, 0x4c, 0x7c, 0xeb,
    0xc5, 0x9c, 0xfa, 0xea, 0x9e, 0xa9, 0x07, 0x6e, 0xde, 0x7f,
    0x4a, 0xf1, 0x52, 0xe8, 0xb2, 0xfa, 0x9c, 0xb6 };
guint8 result_sha512_test1[] = {
    0x87, 0xaa, 0x7c, 0xde, 0xa5, 0xef, 0x61, 0x9d, 0x4f, 0xf0,
    0xb4, 0x24, 0x1a, 0x1d, 0x6c, 0xb0, 0x23, 0x79, 0xf4, 0xe2,
    0xce, 0x4e, 0xc2, 0x78, 0x7a, 0xd0, 0xb3, 0x05, 0x45, 0xe1,
    0x7c, 0xde, 0xda, 0xa8, 0x33, 0xb7, 0xd6, 0xb8, 0xa7, 0x02,
    0x03, 0x8b, 0x27, 0x4e, 0xae, 0xa3, 0xf4, 0xe4, 0xbe, 0x9d,
    0x91, 0x4e, 0xeb, 0x61, 0xf1, 0x70, 0x2e, 0x69, 0x6c, 0x20,
    0x3a, 0x12, 0x68, 0x54 };

/* Test 2 */
guint8 result_sha1_test2[] = {
    0xef, 0xfc, 0xdf, 0x6a, 0xe5, 0xeb, 0x2f, 0xa2, 0xd2, 0x74,
    0x16, 0xd5, 0xf1, 0x84, 0xdf, 0x9c, 0x25, 0x9a, 0x7c, 0x79 };
guint8 result_sha256_test2[] = {
    0x5b, 0xdc, 0xc1, 0x46, 0xbf, 0x60, 0x75, 0x4e, 0x6a, 0x04,
    0x24, 0x26, 0x08, 0x95, 0x75, 0xc7, 0x5a, 0x00, 0x3f, 0x08,
    0x9d, 0x27, 0x39, 0x83, 0x9d, 0xec, 0x58, 0xb9, 0x64, 0xec,
    0x38, 0x43 };
guint8 result_sha384_test2[] = {
    0xaf, 0x45, 0xd2, 0xe3, 0x76, 0x48, 0x40, 0x31, 0x61, 0x7f,
    0x78, 0xd2, 0xb5, 0x8a, 0x6b, 0x1b, 0x9c, 0x7e, 0xf4, 0x64,
    0xf5, 0xa0, 0x1b, 0x47, 0xe4, 0x2e, 0xc3, 0x73, 0x63, 0x22,
    0x44, 0x5e, 0x8e, 0x22, 0x40, 0xca, 0x5e, 0x69, 0xe2, 0xc7,
    0x8b, 0x32, 0x39, 0xec, 0xfa, 0xb2, 0x16, 0x49 };
guint8 result_sha512_test2[] = {
    0x16, 0x4b, 0x7a, 0x7b, 0xfc, 0xf8, 0x19, 0xe2, 0xe3, 0x95,
    0xfb, 0xe7, 0x3b, 0x56, 0xe0, 0xa3, 0x87, 0xbd, 0x64, 0x22,
    0x2e, 0x83, 0x1f, 0xd6, 0x10, 0x27, 0x0c, 0xd7, 0xea, 0x25,
    0x05, 0x54, 0x97, 0x58, 0xbf, 0x75, 0xc0, 0x5a, 0x99, 0x4a,
    0x6d, 0x03, 0x4f, 0x65, 0xf8, 0xf0, 0xe6, 0xfd, 0xca, 0xea,
    0xb1, 0xa3, 0x4d, 0x4a, 0x6b, 0x4b, 0x63, 0x6e, 0x07, 0x0a,
    0x38, 0xbc, 0xe7, 0x37 };

/* Test 3 */
guint8 key_sha_test3[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };
guint8 data_sha_test3[] = {
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd };
guint8 result_sha1_test3[] = {
    0x12, 0x5d, 0x73, 0x42, 0xb9, 0xac, 0x11, 0xcd, 0x91, 0xa3,
    0x9a, 0xf4, 0x8a, 0xa1, 0x7b, 0x4f, 0x63, 0xf1, 0x75, 0xd3 };
guint8 result_sha256_test3[] = {
    0x77, 0x3e, 0xa9, 0x1e, 0x36, 0x80, 0x0e, 0x46, 0x85, 0x4d,
    0xb8, 0xeb, 0xd0, 0x91, 0x81, 0xa7, 0x29, 0x59, 0x09, 0x8b,
    0x3e, 0xf8, 0xc1, 0x22, 0xd9, 0x63, 0x55, 0x14, 0xce, 0xd5,
    0x65, 0xfe };
guint8 result_sha384_test3[] = {
    0x88, 0x06, 0x26, 0x08, 0xd3, 0xe6, 0xad, 0x8a, 0x0a, 0xa2,
    0xac, 0xe0, 0x14, 0xc8, 0xa8, 0x6f, 0x0a, 0xa6, 0x35, 0xd9,
    0x47, 0xac, 0x9f, 0xeb, 0xe8, 0x3e, 0xf4, 0xe5, 0x59, 0x66,
    0x14, 0x4b, 0x2a, 0x5a, 0xb3, 0x9d, 0xc1, 0x38, 0x14, 0xb9,
    0x4e, 0x3a, 0xb6, 0xe1, 0x01, 0xa3, 0x4f, 0x27 };
guint8 result_sha512_test3[] = {
    0xfa, 0x73, 0xb0, 0x08, 0x9d, 0x56, 0xa2, 0x84, 0xef, 0xb0,
    0xf0, 0x75, 0x6c, 0x89, 0x0b, 0xe9, 0xb1, 0xb5, 0xdb, 0xdd,
    0x8e, 0xe8, 0x1a, 0x36, 0x55, 0xf8, 0x3e, 0x33, 0xb2, 0x27,
    0x9d, 0x39, 0xbf, 0x3e, 0x84, 0x82, 0x79, 0xa7, 0x22, 0xc8,
    0x06, 0xb4, 0x85, 0xa4, 0x7e, 0x67, 0xc8, 0x07, 0xb9, 0x46,
    0xa3, 0x37, 0xbe, 0xe8, 0x94, 0x26, 0x74, 0x27, 0x88, 0x59,
    0xe1, 0x32, 0x92, 0xfb };

/* Test 4 */
guint8 key_sha_test4[] = {
    0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,
    0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14,
    0x15, 0x16, 0x17, 0x18, 0x19 };
guint8 data_sha_test4[] = {
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd,
    0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd };
guint8 result_sha1_test4[] = {
    0x4c, 0x90, 0x07, 0xf4, 0x02, 0x62, 0x50, 0xc6, 0xbc, 0x84,
    0x14, 0xf9, 0xbf, 0x50, 0xc8, 0x6c, 0x2d, 0x72, 0x35, 0xda };
guint8 result_sha256_test4[] = {
    0x82, 0x55, 0x8a, 0x38, 0x9a, 0x44, 0x3c, 0x0e, 0xa4, 0xcc,
    0x81, 0x98, 0x99, 0xf2, 0x08, 0x3a, 0x85, 0xf0, 0xfa, 0xa3,
    0xe5, 0x78, 0xf8, 0x07, 0x7a, 0x2e, 0x3f, 0xf4, 0x67, 0x29,
    0x66, 0x5b };
guint8 result_sha384_test4[] = {
    0x3e, 0x8a, 0x69, 0xb7, 0x78, 0x3c, 0x25, 0x85, 0x19, 0x33,
    0xab, 0x62, 0x90, 0xaf, 0x6c, 0xa7, 0x7a, 0x99, 0x81, 0x48,
    0x08, 0x50, 0x00, 0x9c, 0xc5, 0x57, 0x7c, 0x6e, 0x1f, 0x57,
    0x3b, 0x4e, 0x68, 0x01, 0xdd, 0x23, 0xc4, 0xa7, 0xd6, 0x79,
    0xcc, 0xf8, 0xa3, 0x86, 0xc6, 0x74, 0xcf, 0xfb };
guint8 result_sha512_test4[] = {
    0xb0, 0xba, 0x46, 0x56, 0x37, 0x45, 0x8c, 0x69, 0x90, 0xe5,
    0xa8, 0xc5, 0xf6, 0x1d, 0x4a, 0xf7, 0xe5, 0x76, 0xd9, 0x7f,
    0xf9, 0x4b, 0x87, 0x2d, 0xe7, 0x6f, 0x80, 0x50, 0x36, 0x1e,
    0xe3, 0xdb, 0xa9, 0x1c, 0xa5, 0xc1, 0x1a, 0xa2, 0x5e, 0xb4,
    0xd6, 0x79, 0x27, 0x5c, 0xc5, 0x78, 0x80, 0x63, 0xa5, 0xf1,
    0x97, 0x41, 0x12, 0x0c, 0x4f, 0x2d, 0xe2, 0xad, 0xeb, 0xeb,
    0x10, 0xa2, 0x98, 0xdd };

/* Test 5 (note: different for SHA-256/SHA-512) */
guint8 key_sha1_test5[] = {
    0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c };
guint8 result_sha1_test5[] = {
    0x4c, 0x1a, 0x03, 0x42, 0x4b, 0x55, 0xe0, 0x7f, 0xe7, 0xf2,
    0x7b, 0xe1, 0xd5, 0x8b, 0xb9, 0x32, 0x4a, 0x9a, 0x5a, 0x04 };

/* Test 6 & 7 (note: different for SHA-1 and SHA-256/SHA-512) */
guint8 key_sha1_test6_7[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa };

guint8 result_sha1_test6[] = {
    0xaa, 0x4a, 0xe5, 0xe1, 0x52, 0x72, 0xd0, 0x0e, 0x95, 0x70,
    0x56, 0x37, 0xce, 0x8a, 0x3b, 0x55, 0xed, 0x40, 0x21, 0x12 };

guint8 result_sha1_test7[] = {
    0xe8, 0xe9, 0x9d, 0xf, 0x45, 0x23, 0x7d, 0x78, 0x6d, 0x6b,
    0xba, 0xa7, 0x96, 0x5c, 0x78, 0x8, 0xbb, 0xff, 0x1a, 0x91 };

/* Test 5 & 6 for SHA-256 and SHA-512. */
guint8 key_sha256_test5_6[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa };

guint8 result_sha256_test5[] = {
    0x60, 0xe4, 0x31, 0x59, 0x1e, 0xe0, 0xb6, 0x7f, 0x0d, 0x8a,
    0x26, 0xaa, 0xcb, 0xf5, 0xb7, 0x7f, 0x8e, 0x0b, 0xc6, 0x21,
    0x37, 0x28, 0xc5, 0x14, 0x05, 0x46, 0x04, 0x0f, 0x0e, 0xe3,
    0x7f, 0x54 };
guint8 result_sha384_test5[] = {
    0x4e, 0xce, 0x08, 0x44, 0x85, 0x81, 0x3e, 0x90, 0x88, 0xd2,
    0xc6, 0x3a, 0x04, 0x1b, 0xc5, 0xb4, 0x4f, 0x9e, 0xf1, 0x01,
    0x2a, 0x2b, 0x58, 0x8f, 0x3c, 0xd1, 0x1f, 0x05, 0x03, 0x3a,
    0xc4, 0xc6, 0x0c, 0x2e, 0xf6, 0xab, 0x40, 0x30, 0xfe, 0x82,
    0x96, 0x24, 0x8d, 0xf1, 0x63, 0xf4, 0x49, 0x52 };
guint8 result_sha512_test5[] = {
    0x80, 0xb2, 0x42, 0x63, 0xc7, 0xc1, 0xa3, 0xeb, 0xb7, 0x14,
    0x93, 0xc1, 0xdd, 0x7b, 0xe8, 0xb4, 0x9b, 0x46, 0xd1, 0xf4,
    0x1b, 0x4a, 0xee, 0xc1, 0x12, 0x1b, 0x01, 0x37, 0x83, 0xf8,
    0xf3, 0x52, 0x6b, 0x56, 0xd0, 0x37, 0xe0, 0x5f, 0x25, 0x98,
    0xbd, 0x0f, 0xd2, 0x21, 0x5d, 0x6a, 0x1e, 0x52, 0x95, 0xe6,
    0x4f, 0x73, 0xf6, 0x3f, 0x0a, 0xec, 0x8b, 0x91, 0x5a, 0x98,
    0x5d, 0x78, 0x65, 0x98 };

guint8 result_sha256_test6[] = {
    0x9b, 0x09, 0xff, 0xa7, 0x1b, 0x94, 0x2f, 0xcb, 0x27, 0x63,
    0x5f, 0xbc, 0xd5, 0xb0, 0xe9, 0x44, 0xbf, 0xdc, 0x63, 0x64,
    0x4f, 0x07, 0x13, 0x93, 0x8a, 0x7f, 0x51, 0x53, 0x5c, 0x3a,
    0x35, 0xe2 };
guint8 result_sha384_test6[] = {
    0x66, 0x17, 0x17, 0x8e, 0x94, 0x1f, 0x02, 0x0d, 0x35, 0x1e,
    0x2f, 0x25, 0x4e, 0x8f, 0xd3, 0x2c, 0x60, 0x24, 0x20, 0xfe,
    0xb0, 0xb8, 0xfb, 0x9a, 0xdc, 0xce, 0xbb, 0x82, 0x46, 0x1e,
    0x99, 0xc5, 0xa6, 0x78, 0xcc, 0x31, 0xe7, 0x99, 0x17, 0x6d,
    0x38, 0x60, 0xe6, 0x11, 0x0c, 0x46, 0x52, 0x3e };
guint8 result_sha512_test6[] = {
    0xe3, 0x7b, 0x6a, 0x77, 0x5d, 0xc8, 0x7d, 0xba, 0xa4, 0xdf,
    0xa9, 0xf9, 0x6e, 0x5e, 0x3f, 0xfd, 0xde, 0xbd, 0x71, 0xf8,
    0x86, 0x72, 0x89, 0x86, 0x5d, 0xf5, 0xa3, 0x2d, 0x20, 0xcd,
    0xc9, 0x44, 0xb6, 0x02, 0x2c, 0xac, 0x3c, 0x49, 0x82, 0xb1,
    0x0d, 0x5e, 0xeb, 0x55, 0xc3, 0xe4, 0xde, 0x15, 0x13, 0x46,
    0x76, 0xfb, 0x6d, 0xe0, 0x44, 0x60, 0x65, 0xc9, 0x74, 0x40,
    0xfa, 0x8c, 0x6a, 0x58 };


typedef struct {
  GChecksumType digest_type;
  gconstpointer key;
  gsize key_len;
  gconstpointer data;
  gsize data_len;
  gconstpointer result;
} HmacCase;

HmacCase hmac_md5_tests[] = {
  { G_CHECKSUM_MD5, key_md5_test1, 16, "Hi There", 8, result_md5_test1 },
  { G_CHECKSUM_MD5, "Jefe", 4, "what do ya want for nothing?", 28,
      result_md5_test2 },
  { G_CHECKSUM_MD5, key_md5_test3, 16, data_md5_test3, 50,
      result_md5_test3 },
  { G_CHECKSUM_MD5, key_md5_test4, 25, data_md5_test4, 50,
      result_md5_test4 },
  { G_CHECKSUM_MD5, key_md5_test5, 16, "Test With Truncation", 20,
      result_md5_test5 },
  { G_CHECKSUM_MD5, key_md5_test6, 80,
      "Test Using Larger Than Block-Size Key - Hash Key First", 54,
      result_md5_test6 },
  { G_CHECKSUM_MD5, key_md5_test7, 80,
      "Test Using Larger Than Block-Size Key and Larger Than One Block-Size Data",
      73, result_md5_test7 },
  { -1, NULL, 0, NULL, 0, NULL },
};

HmacCase hmac_sha1_tests[] = {
  { G_CHECKSUM_SHA1, key_sha_test1, 20, "Hi There", 8, result_sha1_test1 },
  { G_CHECKSUM_SHA1, "Jefe", 4, "what do ya want for nothing?", 28,
      result_sha1_test2 },
  { G_CHECKSUM_SHA1, key_sha_test3, 20, data_sha_test3, 50,
      result_sha1_test3 },
  { G_CHECKSUM_SHA1, key_sha_test4, 25, data_sha_test4, 50,
      result_sha1_test4 },
  { G_CHECKSUM_SHA1, key_sha1_test5, 20, "Test With Truncation", 20,
    result_sha1_test5 },
  { G_CHECKSUM_SHA1, key_sha1_test6_7, 80,
      "Test Using Larger Than Block-Size Key - Hash Key First", 54,
      result_sha1_test6 },
  { G_CHECKSUM_SHA1, key_sha1_test6_7, 80,
      "Test Using Larger Than Block-Size Key and Larger" \
               " Than One Block-Size Data", 73, result_sha1_test7, },
  { -1, NULL, 0, NULL, 0, NULL },
};

HmacCase hmac_sha256_tests[] = {
  { G_CHECKSUM_SHA256, key_sha_test1, 20, "Hi There", 8, result_sha256_test1 },
  { G_CHECKSUM_SHA256, "Jefe", 4, "what do ya want for nothing?", 28,
      result_sha256_test2 },
  { G_CHECKSUM_SHA256, key_sha_test3, 20, data_sha_test3, 50,
      result_sha256_test3 },
  { G_CHECKSUM_SHA256, key_sha_test4, 25, data_sha_test4, 50,
      result_sha256_test4 },
  { G_CHECKSUM_SHA256, key_sha256_test5_6, 131,
      "Test Using Larger Than Block-Size Key - Hash Key First", 54,
      result_sha256_test5 },
  { G_CHECKSUM_SHA256, key_sha256_test5_6, 131,
      "This is a test using a larger than block-size key and a larger than "
      "block-size data. The key needs to be hashed before being used by the "
      "HMAC algorithm.", 152, result_sha256_test6, },
  { -1, NULL, 0, NULL, 0, NULL },
};

HmacCase hmac_sha384_tests[] = {
  { G_CHECKSUM_SHA384, key_sha_test1, 20, "Hi There", 8, result_sha384_test1 },
  { G_CHECKSUM_SHA384, "Jefe", 4, "what do ya want for nothing?", 28,
      result_sha384_test2 },
  { G_CHECKSUM_SHA384, key_sha_test3, 20, data_sha_test3, 50,
      result_sha384_test3 },
  { G_CHECKSUM_SHA384, key_sha_test4, 25, data_sha_test4, 50,
      result_sha384_test4 },
  { G_CHECKSUM_SHA384, key_sha256_test5_6, 131,
      "Test Using Larger Than Block-Size Key - Hash Key First", 54,
      result_sha384_test5 },
  { G_CHECKSUM_SHA384, key_sha256_test5_6, 131,
      "This is a test using a larger than block-size key and a larger than "
      "block-size data. The key needs to be hashed before being used by the "
      "HMAC algorithm.", 152, result_sha384_test6, },
  { -1, NULL, 0, NULL, 0, NULL },
};

HmacCase hmac_sha512_tests[] = {
  { G_CHECKSUM_SHA512, key_sha_test1, 20, "Hi There", 8, result_sha512_test1 },
  { G_CHECKSUM_SHA512, "Jefe", 4, "what do ya want for nothing?", 28,
      result_sha512_test2 },
  { G_CHECKSUM_SHA512, key_sha_test3, 20, data_sha_test3, 50,
      result_sha512_test3 },
  { G_CHECKSUM_SHA512, key_sha_test4, 25, data_sha_test4, 50,
      result_sha512_test4 },
  { G_CHECKSUM_SHA512, key_sha256_test5_6, 131,
      "Test Using Larger Than Block-Size Key - Hash Key First", 54,
      result_sha512_test5 },
  { G_CHECKSUM_SHA512, key_sha256_test5_6, 131,
      "This is a test using a larger than block-size key and a larger than "
      "block-size data. The key needs to be hashed before being used by the "
      "HMAC algorithm.", 152, result_sha512_test6, },
  { -1, NULL, 0, NULL, 0, NULL },
};


static void
test_hmac (HmacCase *t)
{
  GHmac *hmac;
  gsize digest_len, hmac_len;
  gpointer digest;

  hmac_len = digest_len = g_checksum_type_get_length (t->digest_type);
  digest = g_malloc (hmac_len);

  hmac = g_hmac_new (t->digest_type, t->key, t->key_len);
  g_hmac_update (hmac, t->data, t->data_len);
  g_hmac_get_digest (hmac, digest, &digest_len);

  g_assert_cmpmem (digest, hmac_len, t->result, digest_len);

  g_free (digest);
  g_hmac_unref (hmac);
}

static void
test_hmac_ref_unref (void)
{
  GHmac *hmac, *check;

  hmac = g_hmac_new (G_CHECKSUM_SHA1, (guchar*)"aaa", 3);
  check = g_hmac_ref (hmac);
  g_assert (check == hmac);
  g_hmac_unref (check);
  g_hmac_unref (hmac);
}

static void
test_hmac_copy (void)
{
  GHmac *hmac, *check;

  hmac = g_hmac_new (G_CHECKSUM_SHA256, (guchar*)"aaa", 3);
  check = g_hmac_copy (hmac);
  g_assert (check != hmac);
  g_assert_cmpstr (g_hmac_get_string (hmac), ==, g_hmac_get_string (check));
  g_hmac_unref (check);
  g_hmac_unref (hmac);
}

static void
test_hmac_for_data (void)
{
  gchar *string;
  GHmac *hmac;

  string = g_compute_hmac_for_data (G_CHECKSUM_SHA1,
                                    (guchar*)"aaa", 3,
                                    (guchar*)"bcdef", 5);

  hmac = g_hmac_new (G_CHECKSUM_SHA1, (guchar*)"aaa", 3);
  g_hmac_update (hmac, (guchar*)"bcdef", 5);
  g_assert_cmpstr (string, ==, g_hmac_get_string (hmac));
  g_hmac_unref (hmac);
  g_free (string);
}

static void
test_hmac_for_string (void)
{
  gchar *string;
  GHmac *hmac;

  string = g_compute_hmac_for_string (G_CHECKSUM_SHA1,
                                      (guchar*)"aaa", 3,
                                      "bcdef", -1);

  hmac = g_hmac_new (G_CHECKSUM_SHA1, (guchar*)"aaa", 3);
  g_hmac_update (hmac, (guchar*)"bcdef", 5);
  g_assert_cmpstr (string, ==, g_hmac_get_string (hmac));
  g_hmac_unref (hmac);
  g_free (string);
}

static void
test_hmac_for_bytes (void)
{
  gchar *string;
  GHmac *hmac;
  GBytes *key, *data;

  key = g_bytes_new ("aaa", 3);
  data = g_bytes_new ("bcdef", 5);

  string = g_compute_hmac_for_bytes (G_CHECKSUM_SHA1, key, data);

  hmac = g_hmac_new (G_CHECKSUM_SHA1, (guchar*)"aaa", 3);
  g_hmac_update (hmac, (guchar*)"bcdef", 5);
  g_assert_cmpstr (string, ==, g_hmac_get_string (hmac));
  g_hmac_unref (hmac);
  g_free (string);

  g_bytes_unref (key);
  g_bytes_unref (data);
}

int
main (int argc,
    char **argv)
{
  int i;
  g_test_init (&argc, &argv, NULL);

  for (i = 0 ; hmac_sha1_tests[i].key_len > 0 ; i++)
    {
      gchar *name = g_strdup_printf ("/hmac/sha1-%d", i + 1);
      g_test_add_data_func (name, hmac_sha1_tests + i,
        (void (*)(const void *)) test_hmac);
      g_free (name);
    }

  for (i = 0 ; hmac_sha256_tests[i].key_len > 0 ; i++)
    {
      gchar *name = g_strdup_printf ("/hmac/sha256-%d", i + 1);
      g_test_add_data_func (name, hmac_sha256_tests + i,
        (void (*)(const void *)) test_hmac);
      g_free (name);
    }

  for (i = 0 ; hmac_sha384_tests[i].key_len > 0 ; i++)
    {
      gchar *name = g_strdup_printf ("/hmac/sha384-%d", i + 1);
      g_test_add_data_func (name, hmac_sha384_tests + i,
        (void (*)(const void *)) test_hmac);
      g_free (name);
    }

  for (i = 0 ; hmac_sha512_tests[i].key_len > 0 ; i++)
    {
      gchar *name = g_strdup_printf ("/hmac/sha512-%d", i + 1);
      g_test_add_data_func (name, hmac_sha512_tests + i,
        (void (*)(const void *)) test_hmac);
      g_free (name);
    }

  for (i = 0 ; hmac_md5_tests[i].key_len > 0 ; i++)
    {
      gchar *name = g_strdup_printf ("/hmac/md5-%d", i + 1);
      g_test_add_data_func (name, hmac_md5_tests + i,
        (void (*)(const void *)) test_hmac);
      g_free (name);
    }

  g_test_add_func ("/hmac/ref-unref", test_hmac_ref_unref);
  g_test_add_func ("/hmac/copy", test_hmac_copy);
  g_test_add_func ("/hmac/for-data", test_hmac_for_data);
  g_test_add_func ("/hmac/for-string", test_hmac_for_string);
  g_test_add_func ("/hmac/for-bytes", test_hmac_for_bytes);

  return g_test_run ();
}
