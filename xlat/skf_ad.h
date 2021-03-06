/* Generated by ./xlat/gen.sh from ./xlat/skf_ad.in; do not edit. */
#if !(defined(SKF_AD_PROTOCOL) || (defined(HAVE_DECL_SKF_AD_PROTOCOL) && HAVE_DECL_SKF_AD_PROTOCOL))
# define SKF_AD_PROTOCOL 0
#endif
#if !(defined(SKF_AD_PKTTYPE) || (defined(HAVE_DECL_SKF_AD_PKTTYPE) && HAVE_DECL_SKF_AD_PKTTYPE))
# define SKF_AD_PKTTYPE 4
#endif
#if !(defined(SKF_AD_IFINDEX) || (defined(HAVE_DECL_SKF_AD_IFINDEX) && HAVE_DECL_SKF_AD_IFINDEX))
# define SKF_AD_IFINDEX 8
#endif
#if !(defined(SKF_AD_NLATTR) || (defined(HAVE_DECL_SKF_AD_NLATTR) && HAVE_DECL_SKF_AD_NLATTR))
# define SKF_AD_NLATTR 12
#endif
#if !(defined(SKF_AD_NLATTR_NEST) || (defined(HAVE_DECL_SKF_AD_NLATTR_NEST) && HAVE_DECL_SKF_AD_NLATTR_NEST))
# define SKF_AD_NLATTR_NEST 16
#endif
#if !(defined(SKF_AD_MARK) || (defined(HAVE_DECL_SKF_AD_MARK) && HAVE_DECL_SKF_AD_MARK))
# define SKF_AD_MARK 20
#endif
#if !(defined(SKF_AD_QUEUE) || (defined(HAVE_DECL_SKF_AD_QUEUE) && HAVE_DECL_SKF_AD_QUEUE))
# define SKF_AD_QUEUE 24
#endif
#if !(defined(SKF_AD_HATYPE) || (defined(HAVE_DECL_SKF_AD_HATYPE) && HAVE_DECL_SKF_AD_HATYPE))
# define SKF_AD_HATYPE 28
#endif
#if !(defined(SKF_AD_RXHASH) || (defined(HAVE_DECL_SKF_AD_RXHASH) && HAVE_DECL_SKF_AD_RXHASH))
# define SKF_AD_RXHASH 32
#endif
#if !(defined(SKF_AD_CPU) || (defined(HAVE_DECL_SKF_AD_CPU) && HAVE_DECL_SKF_AD_CPU))
# define SKF_AD_CPU 36
#endif
#if !(defined(SKF_AD_ALU_XOR_X) || (defined(HAVE_DECL_SKF_AD_ALU_XOR_X) && HAVE_DECL_SKF_AD_ALU_XOR_X))
# define SKF_AD_ALU_XOR_X 40
#endif
#if !(defined(SKF_AD_VLAN_TAG) || (defined(HAVE_DECL_SKF_AD_VLAN_TAG) && HAVE_DECL_SKF_AD_VLAN_TAG))
# define SKF_AD_VLAN_TAG 44
#endif
#if !(defined(SKF_AD_VLAN_TAG_PRESENT) || (defined(HAVE_DECL_SKF_AD_VLAN_TAG_PRESENT) && HAVE_DECL_SKF_AD_VLAN_TAG_PRESENT))
# define SKF_AD_VLAN_TAG_PRESENT 48
#endif
#if !(defined(SKF_AD_PAY_OFFSET) || (defined(HAVE_DECL_SKF_AD_PAY_OFFSET) && HAVE_DECL_SKF_AD_PAY_OFFSET))
# define SKF_AD_PAY_OFFSET 52
#endif
#if !(defined(SKF_AD_RANDOM) || (defined(HAVE_DECL_SKF_AD_RANDOM) && HAVE_DECL_SKF_AD_RANDOM))
# define SKF_AD_RANDOM 56
#endif
#if !(defined(SKF_AD_VLAN_TPID) || (defined(HAVE_DECL_SKF_AD_VLAN_TPID) && HAVE_DECL_SKF_AD_VLAN_TPID))
# define SKF_AD_VLAN_TPID 60
#endif

#ifdef IN_MPERS

# error static const struct xlat skf_ad in mpers mode

#else

static
const struct xlat skf_ad[] = {
 XLAT(SKF_AD_PROTOCOL),
 XLAT(SKF_AD_PKTTYPE),
 XLAT(SKF_AD_IFINDEX),
 XLAT(SKF_AD_NLATTR),
 XLAT(SKF_AD_NLATTR_NEST),
 XLAT(SKF_AD_MARK),
 XLAT(SKF_AD_QUEUE),
 XLAT(SKF_AD_HATYPE),
 XLAT(SKF_AD_RXHASH),
 XLAT(SKF_AD_CPU),
 XLAT(SKF_AD_ALU_XOR_X),
 XLAT(SKF_AD_VLAN_TAG),
 XLAT(SKF_AD_VLAN_TAG_PRESENT),
 XLAT(SKF_AD_PAY_OFFSET),
 XLAT(SKF_AD_RANDOM),
 XLAT(SKF_AD_VLAN_TPID),
 XLAT_END
};

#endif /* !IN_MPERS */
