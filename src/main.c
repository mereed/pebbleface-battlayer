#include <pebble.h>

static Window *window;
static Layer *window_layer;

TextLayer *time_layer;
TextLayer *time_layer2;
TextLayer *layer_dayname_text;
TextLayer *layer_dayname_text2;
TextLayer *layer_monthdaynum_text;
TextLayer *layer_monthdaynum_text2;
TextLayer *battery_text_layer;
TextLayer *battery_text_layer70;

static GFont *custom_font3;
static GFont *custom_font4;
static GFont *custom_font5;

int charge_percent = 0;

static PropertyAnimation *animation1, *animation2, *animation3, *animation4, *animation5, *animation6, *animation7, *animation8, *animation9, *animation10;

BitmapLayer *block1_layer;
GBitmap *block1_bitmap;

BitmapLayer *block2_layer;
GBitmap *block2_bitmap;

BitmapLayer *block3_layer;
GBitmap *block3_bitmap;

BitmapLayer *block4_layer;
GBitmap *block4_bitmap;

BitmapLayer *block5_layer;
GBitmap *block5_bitmap;

BitmapLayer *block6_layer;
GBitmap *block6_bitmap;

BitmapLayer *block7_layer;
GBitmap *block7_bitmap;

BitmapLayer *block8_layer;
GBitmap *block8_bitmap;

BitmapLayer *block9_layer;
GBitmap *block9_bitmap;

BitmapLayer *block10_layer;
GBitmap *block10_bitmap;


BitmapLayer *batt90_layer;
GBitmap *batt90img;

BitmapLayer *batt80_layer;
GBitmap *batt80img;

BitmapLayer *batt70_layer;
GBitmap *batt70img;

BitmapLayer *batt60_layer;
GBitmap *batt60img;

BitmapLayer *batt50_layer;
GBitmap *batt50img;

BitmapLayer *batt40_layer;
GBitmap *batt40img;

BitmapLayer *batt30_layer;
GBitmap *batt30img;

BitmapLayer *batt20_layer;
GBitmap *batt20img;

BitmapLayer *batt10_layer;
GBitmap *batt10img;

BitmapLayer *batt00_layer;
GBitmap *batt00img;


