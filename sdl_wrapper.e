note
	description: "Summary description for {SDL_WRAPPER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SDL_WRAPPER
create
	default_create

feature -- Functions -

	frozen sdl_init (flags: NATURAL_32): INTEGER
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--int SDL_Init(Uint32 flags);
		external
			"C (Uint32) : int | <SDL.h>"
		alias
			"SDL_Init"
		end
	frozen SDL_LoadBMP (file: POINTER): POINTER
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--SDL_Surface *SDL_LoadBMP(const char *file);
		external
			"C (const char *) : SDL_Surface *| <SDL.h>"
		alias
			"SDL_LoadBMP"
		end

	frozen SDL_SetVideoMode (width,height,bitsperpixel: INTEGER;flags: NATURAL_32)
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--SDL_Surface* SDL_SetVideoMode(int width, int height, int bitsperpixel, Uint32 flags);
		external
			"C (int, int, int, Uint32) | <SDL.h>"
		alias
			"SDL_SetVideoMode"
		end

	frozen SDL_BlitSurface (src, srcrect, dst, dstrect: POINTER):INTEGER
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--SDL_Surface* SDL_SetVideoMode(int width, int height, int bitsperpixel, Uint32 flags);
		external
			"C (SDL_Surface *, SDL_Rect *, SDL_Surface *, SDL_Rect *) : int | <SDL.h>"
		alias
			"SDL_BlitSurface"
		end

	frozen SDL_Flip (screen: POINTER):INTEGER
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--SDL_Surface* SDL_SetVideoMode(int width, int height, int bitsperpixel, Uint32 flags);
		external
			"C (SDL_Surface *) : int | <SDL.h>"
		alias
			"SDL_Flip"
		end

	frozen SDL_Delay (ms: NATURAL_32)
			-- Cree un nouveau systeme de decompression JPEG avec `flags'.
			--SDL_Surface* SDL_SetVideoMode(int width, int height, int bitsperpixel, Uint32 flags);
		external
			"C (Uint32)| <SDL.h>"
		alias
			"SDL_Delay"
		end

end
