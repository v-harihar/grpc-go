/* Code generated by cmd/cgo; DO NOT EDIT. */

#include <stdlib.h>
#include "_cgo_export.h"

#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Waddress-of-packed-member"
extern void crosscall2(void (*fn)(void *), void *, int, __SIZE_TYPE__);
extern __SIZE_TYPE__ _cgo_wait_runtime_init_done(void);
extern void _cgo_release_context(__SIZE_TYPE__);

extern char* _cgo_topofstack(void);
#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()


#define _cgo_msan_write(addr, sz)

extern void _cgoexp_0595656debd2_listen(void *);

CGO_NO_SANITIZE_THREAD
void listen()
{
	__SIZE_TYPE__ _cgo_ctxt = _cgo_wait_runtime_init_done();
	typedef struct {
		char unused;
	} __attribute__((__packed__, __gcc_struct__)) _cgo_argtype;
	static _cgo_argtype _cgo_zero;
	_cgo_argtype _cgo_a = _cgo_zero;
	_cgo_tsan_release();
	crosscall2(_cgoexp_0595656debd2_listen, &_cgo_a, 0, _cgo_ctxt);
	_cgo_tsan_acquire();
	_cgo_release_context(_cgo_ctxt);
}
