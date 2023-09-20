use vars qw(%result_texis %result_texts %result_trees %result_errors 
   %result_indices %result_sectioning %result_nodes %result_menus
   %result_floats %result_converted %result_converted_errors 
   %result_elements %result_directions_text %result_indices_sort_strings);

use utf8;

$result_trees{'top_node_up_explicit'} = {
  'contents' => [
    {
      'contents' => [
        {
          'contents' => [
            {
              'contents' => [
                {
                  'text' => '\\input texinfo  @c public domain
',
                  'type' => 'text_before_beginning'
                }
              ],
              'type' => 'preamble_before_beginning'
            }
          ],
          'type' => 'preamble_before_setfilename'
        },
        {
          'contents' => [
            {
              'args' => [
                {
                  'contents' => [
                    {
                      'text' => 'top_node_up_explicit'
                    }
                  ],
                  'extra' => {
                    'spaces_after_argument' => '
'
                  },
                  'type' => 'line_arg'
                }
              ],
              'cmdname' => 'setfilename',
              'extra' => {
                'spaces_before_argument' => ' ',
                'text_arg' => 'top_node_up_explicit'
              },
              'source_info' => {
                'file_name' => 'top_node_up_explicit.texi',
                'line_nr' => 2,
                'macro' => ''
              }
            },
            {
              'text' => '
',
              'type' => 'empty_line'
            },
            {
              'args' => [
                {
                  'text' => ' should replace all explicit (dir) pointers, but not
',
                  'type' => 'misc_arg'
                }
              ],
              'cmdname' => 'c',
              'extra' => {
                'misc_args' => [
                  ' should replace all explicit (dir) pointers, but not
'
                ]
              }
            },
            {
              'args' => [
                {
                  'text' => ' pointers to other files.
',
                  'type' => 'misc_arg'
                }
              ],
              'cmdname' => 'c',
              'extra' => {
                'misc_args' => [
                  ' pointers to other files.
'
                ]
              }
            },
            {
              'text' => '
',
              'type' => 'empty_line'
            }
          ],
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
          'type' => 'line_arg'
        },
        {
          'contents' => [
            {
              'text' => '('
            },
            {
              'text' => 'dir'
            },
            {
              'text' => ')'
            }
          ],
          'extra' => {
            'spaces_before_argument' => ' '
          },
          'type' => 'line_arg'
        },
        {
          'contents' => [
            {
              'text' => '('
            },
            {
              'text' => 'weird'
            },
            {
              'text' => ')'
            }
          ],
          'extra' => {
            'spaces_before_argument' => ' '
          },
          'type' => 'line_arg'
        },
        {
          'contents' => [
            {
              'text' => '('
            },
            {
              'text' => 'dir'
            },
            {
              'text' => ')'
            }
          ],
          'extra' => {
            'spaces_after_argument' => '
',
            'spaces_before_argument' => ' '
          },
          'type' => 'line_arg'
        }
      ],
      'cmdname' => 'node',
      'extra' => {
        'node_content' => [
          {}
        ],
        'nodes_manuals' => [
          {
            'node_content' => [
              {}
            ],
            'normalized' => 'Top'
          },
          {
            'manual_content' => [
              {}
            ]
          },
          {
            'manual_content' => [
              {}
            ]
          },
          {
            'manual_content' => [
              {}
            ]
          }
        ],
        'normalized' => 'Top',
        'spaces_before_argument' => ' '
      },
      'source_info' => {
        'file_name' => 'top_node_up_explicit.texi',
        'line_nr' => 7,
        'macro' => ''
      }
    },
    {
      'args' => [
        {
          'contents' => [
            {
              'text' => 'The top'
            }
          ],
          'extra' => {
            'spaces_after_argument' => '
'
          },
          'type' => 'line_arg'
        }
      ],
      'cmdname' => 'top',
      'contents' => [
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'contents' => [
            {
              'text' => 'Just a top node.
'
            }
          ],
          'type' => 'paragraph'
        },
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'args' => [
            {
              'extra' => {
                'spaces_after_argument' => '
'
              },
              'type' => 'block_line_arg'
            }
          ],
          'cmdname' => 'menu',
          'contents' => [
            {
              'args' => [
                {
                  'text' => '* ',
                  'type' => 'menu_entry_leading_text'
                },
                {
                  'contents' => [
                    {
                      'text' => 'Chap'
                    }
                  ],
                  'type' => 'menu_entry_node'
                },
                {
                  'text' => '::',
                  'type' => 'menu_entry_separator'
                },
                {
                  'contents' => [
                    {
                      'contents' => [
                        {
                          'text' => '
'
                        }
                      ],
                      'type' => 'preformatted'
                    }
                  ],
                  'type' => 'menu_entry_description'
                }
              ],
              'extra' => {
                'menu_entry_description' => {},
                'menu_entry_node' => {
                  'node_content' => [
                    {}
                  ],
                  'normalized' => 'Chap'
                }
              },
              'source_info' => {
                'file_name' => 'top_node_up_explicit.texi',
                'line_nr' => 13,
                'macro' => ''
              },
              'type' => 'menu_entry'
            },
            {
              'args' => [
                {
                  'contents' => [
                    {
                      'text' => 'menu'
                    }
                  ],
                  'extra' => {
                    'spaces_after_argument' => '
'
                  },
                  'type' => 'line_arg'
                }
              ],
              'cmdname' => 'end',
              'extra' => {
                'spaces_before_argument' => ' ',
                'text_arg' => 'menu'
              },
              'source_info' => {
                'file_name' => 'top_node_up_explicit.texi',
                'line_nr' => 14,
                'macro' => ''
              }
            }
          ],
          'source_info' => {
            'file_name' => 'top_node_up_explicit.texi',
            'line_nr' => 12,
            'macro' => ''
          }
        },
        {
          'text' => '
',
          'type' => 'empty_line'
        }
      ],
      'extra' => {
        'spaces_before_argument' => ' '
      },
      'source_info' => {
        'file_name' => 'top_node_up_explicit.texi',
        'line_nr' => 8,
        'macro' => ''
      }
    },
    {
      'args' => [
        {
          'contents' => [
            {
              'text' => 'Chap'
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
      'extra' => {
        'node_content' => [
          {}
        ],
        'nodes_manuals' => [
          {
            'node_content' => [
              {}
            ],
            'normalized' => 'Chap'
          }
        ],
        'normalized' => 'Chap',
        'spaces_before_argument' => ' '
      },
      'source_info' => {
        'file_name' => 'top_node_up_explicit.texi',
        'line_nr' => 16,
        'macro' => ''
      }
    },
    {
      'args' => [
        {
          'contents' => [
            {
              'text' => 'A chapter'
            }
          ],
          'extra' => {
            'spaces_after_argument' => '
'
          },
          'type' => 'line_arg'
        }
      ],
      'cmdname' => 'chapter',
      'contents' => [
        {
          'text' => '
',
          'type' => 'empty_line'
        },
        {
          'contents' => [
            {
              'text' => 'Without the chapter, no up node from top is generated.
'
            }
          ],
          'type' => 'paragraph'
        },
        {
          'text' => '
',
          'type' => 'empty_line'
        }
      ],
      'extra' => {
        'spaces_before_argument' => ' '
      },
      'source_info' => {
        'file_name' => 'top_node_up_explicit.texi',
        'line_nr' => 17,
        'macro' => ''
      }
    },
    {
      'args' => [
        {
          'text' => '
',
          'type' => 'misc_arg'
        }
      ],
      'cmdname' => 'bye'
    }
  ],
  'type' => 'document_root'
};
$result_trees{'top_node_up_explicit'}{'contents'}[1]{'extra'}{'node_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[1]{'args'}[0]{'contents'}[0];
$result_trees{'top_node_up_explicit'}{'contents'}[1]{'extra'}{'nodes_manuals'}[0]{'node_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[1]{'args'}[0]{'contents'}[0];
$result_trees{'top_node_up_explicit'}{'contents'}[1]{'extra'}{'nodes_manuals'}[1]{'manual_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[1]{'args'}[1]{'contents'}[1];
$result_trees{'top_node_up_explicit'}{'contents'}[1]{'extra'}{'nodes_manuals'}[2]{'manual_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[1]{'args'}[2]{'contents'}[1];
$result_trees{'top_node_up_explicit'}{'contents'}[1]{'extra'}{'nodes_manuals'}[3]{'manual_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[1]{'args'}[3]{'contents'}[1];
$result_trees{'top_node_up_explicit'}{'contents'}[2]{'contents'}[3]{'contents'}[0]{'extra'}{'menu_entry_description'} = $result_trees{'top_node_up_explicit'}{'contents'}[2]{'contents'}[3]{'contents'}[0]{'args'}[3];
$result_trees{'top_node_up_explicit'}{'contents'}[2]{'contents'}[3]{'contents'}[0]{'extra'}{'menu_entry_node'}{'node_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[2]{'contents'}[3]{'contents'}[0]{'args'}[1]{'contents'}[0];
$result_trees{'top_node_up_explicit'}{'contents'}[3]{'extra'}{'node_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[3]{'args'}[0]{'contents'}[0];
$result_trees{'top_node_up_explicit'}{'contents'}[3]{'extra'}{'nodes_manuals'}[0]{'node_content'}[0] = $result_trees{'top_node_up_explicit'}{'contents'}[3]{'args'}[0]{'contents'}[0];

$result_texis{'top_node_up_explicit'} = '\\input texinfo  @c public domain
@setfilename top_node_up_explicit

@c should replace all explicit (dir) pointers, but not
@c pointers to other files.

@node Top, (dir), (weird), (dir)
@top The top

Just a top node.

@menu
* Chap::
@end menu

@node Chap
@chapter A chapter

Without the chapter, no up node from top is generated.

@bye
';


$result_texts{'top_node_up_explicit'} = '

The top
*******

Just a top node.

* Chap::

1 A chapter
***********

Without the chapter, no up node from top is generated.

';

$result_sectioning{'top_node_up_explicit'} = {
  'structure' => {
    'section_childs' => [
      {
        'cmdname' => 'top',
        'extra' => {
          'associated_node' => {
            'cmdname' => 'node',
            'extra' => {
              'normalized' => 'Top'
            },
            'structure' => {}
          }
        },
        'structure' => {
          'section_childs' => [
            {
              'cmdname' => 'chapter',
              'extra' => {
                'associated_node' => {
                  'cmdname' => 'node',
                  'extra' => {
                    'normalized' => 'Chap'
                  },
                  'structure' => {}
                }
              },
              'structure' => {
                'section_level' => 1,
                'section_number' => 1,
                'section_up' => {},
                'toplevel_prev' => {},
                'toplevel_up' => {}
              }
            }
          ],
          'section_level' => 0,
          'section_up' => {}
        }
      }
    ],
    'section_level' => -1
  }
};
$result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0]{'structure'}{'section_childs'}[0]{'structure'}{'section_up'} = $result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0];
$result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0]{'structure'}{'section_childs'}[0]{'structure'}{'toplevel_prev'} = $result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0];
$result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0]{'structure'}{'section_childs'}[0]{'structure'}{'toplevel_up'} = $result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0];
$result_sectioning{'top_node_up_explicit'}{'structure'}{'section_childs'}[0]{'structure'}{'section_up'} = $result_sectioning{'top_node_up_explicit'};

$result_nodes{'top_node_up_explicit'} = {
  'cmdname' => 'node',
  'extra' => {
    'associated_section' => {
      'cmdname' => 'top',
      'extra' => {},
      'structure' => {}
    },
    'menus' => [
      {
        'cmdname' => 'menu'
      }
    ],
    'normalized' => 'Top'
  },
  'structure' => {
    'menu_child' => {
      'cmdname' => 'node',
      'extra' => {
        'associated_section' => {
          'cmdname' => 'chapter',
          'extra' => {},
          'structure' => {
            'section_number' => 1
          }
        },
        'normalized' => 'Chap'
      },
      'structure' => {
        'node_up' => {}
      }
    },
    'node_next' => {
      'extra' => {
        'manual_content' => [
          {
            'text' => 'dir'
          }
        ]
      }
    },
    'node_prev' => {
      'extra' => {
        'manual_content' => [
          {
            'text' => 'weird'
          }
        ]
      }
    },
    'node_up' => {
      'extra' => {
        'manual_content' => [
          {
            'text' => 'dir'
          }
        ]
      }
    }
  }
};
$result_nodes{'top_node_up_explicit'}{'structure'}{'menu_child'}{'structure'}{'node_up'} = $result_nodes{'top_node_up_explicit'};

$result_menus{'top_node_up_explicit'} = {
  'cmdname' => 'node',
  'extra' => {
    'normalized' => 'Top'
  },
  'structure' => {
    'menu_child' => {
      'cmdname' => 'node',
      'extra' => {
        'normalized' => 'Chap'
      },
      'structure' => {
        'menu_up' => {},
        'menu_up_hash' => {
          'Top' => 1
        }
      }
    }
  }
};
$result_menus{'top_node_up_explicit'}{'structure'}{'menu_child'}{'structure'}{'menu_up'} = $result_menus{'top_node_up_explicit'};

$result_errors{'top_node_up_explicit'} = [];


$result_floats{'top_node_up_explicit'} = {};


1;
