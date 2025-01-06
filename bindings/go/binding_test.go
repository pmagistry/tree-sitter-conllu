package tree_sitter_conllu_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_conllu "github.com/tree-sitter/tree-sitter-conllu/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_conllu.Language())
	if language == nil {
		t.Errorf("Error loading Conllu grammar")
	}
}
