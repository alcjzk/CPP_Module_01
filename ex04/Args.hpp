#ifndef ARGS_H
# define ARGS_H

# include <string>

class Args {
    public:
        Args(int argc, char *argv[]);

        const char  *filename() const;
        const char  *string() const;
        const char  *replacement() const;
    private:
        const char  * _filename;
        const char  * _string;
        const char  * _replacement;
};

#endif
