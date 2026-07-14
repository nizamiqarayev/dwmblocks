// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
    {"", "sb-music",    0,     11},
    {"", "sb-cpu",      10,    12},
    {"", "sb-gpu",      10,    13},
    {"", "sb-ram",      10,    14},
    {"", "sb-forecast", 18000, 5 },
    {"", "sb-volume",   0,     10},
    {"", "sb-internet", 60,    4 },
    {"", "sb-battery",  60,    3 },
    {"", "sb-clock",    1,     1 },
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// neovim with the following autocmd in your init.lua:
// vim.api.nvim_create_autocmd("BufWritePost", {
//     pattern = vim.fn.expand("~/Documents/Github/Repos/dwmblocks/config.h"),
//     callback = function()
//         vim.cmd(
//             "silent !cd ~/Documents/Github/Repos/dwmblocks && sudo make install && killall -q dwmblocks; setsid
//             dwmblocks &"
//         )
//     end,
// })
