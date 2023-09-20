#! /bin/sh
# This file generated by maintain/regenerate_cmd_tests.sh

if test z"$srcdir" = "z"; then
  srcdir=.
fi

one_test_logs_dir=test_log



if test "z$TEX_HTML_TESTS" != z"yes"; then
  echo "Skipping HTML TeX tests that are not easily reproducible"
  exit 77
fi

dir=tex_html
name='tex_gdef_l2h'
mkdir -p $dir

"$srcdir"/run_parser_all.sh -dir $dir $name
exit_status=$?
cat $dir/$one_test_logs_dir/$name.log
exit $exit_status

