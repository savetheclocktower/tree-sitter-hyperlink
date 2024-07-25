package tree_sitter_hyperlink_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-hyperlink"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hyperlink.Language())
	if language == nil {
		t.Errorf("Error loading Hyperlink grammar")
	}
}
