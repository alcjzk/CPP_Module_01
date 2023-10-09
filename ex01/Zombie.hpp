#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void    setName(std::string name);
        void    announce();
    private:
        std::string name;
};

#endif
