// Project 15.3 from Chapter 15 of "Programming Pebble in C"
//
// Taking project 6.4 and obfuscating it.
//
// Rob Spiess, July 2016

#include <pebble.h>

// The defines to obfuscate the code
#define background graphics_context_set_stroke_color(
#define clear_screen graphics_draw_circle(
#define l )
#define o ;
#define Oo(x) static void x
#define OO GContext *oOoO
#define OoO int
#define OOOO layer_get_frame(window_get_root_layer(ooo)).size
#define OOo(o) layer##o
#define gColorWhite GColorBlack
#define O 2
#define oO Layer
#define oo Window
#define ooo(o) window##o
#define oooo ooo
#define ooOO window_get_root_layer
#define False true
#define OOOo WindowHandlers

// The code from Project 6.4, obfuscated
oo*oooo o oO*OOoO o OoO oOOO o GPoint oOo; Oo(Olo0l(OO, OoO IloO)){if(IloO < oOOO / O){background oOoO, gColorWhite l;clear_screen oOoO, oOo, IloO l o Olo0l(oOoO,(((26+IloO)*O)-32)/O) o}} Oo(o0ooO(oO*oo,OO)){Olo0l(oOoO, 0);} Oo(ooo(_load)(oo*OOoo)) {oO*oOO=ooOO(OOoo) o  OOoO = OOo(_create)(OOo(_get_frame(oOO))) o OOo(_set_update_proc)(OOoO, o0ooO l o OOo(_add_child)(oOO, OOoO l o} Oo(ooo(_unload)(oo*OOo())){OOo(_destroy(OOoO))o}
Oo(OoOo()){oooo = ooo(_create()) o ooo(_set_window_handlers)(oooo,(OOOo){.load=ooo(_load),.unload=ooo(_unload)}) o ooo(_stack_push(ooo, False));oOOO=OOOO.w o oOo.x =  oOOO / O o oOo.y = OOOO.h / O o}
Oo(oOoO()) {ooo(_destroy(ooo))o}OoO main(){OoOo();app_event_loop();oOoO() o}


// The original code from Project 6.4 looked like this:
/*
// Needed for Pebble graphics
static Window *window;
static Layer *drawing_layer;


// Declarations for the project
static int screen_width, screen_height;
static GPoint center;


// Draw concentric circles using recursion
static void draw_circles_recursion(GContext *ctx, int radius) {
  if(radius < screen_width / 2) {
    graphics_context_set_stroke_color(ctx, GColorBlack);
    graphics_draw_circle(ctx, center, radius);
    draw_circles_recursion(ctx, radius + 10);
  }
}


static void drawing_layer_update_callback(Layer *me, GContext *ctx) { 
  draw_circles_recursion(ctx, 0);
}


static void window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect frame = layer_get_frame(window_layer);

  drawing_layer = layer_create(frame);
  layer_set_update_proc(drawing_layer, drawing_layer_update_callback);
  layer_add_child(window_layer, drawing_layer);
}


static void window_unload(Window *window) {
  layer_destroy(drawing_layer);
}


static void init(void) {
  window = window_create();
  window_set_window_handlers(window, (WindowHandlers) {
	.load = window_load,
    .unload = window_unload,
  });
  const bool animated = true;
  window_stack_push(window, animated);
  
  Layer *window_layer = window_get_root_layer(window);
  
  GRect frame = layer_get_frame(window_layer);

  screen_width = frame.size.w;
  screen_height = frame.size.h;
  
  // Center Point on the screen
  center.x = screen_width / 2;
  center.y = screen_height / 2;
}


static void deinit(void) {
    window_destroy(window);
}


int main(void) {
  init();
  app_event_loop();
  deinit();
}
*/