use vars qw(%result_texis %result_texts %result_trees %result_errors 
   %result_indices %result_sectioning %result_nodes %result_menus
   %result_floats %result_converted %result_converted_errors 
   %result_elements %result_directions_text %result_indices_sort_strings);

use utf8;

$result_trees{'image_lines_count'} = {
  'contents' => [
    {
      'contents' => [
        {
          'contents' => [],
          'type' => 'preamble_before_content'
        }
      ],
      'type' => 'before_node_section'
    },
    {
      'args' => [
        {
          'contents' => [
            {
              'text' => 'Top'
            }
          ],
          'extra' => {
            'spaces_after_argument' => '
'
          },
          'type' => 'line_arg'
        }
      ],
      'cmdname' => 'node',
      'contents' => [
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'args' => [
            {
              'contents' => [
                {
                  'text' => 'count_image'
                }
              ],
              'type' => 'brace_command_arg'
            }
          ],
          'cmdname' => 'image',
          'extra' => {
            'input_perl_encoding' => 'utf-8'
          },
          'source_info' => {
            'file_name' => '',
            'line_nr' => 3,
            'macro' => ''
          }
        },
        {
          'text' => '
'
        },
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'args' => [
            {
              'contents' => [
                {
                  'text' => 'index entry'
                }
              ],
              'extra' => {
                'spaces_after_argument' => '
'
              },
              'type' => 'line_arg'
            }
          ],
          'cmdname' => 'cindex',
          'extra' => {
            'index_entry' => {
              'content_normalized' => [],
              'entry_content' => [],
              'entry_element' => {},
              'entry_node' => {},
              'entry_number' => 1,
              'in_code' => 0,
              'index_at_command' => 'cindex',
              'index_ignore_chars' => {},
              'index_name' => 'cp',
              'index_type_command' => 'cindex'
            },
            'spaces_before_argument' => ' '
          },
          'source_info' => {
            'file_name' => '',
            'line_nr' => 5,
            'macro' => ''
          },
          'type' => 'index_entry_command'
        },
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'args' => [
            {
              'contents' => [
                {
                  'text' => 'cp'
                }
              ],
              'extra' => {
                'spaces_after_argument' => '
'
              },
              'type' => 'line_arg'
            }
          ],
          'cmdname' => 'printindex',
          'extra' => {
            'misc_args' => [
              'cp'
            ],
            'spaces_before_argument' => ' '
          },
          'source_info' => {
            'file_name' => '',
            'line_nr' => 7,
            'macro' => ''
          }
        }
      ],
      'extra' => {
        'isindex' => 1,
        'node_content' => [
          {}
        ],
        'nodes_manuals' => [
          {
            'node_content' => [
              {}
            ],
            'normalized' => 'Top'
          }
        ],
        'normalized' => 'Top',
        'spaces_before_argument' => ' '
      },
      'source_info' => {
        'file_name' => '',
        'line_nr' => 1,
        'macro' => ''
      }
    }
  ],
  'type' => 'document_root'
};
$result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'extra'}{'index_entry'}{'content_normalized'} = $result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'args'}[0]{'contents'};
$result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'extra'}{'index_entry'}{'entry_content'} = $result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'args'}[0]{'contents'};
$result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'extra'}{'index_entry'}{'entry_element'} = $result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4];
$result_trees{'image_lines_count'}{'contents'}[1]{'contents'}[4]{'extra'}{'index_entry'}{'entry_node'} = $result_trees{'image_lines_count'}{'contents'}[1];
$result_trees{'image_lines_count'}{'contents'}[1]{'extra'}{'node_content'}[0] = $result_trees{'image_lines_count'}{'contents'}[1]{'args'}[0]{'contents'}[0];
$result_trees{'image_lines_count'}{'contents'}[1]{'extra'}{'nodes_manuals'}[0]{'node_content'}[0] = $result_trees{'image_lines_count'}{'contents'}[1]{'args'}[0]{'contents'}[0];

$result_texis{'image_lines_count'} = '@node Top

@image{count_image}

@cindex index entry

@printindex cp
';


$result_texts{'image_lines_count'} = '
count_image


';

$result_nodes{'image_lines_count'} = {
  'cmdname' => 'node',
  'extra' => {
    'isindex' => 1,
    'normalized' => 'Top'
  }
};

$result_menus{'image_lines_count'} = {
  'cmdname' => 'node',
  'extra' => {
    'isindex' => 1,
    'normalized' => 'Top'
  }
};

$result_errors{'image_lines_count'} = [];


$result_floats{'image_lines_count'} = {};


$result_indices_sort_strings{'image_lines_count'} = {
  'cp' => [
    'index entry'
  ]
};



$result_converted{'info'}->{'image_lines_count'} = 'This is , produced from .


File: ,  Node: Top,  Up: (dir)

 [image src="count_image.png" text="aaaa
bbb
cc

ff

" ]


 [index ]
* Menu:

* index entry:                           Top.                   (line 5)



Tag Table:
Node: Top27

End Tag Table


Local Variables:
coding: utf-8
End:
';


$result_converted{'plaintext'}->{'image_lines_count'} = 'aaaa
bbb
cc

ff



* Menu:

* index entry:                           Top.                   (line 8)

';


$result_converted{'html_text'}->{'image_lines_count'} = '<h1 class="node" id="Top">Top</h1>

<img class="image" src="count_image.png" alt="count_image">

<a class="index-entry-id" id="index-index-entry"></a>

<div class="printindex cp-printindex">
<table class="cp-entries-printindex" border="0">
<tr><td></td><th class="entries-header-printindex">Index Entry</th><td>&nbsp;</td><th class="sections-header-printindex"> Section</th></tr>
<tr><td colspan="4"> <hr></td></tr>
<tr><th id="t_i_cp_letter-I">I</th><td></td><td></td></tr>
<tr><td></td><td class="printindex-index-entry"><a href="#index-index-entry">index entry</a>:</td><td>&nbsp;</td><td class="printindex-index-section"><a href="#Top">Top</a></td></tr>
<tr><td colspan="4"> <hr></td></tr>
</table>
</div>
';


$result_converted{'xml'}->{'image_lines_count'} = '<node name="Top" spaces=" "><nodename>Top</nodename></node>

<image><imagefile>count_image</imagefile></image>

<cindex index="cp" spaces=" "><indexterm index="cp" number="1">index entry</indexterm></cindex>

<printindex spaces=" " value="cp" line="cp"></printindex>
';

1;