static void animation() {

  GRect from_frame1 = GRect(0, -20, 144, 18);
  GRect to_frame1 = GRect(0, 150, 144, 18);
  // Schedule the next animation
  animation1 = property_animation_create_layer_frame(bitmap_layer_get_layer(block1_layer), &from_frame1, &to_frame1);
  animation_set_duration((Animation*)animation1, 1500);
  animation_set_delay((Animation*)animation1, 0);
  animation_set_curve((Animation*)animation1, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation1);

  GRect from_frame2 = GRect(0, -21, 144, 17);
  GRect to_frame2 = GRect(0, 133, 144, 17);
  // Schedule the next animation
  animation2 = property_animation_create_layer_frame(bitmap_layer_get_layer(block2_layer), &from_frame2, &to_frame2);
  animation_set_duration((Animation*)animation2, 2000);
  animation_set_delay((Animation*)animation2, 400);
  animation_set_curve((Animation*)animation2, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation2);

  GRect from_frame3 = GRect(0, -22, 144, 17);
  GRect to_frame3 = GRect(0, 116, 144, 17);
  // Schedule the next animation
  animation3 = property_animation_create_layer_frame(bitmap_layer_get_layer(block3_layer), &from_frame3, &to_frame3);
  animation_set_duration((Animation*)animation3, 2200);
  animation_set_delay((Animation*)animation3, 800);
  animation_set_curve((Animation*)animation3, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation3);
	
  GRect from_frame4 = GRect(0, -23, 144, 17);
  GRect to_frame4 = GRect(0, 99, 144, 17);
  // Schedule the next animation
  animation4 = property_animation_create_layer_frame(bitmap_layer_get_layer(block4_layer), &from_frame4, &to_frame4);
  animation_set_duration((Animation*)animation4, 2400);
  animation_set_delay((Animation*)animation4, 1200);
  animation_set_curve((Animation*)animation4, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation4);

  GRect from_frame5 = GRect(0, -24, 144, 17);
  GRect to_frame5 = GRect(0, 82, 144, 17);
  // Schedule the next animation
  animation5 = property_animation_create_layer_frame(bitmap_layer_get_layer(block5_layer), &from_frame5, &to_frame5);
  animation_set_duration((Animation*)animation5, 2600);
  animation_set_delay((Animation*)animation5, 1600);
  animation_set_curve((Animation*)animation5, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation5);

  GRect from_frame6 = GRect(0, -25, 144, 17);
  GRect to_frame6 = GRect(0, 65, 144, 17);
  // Schedule the next animation
  animation6 = property_animation_create_layer_frame(bitmap_layer_get_layer(block6_layer), &from_frame6, &to_frame6);
  animation_set_duration((Animation*)animation6, 2800);
  animation_set_delay((Animation*)animation6, 2000);
  animation_set_curve((Animation*)animation6, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation6);

  GRect from_frame7 = GRect(0, -26, 144, 17);
  GRect to_frame7 = GRect(0, 48, 144, 17);
  // Schedule the next animation
  animation7 = property_animation_create_layer_frame(bitmap_layer_get_layer(block7_layer), &from_frame7, &to_frame7);
  animation_set_duration((Animation*)animation7, 3000);
  animation_set_delay((Animation*)animation7, 2200);
  animation_set_curve((Animation*)animation7, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation7);
	
  GRect from_frame8 = GRect(0, -27, 144, 17);
  GRect to_frame8 = GRect(0, 31, 144, 17);
  // Schedule the next animation
  animation8 = property_animation_create_layer_frame(bitmap_layer_get_layer(block8_layer), &from_frame8, &to_frame8);
  animation_set_duration((Animation*)animation8, 3200);
  animation_set_delay((Animation*)animation8, 2400);
  animation_set_curve((Animation*)animation8, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation8);

  GRect from_frame9 = GRect(0, -28, 144, 17);
  GRect to_frame9 = GRect(0, 14, 144, 17);
  // Schedule the next animation
  animation9 = property_animation_create_layer_frame(bitmap_layer_get_layer(block9_layer), &from_frame9, &to_frame9);
  animation_set_duration((Animation*)animation9, 3400);
  animation_set_delay((Animation*)animation9, 2600);
  animation_set_curve((Animation*)animation9, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation9);

  GRect from_frame10 = GRect(0, -29, 144, 14);
  GRect to_frame10 = GRect(0, 0, 144, 14);
  // Schedule the next animation
  animation10 = property_animation_create_layer_frame(bitmap_layer_get_layer(block10_layer), &from_frame10, &to_frame10);
  animation_set_duration((Animation*)animation10, 3600);
  animation_set_delay((Animation*)animation10, 2800);
  animation_set_curve((Animation*)animation10, AnimationCurveEaseIn);
  animation_schedule((Animation*)animation10);
	
}

