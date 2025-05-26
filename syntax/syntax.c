/*** INCLUDES ***/

#include <stdlib.h>

#include "syntax.h"

/*** FILETYPES ***/

char *C_HL_extensions[] = { ".c", ".h", NULL };
char *C_HL_keywords[] = {
    "alignas", "alignof", "break", "case", "const", "constexpr", "continue", "default",
    "do", "else", "enum", "extern", "false", "for", "goto", "if", "inline", "nullptr",
    "register", "restrict", "return", "signed", "sizeof", "static", "static_assert",
    "struct", "switch", "thread_local", "true", "typedef", "typeof", "typeof_unqual",
    "union", "unsigned", "volatile", "while",

    "auto|", "bool|", "char|", "double|", "float|", "int|", "long|", "short|", "void|",
    NULL
};

char *CPP_HL_extensions[] = { ".cpp", NULL };
char *CPP_HL_keywords[] = {
    "alignas", "alignof", "and", "and_eq", "asm", "atomic_cancel", "atomic_commit",
    "atomic_noexcept", "bitand", "bitor", "break", "case" "catch", "class", "compl",
    "concept", "const", "consteval", "constexpr", "constinit", "const_cast",
    "continue", "contract_assert", "co_await", "co_return", "co_yield", "decltype",
    "default", "delete", "do", "dynamic_cast", "else", "enum", "explicit", "export",
    "extern", "false", "for", "friend", "goto", "if", "inline", "mutable", "namespace",
    "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq",
    "private", "protected", "public", "reflexpr", "register", "reinterpret_cast",
    "requires", "return", "signed", "sizeof", "static", "static_assert", "static_cast",
    "struct", "switch", "synchronized", "template", "this", "thread_local", "throw",
    "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using",
    "virtual", "volatile", "while", "xor", "xor_eq",

    "auto|", "bool|", "char|", "char8_t|", "char16_t|", "char32_t|", "double|",
    "float|", "int|", "long|", "short|", "void|", "wchar_t|", NULL
};

char *CS_HL_extensions[] = { ".cs", NULL };
char *CS_HL_keywords[] = {
    "abstract", "as", "base", "break", "case", "catch", "checked", "class", "const",
    "continue", "default", "delegate", "do", "else", "enum", "event", "explicit",
    "extern", "false", "finally", "fixed", "for", "foreach", "goto", "if", "implicit"
    "in", "interface", "internal", "is", "lock", "namespace", "new", "null", "object",
    "operator", "out", "override", "params", "private", "protected", "public", "readonly",
    "ref", "return", "sealed", "sizeof", "stackalloc", "static", "string", "struct",
    "switch", "this", "throw", "true", "try", "typeof", "unchecked", "unsafe", "using",
    "using static", "virtual", "volatile", "while",

    "bool|", "byte|","char|", "decimal|", "double|", "float|", "int|", "long|", "sbyte|",
    "short|", "uint|", "ulong|", "ushort|", "void|", NULL
};

