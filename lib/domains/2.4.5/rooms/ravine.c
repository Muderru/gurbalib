#include "../domain.h"
inherit ROOM;

void setup(void) {
   add_area("2.4.5");

   set_brief("Ravine");
   set_long("You are in a ravine between mountaions.  It seems to be " +
      "possible to go up from here.");

   add_exit("up", DIR + "/rooms/mount_top.c");
   add_exit("down", DIR + "/rooms/mount_pass.c");
}
