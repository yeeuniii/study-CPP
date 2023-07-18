#ifndef MARINE_HPP
# define MARINE_HPP

class Marine
{
	static int total;
	private:
		int		hp;
		int		coord_x;
		int		coord_y;
		int		damage;
		bool	is_dead;
		char	*name;
		
	public:
		Marine();
		Marine(int x, int y);
		Marine(int x, int y, const char *marine_name);
		~Marine();

		int		attack() const;
		void	be_attacked(int damage_earn);
		void	move(int x, int y);

		void	show_status();
		static void	show_total_marine();
};

#endif
