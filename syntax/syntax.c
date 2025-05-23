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

char *HTML_HL_extensions[] = { ".html", NULL };
char *HTML_HL_keywords[] = { NULL };

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
        "HTML",
        HTML_HL_extensions,
        HTML_HL_keywords,
        "<!--", "<", ">",
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
