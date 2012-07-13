#include "../domain.h"
inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("A large open plain");
   set_long("A large open plain.  There is a big tree to the west.");

   add_exit("north", DIR + "/rooms/plain10.c");
   add_exit("south", DIR + "/rooms/plain5.c");
   add_exit("east", DIR + "/rooms/plain3.c");
   add_exit("west", DIR + "/rooms/bit_tree.c");
}