char *CSS_HL_extensions[] = { ".css", NULL };
char *CSS_HL_keywords[] = {
    "accent-color", "align-content", "align-items", "align-self", "all", "animation",
    "animation-delay", "animation-direction", "animation-duration", "animation-fill-mode",
    "animation-iteration-count", "animation-name", "animation-play-state",
    "animation-timing-function", "aspect-ratio", "backdrop-filter", "backface-visibility",
    "background", "background-attachment", "background-blend-mode", "background-clip",
    "background-color", "background-image", "background-origin", "background-position",
    "background-position-x", "background-position-y", "background-repeat", "background-size",
    "block-size", "border", "border-block", "border-block-color", "border-block-end",
    "border-block-end-color", "border-block-end-style", "border-block-end-width",
    "border-block-start", "border-block-start-color", "border-block-start-style",
    "border-block-start-width", "border-bottom", "border-bottom-color",
    "border-bottom-left-radius", "border-bottom-right-radius", "border-bottom-style",
    "border-bottom-width", "border-collapse", "border-color", "border-end-end-radius",
    "border-end-start-radius", "border-image", "border-image-outset", "border-image-repeat",
    "border-image-slice", "border-image-source", "border-image-width", "border-inline",
    "border-inline-color", "border-inline-end", "border-inline-end-color",
    "border-inline-end-style", "border-inline-end-width", "border-inline-start",
    "border-inline-start-color", "border-inline-start-style", "border-inline-start-width",
    "border-inline-style", "border-inline-width", "border-left", "border-left-color",
    "border-left-style", "border-left-width", "border-radius", "border-right",
    "border-right-color", "border-right-style", "border-right-width", "border-spacing",
    "border-start-end-radius", "border-start-start-radius", "border-style", "border-top",
    "border-top-color", "border-top-left-radius", "border-top-right-radius",
    "border-top-style", "border-top-width", "border-width", "bottom", "box-decoration-break",
    "box-reflect", "box-shadow", "box-sizing", "break-after", "break-before", "break-inside",
    "caption-side", "caret-color", "clear", "clip", "clip-path", "color", "color-scheme",
    "column-count", "column-fill", "column-gap", "column-rule", "column-rule-color",
    "column-rule-style", "column-rule-width", "column-span", "column-width", "columns",
    "content", "counter-increment", "counter-reset", "counter-set", "cursor", "direction",
    "display", "empty-cells", "filter", "flex", "flex-basis", "flex-direction", "flex-flow",
    "flex-grow", "flex-shrink", "flex-wrap", "float", "font", "font-family",
    "font-feature-settings", "font-kerning", "font-language-override", "font-size",
    "font-size-adjust", "font-stretch", "font-style", "font-synthesis", "font-variant",
    "font-variant-alternatives", "font-variant-caps", "font-variant-east-asian",
    "font-variant-ligatures", "font-variant-numeric", "font-variant-position", "font-weight",
    "gap", "grid", "grid-area", "grid-auto-columns", "grid-auto-flow", "grid-auto-rows",
    "grid-column", "grid-column-end", "grid-column-start", "grid-row", "grid-row-end",
    "grid-row-start", "grid-template", "grid-template-areas", "grid-template-columns",
    "grid-template-rows", "hanging-punctuation", "height", "hyphens", "hyphenate-character",
    "image-rendering", "initial-letter", "inline-size", "inset", "inset-block",
    "inset-block-end", "inset-block-start", "inset-inline", "inset-inline-end",
    "inset-inline-start", "isolation", "justify-content", "justify-items", "justify-self",
    "left", "letter-spacing", "line-break", "line-height", "list-style", "list-style-image",
    "list-style-position", "list-style-type", "margin", "margin-block", "margin-block-end",
    "margin-block-start", "margin-bottom", "margin-inline", "margin-inline-end",
    "margin-inline-start", "margin-left", "margin-right", "margin-top", "marker", "marker-end",
    "marker-mid", "marker-start", "mask", "mask-clip", "mask-composite", "mask-image",
    "mask-mdoe", "mask-origin", "mask-position", "mask-repeat", "mask-size", "mask-type",
    "max-height", "max-width", "max-block-size", "max-inline-size", "min-block-size",
    "min-inline-size", "min-height", "min-width", "mix-blend-mode", "object-fit",
    "object-position", "offset", "offset-anchor", "offset-distance", "offset-path",
    "offset-position", "offset-rotate", "opacity", "order", "orphans", "outline",
    "outline-color", "outline-offset", "outline-style", "outline-width", "overflow",
    "overflow-anchor", "overflow-wrap", "overflow-x", "overflow-y", "overscroll-behavior",
    "overscroll-behavior-block", "overscroll-behavior-inline", "overscroll-behavior-x",
    "overscroll-behavior-y", "padding", "padding-block", "padding-block-end",
    "padding-block-start", "padding-bottom", "padding-inline", "padding-inline-end",
    "padding-inline-start", "padding-left", "padding-right", "padding-top", "page-break-after",
    "page-break-before", "page-break-inside", "paint-order", "perspective",
    "perspective-origin", "place-content", "place-items", "place-self", "pointer-events",
    "position", "quotes", "resize", "right", "rotate", "row-gap", "scale", "scroll-behavior",
    "scroll-margin", "scroll-margin-block", "scroll-margin-block-end",
    "scroll-margin-block-start", "scroll-margin-bottom", "scroll-margin-inline",
    "scroll-margin-inline-end", "scroll-margin-inline-start", "scroll-margin-left",
    "scroll-margin-right", "scroll-margin-top", "scroll-padding", "scroll-padding-block",
    "scroll-padding-block-end", "scroll-padding-block-start", "scroll-padding-bottom",
    "scroll-padding-inline", "scroll-padding-inline-end", "scroll-padding-inline-start",
    "scroll-padding-left", "scroll-padding-right", "scroll-padding-top", "scroll-snap-align",
    "scroll-snap-stop", "scroll-snap-type", "scrollbar-color", "shape-outside", "tab-size",
    "table-layout", "text-align", "text-align-last", "text-combine-upright", "text-decoration",
    "text-decoration-color", "text-decoration-line", "text-decoration-style",
    "text-decoration-thickness", "text-emphasis", "text-emphasis-color",
    "text-emphasis-position", "text-emphasis-style", "text-indent", "text-justify",
    "text-orientation", "text-overflow", "text-shadow", "text-transform",
    "text-underline-offset", "text-underline-position", "top", "transform", "transform-origin",
    "transform-style", "transition", "transition-delay", "transition-duration",
    "transition-property", "transition-timing-function", "translate", "unicode-bidi",
    "user-select", "vertical-align", "visibility", "white-space", "widows", "width",
    "word-break", "word-spacing", "word-wrap", "writing-mode", "z-index", "zoom",

    "@charset|", "@container|", "@counter-style|", "@font-face|", "@font-palette-values|",
    "@import|", "@keyframes|", "@layer|", "@media|", "@namespace|", "@page|", "@property|",
    "@scope|", "@starting-style|", "@supports|", NULL
};

