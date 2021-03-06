/* Generated by ./xlat/gen.sh from ./xlat/fib_rule_actions.in; do not edit. */
#if !(defined(FR_ACT_UNSPEC) || (defined(HAVE_DECL_FR_ACT_UNSPEC) && HAVE_DECL_FR_ACT_UNSPEC))
# define FR_ACT_UNSPEC 0
#endif
#if !(defined(FR_ACT_TO_TBL) || (defined(HAVE_DECL_FR_ACT_TO_TBL) && HAVE_DECL_FR_ACT_TO_TBL))
# define FR_ACT_TO_TBL 1
#endif
#if !(defined(FR_ACT_GOTO) || (defined(HAVE_DECL_FR_ACT_GOTO) && HAVE_DECL_FR_ACT_GOTO))
# define FR_ACT_GOTO 2
#endif
#if !(defined(FR_ACT_NOP) || (defined(HAVE_DECL_FR_ACT_NOP) && HAVE_DECL_FR_ACT_NOP))
# define FR_ACT_NOP 3
#endif
#if !(defined(FR_ACT_RES3) || (defined(HAVE_DECL_FR_ACT_RES3) && HAVE_DECL_FR_ACT_RES3))
# define FR_ACT_RES3 4
#endif
#if !(defined(FR_ACT_RES4) || (defined(HAVE_DECL_FR_ACT_RES4) && HAVE_DECL_FR_ACT_RES4))
# define FR_ACT_RES4 5
#endif
#if !(defined(FR_ACT_BLACKHOLE) || (defined(HAVE_DECL_FR_ACT_BLACKHOLE) && HAVE_DECL_FR_ACT_BLACKHOLE))
# define FR_ACT_BLACKHOLE 6
#endif
#if !(defined(FR_ACT_UNREACHABLE) || (defined(HAVE_DECL_FR_ACT_UNREACHABLE) && HAVE_DECL_FR_ACT_UNREACHABLE))
# define FR_ACT_UNREACHABLE 7
#endif
#if !(defined(FR_ACT_PROHIBIT) || (defined(HAVE_DECL_FR_ACT_PROHIBIT) && HAVE_DECL_FR_ACT_PROHIBIT))
# define FR_ACT_PROHIBIT 8
#endif

#ifdef IN_MPERS

# error static const struct xlat fib_rule_actions in mpers mode

#else

static
const struct xlat fib_rule_actions[] = {
 XLAT(FR_ACT_UNSPEC),
 XLAT(FR_ACT_TO_TBL),
 XLAT(FR_ACT_GOTO),
 XLAT(FR_ACT_NOP),
 XLAT(FR_ACT_RES3),
 XLAT(FR_ACT_RES4),
 XLAT(FR_ACT_BLACKHOLE),
 XLAT(FR_ACT_UNREACHABLE),
 XLAT(FR_ACT_PROHIBIT),
 XLAT_END
};

#endif /* !IN_MPERS */
