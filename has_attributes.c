#include <stdio.h>

/* template...

#if __has_attribute()
int  = 1;
#else
int  = 0;
#endif

*/

#define DEBUG 0

/*
	these are apparently language keywords, not attributes...

#if __has_attribute(_Nullable)
int _Nullable_attr = 1;
#else
int _Nullable_attr = 0;
#endif

#if __has_attribute(_Nonnull)
int _Nonnull_attr = 1;
#else
int _Nonnull_attr = 0;
#endif

#if __has_attribute(_Null_unspecified)
int _Null_unspecified_attr = 1;
#else
int _Null_unspecified_attr = 0;
#endif
*/

#if __has_attribute(abi_tag)
int abi_tag = 1;
#else
int abi_tag = 0;
#endif

#if __has_attribute(access)
int access_ = 1;
#else
int access_ = 0;
#endif

#if __has_attribute(alias)
int alias = 1;
#else
int alias = 0;
#endif

#if __has_attribute(aligned)
int aligned_tv = 1;
#else
int aligned_tv = 0;
#endif

#if __has_attribute(alloc_align)
int alloc_align = 1;
#else
int alloc_align = 0;
#endif

#if __has_attribute(alloc_size)
int alloc_size = 1;
#else
int alloc_size = 0;
#endif

#if __has_attribute(always_inline)
int always_inline = 1;
#else
int always_inline = 0;
#endif

#if __has_attribute(analyzer_noreturn)
int analyzer_noreturn = 1;
#else
int analyzer_noreturn = 0;
#endif

#if __has_attribute(annotate)
int annotate = 1;
#else
int annotate = 0;
#endif

#if __has_attribute(attr)
int attr = 1;
#else
int attr = 0;
#endif

#if __has_attribute(availability)
int availability = 1;
#else
int availability = 0;
#endif

#if __has_attribute(cdecl)
int cdecl = 1;
#else
int cdecl = 0;
#endif

#if __has_attribute(cleanup)
int cleanup = 1;
#else
int cleanup = 0;
#endif

#if __has_attribute(cold)
int cold = 1;
#else
int cold = 0;
#endif

#if __has_attribute(common)
int common = 1;
#else
int common = 0;
#endif

#if __has_attribute(const)
int const_attr = 1;
#else
int const_attr = 0;
#endif

#if __has_attribute(constructor)
int constructor = 1;
#else
int constructor = 0;
#endif

#if __has_attribute(deprecated)
int deprecated_ftv = 1;
#else
int deprecated_ftv = 0;
#endif

#if __has_attribute(destructor)
int destructor = 1;
#else
int destructor = 0;
#endif

#if __has_attribute(diagnose_as_builtin)
int diagnose_as_builtin = 1;
#else
int diagnose_as_builtin = 0;
#endif

#if __has_attribute(diagnose_if)
int diagnose_if = 1;
#else
int diagnose_if = 0;
#endif

#if __has_attribute(disable_sanitizer_instrumentation)
int disable_sanitizer_instrumentation = 1;
#else
int disable_sanitizer_instrumentation = 0;
#endif

#if __has_attribute(dllexport)
int dllexport = 1;
#else
int dllexport = 0;
#endif

#if __has_attribute(dllimport)
int dllimport = 1;
#else
int dllimport = 0;
#endif

#if __has_attribute(enable_if)
int enable_if = 1;
#else
int enable_if = 0;
#endif

#if __has_attribute(exclude_from_explicit_instantiation)
int exclude_from_explicit_instantiation = 1;
#else
int exclude_from_explicit_instantiation = 0;
#endif

#if __has_attribute(externally_visible)
int externally_visible = 1;
#else
int externally_visible = 0;
#endif

#if __has_attribute(fallthrough)
int fallthrough = 1;
#else
int fallthrough = 0;
#endif

#if __has_attribute(flatten)
int flatten = 1;
#else
int flatten = 0;
#endif

#if __has_attribute(format)
int format = 1;
#else
int format = 0;
#endif

