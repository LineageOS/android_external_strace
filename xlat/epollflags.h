/* Generated by ./xlat/gen.sh from ./xlat/epollflags.in; do not edit. */
#if defined EPOLL_CLOEXEC || defined O_CLOEXEC
#if !(defined(EPOLL_CLOEXEC) || (defined(HAVE_DECL_EPOLL_CLOEXEC) && HAVE_DECL_EPOLL_CLOEXEC))
# define EPOLL_CLOEXEC O_CLOEXEC
#endif
#endif

#ifdef IN_MPERS

# error static const struct xlat epollflags in mpers mode

#else

static
const struct xlat epollflags[] = {
#if defined EPOLL_CLOEXEC || defined O_CLOEXEC
 XLAT(EPOLL_CLOEXEC),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
