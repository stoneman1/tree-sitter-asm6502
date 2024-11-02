package tree_sitter_asm6502_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/stoneman1/tree-sitter-asm6502"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_asm6502.Language())
	if language == nil {
		t.Errorf("Error loading Asm6502 grammar")
	}
}
