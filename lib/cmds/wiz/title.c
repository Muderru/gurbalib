#include <status.h>

void usage() {
  write("Usage: title [-h] [string]\n");
  write("Title allows you to set your title to string.\n");
  write("Options:\n");
  write("\t-h\tHelp, this usage message.\n");
}

void main( string str ) {

  this_player()->set_title( str );
  out( "New title: " + this_player()->query_title() + "\n" );
}

