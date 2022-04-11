/* Generated by wayland-scanner 1.19.0 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_buffer_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *wakefield_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	&wl_surface_interface,
	&wl_buffer_interface,
	NULL,
	NULL,
	&wl_surface_interface,
	NULL,
	NULL,
	NULL,
	&wl_buffer_interface,
	NULL,
};

static const struct wl_message wakefield_requests[] = {
	{ "destroy", "", wakefield_types + 0 },
	{ "move_surface", "oii", wakefield_types + 4 },
	{ "get_surface_location", "o", wakefield_types + 7 },
	{ "get_pixel_color", "ii", wakefield_types + 0 },
	{ "capture_create", "oii", wakefield_types + 8 },
};

static const struct wl_message wakefield_events[] = {
	{ "surface_location", "oiiu", wakefield_types + 11 },
	{ "pixel_color", "iiuu", wakefield_types + 0 },
	{ "capture_ready", "ou", wakefield_types + 15 },
};

WL_EXPORT const struct wl_interface wakefield_interface = {
	"wakefield", 1,
	5, wakefield_requests,
	3, wakefield_events,
};

