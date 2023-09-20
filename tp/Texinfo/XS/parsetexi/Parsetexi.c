/*
 * This file was generated automatically by ExtUtils::ParseXS version 3.40 from the
 * contents of Parsetexi.xs. Do not edit this file, edit Parsetexi.xs instead.
 *
 *    ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "parsetexi/Parsetexi.xs"
#include <config.h>

/* Avoid namespace conflicts. */
#define context perl_context

#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#undef context

#include "ppport.h"

#include "parser.h"
#include "api.h"
#include "indices.h"
#include "input.h"

#line 30 "parsetexi/Parsetexi.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef dVAR
#  define dVAR		dNOOP
#endif


/* This stuff is not part of the API! You have been warned. */
#ifndef PERL_VERSION_DECIMAL
#  define PERL_VERSION_DECIMAL(r,v,s) (r*1000000 + v*1000 + s)
#endif
#ifndef PERL_DECIMAL_VERSION
#  define PERL_DECIMAL_VERSION \
	  PERL_VERSION_DECIMAL(PERL_REVISION,PERL_VERSION,PERL_SUBVERSION)
#endif
#ifndef PERL_VERSION_GE
#  define PERL_VERSION_GE(r,v,s) \
	  (PERL_DECIMAL_VERSION >= PERL_VERSION_DECIMAL(r,v,s))
#endif
#ifndef PERL_VERSION_LE
#  define PERL_VERSION_LE(r,v,s) \
	  (PERL_DECIMAL_VERSION <= PERL_VERSION_DECIMAL(r,v,s))
#endif

/* XS_INTERNAL is the explicit static-linkage variant of the default
 * XS macro.
 *
 * XS_EXTERNAL is the same as XS_INTERNAL except it does not include
 * "STATIC", ie. it exports XSUB symbols. You probably don't want that
 * for anything but the BOOT XSUB.
 *
 * See XSUB.h in core!
 */


/* TODO: This might be compatible further back than 5.10.0. */
#if PERL_VERSION_GE(5, 10, 0) && PERL_VERSION_LE(5, 15, 1)
#  undef XS_EXTERNAL
#  undef XS_INTERNAL
#  if defined(__CYGWIN__) && defined(USE_DYNAMIC_LOADING)
#    define XS_EXTERNAL(name) __declspec(dllexport) XSPROTO(name)
#    define XS_INTERNAL(name) STATIC XSPROTO(name)
#  endif
#  if defined(__SYMBIAN32__)
#    define XS_EXTERNAL(name) EXPORT_C XSPROTO(name)
#    define XS_INTERNAL(name) EXPORT_C STATIC XSPROTO(name)
#  endif
#  ifndef XS_EXTERNAL
#    if defined(HASATTRIBUTE_UNUSED) && !defined(__cplusplus)
#      define XS_EXTERNAL(name) void name(pTHX_ CV* cv __attribute__unused__)
#      define XS_INTERNAL(name) STATIC void name(pTHX_ CV* cv __attribute__unused__)
#    else
#      ifdef __cplusplus
#        define XS_EXTERNAL(name) extern "C" XSPROTO(name)
#        define XS_INTERNAL(name) static XSPROTO(name)
#      else
#        define XS_EXTERNAL(name) XSPROTO(name)
#        define XS_INTERNAL(name) STATIC XSPROTO(name)
#      endif
#    endif
#  endif
#endif

/* perl >= 5.10.0 && perl <= 5.15.1 */


/* The XS_EXTERNAL macro is used for functions that must not be static
 * like the boot XSUB of a module. If perl didn't have an XS_EXTERNAL
 * macro defined, the best we can do is assume XS is the same.
 * Dito for XS_INTERNAL.
 */
#ifndef XS_EXTERNAL
#  define XS_EXTERNAL(name) XS(name)
#endif
#ifndef XS_INTERNAL
#  define XS_INTERNAL(name) XS(name)
#endif

/* Now, finally, after all this mess, we want an ExtUtils::ParseXS
 * internal macro that we're free to redefine for varying linkage due
 * to the EXPORT_XSUB_SYMBOLS XS keyword. This is internal, use
 * XS_EXTERNAL(name) or XS_INTERNAL(name) in your code if you need to!
 */

#undef XS_EUPXS
#if defined(PERL_EUPXS_ALWAYS_EXPORT)
#  define XS_EUPXS(name) XS_EXTERNAL(name)
#else
   /* default to internal */
