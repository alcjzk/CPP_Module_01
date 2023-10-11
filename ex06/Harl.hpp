#ifndef HARL_H
# define HARL_H

# include <string>

# define LEVEL_MAX 4

class Harl {
    public:
        typedef void (Harl::* HF)();

        typedef struct s_entry
        {
            const char  *key;
            HF          func;
        }   t_entry;

        void        complain(std::string level);
        int         level_int(const std::string &level);

    private:
        void    debug();
        void    info();
        void    warning();
        void    error();

        static t_entry map[LEVEL_MAX];
};

#endif
