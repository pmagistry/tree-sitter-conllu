Simple Grammar for CONLLU files (used by https://universaldependencies.org/ and https://surfacesyntacticud.org/ projects)
Required to use my conllu plugin for Neovim (https://github.com/pmagistry/conllu.nvim/)

All you need to do for neovim to parse conllu file is to edit your `~/.config/nvim/init.lua` file and add:

```lua
vim.filetype.add({ extension = { conllu = "conllu"}} )
local parser_config = require 'nvim-treesitter.parsers'.get_parser_configs()
parser_config["conllu"] = {
  install_info = {
    url = "https://github.com/pmagistry/tree-sitter-conllu.git",
    files = {"src/parser.c"}, 
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
}
```

to get syntax highlighting of `.conllu` files, you will also need to copy `./queries/highlights.scm` from this repo
into your `~/.config/nvim/queries/conllu/highlights.scm`

```
(meta) @comment
(key) @variable.builtin
(value) @variable

(tokid) @variable.member
(form) @string
(lemma) @string.special
(upos) @constant.builtin
(udep) @constant
(misc) @string.documentation
```

Assuming you also have the nvim-treesitter plugin (https://github.com/nvim-treesitter/nvim-treesitter), you can now run the `:TSInstall conllu` to add the grammar to your setup.