#  define XS_EUPXS(name) XS_INTERNAL(name)
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
	    Perl_croak_nocontext("Usage: %s::%s(%s)", hvname, gvname, params);
        else
	    Perl_croak_nocontext("Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
	Perl_croak_nocontext("Usage: CODE(0x%" UVxf ")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#define croak_xs_usage        S_croak_xs_usage

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#if PERL_VERSION_LE(5, 21, 5)
#  define newXS_deffile(a,b) Perl_newXS(aTHX_ a,b,file)
#else
#  define newXS_deffile(a,b) Perl_newXS_deffile(aTHX_ a,b)
#endif

#line 174 "parsetexi/Parsetexi.c"

XS_EUPXS(XS_Texinfo__Parser_init); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_init)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "texinfo_uninstalled, srcdir");
    {
	int	texinfo_uninstalled = (int)SvIV(ST(0))
;
	char *	srcdir = (char *)SvPV_nolen(ST(1))
;
	int	RETVAL;
	dXSTARG;

	RETVAL = init(texinfo_uninstalled, srcdir);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_wipe_errors); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_wipe_errors)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	wipe_errors();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_parse_file); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_parse_file)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "filename");
    {
	char *	filename = (char *)SvPV_nolen(ST(0))
;
	int	RETVAL;
	dXSTARG;

	RETVAL = parse_file(filename);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_parse_piece); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_parse_piece)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "string, line_nr");
    {
	char *	string = (char *)SvPV_nolen(ST(0))
;
	int	line_nr = (int)SvIV(ST(1))
;

	parse_piece(string, line_nr);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_parse_string); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_parse_string)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "string, line_nr");
    {
	char *	string = (char *)SvPV_nolen(ST(0))
;
	int	line_nr = (int)SvIV(ST(1))
;

	parse_string(string, line_nr);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_parse_text); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_parse_text)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "string, line_nr");
    {
	char *	string = (char *)SvPV_nolen(ST(0))
;
	int	line_nr = (int)SvIV(ST(1))
;

	parse_text(string, line_nr);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_store_value); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_store_value)
{
    dVAR; dXSARGS;
    if (items != 2)
       croak_xs_usage(cv,  "name, value");
    {
	char *	name = (char *)SvPV_nolen(ST(0))
;
	char *	value = (char *)SvPV_nolen(ST(1))
;

	store_value(name, value);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_wipe_values); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_wipe_values)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	wipe_values();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_reset_context_stack); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_reset_context_stack)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	reset_context_stack();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_init_index_commands); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_init_index_commands)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	init_index_commands();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_add_include_directory); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_add_include_directory)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "filename");
    {
	char *	filename = (char *)SvPV_nolen(ST(0))
;

	add_include_directory(filename);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_build_texinfo_tree); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_texinfo_tree)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	HV *	RETVAL;

	RETVAL = build_texinfo_tree();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_label_list); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_label_list)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	AV *	RETVAL;

	RETVAL = build_label_list();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_internal_xref_list); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_internal_xref_list)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	AV *	RETVAL;

	RETVAL = build_internal_xref_list();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_float_list); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_float_list)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	HV *	RETVAL;

	RETVAL = build_float_list();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_index_data); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_index_data)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	HV *	RETVAL;

	RETVAL = build_index_data();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_global_info); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_global_info)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	HV *	RETVAL;

	RETVAL = build_global_info();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_build_global_info2); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_build_global_info2)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	HV *	RETVAL;

	RETVAL = build_global_info2();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}


XS_EUPXS(XS_Texinfo__Parser_reset_parser); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_reset_parser)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	reset_parser();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_clear_expanded_formats); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_clear_expanded_formats)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	clear_expanded_formats();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_add_expanded_format); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_add_expanded_format)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "format");
    {
	char *	format = (char *)SvPV_nolen(ST(0))
;

	add_expanded_format(format);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_show_menu); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_show_menu)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "i");
    {
	int	i = (int)SvIV(ST(0))
;

	conf_set_show_menu(i);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_CPP_LINE_DIRECTIVES); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_CPP_LINE_DIRECTIVES)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "i");
    {
	int	i = (int)SvIV(ST(0))
;

	conf_set_CPP_LINE_DIRECTIVES(i);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_IGNORE_SPACE_AFTER_BRACED_COMMAND_NAME); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_IGNORE_SPACE_AFTER_BRACED_COMMAND_NAME)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "i");
    {
	int	i = (int)SvIV(ST(0))
;

	conf_set_IGNORE_SPACE_AFTER_BRACED_COMMAND_NAME(i);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_set_DOC_ENCODING_FOR_INPUT_FILE_NAME); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_set_DOC_ENCODING_FOR_INPUT_FILE_NAME)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "i");
    {
	int	i = (int)SvIV(ST(0))
;

	set_DOC_ENCODING_FOR_INPUT_FILE_NAME(i);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_input_file_name_encoding); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_input_file_name_encoding)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "value");
    {
	char *	value = (char *)SvPV_nolen(ST(0))
;

	conf_set_input_file_name_encoding(value);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_locale_encoding); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_locale_encoding)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "value");
    {
	char *	value = (char *)SvPV_nolen(ST(0))
;

	conf_set_locale_encoding(value);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_conf_set_documentlanguage_override); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_conf_set_documentlanguage_override)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "value");
    {
	char *	value = (char *)SvPV_nolen(ST(0))
;

	conf_set_documentlanguage_override(value);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_set_debug); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_set_debug)
{
    dVAR; dXSARGS;
    if (items != 1)
       croak_xs_usage(cv,  "i");
    {
	int	i = (int)SvIV(ST(0))
;

	set_debug(i);
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_set_accept_internalvalue); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_set_accept_internalvalue)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {

	set_accept_internalvalue();
    }
    XSRETURN_EMPTY;
}