#if __has_attribute(format_arg)
int format_arg = 1;
#else
int format_arg = 0;
#endif

#if __has_attribute(gnu_inline)
int gnu_inline = 1;
#else
int gnu_inline = 0;
#endif

#if __has_attribute(hot)
int hot = 1;
#else
int hot = 0;
#endif

#if __has_attribute(ifunc)
int ifunc = 1;
#else
int ifunc = 0;
#endif

#if __has_attribute(init_priority)
int init_priority = 1;
#else
int init_priority = 0;
#endif

#if __has_attribute(malloc)
int malloc_attr = 1;
#else
int malloc_attr = 0;
#endif

#if __has_attribute(may_alias)
int may_alias = 1;
#else
int may_alias = 0;
#endif

#if __has_attribute(minsize)
int minsize = 1;
#else
int minsize = 0;
#endif

#if __has_attribute(mode)
int mode = 1;
#else
int mode = 0;
#endif

#if __has_attribute(no_destroy)
int no_destroy = 1;
#else
int no_destroy = 0;
#endif

#if __has_attribute(no_instrument_function)
int no_instrument_function = 1;
#else
int no_instrument_function = 0;
#endif

#if __has_attribute(no_profile_instrument_function)
int no_profile_instrument_function = 1;
#else
int no_profile_instrument_function = 0;
#endif

#if __has_attribute(no_sanitize)
int no_sanitize = 1;
#else
int no_sanitize = 0;
#endif

#if __has_attribute(no_sanitize_memory)
int no_sanitize_memory = 1;
#else
int no_sanitize_memory = 0;
#endif

#if __has_attribute(no_sanitize_thread)
int no_sanitize_thread = 1;
#else
int no_sanitize_thread = 0;
#endif

#if __has_attribute(no_sanitize_undefined)
int no_sanitize_undefined = 1;
#else
int no_sanitize_undefined = 0;
#endif

#if __has_attribute(no_stack_protector)
int no_stack_protector = 1;
#else
int no_stack_protector = 0;
#endif

#if __has_attribute(no_thread_safety_analysis)
int no_thread_safety_analysis = 1;
#else
int no_thread_safety_analysis = 0;
#endif

#if __has_attribute(nocommon)
int nocommon = 1;
#else
int nocommon = 0;
#endif

#if __has_attribute(nodebug)
int nodebug = 1;
#else
int nodebug = 0;
#endif

#if __has_attribute(noescape)
int noescape = 1;
#else
int noescape = 0;
#endif

#if __has_attribute(noinline)
int noinline = 1;
#else
int noinline = 0;
#endif

#if __has_attribute(nomerge)
int nomerge = 1;
#else
int nomerge = 0;
#endif

#if __has_attribute(nonnull)
int nonnull = 1;
#else
int nonnull = 0;
#endif

#if __has_attribute(nonstring)
int nonstring = 1;
#else
int nonstring = 0;
#endif

#if __has_attribute(noreturn)
int noreturn = 1;
#else
int noreturn = 0;
#endif

#if __has_attribute(nothrow)
int nothrow = 1;
#else
int nothrow = 0;
#endif

#if __has_attribute(overloadable)
int overloadable = 1;
#else
int overloadable = 0;
#endif

#if __has_attribute(packed)
int packed_tv = 1;
#else
int packed_tv = 0;
#endif

#if __has_attribute(pass_object_size)
int pass_object_size = 1;
#else
int pass_object_size = 0;
#endif

#if __has_attribute(pcs)
int pcs = 1;
#else
int pcs = 0;
#endif

#if __has_attribute(preferred_name)
int preferred_name = 1;
#else
int preferred_name = 0;
#endif

#if __has_attribute(pure)
int pure = 1;
#else
int pure = 0;
#endif

#if __has_attribute(require_constant_initialization)
int require_constant_initialization = 1;
#else
int require_constant_initialization = 0;
#endif

#if __has_attribute(returns_nonnull)
int returns_nonnull = 1;
#else
int returns_nonnull = 0;
#endif