char *GO_HL_extensions[] = { ".go", NULL };
char *GO_HL_keywords[] = {
    "break", "case", "chan", "const", "continue", "default", "defer", "else", "fallthrough",
    "for", "func", "go", "goto", "if", "import", "interface", "map", "package", "range",
    "return", "select", "struct", "switch", "type", "var",

    "bool|", "complex64|", "complex128|", "float32|", "float64|", "int|", "int8|", "int16|",
    "int32|", "int64|", "string|", "uint|", "uint8|", "uint16|", "uint32|", "uint64|", "uintptr|",
    NULL
};

char *HTML_HL_extensions[] = { ".html", NULL };
char *HTML_HL_keywords[] = { NULL };

char *JV_HL_extensions[] = { ".java", NULL };
char *JV_HL_keywords[] = {
    "abstract", "assert", "break", "case", "catch", "class", "continue", "const", "default",
    "do", "else", "enum", "exports", "extends", "final", "finally", "for", "goto", "if"
    "implements", "import", "instanceof", "interface", "module", "native", "new", "package",
    "private", "protected", "public", "requires", "return", "static", "strictfp", "super",
    "switch", "synchronized", "this", "throw", "throws", "transient", "try", "var", "volatile",
    "while",

    "boolean|", "byte|", "char|", "double|", "float|", "int|", "long|", "short|", "void|",
    NULL
};

char *JS_HL_extensions[] = { ".js", NULL };
char *JS_HL_keywords[] = {
    "abstract", "arguments", "await", "break", "case", "catch", "class", "const",
    "continue", "debugger", "default", "delete", "do", "else", "enum", "eval", "export",
    "extends", "false", "final", "finally", "for", "function", "goto", "if", "implements",
    "import", "in", "instanceof", "interface", "let", "native", "new", "null", "package",
    "private", "protected", "public", "return", "static", "super", "switch", "synchronized",
    "this", "throw", "throws", "transient", "true", "try", "typeof", "var", "volatile",
    "while", "with", "yield",

    "Boolean|", "byte|", "char|", "double|", "float|", "int|", "long|", "short|", "void|",
    NULL
};

char *PY_HL_extensions[] = { ".py", NULL };
char *PY_HL_keywords[] = {
    "and", "as", "assert", "async", "await", "break", "class", "continue", "def",
    "del", "elif", "else", "except", "finally", "for", "from", "global", "if",
    "import", "in", "is", "lambda", "nonlocal", "not", "or", "pass", "raise", "return",
    "try", "while", "with", "yield",

    "False|", "None|", "True|", NULL
};

struct editorSyntax HLDB[] = {
    {
        "C",
        C_HL_extensions,
        C_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "C++",
        CPP_HL_extensions,
        CPP_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "C#",
        CS_HL_extensions,
        CS_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "CSS",
        CSS_HL_extensions,
        CSS_HL_keywords,
        "", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "Go",
        GO_HL_extensions,
        GO_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "HTML",
        HTML_HL_extensions,
        HTML_HL_keywords,
        "<!--", "<", ">",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "Java",
        JV_HL_extensions,
        JV_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "JavaScript",
        JS_HL_extensions,
        JS_HL_keywords,
        "//", "/*", "*/",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
    {
        "Python",
        PY_HL_extensions,
        PY_HL_keywords,
        "#", "'''", "'''",
        HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS,
    },
};

const int HLDB_ENTRIES = (sizeof(HLDB) / sizeof(HLDB[0]));
