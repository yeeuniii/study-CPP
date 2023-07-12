#ifndef MARINE_HPP
# define MARINE_HPP

class Marine
{
	private:
		int		hp;
		int		coord_x;
		int		coord_y;
		int		damage;
		bool	is_dead;
	
	public:
		Marine();
		Marine(int x, int y);

		int		attack();
		void	be_attacked(int damage_earn);
		void	move(int x, int y);

		void	show_status();
};

#endif