void update_battery_state(BatteryChargeState charge_state) {
    static char battery_text[] = "xxxxxxxxxx100%";

    if (charge_state.is_charging) {
		snprintf(battery_text, sizeof(battery_text), "charging +%d%%", charge_state.charge_percent);
		layer_set_hidden(text_layer_get_layer(battery_text_layer), false);

    } else {
		layer_set_hidden(text_layer_get_layer(battery_text_layer), true);

        if (charge_state.charge_percent <= 0) {

			bitmap_layer_set_bitmap(batt00_layer, batt00img);
			
			
		} else if (charge_state.charge_percent <= 11) {
						bitmap_layer_set_bitmap(batt10_layer, batt10img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);


			
        } else if (charge_state.charge_percent <= 21) {
						bitmap_layer_set_bitmap(batt20_layer, batt20img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
			

		} else if (charge_state.charge_percent <= 31) {
						bitmap_layer_set_bitmap(batt30_layer, batt30img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
			
			
		} else if (charge_state.charge_percent <= 41) {
						bitmap_layer_set_bitmap(batt40_layer, batt40img);
			
						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);


		} else if (charge_state.charge_percent <= 51) {
						bitmap_layer_set_bitmap(batt50_layer, batt50img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);


        } else if (charge_state.charge_percent <= 60) {
						bitmap_layer_set_bitmap(batt60_layer, batt60img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);


		} else	if (charge_state.charge_percent <= 71) {
						bitmap_layer_set_bitmap(batt70_layer, batt70img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt60_layer), true);


		} else if (charge_state.charge_percent <= 81) {	
						bitmap_layer_set_bitmap(batt80_layer, batt80img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt60_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt70_layer), true);


		} else if (charge_state.charge_percent <= 91) {
						bitmap_layer_set_bitmap(batt90_layer, batt90img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt60_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt70_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt80_layer), true);

			
		} else if (charge_state.charge_percent <= 98) {
						bitmap_layer_set_bitmap(batt90_layer, batt90img);

						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt60_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt70_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt80_layer), true);			

		} else {
						layer_set_hidden(bitmap_layer_get_layer(batt00_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt10_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt20_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt30_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt40_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt50_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt60_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt70_layer), true);
						layer_set_hidden(bitmap_layer_get_layer(batt80_layer), true);			
						layer_set_hidden(bitmap_layer_get_layer(batt90_layer), true);			
			
        } 
    } 
    charge_percent = charge_state.charge_percent;   
    text_layer_set_text(battery_text_layer, battery_text);

} 

static void toggle_bluetooth(bool connected) {

if (!connected) {
	  
	        vibes_short_pulse();

  }
}

void bluetooth_connection_callback(bool connected) {
  toggle_bluetooth(connected);
}

void tick_handler(struct tm *t, TimeUnits units){
  static char time_buffer[] = "00:00";
    static char date_text[] = "wednesday";
    static char month_daynum_text[] = "xxxxxxxxx 00";

   strftime(date_text, sizeof(date_text), "%A", t);
   text_layer_set_text(layer_dayname_text, date_text);
   text_layer_set_text(layer_dayname_text2, date_text);

   strftime(month_daynum_text, sizeof(month_daynum_text), "%B %e", t);
   text_layer_set_text(layer_monthdaynum_text, month_daynum_text);
   text_layer_set_text(layer_monthdaynum_text2, month_daynum_text);
	
  if(clock_is_24h_style()){
    strftime(time_buffer, sizeof(time_buffer), "%R", t);
  }
  else{
    strftime(time_buffer, sizeof(time_buffer), "%l:%M", t);
  }
  text_layer_set_text(time_layer, time_buffer);
  text_layer_set_text(time_layer2, time_buffer);
}

void force_update(void) {
  update_battery_state(battery_state_service_peek());
  toggle_bluetooth(bluetooth_connection_service_peek());

  struct tm *t;
  time_t temp;        
  temp = time(NULL);        
  t = localtime(&temp);

  tick_handler(t, MINUTE_UNIT);
}

