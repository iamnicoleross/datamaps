struct graphics;

struct tilecontext {
	int z;
	int x;
	int y;

	int xoff;
	int yoff;
};

struct graphics *graphics_init(int width, int height);
void out(struct graphics *graphics, int transparency, double gamma, int invert, int color, int color2, int saturate, int mask);

int drawClip(double x0, double y0, double x1, double y1, struct graphics *graphics, double bright, double hue, int antialias, double thick, struct tilecontext *tc);
void drawPixel(double x, double y, struct graphics *graphics, double bright, double hue, struct tilecontext *tc);
void drawBrush(double x, double y, struct graphics *graphics, double bright, double brush, double hue, struct tilecontext *tc);
