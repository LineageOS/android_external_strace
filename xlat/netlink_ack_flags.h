/* Generated by ./xlat/gen.sh from ./xlat/netlink_ack_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat netlink_ack_flags in mpers mode

#else

static
const struct xlat netlink_ack_flags[] = {
#if defined(NLM_F_CAPPED) || (defined(HAVE_DECL_NLM_F_CAPPED) && HAVE_DECL_NLM_F_CAPPED)
  XLAT(NLM_F_CAPPED),
#endif
#if defined(NLM_F_ACK_TLVS) || (defined(HAVE_DECL_NLM_F_ACK_TLVS) && HAVE_DECL_NLM_F_ACK_TLVS)
  XLAT(NLM_F_ACK_TLVS),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