static void main_window_load(Window *window) {
	
  Layer *window_layer = window_get_root_layer(window);

  block1_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK1);
  block1_layer = bitmap_layer_create(GRect(0, -20, 144, 18));
  bitmap_layer_set_bitmap(block1_layer, block1_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block1_layer));	
	
  block2_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK2);
  block2_layer = bitmap_layer_create(GRect(0, -21, 144, 17));
  bitmap_layer_set_bitmap(block2_layer, block2_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block2_layer));	

  block3_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK3);
  block3_layer = bitmap_layer_create(GRect(0, -22, 144, 17));
  bitmap_layer_set_bitmap(block3_layer, block3_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block3_layer));	

  block4_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK4);
  block4_layer = bitmap_layer_create(GRect(0, -23, 144, 17));
  bitmap_layer_set_bitmap(block4_layer, block4_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block4_layer));	

  block5_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK5);
  block5_layer = bitmap_layer_create(GRect(0, -24, 144, 17));
  bitmap_layer_set_bitmap(block5_layer, block5_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block5_layer));	
	
  block6_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK6);
  block6_layer = bitmap_layer_create(GRect(0, -25, 144, 17));
  bitmap_layer_set_bitmap(block6_layer, block6_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block6_layer));	

  block7_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK7);
  block7_layer = bitmap_layer_create(GRect(0, -26, 144, 17));
  bitmap_layer_set_bitmap(block7_layer, block7_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block7_layer));	

  block8_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK8);
  block8_layer = bitmap_layer_create(GRect(0, -27, 144, 17));
  bitmap_layer_set_bitmap(block8_layer, block8_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block8_layer));	

  block9_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK9);
  block9_layer = bitmap_layer_create(GRect(0, -28, 144, 17));
  bitmap_layer_set_bitmap(block9_layer, block9_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block9_layer));	
	
  block10_bitmap = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BLOCK10);
  block10_layer = bitmap_layer_create(GRect(0, -29, 144, 14));
  bitmap_layer_set_bitmap(block10_layer, block10_bitmap);
  layer_add_child(window_layer, bitmap_layer_get_layer(block10_layer));	

	
  batt90img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT90);
  batt90_layer = bitmap_layer_create(GRect(0, 0, 144, 14));
  bitmap_layer_set_bitmap(batt90_layer, batt90img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt90_layer));	
	
  batt80img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT80);
  batt80_layer = bitmap_layer_create(GRect(0, 0, 144, 31));
  bitmap_layer_set_bitmap(batt80_layer, batt80img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt80_layer));	

  batt70img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT70);
  batt70_layer = bitmap_layer_create(GRect(0, 0, 144, 48));
  bitmap_layer_set_bitmap(batt70_layer, batt70img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt70_layer));	
		
  batt60img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT60);
  batt60_layer = bitmap_layer_create(GRect(0, 0, 144, 65));
  bitmap_layer_set_bitmap(batt60_layer, batt60img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt60_layer));	
	
  batt50img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT50);
  batt50_layer = bitmap_layer_create(GRect(0, 0, 144, 82));
  bitmap_layer_set_bitmap(batt50_layer, batt50img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt50_layer));	
	
  batt40img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT40);
  batt40_layer = bitmap_layer_create(GRect(0, 0, 144, 99));
  bitmap_layer_set_bitmap(batt40_layer, batt40img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt40_layer));	

  batt30img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT30);
  batt30_layer = bitmap_layer_create(GRect(0, 0, 144, 116));
  bitmap_layer_set_bitmap(batt30_layer, batt30img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt30_layer));	
	
  batt20img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT20);
  batt20_layer = bitmap_layer_create(GRect(0, 0, 144, 133));
  bitmap_layer_set_bitmap(batt20_layer, batt20img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt20_layer));	
	
  batt10img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT10);
  batt10_layer = bitmap_layer_create(GRect(0, 0, 144, 150));
  bitmap_layer_set_bitmap(batt10_layer, batt10img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt10_layer));	
	
  batt00img = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BATT00);
  batt00_layer = bitmap_layer_create(GRect(0, 0, 144, 168));
  bitmap_layer_set_bitmap(batt00_layer, batt00img);
  layer_add_child(window_layer, bitmap_layer_get_layer(batt00_layer));	
	
	
  custom_font5 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_SANS_24));
  custom_font4 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_SANS_70));
  custom_font3 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_SANS_16));

	
  time_layer2 = text_layer_create(GRect(1, 38, 140, 80));
  text_layer_set_font(time_layer2, custom_font4);
  text_layer_set_text_color(time_layer2, GColorDarkGray);
  text_layer_set_background_color(time_layer2, GColorClear);
  text_layer_set_text_alignment(time_layer2, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(time_layer2));
	
  layer_dayname_text2 = text_layer_create(GRect(1, 31, 140, 30));
  text_layer_set_text_color(layer_dayname_text2, GColorDarkGray);
  text_layer_set_background_color(layer_dayname_text2, GColorClear);
  text_layer_set_font(layer_dayname_text2, custom_font5);
  text_layer_set_text_alignment(layer_dayname_text2, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(layer_dayname_text2));	

  layer_monthdaynum_text2 = text_layer_create(GRect(1, 104, 140, 30));
  text_layer_set_text_color(layer_monthdaynum_text2, GColorDarkGray );
  text_layer_set_background_color(layer_monthdaynum_text2, GColorClear);
  text_layer_set_font(layer_monthdaynum_text2, custom_font5);
  text_layer_set_text_alignment(layer_monthdaynum_text2, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(layer_monthdaynum_text2));	
	
  time_layer = text_layer_create(GRect(0, 37, 140, 80));
  text_layer_set_font(time_layer, custom_font4);
  text_layer_set_text_color(time_layer, GColorBlack);
  text_layer_set_background_color(time_layer, GColorClear);
  text_layer_set_text_alignment(time_layer, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(time_layer));
	
  layer_dayname_text = text_layer_create(GRect(0, 30, 140, 30));
  text_layer_set_text_color(layer_dayname_text, GColorBlack);
  text_layer_set_background_color(layer_dayname_text, GColorClear);
  text_layer_set_font(layer_dayname_text, custom_font5);
  text_layer_set_text_alignment(layer_dayname_text, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(layer_dayname_text));	

  layer_monthdaynum_text = text_layer_create(GRect(0, 105, 140, 30));
  text_layer_set_text_color(layer_monthdaynum_text, GColorBlack );
  text_layer_set_background_color(layer_monthdaynum_text, GColorClear);
  text_layer_set_font(layer_monthdaynum_text, custom_font5);
  text_layer_set_text_alignment(layer_monthdaynum_text, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(layer_monthdaynum_text));	


  battery_text_layer = text_layer_create(GRect(52, -1, 90, 20));
  text_layer_set_text_color(battery_text_layer, GColorBlack);
  text_layer_set_background_color(battery_text_layer, GColorWhite);
  text_layer_set_font(battery_text_layer, custom_font3);
  text_layer_set_text_alignment(battery_text_layer, GTextAlignmentRight);
  layer_add_child(window_layer, text_layer_get_layer(battery_text_layer));	
	

    // draw first frame
    force_update();

}