#if __has_attribute(returns_twice)
int returns_twice = 1;
#else
int returns_twice = 0;
#endif

#if __has_attribute(section)
int section_fv = 1;
#else
int section_fv = 0;
#endif

#if __has_attribute(selectany)
int selectany = 1;
#else
int selectany = 0;
#endif

#if __has_attribute(sentinel)
int sentinel = 1;
#else
int sentinel = 0;
#endif

#if __has_attribute(shared)
int shared = 1;
#else
int shared = 0;
#endif

#if __has_attribute(standalone_debug)
int standalone_debug = 1;
#else
int standalone_debug = 0;
#endif

#if __has_attribute(tls_model)
int tls_model = 1;
#else
int tls_model = 0;
#endif

#if __has_attribute(transparent_union)
int transparent_union = 1;
#else
int transparent_union = 0;
#endif

#if __has_attribute(trivial_abi)
int trivial_abi = 1;
#else
int trivial_abi = 0;
#endif

#if __has_attribute(type_visibility)
int type_visibility = 1;
#else
int type_visibility = 0;
#endif

#if __has_attribute(unavailable)
int unavailable = 1;
#else
int unavailable = 0;
#endif

#if __has_attribute(unused)
int unused_ftv = 1;
#else
int unused_ftv = 0;
#endif

#if __has_attribute(used)
int used = 1;
#else
int used = 0;
#endif

#if __has_attribute(using_if_exists)
int using_if_exists = 1;
#else
int using_if_exists = 0;
#endif

#if __has_attribute(vector_size)
int vector_size = 1;
#else
int vector_size = 0;
#endif

#if __has_attribute(visibility)
int visibility = 1;
#else
int visibility = 0;
#endif

#if __has_attribute(warn_unused_result)
int warn_unused_result = 1;
#else
int warn_unused_result = 0;
#endif

#if __has_attribute(warning)
int warning = 1;
#else
int warning = 0;
#endif

#if __has_attribute(weak)
int weak_fv = 1;
#else
int weak_fv = 0;
#endif

#if __has_attribute(weak_import)
int weak_import = 1;
#else
int weak_import = 0;
#endif

