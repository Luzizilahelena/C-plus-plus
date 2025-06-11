#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string	nome;
	public:
		Zombie(std::string str);
		~Zombie(void);
		void	announce(void);
};

void	randomChump(std::string nome);
Zombie	*newZombie(std::string nome);

#endif