static void main_window_unload(Window *window) {
 text_layer_destroy(time_layer);
 text_layer_destroy(layer_monthdaynum_text);
 text_layer_destroy(layer_dayname_text);
 text_layer_destroy(battery_text_layer);

 text_layer_destroy(time_layer2);
 text_layer_destroy(layer_monthdaynum_text2);
 text_layer_destroy(layer_dayname_text2);
}

static void init(void) {
  // Create main Window
  window = window_create();
  window_set_background_color(window, GColorWhite);

  window_set_window_handlers(window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload,
  });
  window_stack_push(window, true);

  bluetooth_connection_service_subscribe(&toggle_bluetooth);
  tick_timer_service_subscribe(MINUTE_UNIT, tick_handler);
	
	
  // Start animation
  animation();
	
  battery_state_service_subscribe(&update_battery_state);

}

static void deinit(void) {
  // Stop any animation in progress
  animation_unschedule_all();

  tick_timer_service_unsubscribe();
  battery_state_service_unsubscribe();
  bluetooth_connection_service_unsubscribe();

  fonts_unload_custom_font(custom_font3);
  fonts_unload_custom_font(custom_font4);
  fonts_unload_custom_font(custom_font5);

	
  layer_remove_from_parent(bitmap_layer_get_layer(block1_layer));
  bitmap_layer_destroy(block1_layer);
  gbitmap_destroy(block1_bitmap);
  block1_bitmap = NULL;
	
  layer_remove_from_parent(bitmap_layer_get_layer(block2_layer));
  bitmap_layer_destroy(block2_layer);
  gbitmap_destroy(block2_bitmap);
  block2_bitmap = NULL;  
  
  layer_remove_from_parent(bitmap_layer_get_layer(block3_layer));
  bitmap_layer_destroy(block3_layer);
  gbitmap_destroy(block3_bitmap);
  block3_bitmap = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(block4_layer));
  bitmap_layer_destroy(block4_layer);
  gbitmap_destroy(block4_bitmap);
  block4_bitmap = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(block5_layer));
  bitmap_layer_destroy(block5_layer);
  gbitmap_destroy(block5_bitmap);
  block5_bitmap = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(block6_layer));
  bitmap_layer_destroy(block6_layer);
  gbitmap_destroy(block6_bitmap);
  block6_bitmap = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(block7_layer));
  bitmap_layer_destroy(block7_layer);
  gbitmap_destroy(block7_bitmap);
  block7_bitmap = NULL;

  layer_remove_from_parent(bitmap_layer_get_layer(block8_layer));
  bitmap_layer_destroy(block8_layer);
  gbitmap_destroy(block8_bitmap);
  block8_bitmap = NULL;

  layer_remove_from_parent(bitmap_layer_get_layer(block9_layer));
  bitmap_layer_destroy(block9_layer);
  gbitmap_destroy(block9_bitmap);
  block9_bitmap = NULL;
	
  layer_remove_from_parent(bitmap_layer_get_layer(block10_layer));
  bitmap_layer_destroy(block10_layer);
  gbitmap_destroy(block10_bitmap);
  block10_bitmap = NULL;
	
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt00_layer));
  bitmap_layer_destroy(batt00_layer);
  gbitmap_destroy(batt00img);
  batt00img = NULL;

  layer_remove_from_parent(bitmap_layer_get_layer(batt10_layer));
  bitmap_layer_destroy(batt10_layer);
  gbitmap_destroy(batt10img);
  batt10img = NULL;
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt20_layer));
  bitmap_layer_destroy(batt20_layer);
  gbitmap_destroy(batt20img);
  batt20img = NULL;  
  
  layer_remove_from_parent(bitmap_layer_get_layer(batt30_layer));
  bitmap_layer_destroy(batt30_layer);
  gbitmap_destroy(batt30img);
  batt30img = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt40_layer));
  bitmap_layer_destroy(batt40_layer);
  gbitmap_destroy(batt40img);
  batt40img = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt50_layer));
  bitmap_layer_destroy(batt50_layer);
  gbitmap_destroy(batt50img);
  batt50img = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt60_layer));
  bitmap_layer_destroy(batt60_layer);
  gbitmap_destroy(batt60img);
  batt60img = NULL;  
	
  layer_remove_from_parent(bitmap_layer_get_layer(batt70_layer));
  bitmap_layer_destroy(batt70_layer);
  gbitmap_destroy(batt70img);
  batt70img = NULL;  

  layer_remove_from_parent(bitmap_layer_get_layer(batt80_layer));
  bitmap_layer_destroy(batt80_layer);
  gbitmap_destroy(batt80img);
  batt80img = NULL;

  layer_remove_from_parent(bitmap_layer_get_layer(batt90_layer));
  bitmap_layer_destroy(batt90_layer);
  gbitmap_destroy(batt90img);
  batt90img = NULL;	
	
	
  layer_remove_from_parent(window_layer);
  layer_destroy(window_layer);
	
  // Destroy main Window
  window_destroy(window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}