XS_EUPXS(XS_Texinfo__Parser_get_errors); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Texinfo__Parser_get_errors)
{
    dVAR; dXSARGS;
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	AV *	RETVAL;

	RETVAL = get_errors();
	{
	    SV * RETVALSV;
	    RETVALSV = newRV((SV*)RETVAL);
	    RETVALSV = sv_2mortal(RETVALSV);
	    ST(0) = RETVALSV;
	}
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS_EXTERNAL(boot_Texinfo__Parser); /* prototype to pass -Wmissing-prototypes */
XS_EXTERNAL(boot_Texinfo__Parser)
{
#if PERL_VERSION_LE(5, 21, 5)
    dVAR; dXSARGS;
#else
    dVAR; dXSBOOTARGSXSAPIVERCHK;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(file);

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#if PERL_VERSION_LE(5, 21, 5)
    XS_VERSION_BOOTCHECK;
#  ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#  endif
#endif

        (void)newXSproto_portable("Texinfo::Parser::init", XS_Texinfo__Parser_init, file, "$$");
        (void)newXSproto_portable("Texinfo::Parser::wipe_errors", XS_Texinfo__Parser_wipe_errors, file, "");
        (void)newXSproto_portable("Texinfo::Parser::parse_file", XS_Texinfo__Parser_parse_file, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::parse_piece", XS_Texinfo__Parser_parse_piece, file, "$$");
        (void)newXSproto_portable("Texinfo::Parser::parse_string", XS_Texinfo__Parser_parse_string, file, "$$");
        (void)newXSproto_portable("Texinfo::Parser::parse_text", XS_Texinfo__Parser_parse_text, file, "$$");
        (void)newXSproto_portable("Texinfo::Parser::store_value", XS_Texinfo__Parser_store_value, file, "$$");
        (void)newXSproto_portable("Texinfo::Parser::wipe_values", XS_Texinfo__Parser_wipe_values, file, "");
        (void)newXSproto_portable("Texinfo::Parser::reset_context_stack", XS_Texinfo__Parser_reset_context_stack, file, "");
        (void)newXSproto_portable("Texinfo::Parser::init_index_commands", XS_Texinfo__Parser_init_index_commands, file, "");
        (void)newXSproto_portable("Texinfo::Parser::add_include_directory", XS_Texinfo__Parser_add_include_directory, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::build_texinfo_tree", XS_Texinfo__Parser_build_texinfo_tree, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_label_list", XS_Texinfo__Parser_build_label_list, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_internal_xref_list", XS_Texinfo__Parser_build_internal_xref_list, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_float_list", XS_Texinfo__Parser_build_float_list, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_index_data", XS_Texinfo__Parser_build_index_data, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_global_info", XS_Texinfo__Parser_build_global_info, file, "");
        (void)newXSproto_portable("Texinfo::Parser::build_global_info2", XS_Texinfo__Parser_build_global_info2, file, "");
        (void)newXSproto_portable("Texinfo::Parser::reset_parser", XS_Texinfo__Parser_reset_parser, file, "");
        (void)newXSproto_portable("Texinfo::Parser::clear_expanded_formats", XS_Texinfo__Parser_clear_expanded_formats, file, "");
        (void)newXSproto_portable("Texinfo::Parser::add_expanded_format", XS_Texinfo__Parser_add_expanded_format, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_show_menu", XS_Texinfo__Parser_conf_set_show_menu, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_CPP_LINE_DIRECTIVES", XS_Texinfo__Parser_conf_set_CPP_LINE_DIRECTIVES, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_IGNORE_SPACE_AFTER_BRACED_COMMAND_NAME", XS_Texinfo__Parser_conf_set_IGNORE_SPACE_AFTER_BRACED_COMMAND_NAME, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::set_DOC_ENCODING_FOR_INPUT_FILE_NAME", XS_Texinfo__Parser_set_DOC_ENCODING_FOR_INPUT_FILE_NAME, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_input_file_name_encoding", XS_Texinfo__Parser_conf_set_input_file_name_encoding, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_locale_encoding", XS_Texinfo__Parser_conf_set_locale_encoding, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::conf_set_documentlanguage_override", XS_Texinfo__Parser_conf_set_documentlanguage_override, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::set_debug", XS_Texinfo__Parser_set_debug, file, "$");
        (void)newXSproto_portable("Texinfo::Parser::set_accept_internalvalue", XS_Texinfo__Parser_set_accept_internalvalue, file, "");
        (void)newXSproto_portable("Texinfo::Parser::get_errors", XS_Texinfo__Parser_get_errors, file, "");
#if PERL_VERSION_LE(5, 21, 5)
#  if PERL_VERSION_GE(5, 9, 0)
    if (PL_unitcheckav)
        call_list(PL_scopestack_ix, PL_unitcheckav);
#  endif
    XSRETURN_YES;
#else
    Perl_xs_boot_epilog(aTHX_ ax);
#endif
}
