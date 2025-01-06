/**
 * @file Parser for dependency treebanks in CONLLU format
 * @author Pierre Magistry <pierre.magistry@inalco.fr>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "conllu",
  extras: $ => [],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat1(seq($.sentence,"\n")),
    sentence: $ => seq($.meta, $.tree),
    comment: $ => seq("# ", $.key, " = ", $.value, "\n"),
    meta: $ => repeat1($.comment),
    key: $ => /[a-z_-]+/,
    value: $ => /[^\n]+/,
    tokid: $ => /[0-9-]+/,
    form: $ => /[^\t\n]+/,
    lemma: $ => /[^\t\n]+/,
    upos: $ => /[^\t\n]+/,
    xpos: $ => /[^\t\n]+/,
    feats: $ => /[^\t\n]+/,
    head: $ => /[0-9]+/,
    udep: $ => /[^\t\n]+/,
    xdep: $ => /[^\t\n]+/,
    misc: $ => /[^\t\n]+/,
    content: $ => seq($.tokid, "\t", $.form, "\t", $.lemma, "\t", $.upos, "\t", $.xpos, "\t", $.feats, "\t", $.head, "\t", $.udep, "\t", $.xdep, "\t", $.misc, "\n"),
    tree: $ => repeat1($.content),
  },
});
