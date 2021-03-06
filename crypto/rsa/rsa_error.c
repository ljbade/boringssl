/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/err.h>

#include <openssl/rsa.h>

const ERR_STRING_DATA RSA_error_string_data[] = {
  {ERR_PACK(ERR_LIB_RSA, RSA_F_BN_BLINDING_convert_ex, 0), "BN_BLINDING_convert_ex"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_BN_BLINDING_create_param, 0), "BN_BLINDING_create_param"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_BN_BLINDING_invert_ex, 0), "BN_BLINDING_invert_ex"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_BN_BLINDING_new, 0), "BN_BLINDING_new"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_BN_BLINDING_update, 0), "BN_BLINDING_update"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_check_key, 0), "RSA_check_key"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_new_method, 0), "RSA_new_method"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_PKCS1_OAEP_mgf1, 0), "RSA_padding_add_PKCS1_OAEP_mgf1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_PKCS1_PSS_mgf1, 0), "RSA_padding_add_PKCS1_PSS_mgf1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_PKCS1_type_1, 0), "RSA_padding_add_PKCS1_type_1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_PKCS1_type_2, 0), "RSA_padding_add_PKCS1_type_2"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_SSLv23, 0), "RSA_padding_add_SSLv23"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_add_none, 0), "RSA_padding_add_none"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_check_PKCS1_OAEP_mgf1, 0), "RSA_padding_check_PKCS1_OAEP_mgf1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_check_PKCS1_type_1, 0), "RSA_padding_check_PKCS1_type_1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_check_PKCS1_type_2, 0), "RSA_padding_check_PKCS1_type_2"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_check_SSLv23, 0), "RSA_padding_check_SSLv23"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_padding_check_none, 0), "RSA_padding_check_none"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_recover_crt_params, 0), "RSA_recover_crt_params"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_sign, 0), "RSA_sign"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_verify, 0), "RSA_verify"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_RSA_verify_PKCS1_PSS_mgf1, 0), "RSA_verify_PKCS1_PSS_mgf1"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_decrypt, 0), "decrypt"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_encrypt, 0), "encrypt"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_keygen, 0), "keygen"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_pkcs1_prefixed_msg, 0), "pkcs1_prefixed_msg"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_private_transform, 0), "private_transform"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_rsa_setup_blinding, 0), "rsa_setup_blinding"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_sign_raw, 0), "sign_raw"},
  {ERR_PACK(ERR_LIB_RSA, RSA_F_verify_raw, 0), "verify_raw"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BAD_E_VALUE), "BAD_E_VALUE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BAD_FIXED_HEADER_DECRYPT), "BAD_FIXED_HEADER_DECRYPT"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BAD_PAD_BYTE_COUNT), "BAD_PAD_BYTE_COUNT"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BAD_RSA_PARAMETERS), "BAD_RSA_PARAMETERS"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BAD_SIGNATURE), "BAD_SIGNATURE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BLOCK_TYPE_IS_NOT_01), "BLOCK_TYPE_IS_NOT_01"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BLOCK_TYPE_IS_NOT_02), "BLOCK_TYPE_IS_NOT_02"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_BN_NOT_INITIALIZED), "BN_NOT_INITIALIZED"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_CRT_PARAMS_ALREADY_GIVEN), "CRT_PARAMS_ALREADY_GIVEN"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_CRT_VALUES_INCORRECT), "CRT_VALUES_INCORRECT"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_LEN_NOT_EQUAL_TO_MOD_LEN), "DATA_LEN_NOT_EQUAL_TO_MOD_LEN"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_TOO_LARGE), "DATA_TOO_LARGE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE), "DATA_TOO_LARGE_FOR_KEY_SIZE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_TOO_LARGE_FOR_MODULUS), "DATA_TOO_LARGE_FOR_MODULUS"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_TOO_SMALL), "DATA_TOO_SMALL"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DATA_TOO_SMALL_FOR_KEY_SIZE), "DATA_TOO_SMALL_FOR_KEY_SIZE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_DIGEST_TOO_BIG_FOR_RSA_KEY), "DIGEST_TOO_BIG_FOR_RSA_KEY"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_D_E_NOT_CONGRUENT_TO_1), "D_E_NOT_CONGRUENT_TO_1"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_EMPTY_PUBLIC_KEY), "EMPTY_PUBLIC_KEY"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_FIRST_OCTET_INVALID), "FIRST_OCTET_INVALID"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_INCONSISTENT_SET_OF_CRT_VALUES), "INCONSISTENT_SET_OF_CRT_VALUES"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_INTERNAL_ERROR), "INTERNAL_ERROR"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_INVALID_MESSAGE_LENGTH), "INVALID_MESSAGE_LENGTH"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_KEY_SIZE_TOO_SMALL), "KEY_SIZE_TOO_SMALL"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_LAST_OCTET_INVALID), "LAST_OCTET_INVALID"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_MODULUS_TOO_LARGE), "MODULUS_TOO_LARGE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_NO_PUBLIC_EXPONENT), "NO_PUBLIC_EXPONENT"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_NULL_BEFORE_BLOCK_MISSING), "NULL_BEFORE_BLOCK_MISSING"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_N_NOT_EQUAL_P_Q), "N_NOT_EQUAL_P_Q"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_OAEP_DECODING_ERROR), "OAEP_DECODING_ERROR"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_ONLY_ONE_OF_P_Q_GIVEN), "ONLY_ONE_OF_P_Q_GIVEN"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_OUTPUT_BUFFER_TOO_SMALL), "OUTPUT_BUFFER_TOO_SMALL"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_PADDING_CHECK_FAILED), "PADDING_CHECK_FAILED"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_PKCS_DECODING_ERROR), "PKCS_DECODING_ERROR"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_SLEN_CHECK_FAILED), "SLEN_CHECK_FAILED"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_SLEN_RECOVERY_FAILED), "SLEN_RECOVERY_FAILED"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_SSLV3_ROLLBACK_ATTACK), "SSLV3_ROLLBACK_ATTACK"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD), "THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_TOO_LONG), "TOO_LONG"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_TOO_MANY_ITERATIONS), "TOO_MANY_ITERATIONS"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_UNKNOWN_ALGORITHM_TYPE), "UNKNOWN_ALGORITHM_TYPE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_UNKNOWN_PADDING_TYPE), "UNKNOWN_PADDING_TYPE"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_VALUE_MISSING), "VALUE_MISSING"},
  {ERR_PACK(ERR_LIB_RSA, 0, RSA_R_WRONG_SIGNATURE_LENGTH), "WRONG_SIGNATURE_LENGTH"},
  {0, NULL},
};
