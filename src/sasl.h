/* SPDX-License-Identifier: MIT OR GPL-3.0-only */
/* sasl.h
** strophe XMPP client library -- SASL authentication helpers
**
** Copyright (C) 2005-2009 Collecta, Inc.
**
**  This software is provided AS-IS with no warranty, either express
**  or implied.
**
**  This program is dual licensed under the MIT or GPLv3 licenses.
*/

/** @file
 * SASL authentication helpers.
 */

#ifndef __LIBSTROPHE_SASL_H__
#define __LIBSTROPHE_SASL_H__

#include "strophe.h"
#include "scram.h"

/** low-level sasl routines */

char *sasl_plain(xmpp_ctx_t *ctx, const char *authid, const char *password);
char *sasl_digest_md5(xmpp_ctx_t *ctx,
                      const char *challenge,
                      const char *jid,
                      const char *password);
char *sasl_scram(xmpp_ctx_t *ctx,
                 const struct hash_alg *alg,
                 const char *challenge,
                 const char *first_bare,
                 const char *jid,
                 const char *password);

#endif /* _LIBXMPP_SASL_H__ */
