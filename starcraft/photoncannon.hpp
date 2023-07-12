#ifndef PHOTONCANNON_H
# define PHOTONCANNON_H

class	PhotonCannon
{
	private:
		int		hp;
		int		shield;
		int		coord_x;
		int		coord_y;
		int		damage;
		char	*name;

	public:
		PhotonCannon(int x, int y);
		PhotonCannon(int x, int y, const char *cannon_name);
		PhotonCannon(const PhotonCannon &pc);
		~PhotonCannon();

		void	show_status();
};

#endif