int main(void)
{
	printf("The compiler that compiled this executable has the following attributes:\n");
	printf(
"access\t%i\n"
"alias\t%i\n"
"aligned\t\t%i\n"
"always_inline\t%i\n"
"cleanup\t\t%i\n"
"common\t%i\n"
"const\t%i\n"
"constructor\t%i\n"
"deprecated\t%i\n"
"destructor\t%i\n"
"externally_visible\t%i\n"
"flatten\t\t%i\n"
"format\t%i\n"
"format_arg\t%i\n"
"gnu_inline\t%i\n"
"ifunc\t%i\n"
"malloc\t%i\n"
"may_alias\t%i\n"
"mode\t%i\n"
"no_instrument_function\t%i\n",
	access_,
	alias,
	aligned_tv,
	always_inline,
	cleanup,
	common,
	const_attr,
	constructor,
	deprecated_ftv,
	destructor,
	externally_visible,
	flatten,
	format,
	format_arg,
	gnu_inline,
	ifunc,
	malloc_attr,
	may_alias,
	mode,
	no_instrument_function);

	printf(
"nocommon\t%i\n"
"noinline\t%i\n"
"nonnull\t\t%i\n"
"noreturn\t%i\n"
"nothrow\t\t%i\n"
"packed\t%i\n"
"pure\t%i\n"
"returns_twice\t%i\n"
"section\t\t%i\n"
"selectany\t%i\n"
"sentinel\t%i\n"
"shared\t%i\n"
"tls_model\t%i\n"
"transparent_union\t%i\n"
"unused\t%i\n"
"used\t%i\n"
"vector_size\t%i\n"
"warn_unused_result\t%i\n"
"weak\t%i\n"
"weak_import\t%i\n"

"\n * Windows only:\n"
"dllexport\t%i\n"
"dllimport\t%i\n",
	nocommon,
	noinline,
	nonnull,
	noreturn,
	nothrow,
	packed_tv,
	pure,
	returns_twice,
	section_fv,
	selectany,
	sentinel,
	shared,
	tls_model,
	transparent_union,
	unused_ftv,
	used,
	vector_size,
	warn_unused_result,
	weak_fv,
	weak_import,
	dllexport,
	dllimport);


	/* printf("\\nnullability attributes:\n"
"_Nullable\t%i%\n"
"_Nonnull\t%i\n"
"_Null_unspecified\t%i\n",
	_Nullable_attr,
	_Nonnull_attr,
	_Null_unspecified_attr); */

	printf("\n * from clang/llvm, used in NDK headers:\n"
"abi_tag\t\t%i\n"
"alloc_align\t%i\n"
"alloc_size\t%i\n"
"analyzer_noreturn\t%i\n"
"annotate\t%i\n"
"attr\t%i\n"
"availability\t%i\n"
"cold\t%i\n"
"diagnose_as_builtin\t%i\n"
"diagnose_if\t%i\n"
"disable_sanitizer_instrumentation\t%i\n"
"enable_if\t%i\n"
"exclude_from_explicit_instantiation\t%i\n"
"fallthrough\t%i\n"
"hot\t%i\n"
"init_priority\t%i\n"
"minsize\t\t%i\n"
"no_destroy\t%i\n"
"no_profile_instrument_function\t%i\n"
"no_sanitize\t%i\n"
"no_sanitize_memory\t%i\n",
	abi_tag,
	alloc_align,
	alloc_size,
	analyzer_noreturn,
	annotate,
	attr,
	availability,
	cold,
	diagnose_as_builtin,
	diagnose_if,
	disable_sanitizer_instrumentation,
	enable_if,
	exclude_from_explicit_instantiation,
	fallthrough,
	hot,
	init_priority,
	minsize,
	no_destroy,
	no_profile_instrument_function,
	no_sanitize,
	no_sanitize_memory);

	printf(
"no_sanitize_thread\t%i\n"
"no_sanitize_undefined\t%i\n"
"no_stack_protector\t%i\n"
"no_thread_safety_analysis\t%i\n"
"nodebug\t\t%i\n"
"noescape\t%i\n"
"nomerge\t\t%i\n"
"nonstring\t%i\n"
"overloadable\t%i\n"
"pass_object_size\t%i\n"
"preferred_name\t%i\n"
"require_constant_initialization\t%i\n"
"returns_nonnull\t%i\n"
"standalone_debug\t%i\n"
"trivial_abi\t%i\n"
"type_visibility\t%i\n"
"unavailable\t%i\n"
"using_if_exists\t%i\n"
"visibility\t%i\n"
"warning\t\t%i\n",
	no_sanitize_thread,
	no_sanitize_undefined,
	no_stack_protector,
	no_thread_safety_analysis,
	nodebug,
	noescape,
	nomerge,
	nonstring,
	overloadable,
	pass_object_size,
	preferred_name,
	require_constant_initialization,
	returns_nonnull,
	standalone_debug,
	trivial_abi,
	type_visibility,
	unavailable,
	using_if_exists,
	visibility,
	warning);

	printf("\n * architecture-specific attributes:\n"
"cdecl (x86)\t%i\n"
"pcs (arm)\t%i\n",
	cdecl,
	pcs);

	return 0;
}

/*  function attributes:

noreturn, returns_twice, noinline, always_inline, flatten, pure, const, nothrow, sentinel, format, format_arg, no_instrument_function, section_fv, constructor, destructor, used, unused_ftv, deprecated_ftv, weak_fv, malloc, alias, warn_unused_result, nonnull, externally_visible

    type attributes:

aligned_tv, packed_tv, transparent_union, may_alias

    variable attributes:

cleanup, common, nocommon, mode, shared, tls_model, vector_size, selectany, dllimport, dlexport

*/
